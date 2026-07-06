#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B2EC8
// Address: 0x2b2ec8 - 0x2b2f40
void sub_002B2EC8_0x2b2ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2EC8_0x2b2ec8");
#endif

    switch (ctx->pc) {
        case 0x2b2ef0u: goto label_2b2ef0;
        default: break;
    }

    ctx->pc = 0x2b2ec8u;

    // 0x2b2ec8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b2ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b2ecc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b2eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b2ed0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b2ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b2ed4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b2ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2ed8: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2b2ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2b2edc: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x2b2edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2b2ee0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2b2ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b2ee4: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x2b2ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2b2ee8: 0xc0aca20  jal         func_2B2880
    ctx->pc = 0x2B2EE8u;
    SET_GPR_U32(ctx, 31, 0x2B2EF0u);
    ctx->pc = 0x2B2EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2EE8u;
            // 0x2b2eec: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B2880u;
    if (runtime->hasFunction(0x2B2880u)) {
        auto targetFn = runtime->lookupFunction(0x2B2880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2EF0u; }
        if (ctx->pc != 0x2B2EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B2880_0x2b2880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B2EF0u; }
        if (ctx->pc != 0x2B2EF0u) { return; }
    }
    ctx->pc = 0x2B2EF0u;
label_2b2ef0:
    // 0x2b2ef0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b2ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2ef4: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2b2ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2b2ef8: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B2EF8u;
    {
        const bool branch_taken_0x2b2ef8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b2ef8) {
            ctx->pc = 0x2B2F08u;
            goto label_2b2f08;
        }
    }
    ctx->pc = 0x2B2F00u;
    // 0x2b2f00: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2B2F00u;
    {
        const bool branch_taken_0x2b2f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2F00u;
            // 0x2b2f04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2f00) {
            ctx->pc = 0x2B2F2Cu;
            goto label_2b2f2c;
        }
    }
    ctx->pc = 0x2B2F08u;
label_2b2f08:
    // 0x2b2f08: 0x4830003  bgezl       $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B2F08u;
    {
        const bool branch_taken_0x2b2f08 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2b2f08) {
            ctx->pc = 0x2B2F0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2F08u;
            // 0x2b2f0c: 0x8e030044  lw          $v1, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B2F18u;
            goto label_2b2f18;
        }
    }
    ctx->pc = 0x2B2F10u;
    // 0x2b2f10: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B2F10u;
    {
        const bool branch_taken_0x2b2f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2F10u;
            // 0x2b2f14: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2f10) {
            ctx->pc = 0x2B2F2Cu;
            goto label_2b2f2c;
        }
    }
    ctx->pc = 0x2B2F18u;
label_2b2f18:
    // 0x2b2f18: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2b2f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b2f1c: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x2b2f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x2b2f20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b2f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b2f24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b2f24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2f28: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x2b2f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
label_2b2f2c:
    // 0x2b2f2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b2f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2f30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b2f30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2f34: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2F34u;
            // 0x2b2f38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B2F3Cu;
    // 0x2b2f3c: 0x0  nop
    ctx->pc = 0x2b2f3cu;
    // NOP
    ctx->pc = 0x2b2f40u;
}
