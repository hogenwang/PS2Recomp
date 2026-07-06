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

// Function: sub_001CCEF0
// Address: 0x1ccef0 - 0x1cd000
void sub_001CCEF0_0x1ccef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCEF0_0x1ccef0");
#endif

    switch (ctx->pc) {
        case 0x1ccfc8u: goto label_1ccfc8;
        case 0x1ccfd8u: goto label_1ccfd8;
        default: break;
    }

    ctx->pc = 0x1ccef0u;

    // 0x1ccef0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1ccef0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ccef4: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1ccef4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x1ccef8: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x1ccef8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1ccefc: 0x24c6d820  addiu       $a2, $a2, -0x27E0
    ctx->pc = 0x1ccefcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957088));
    // 0x1ccf00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ccf00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ccf04: 0x80850002  lb          $a1, 0x2($a0)
    ctx->pc = 0x1ccf04u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1ccf08: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1ccf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1ccf0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ccf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ccf10: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x1ccf10u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ccf14: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1ccf14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ccf18: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1ccf18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ccf1c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1ccf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ccf20: 0x80820003  lb          $v0, 0x3($a0)
    ctx->pc = 0x1ccf20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1ccf24: 0x91900  sll         $v1, $t1, 4
    ctx->pc = 0x1ccf24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1ccf28: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1ccf28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1ccf2c: 0x674821  addu        $t1, $v1, $a3
    ctx->pc = 0x1ccf2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1ccf30: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x1ccf30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ccf34: 0x92900  sll         $a1, $t1, 4
    ctx->pc = 0x1ccf34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1ccf38: 0x80830004  lb          $v1, 0x4($a0)
    ctx->pc = 0x1ccf38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ccf3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ccf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ccf40: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1ccf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1ccf44: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x1ccf44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1ccf48: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1ccf48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ccf4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ccf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ccf50: 0x80820005  lb          $v0, 0x5($a0)
    ctx->pc = 0x1ccf50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x1ccf54: 0x92900  sll         $a1, $t1, 4
    ctx->pc = 0x1ccf54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1ccf58: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1ccf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ccf5c: 0xa74821  addu        $t1, $a1, $a3
    ctx->pc = 0x1ccf5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1ccf60: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x1ccf60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ccf64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ccf64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ccf68: 0x80830006  lb          $v1, 0x6($a0)
    ctx->pc = 0x1ccf68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1ccf6c: 0x92100  sll         $a0, $t1, 4
    ctx->pc = 0x1ccf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1ccf70: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1ccf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1ccf74: 0x884821  addu        $t1, $a0, $t0
    ctx->pc = 0x1ccf74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1ccf78: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ccf78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ccf7c: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x1ccf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1ccf80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ccf80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ccf84: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1ccf84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ccf88: 0x454821  addu        $t1, $v0, $a1
    ctx->pc = 0x1ccf88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ccf8c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ccf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ccf90: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x1ccf90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1ccf94: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF94u;
        // 0x1ccf98: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCF9Cu;
    // 0x1ccf9c: 0x0  nop
    ctx->pc = 0x1ccf9cu;
    // NOP
    // 0x1ccfa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ccfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ccfa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ccfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ccfa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ccfa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ccfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ccfb0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ccfb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ccfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ccfb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ccfb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfbc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ccfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ccfc0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1CCFC0u;
    SET_GPR_U32(ctx, 31, 0x1CCFC8u);
    ctx->pc = 0x1CCFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCFC0u;
    // 0x1ccfc4: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1CCFC0u, 0x1CCFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCFC8u;
label_1ccfc8:
    // 0x1ccfc8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ccfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ccfcc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ccfccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfd0: 0xc04a966  jal         func_12A598
    ctx->pc = 0x1CCFD0u;
    SET_GPR_U32(ctx, 31, 0x1CCFD8u);
    ctx->pc = 0x1CCFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCFD0u;
    // 0x1ccfd4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x1CCFD0u, 0x1CCFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCFD8u;
label_1ccfd8:
    // 0x1ccfd8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1ccfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ccfdc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1ccfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ccfe0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ccfe0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ccfe4: 0x2484fff0  addiu       $a0, $a0, -0x10
    ctx->pc = 0x1ccfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x1ccfe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ccfe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccfec: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1ccfecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1ccff0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ccff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ccff4: 0x8073396  j           func_1CCE58
    ctx->pc = 0x1CCFF4u;
    ctx->pc = 0x1CCFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCFF4u;
    // 0x1ccff8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCE58u, 0x1CCFF4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CCFFCu;
    // 0x1ccffc: 0x0  nop
    ctx->pc = 0x1ccffcu;
    // NOP
    if (ctx->pc == 0x1ccffcu) { ctx->pc = 0x1cd000u; }
}
