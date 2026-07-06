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

// Function: sub_002ACB30
// Address: 0x2acb30 - 0x2acbf8
void sub_002ACB30_0x2acb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACB30_0x2acb30");
#endif

    switch (ctx->pc) {
        case 0x2acb90u: goto label_2acb90;
        case 0x2acba0u: goto label_2acba0;
        case 0x2acbdcu: goto label_2acbdc;
        default: break;
    }

    ctx->pc = 0x2acb30u;

    // 0x2acb30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2acb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2acb34: 0x5102a  slt         $v0, $zero, $a1
    ctx->pc = 0x2acb34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2acb38: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2acb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2acb3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2acb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2acb40: 0x34118001  ori         $s1, $zero, 0x8001
    ctx->pc = 0x2acb40u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x2acb44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2acb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2acb48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2acb48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acb4c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2acb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2acb50: 0xa2880b  movn        $s1, $a1, $v0
    ctx->pc = 0x2acb50u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
    // 0x2acb54: 0x8e060114  lw          $a2, 0x114($s0)
    ctx->pc = 0x2acb54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x2acb58: 0xd1182a  slt         $v1, $a2, $s1
    ctx->pc = 0x2acb58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2acb5c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ACB5Cu;
    {
        const bool branch_taken_0x2acb5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACB5Cu;
        // 0x2acb60: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acb5c) {
            ctx->pc = 0x2ACB78u;
            goto label_2acb78;
        }
    }
    ctx->pc = 0x2ACB64u;
    // 0x2acb64: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x2acb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2acb68: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2ACB68u;
    {
        const bool branch_taken_0x2acb68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACB68u;
        // 0x2acb6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acb68) {
            ctx->pc = 0x2ACBE0u;
            goto label_2acbe0;
        }
    }
    ctx->pc = 0x2ACB70u;
    // 0x2acb70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2ACB70u;
    {
        const bool branch_taken_0x2acb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACB70u;
        // 0x2acb74: 0x8c640030  lw          $a0, 0x30($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acb70) {
            ctx->pc = 0x2ACB7Cu;
            goto label_2acb7c;
        }
    }
    ctx->pc = 0x2ACB78u;
label_2acb78:
    // 0x2acb78: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x2acb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_2acb7c:
    // 0x2acb7c: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2acb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2acb80: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ACB80u;
    {
        const bool branch_taken_0x2acb80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACB80u;
        // 0x2acb84: 0x449023  subu        $s2, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acb80) {
            ctx->pc = 0x2ACB98u;
            goto label_2acb98;
        }
    }
    ctx->pc = 0x2ACB88u;
    // 0x2acb88: 0xc0a8c00  jal         func_2A3000
    ctx->pc = 0x2ACB88u;
    SET_GPR_U32(ctx, 31, 0x2ACB90u);
    ctx->pc = 0x2ACB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACB88u;
    // 0x2acb8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3000u, 0x2ACB88u, 0x2ACB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACB90u;
label_2acb90:
    // 0x2acb90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2ACB90u;
    {
        const bool branch_taken_0x2acb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACB90u;
        // 0x2acb94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acb90) {
            ctx->pc = 0x2ACBA4u;
            goto label_2acba4;
        }
    }
    ctx->pc = 0x2ACB98u;
label_2acb98:
    // 0x2acb98: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2ACB98u;
    SET_GPR_U32(ctx, 31, 0x2ACBA0u);
    ctx->pc = 0x2ACB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACB98u;
    // 0x2acb9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2ACB98u, 0x2ACBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACBA0u;
label_2acba0:
    // 0x2acba0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2acba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2acba4:
    // 0x2acba4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ACBA4u;
    {
        const bool branch_taken_0x2acba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACBA4u;
        // 0x2acba8: 0x921821  addu        $v1, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acba4) {
            ctx->pc = 0x2ACBC4u;
            goto label_2acbc4;
        }
    }
    ctx->pc = 0x2ACBACu;
    // 0x2acbac: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2acbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2acbb0: 0xac440030  sw          $a0, 0x30($v0)
    ctx->pc = 0x2acbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 4));
    // 0x2acbb4: 0xae110114  sw          $s1, 0x114($s0)
    ctx->pc = 0x2acbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 17));
    // 0x2acbb8: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x2acbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x2acbbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ACBBCu;
    {
        const bool branch_taken_0x2acbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACBBCu;
        // 0x2acbc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acbbc) {
            ctx->pc = 0x2ACBE0u;
            goto label_2acbe0;
        }
    }
    ctx->pc = 0x2ACBC4u;
label_2acbc4:
    // 0x2acbc4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2acbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2acbc8: 0x240500da  addiu       $a1, $zero, 0xDA
    ctx->pc = 0x2acbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 218));
    // 0x2acbcc: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2acbccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2acbd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2acbd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acbd4: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2ACBD4u;
    SET_GPR_U32(ctx, 31, 0x2ACBDCu);
    ctx->pc = 0x2ACBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACBD4u;
    // 0x2acbd8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2ACBD4u, 0x2ACBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACBDCu;
label_2acbdc:
    // 0x2acbdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2acbdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acbe0:
    // 0x2acbe0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2acbe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2acbe4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2acbe4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2acbe8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2acbe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2acbec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2acbecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2acbf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACBF0u;
        // 0x2acbf4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACBF8u;
}
