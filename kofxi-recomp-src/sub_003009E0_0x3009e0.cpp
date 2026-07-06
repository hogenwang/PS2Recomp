#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003009E0
// Address: 0x3009e0 - 0x300a60
void sub_003009E0_0x3009e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003009E0_0x3009e0");
#endif

    switch (ctx->pc) {
        case 0x3009f8u: goto label_3009f8;
        case 0x300a50u: goto label_300a50;
        default: break;
    }

    ctx->pc = 0x3009e0u;

    // 0x3009e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3009e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3009e4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x3009e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3009e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3009e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3009ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3009ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3009f0: 0xc0691d0  jal         func_1A4740
    ctx->pc = 0x3009F0u;
    SET_GPR_U32(ctx, 31, 0x3009F8u);
    ctx->pc = 0x3009F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3009F0u;
            // 0x3009f4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4740u;
    if (runtime->hasFunction(0x1A4740u)) {
        auto targetFn = runtime->lookupFunction(0x1A4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3009F8u; }
        if (ctx->pc != 0x3009F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4740_0x1a4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3009F8u; }
        if (ctx->pc != 0x3009F8u) { return; }
    }
    ctx->pc = 0x3009F8u;
label_3009f8:
    // 0x3009f8: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3009F8u;
    {
        const bool branch_taken_0x3009f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3009f8) {
            ctx->pc = 0x3009FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3009F8u;
            // 0x3009fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x300A14u;
            goto label_300a14;
        }
    }
    ctx->pc = 0x300A00u;
    // 0x300a00: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x300a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x300a04: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x300a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x300a08: 0x2463da30  addiu       $v1, $v1, -0x25D0
    ctx->pc = 0x300a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957616));
    // 0x300a0c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x300A0Cu;
    {
        const bool branch_taken_0x300a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300A0Cu;
            // 0x300a10: 0xac43be80  sw          $v1, -0x4180($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300a0c) {
            ctx->pc = 0x300A38u;
            goto label_300a38;
        }
    }
    ctx->pc = 0x300A14u;
label_300a14:
    // 0x300a14: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x300A14u;
    {
        const bool branch_taken_0x300a14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x300a14) {
            ctx->pc = 0x300A30u;
            goto label_300a30;
        }
    }
    ctx->pc = 0x300A1Cu;
    // 0x300a1c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x300a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x300a20: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x300a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x300a24: 0x2463da50  addiu       $v1, $v1, -0x25B0
    ctx->pc = 0x300a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957648));
    // 0x300a28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x300A28u;
    {
        const bool branch_taken_0x300a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300A28u;
            // 0x300a2c: 0xac43be80  sw          $v1, -0x4180($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300a28) {
            ctx->pc = 0x300A38u;
            goto label_300a38;
        }
    }
    ctx->pc = 0x300A30u;
label_300a30:
    // 0x300a30: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x300a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x300a34: 0xac50be80  sw          $s0, -0x4180($v0)
    ctx->pc = 0x300a34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 16));
label_300a38:
    // 0x300a38: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x300a38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x300a3c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x300a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x300a40: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x300a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x300a44: 0x2484dae0  addiu       $a0, $a0, -0x2520
    ctx->pc = 0x300a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957792));
    // 0x300a48: 0xc082674  jal         func_2099D0
    ctx->pc = 0x300A48u;
    SET_GPR_U32(ctx, 31, 0x300A50u);
    ctx->pc = 0x300A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300A48u;
            // 0x300a4c: 0xa443be90  sh          $v1, -0x4170($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300A50u; }
        if (ctx->pc != 0x300A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300A50u; }
        if (ctx->pc != 0x300A50u) { return; }
    }
    ctx->pc = 0x300A50u;
label_300a50:
    // 0x300a50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x300a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x300a54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x300a54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x300a58: 0x3e00008  jr          $ra
    ctx->pc = 0x300A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300A58u;
            // 0x300a5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x300A60u;
    ctx->pc = 0x300a60u;
}
