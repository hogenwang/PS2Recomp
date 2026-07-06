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

// Function: sub_001EED98
// Address: 0x1eed98 - 0x1eee20
void sub_001EED98_0x1eed98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EED98_0x1eed98");
#endif

    switch (ctx->pc) {
        case 0x1eedd4u: goto label_1eedd4;
        case 0x1eede8u: goto label_1eede8;
        case 0x1eedfcu: goto label_1eedfc;
        default: break;
    }

    ctx->pc = 0x1eed98u;

    // 0x1eed98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eed98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eed9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1eed9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1eeda0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1eeda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1eeda4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1eeda4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeda8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1eeda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1eedac: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x1eedacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1eedb0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1eedb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1eedb4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1eedb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eedb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1eedb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1eedbc: 0x26301fcc  addiu       $s0, $s1, 0x1FCC
    ctx->pc = 0x1eedbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8140));
    // 0x1eedc0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1eedc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1eedc4: 0x10520003  beq         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EEDC4u;
    {
        const bool branch_taken_0x1eedc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1EEDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEDC4u;
        // 0x1eedc8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eedc4) {
            ctx->pc = 0x1EEDD4u;
            goto label_1eedd4;
        }
    }
    ctx->pc = 0x1EEDCCu;
    // 0x1eedcc: 0xc07ad6a  jal         func_1EB5A8
    ctx->pc = 0x1EEDCCu;
    SET_GPR_U32(ctx, 31, 0x1EEDD4u);
    ctx->pc = 0x1EEDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEDCCu;
    // 0x1eedd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB5A8u, 0x1EEDCCu, 0x1EEDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEDD4u;
label_1eedd4:
    // 0x1eedd4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1eedd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1eedd8: 0x10b20003  beq         $a1, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EEDD8u;
    {
        const bool branch_taken_0x1eedd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 18));
        ctx->pc = 0x1EEDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEDD8u;
        // 0x1eeddc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eedd8) {
            ctx->pc = 0x1EEDE8u;
            goto label_1eede8;
        }
    }
    ctx->pc = 0x1EEDE0u;
    // 0x1eede0: 0xc07ad6a  jal         func_1EB5A8
    ctx->pc = 0x1EEDE0u;
    SET_GPR_U32(ctx, 31, 0x1EEDE8u);
    ctx->pc = 0x1EEDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEDE0u;
    // 0x1eede4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB5A8u, 0x1EEDE0u, 0x1EEDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEDE8u;
label_1eede8:
    // 0x1eede8: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1eede8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1eedec: 0x10b20003  beq         $a1, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EEDECu;
    {
        const bool branch_taken_0x1eedec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 18));
        ctx->pc = 0x1EEDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEDECu;
        // 0x1eedf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eedec) {
            ctx->pc = 0x1EEDFCu;
            goto label_1eedfc;
        }
    }
    ctx->pc = 0x1EEDF4u;
    // 0x1eedf4: 0xc07ad6a  jal         func_1EB5A8
    ctx->pc = 0x1EEDF4u;
    SET_GPR_U32(ctx, 31, 0x1EEDFCu);
    ctx->pc = 0x1EEDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEDF4u;
    // 0x1eedf8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB5A8u, 0x1EEDF4u, 0x1EEDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEDFCu;
label_1eedfc:
    // 0x1eedfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1eedfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eee00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1eee00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1eee04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1eee04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eee08: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1eee08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1eee0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eee0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eee10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1eee10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eee14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eee14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eee18: 0x807dacc  j           func_1F6B30
    ctx->pc = 0x1EEE18u;
    ctx->pc = 0x1EEE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEE18u;
    // 0x1eee1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6B30u;
    sub_001F6B30_0x1f6b30(rdram, ctx, runtime); return;
    ctx->pc = 0x1EEE20u;
}
