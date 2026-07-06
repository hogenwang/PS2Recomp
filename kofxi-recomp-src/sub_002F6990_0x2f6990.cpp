#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F6990
// Address: 0x2f6990 - 0x2f6a30
void sub_002F6990_0x2f6990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6990_0x2f6990");
#endif

    switch (ctx->pc) {
        case 0x2f69c8u: goto label_2f69c8;
        case 0x2f69e0u: goto label_2f69e0;
        case 0x2f69f8u: goto label_2f69f8;
        case 0x2f6a1cu: goto label_2f6a1c;
        default: break;
    }

    ctx->pc = 0x2f6990u;

    // 0x2f6990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f6990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f6994: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f6994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f6998: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f6998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f699c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f699cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f69a0: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2f69a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2f69a4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2F69A4u;
    {
        const bool branch_taken_0x2f69a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F69A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F69A4u;
            // 0x2f69a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f69a4) {
            ctx->pc = 0x2F69E4u;
            goto label_2f69e4;
        }
    }
    ctx->pc = 0x2F69ACu;
    // 0x2f69ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f69acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f69b0: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x2f69b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2f69b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f69b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f69b8: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F69B8u;
    {
        const bool branch_taken_0x2f69b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F69BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F69B8u;
            // 0x2f69bc: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f69b8) {
            ctx->pc = 0x2F69E0u;
            goto label_2f69e0;
        }
    }
    ctx->pc = 0x2F69C0u;
    // 0x2f69c0: 0xc0bdfc2  jal         func_2F7F08
    ctx->pc = 0x2F69C0u;
    SET_GPR_U32(ctx, 31, 0x2F69C8u);
    ctx->pc = 0x2F69C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F69C0u;
            // 0x2f69c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7F08u;
    if (runtime->hasFunction(0x2F7F08u)) {
        auto targetFn = runtime->lookupFunction(0x2F7F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F69C8u; }
        if (ctx->pc != 0x2F69C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7F08_0x2f7f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F69C8u; }
        if (ctx->pc != 0x2F69C8u) { return; }
    }
    ctx->pc = 0x2F69C8u;
label_2f69c8:
    // 0x2f69c8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2f69c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2f69cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f69ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f69d0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F69D0u;
    {
        const bool branch_taken_0x2f69d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F69D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F69D0u;
            // 0x2f69d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f69d0) {
            ctx->pc = 0x2F69E4u;
            goto label_2f69e4;
        }
    }
    ctx->pc = 0x2F69D8u;
    // 0x2f69d8: 0xc0bf13e  jal         func_2FC4F8
    ctx->pc = 0x2F69D8u;
    SET_GPR_U32(ctx, 31, 0x2F69E0u);
    ctx->pc = 0x2F69DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F69D8u;
            // 0x2f69dc: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC4F8u;
    if (runtime->hasFunction(0x2FC4F8u)) {
        auto targetFn = runtime->lookupFunction(0x2FC4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F69E0u; }
        if (ctx->pc != 0x2F69E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC4F8_0x2fc4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F69E0u; }
        if (ctx->pc != 0x2F69E0u) { return; }
    }
    ctx->pc = 0x2F69E0u;
label_2f69e0:
    // 0x2f69e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f69e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f69e4:
    // 0x2f69e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f69e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f69e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f69e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f69ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2F69ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F69F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F69ECu;
            // 0x2f69f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F69F4u;
    // 0x2f69f4: 0x0  nop
    ctx->pc = 0x2f69f4u;
    // NOP
label_2f69f8:
    // 0x2f69f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f69f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f69fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f69fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f6a00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f6a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f6a04: 0xace30050  sw          $v1, 0x50($a3)
    ctx->pc = 0x2f6a04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 80), GPR_U32(ctx, 3));
    // 0x2f6a08: 0x8ce20160  lw          $v0, 0x160($a3)
    ctx->pc = 0x2f6a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x2f6a0c: 0x8ce40044  lw          $a0, 0x44($a3)
    ctx->pc = 0x2f6a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 68)));
    // 0x2f6a10: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2f6a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2f6a14: 0xc043324  jal         func_10CC90
    ctx->pc = 0x2F6A14u;
    SET_GPR_U32(ctx, 31, 0x2F6A1Cu);
    ctx->pc = 0x2F6A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6A14u;
            // 0x2f6a18: 0xace20160  sw          $v0, 0x160($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC90u;
    if (runtime->hasFunction(0x10CC90u)) {
        auto targetFn = runtime->lookupFunction(0x10CC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6A1Cu; }
        if (ctx->pc != 0x2F6A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallSignalSemaIntrWrapper_0x10cc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6A1Cu; }
        if (ctx->pc != 0x2F6A1Cu) { return; }
    }
    ctx->pc = 0x2F6A1Cu;
label_2f6a1c:
    // 0x2f6a1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f6a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6a20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f6a20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6a24: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6A24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6A24u;
            // 0x2f6a28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F6A2Cu;
    // 0x2f6a2c: 0x0  nop
    ctx->pc = 0x2f6a2cu;
    // NOP
    ctx->pc = 0x2f6a30u;
}
