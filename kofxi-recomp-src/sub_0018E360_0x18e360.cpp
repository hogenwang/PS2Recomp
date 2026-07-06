#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018E360
// Address: 0x18e360 - 0x18e400
void sub_0018E360_0x18e360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E360_0x18e360");
#endif

    switch (ctx->pc) {
        case 0x18e394u: goto label_18e394;
        case 0x18e3c0u: goto label_18e3c0;
        default: break;
    }

    ctx->pc = 0x18e360u;

    // 0x18e360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18e360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18e364: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x18e364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x18e368: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18e368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18e36c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e370: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18e370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18e374: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18E374u;
    {
        const bool branch_taken_0x18e374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18E378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E374u;
            // 0x18e378: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e374) {
            ctx->pc = 0x18E3B4u;
            goto label_18e3b4;
        }
    }
    ctx->pc = 0x18E37Cu;
    // 0x18e37c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E37Cu;
    {
        const bool branch_taken_0x18e37c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e37c) {
            ctx->pc = 0x18E380u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18E37Cu;
            // 0x18e380: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x18E38Cu;
            goto label_18e38c;
        }
    }
    ctx->pc = 0x18E384u;
    // 0x18e384: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x18E384u;
    {
        const bool branch_taken_0x18e384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E384u;
            // 0x18e388: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e384) {
            ctx->pc = 0x18E3E4u;
            goto label_18e3e4;
        }
    }
    ctx->pc = 0x18E38Cu;
label_18e38c:
    // 0x18e38c: 0xc06378c  jal         func_18DE30
    ctx->pc = 0x18E38Cu;
    SET_GPR_U32(ctx, 31, 0x18E394u);
    ctx->pc = 0x18E390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E38Cu;
            // 0x18e390: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DE30u;
    if (runtime->hasFunction(0x18DE30u)) {
        auto targetFn = runtime->lookupFunction(0x18DE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E394u; }
        if (ctx->pc != 0x18E394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DE30_0x18de30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E394u; }
        if (ctx->pc != 0x18E394u) { return; }
    }
    ctx->pc = 0x18E394u;
label_18e394:
    // 0x18e394: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x18E394u;
    {
        const bool branch_taken_0x18e394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e394) {
            ctx->pc = 0x18E3E0u;
            goto label_18e3e0;
        }
    }
    ctx->pc = 0x18E39Cu;
    // 0x18e39c: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x18e39cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x18e3a0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x18e3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x18e3a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18e3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18e3a8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18e3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18e3ac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18E3ACu;
    {
        const bool branch_taken_0x18e3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E3ACu;
            // 0x18e3b0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e3ac) {
            ctx->pc = 0x18E3E4u;
            goto label_18e3e4;
        }
    }
    ctx->pc = 0x18E3B4u;
label_18e3b4:
    // 0x18e3b4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x18e3b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18e3b8: 0xc06378c  jal         func_18DE30
    ctx->pc = 0x18E3B8u;
    SET_GPR_U32(ctx, 31, 0x18E3C0u);
    ctx->pc = 0x18E3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E3B8u;
            // 0x18e3bc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DE30u;
    if (runtime->hasFunction(0x18DE30u)) {
        auto targetFn = runtime->lookupFunction(0x18DE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E3C0u; }
        if (ctx->pc != 0x18E3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DE30_0x18de30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E3C0u; }
        if (ctx->pc != 0x18E3C0u) { return; }
    }
    ctx->pc = 0x18E3C0u;
label_18e3c0:
    // 0x18e3c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18E3C0u;
    {
        const bool branch_taken_0x18e3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e3c0) {
            ctx->pc = 0x18E3E0u;
            goto label_18e3e0;
        }
    }
    ctx->pc = 0x18E3C8u;
    // 0x18e3c8: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x18e3c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x18e3cc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x18e3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x18e3d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18e3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18e3d4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18e3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18e3d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E3D8u;
    {
        const bool branch_taken_0x18e3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E3D8u;
            // 0x18e3dc: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e3d8) {
            ctx->pc = 0x18E3E4u;
            goto label_18e3e4;
        }
    }
    ctx->pc = 0x18E3E0u;
label_18e3e0:
    // 0x18e3e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18e3e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e3e4:
    // 0x18e3e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18e3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e3e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18e3e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x18E3ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E3ECu;
            // 0x18e3f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18E3F4u;
    // 0x18e3f4: 0x0  nop
    ctx->pc = 0x18e3f4u;
    // NOP
    // 0x18e3f8: 0x0  nop
    ctx->pc = 0x18e3f8u;
    // NOP
    // 0x18e3fc: 0x0  nop
    ctx->pc = 0x18e3fcu;
    // NOP
    ctx->pc = 0x18e400u;
}
