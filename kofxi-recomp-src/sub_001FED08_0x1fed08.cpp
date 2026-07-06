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

// Function: sub_001FED08
// Address: 0x1fed08 - 0x1fee00
void sub_001FED08_0x1fed08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FED08_0x1fed08");
#endif

    switch (ctx->pc) {
        case 0x1fed28u: goto label_1fed28;
        case 0x1fed68u: goto label_1fed68;
        case 0x1fed78u: goto label_1fed78;
        case 0x1fedb8u: goto label_1fedb8;
        default: break;
    }

    ctx->pc = 0x1fed08u;

label_1fed08:
    // 0x1fed08: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1fed08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1fed0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FED0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FED10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED0Cu;
        // 0x1fed10: 0x2442ee10  addiu       $v0, $v0, -0x11F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FED0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FED14u;
    // 0x1fed14: 0x0  nop
    ctx->pc = 0x1fed14u;
    // NOP
    // 0x1fed18: 0x38820002  xori        $v0, $a0, 0x2
    ctx->pc = 0x1fed18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
    // 0x1fed1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FED1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED1Cu;
        // 0x1fed20: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FED1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FED24u;
    // 0x1fed24: 0x0  nop
    ctx->pc = 0x1fed24u;
    // NOP
label_1fed28:
    // 0x1fed28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fed28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fed2c: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x1fed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x1fed30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fed30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fed34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fed34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fed38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fed38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fed3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fed3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fed40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fed40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fed44: 0x24449ba4  addiu       $a0, $v0, -0x645C
    ctx->pc = 0x1fed44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941604));
    // 0x1fed48: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1fed48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1fed4c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fed50: 0x1c400013  bgtz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FED50u;
    {
        const bool branch_taken_0x1fed50 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1FED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED50u;
        // 0x1fed54: 0x24430001  addiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed50) {
            ctx->pc = 0x1FEDA0u;
            goto label_1feda0;
        }
    }
    ctx->pc = 0x1FED58u;
    // 0x1fed58: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1fed58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1fed5c: 0x3c1001c1  lui         $s0, 0x1C1
    ctx->pc = 0x1fed5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
    // 0x1fed60: 0xc07fb42  jal         func_1FED08
    ctx->pc = 0x1FED60u;
    SET_GPR_U32(ctx, 31, 0x1FED68u);
    ctx->pc = 0x1FED64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FED60u;
    // 0x1fed64: 0x26109b90  addiu       $s0, $s0, -0x6470 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FED08u;
    goto label_1fed08;
    ctx->pc = 0x1FED68u;
label_1fed68:
    // 0x1fed68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fed68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fed6c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fed6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1fed70: 0xc07fbd2  jal         func_1FEF48
    ctx->pc = 0x1FED70u;
    SET_GPR_U32(ctx, 31, 0x1FED78u);
    ctx->pc = 0x1FED74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FED70u;
    // 0x1fed74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEF48u, 0x1FED70u, 0x1FED78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FED78u;
label_1fed78:
    // 0x1fed78: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x1fed78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x1fed7c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fed7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fed80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fed80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fed84: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fed84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fed88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fed88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fed8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fed8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fed90: 0x24849b98  addiu       $a0, $a0, -0x6468
    ctx->pc = 0x1fed90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941592));
    // 0x1fed94: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fed94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fed98: 0x807fbc2  j           func_1FEF08
    ctx->pc = 0x1FED98u;
    ctx->pc = 0x1FED9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FED98u;
    // 0x1fed9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEF08u, 0x1FED98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1FEDA0u;
label_1feda0:
    // 0x1feda0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1feda0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1feda4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1feda4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1feda8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1feda8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fedac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fedacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fedb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEDB0u;
        // 0x1fedb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEDB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEDB8u;
label_1fedb8:
    // 0x1fedb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fedb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fedbc: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x1fedbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x1fedc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fedc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fedc4: 0x24639ba4  addiu       $v1, $v1, -0x645C
    ctx->pc = 0x1fedc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941604));
    // 0x1fedc8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fedc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fedcc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fedccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fedd0: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FEDD0u;
    {
        const bool branch_taken_0x1fedd0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1FEDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEDD0u;
        // 0x1fedd4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fedd0) {
            ctx->pc = 0x1FEDF0u;
            goto label_1fedf0;
        }
    }
    ctx->pc = 0x1FEDD8u;
    // 0x1fedd8: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x1fedd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x1feddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1feddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fede0: 0x24849b98  addiu       $a0, $a0, -0x6468
    ctx->pc = 0x1fede0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941592));
    // 0x1fede4: 0x807fbbe  j           func_1FEEF8
    ctx->pc = 0x1FEDE4u;
    ctx->pc = 0x1FEDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEDE4u;
    // 0x1fede8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEEF8u, 0x1FEDE4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1FEDECu;
    // 0x1fedec: 0x0  nop
    ctx->pc = 0x1fedecu;
    // NOP
label_1fedf0:
    // 0x1fedf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fedf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fedf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEDF4u;
        // 0x1fedf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEDF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEDFCu;
    // 0x1fedfc: 0x0  nop
    ctx->pc = 0x1fedfcu;
    // NOP
}
