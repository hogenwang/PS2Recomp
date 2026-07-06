#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DAFE0
// Address: 0x2dafe0 - 0x2db0c8
void sub_002DAFE0_0x2dafe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAFE0_0x2dafe0");
#endif

    switch (ctx->pc) {
        case 0x2db018u: goto label_2db018;
        case 0x2db028u: goto label_2db028;
        case 0x2db074u: goto label_2db074;
        case 0x2db0b4u: goto label_2db0b4;
        default: break;
    }

    ctx->pc = 0x2dafe0u;

    // 0x2dafe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dafe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dafe4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dafe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dafe8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2dafe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2dafec: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2dafecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2daff0: 0x2463b038  addiu       $v1, $v1, -0x4FC8
    ctx->pc = 0x2daff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946872));
    // 0x2daff4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2daff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2daff8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DAFF8u;
    {
        const bool branch_taken_0x2daff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2daff8) {
            ctx->pc = 0x2DB018u;
            goto label_2db018;
        }
    }
    ctx->pc = 0x2DB000u;
    // 0x2db000: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2db000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2db004: 0x2484b04c  addiu       $a0, $a0, -0x4FB4
    ctx->pc = 0x2db004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946892));
    // 0x2db008: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2db008u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2db00c: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2db00cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2db010: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DB010u;
    SET_GPR_U32(ctx, 31, 0x2DB018u);
    ctx->pc = 0x2DB014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB010u;
    // 0x2db014: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DB010u, 0x2DB018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB018u;
label_2db018:
    // 0x2db018: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DB018u;
    {
        const bool branch_taken_0x2db018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db018) {
            ctx->pc = 0x2DB04Cu;
            goto label_2db04c;
        }
    }
    ctx->pc = 0x2DB020u;
    // 0x2db020: 0xc2a53b1  jal         func_A94EC4
    ctx->pc = 0x2DB020u;
    SET_GPR_U32(ctx, 31, 0x2DB028u);
    ctx->pc = 0x2DB024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB020u;
    // 0x2db024: 0x8cadd41d  lw          $t5, -0x2BE3($a1) (Delay Slot)
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294956061)));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA94EC4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA94EC4u, 0x2DB020u, 0x2DB028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB028u;
label_2db028:
    // 0x2db028: 0xa38e40a1  sb          $t6, 0x40A1($gp)
    ctx->pc = 0x2db028u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 16545), (uint8_t)GPR_U32(ctx, 14));
    // 0x2db02c: 0xa26e4079  sb          $t6, 0x4079($s3)
    ctx->pc = 0x2db02cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 16505), (uint8_t)GPR_U32(ctx, 14));
    // 0x2db030: 0x8cf18d1d  lw          $s1, -0x72E3($a3)
    ctx->pc = 0x2db030u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294937885)));
    // 0x2db034: 0xff888492  sd          $t0, -0x7B6E($gp)
    ctx->pc = 0x2db034u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935698), GPR_U64(ctx, 8));
    // 0x2db038: 0x0  nop
    ctx->pc = 0x2db038u;
    // NOP
    // 0x2db03c: 0x241349f5  addiu       $s3, $zero, 0x49F5
    ctx->pc = 0x2db03cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18933));
    // 0x2db040: 0xc712dbc2  lwc1        $f18, -0x243E($t8)
    ctx->pc = 0x2db040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294958018)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2db044: 0x241349ed  addiu       $s3, $zero, 0x49ED
    ctx->pc = 0x2db044u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18925));
    // 0x2db048: 0x0  nop
    ctx->pc = 0x2db048u;
    // NOP
label_2db04c:
    // 0x2db04c: 0x57ba9fd4  bnel        $sp, $k0, . + 4 + (-0x602C << 2)
    ctx->pc = 0x2DB04Cu;
    {
        const bool branch_taken_0x2db04c = (GPR_U64(ctx, 29) != GPR_U64(ctx, 26));
        if (branch_taken_0x2db04c) {
            ctx->pc = 0x2DB050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB04Cu;
            // 0x2db050: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2FA0u;
            return;
        }
    }
    ctx->pc = 0x2DB054u;
    // 0x2db054: 0x41a9c28  .word       0x041A9C28                   # INVALID     $zero, $k0, -0x63D8 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2db054u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x1A at 0x2DB054 raw=0x041A9C28");
    // 0x2db058: 0x8c6298b0  lw          $v0, -0x6750($v1)
    ctx->pc = 0x2db058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940848)));
    // 0x2db05c: 0x1c5eec29  .word       0x1C5EEC29                   # bgtz        $v0, . + 4 + (-0x13D7 << 2) # 001E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DB05Cu;
    {
        const bool branch_taken_0x2db05c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2DB060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB05Cu;
        // 0x2db060: 0x1c720e2a  .word       0x1C720E2A                   # bgtz        $v1, . + 4 + (0xE2A << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2DB060 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db05c) {
            ctx->pc = 0x2D6104u;
            return;
        }
    }
    ctx->pc = 0x2DB064u;
    // 0x2db064: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DB064u;
    {
        const bool branch_taken_0x2db064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db064) {
            ctx->pc = 0x2DB094u;
            goto label_2db094;
        }
    }
    ctx->pc = 0x2DB06Cu;
    // 0x2db06c: 0xce9eb94  jal         func_3A7AE50
    ctx->pc = 0x2DB06Cu;
    SET_GPR_U32(ctx, 31, 0x2DB074u);
    ctx->pc = 0x2DB070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB06Cu;
    // 0x2db070: 0xdf044f9f  ld          $a0, 0x4F9F($t8) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 24), 20383)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7AE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7AE50u, 0x2DB06Cu, 0x2DB074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB074u;
label_2db074:
    // 0x2db074: 0x26bcfc90  addiu       $gp, $s5, -0x370
    ctx->pc = 0x2db074u;
    SET_GPR_S32(ctx, 28, (int32_t)ADD32(GPR_U32(ctx, 21), 4294966416));
    // 0x2db078: 0xa1d8adc1  sb          $t8, -0x523F($t6)
    ctx->pc = 0x2db078u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 4294946241), (uint8_t)GPR_U32(ctx, 24));
    // 0x2db07c: 0x25b76248  addiu       $s7, $t5, 0x6248
    ctx->pc = 0x2db07cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 13), 25160));
    // 0x2db080: 0x25d3c150  addiu       $s3, $t6, -0x3EB0
    ctx->pc = 0x2db080u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 14), 4294951248));
    // 0x2db084: 0x2413495f  addiu       $s3, $zero, 0x495F
    ctx->pc = 0x2db084u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18783));
    // 0x2db088: 0xc712dbc3  lwc1        $f18, -0x243D($t8)
    ctx->pc = 0x2db088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294958019)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2db08c: 0x24134947  addiu       $s3, $zero, 0x4947
    ctx->pc = 0x2db08cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18759));
    // 0x2db090: 0x0  nop
    ctx->pc = 0x2db090u;
    // NOP
label_2db094:
    // 0x2db094: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2db094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2db098: 0x2442b084  addiu       $v0, $v0, -0x4F7C
    ctx->pc = 0x2db098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946948));
    // 0x2db09c: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2db09cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2db0a0: 0x2484b064  addiu       $a0, $a0, -0x4F9C
    ctx->pc = 0x2db0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946916));
    // 0x2db0a4: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2db0a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2db0a8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2db0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2db0ac: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DB0ACu;
    SET_GPR_U32(ctx, 31, 0x2DB0B4u);
    ctx->pc = 0x2DB0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB0ACu;
    // 0x2db0b0: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DB0ACu, 0x2DB0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB0B4u;
label_2db0b4:
    // 0x2db0b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2db0b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db0b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2db0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2db0bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2db0bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB0C0u;
        // 0x2db0c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB0C8u;
}
