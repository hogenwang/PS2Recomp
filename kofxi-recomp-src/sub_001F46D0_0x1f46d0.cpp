#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F46D0
// Address: 0x1f46d0 - 0x1f4780
void sub_001F46D0_0x1f46d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F46D0_0x1f46d0");
#endif

    switch (ctx->pc) {
        case 0x1f4708u: goto label_1f4708;
        case 0x1f4720u: goto label_1f4720;
        case 0x1f4754u: goto label_1f4754;
        default: break;
    }

    ctx->pc = 0x1f46d0u;

    // 0x1f46d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f46d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f46d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f46d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f46d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f46d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f46dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f46dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f46e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f46e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f46e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f46e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f46e8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f46e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f46ec: 0x18c0001c  blez        $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x1F46ECu;
    {
        const bool branch_taken_0x1f46ec = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1F46F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F46ECu;
            // 0x1f46f0: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f46ec) {
            ctx->pc = 0x1F4760u;
            goto label_1f4760;
        }
    }
    ctx->pc = 0x1F46F4u;
    // 0x1f46f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f46f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f46f8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f46f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f46fc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1f46fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4700: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1f4700u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f4704: 0x0  nop
    ctx->pc = 0x1f4704u;
    // NOP
label_1f4708:
    // 0x1f4708: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1f4708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1f470c: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x1f470cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1f4710: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1f4710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1f4714: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f4714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4718: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x1F4718u;
    SET_GPR_U32(ctx, 31, 0x1F4720u);
    ctx->pc = 0x1F471Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4718u;
            // 0x1f471c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (runtime->hasFunction(0x1FB710u)) {
        auto targetFn = runtime->lookupFunction(0x1FB710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4720u; }
        if (ctx->pc != 0x1F4720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB710_0x1fb710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4720u; }
        if (ctx->pc != 0x1F4720u) { return; }
    }
    ctx->pc = 0x1F4720u;
label_1f4720:
    // 0x1f4720: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1f4720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f4724: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1f4724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1f4728: 0x2604005c  addiu       $a0, $s0, 0x5C
    ctx->pc = 0x1f4728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x1f472c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1f472cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1f4730: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1f4730u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1f4734: 0xae14003c  sw          $s4, 0x3C($s0)
    ctx->pc = 0x1f4734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 20));
    // 0x1f4738: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1f4738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1f473c: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x1f473cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x1f4740: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1f4740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1f4744: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x1f4744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x1f4748: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1f4748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x1f474c: 0xc07d1e0  jal         func_1F4780
    ctx->pc = 0x1F474Cu;
    SET_GPR_U32(ctx, 31, 0x1F4754u);
    ctx->pc = 0x1F4750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F474Cu;
            // 0x1f4750: 0xae130058  sw          $s3, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F4780u;
    if (runtime->hasFunction(0x1F4780u)) {
        auto targetFn = runtime->lookupFunction(0x1F4780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4754u; }
        if (ctx->pc != 0x1F4754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4780_0x1f4780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4754u; }
        if (ctx->pc != 0x1F4754u) { return; }
    }
    ctx->pc = 0x1F4754u;
label_1f4754:
    // 0x1f4754: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1f4754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1f4758: 0x1620ffeb  bnez        $s1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1F4758u;
    {
        const bool branch_taken_0x1f4758 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F475Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4758u;
            // 0x1f475c: 0x261000f0  addiu       $s0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4758) {
            ctx->pc = 0x1F4708u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f4708;
        }
    }
    ctx->pc = 0x1F4760u;
label_1f4760:
    // 0x1f4760: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f4760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4764: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f4764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f4768: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f4768u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f476c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f476cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4770: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f4770u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4774: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1f4774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f4778: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F477Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4778u;
            // 0x1f477c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4780u;
    ctx->pc = 0x1f4780u;
}
