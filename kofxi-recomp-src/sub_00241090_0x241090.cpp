#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00241090
// Address: 0x241090 - 0x241128
void sub_00241090_0x241090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241090_0x241090");
#endif

    switch (ctx->pc) {
        case 0x2410c8u: goto label_2410c8;
        case 0x2410e8u: goto label_2410e8;
        case 0x2410fcu: goto label_2410fc;
        default: break;
    }

    ctx->pc = 0x241090u;

    // 0x241090: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x241090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x241094: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x241094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x241098: 0x30b0ffff  andi        $s0, $a1, 0xFFFF
    ctx->pc = 0x241098u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x24109c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24109cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2410a0: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x2410a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2410a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2410a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2410a8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2410a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2410ac: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2410acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2410b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2410b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2410b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2410b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2410b8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2410B8u;
    {
        const bool branch_taken_0x2410b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2410BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2410B8u;
            // 0x2410bc: 0x3050ffff  andi        $s0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2410b8) {
            ctx->pc = 0x24110Cu;
            goto label_24110c;
        }
    }
    ctx->pc = 0x2410C0u;
    // 0x2410c0: 0x3c13003f  lui         $s3, 0x3F
    ctx->pc = 0x2410c0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)63 << 16));
    // 0x2410c4: 0x3c12003f  lui         $s2, 0x3F
    ctx->pc = 0x2410c4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)63 << 16));
label_2410c8:
    // 0x2410c8: 0x92260000  lbu         $a2, 0x0($s1)
    ctx->pc = 0x2410c8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2410cc: 0x24c2ffe0  addiu       $v0, $a2, -0x20
    ctx->pc = 0x2410ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x2410d0: 0x2c42005f  sltiu       $v0, $v0, 0x5F
    ctx->pc = 0x2410d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)95) ? 1 : 0);
    // 0x2410d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2410D4u;
    {
        const bool branch_taken_0x2410d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2410D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2410D4u;
            // 0x2410d8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2410d4) {
            ctx->pc = 0x2410F0u;
            goto label_2410f0;
        }
    }
    ctx->pc = 0x2410DCu;
    // 0x2410dc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2410dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2410e0: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2410E0u;
    SET_GPR_U32(ctx, 31, 0x2410E8u);
    ctx->pc = 0x2410E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2410E0u;
            // 0x2410e4: 0x266564a8  addiu       $a1, $s3, 0x64A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 25768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2410E8u; }
        if (ctx->pc != 0x2410E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2410E8u; }
        if (ctx->pc != 0x2410E8u) { return; }
    }
    ctx->pc = 0x2410E8u;
label_2410e8:
    // 0x2410e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2410E8u;
    {
        const bool branch_taken_0x2410e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2410ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2410E8u;
            // 0x2410ec: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2410e8) {
            ctx->pc = 0x241100u;
            goto label_241100;
        }
    }
    ctx->pc = 0x2410F0u;
label_2410f0:
    // 0x2410f0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2410f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2410f4: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2410F4u;
    SET_GPR_U32(ctx, 31, 0x2410FCu);
    ctx->pc = 0x2410F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2410F4u;
            // 0x2410f8: 0x264564b0  addiu       $a1, $s2, 0x64B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 25776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2410FCu; }
        if (ctx->pc != 0x2410FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2410FCu; }
        if (ctx->pc != 0x2410FCu) { return; }
    }
    ctx->pc = 0x2410FCu;
label_2410fc:
    // 0x2410fc: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x2410fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_241100:
    // 0x241100: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x241100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x241104: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x241104u;
    {
        const bool branch_taken_0x241104 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x241108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241104u;
            // 0x241108: 0x3050ffff  andi        $s0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x241104) {
            ctx->pc = 0x2410C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2410c8;
        }
    }
    ctx->pc = 0x24110Cu;
label_24110c:
    // 0x24110c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x24110cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x241110: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x241110u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x241114: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x241114u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x241118: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x241118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24111c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24111cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241120: 0x3e00008  jr          $ra
    ctx->pc = 0x241120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241120u;
            // 0x241124: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x241128u;
    ctx->pc = 0x241128u;
}
