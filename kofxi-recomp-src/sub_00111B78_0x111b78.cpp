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

// Function: sub_00111B78
// Address: 0x111b78 - 0x111c70
void sub_00111B78_0x111b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111B78_0x111b78");
#endif

    switch (ctx->pc) {
        case 0x111b78u: goto label_111b78;
        case 0x111b7cu: goto label_111b7c;
        case 0x111b80u: goto label_111b80;
        case 0x111b84u: goto label_111b84;
        case 0x111b88u: goto label_111b88;
        case 0x111b8cu: goto label_111b8c;
        case 0x111b90u: goto label_111b90;
        case 0x111b94u: goto label_111b94;
        case 0x111b98u: goto label_111b98;
        case 0x111b9cu: goto label_111b9c;
        case 0x111ba0u: goto label_111ba0;
        case 0x111ba4u: goto label_111ba4;
        case 0x111ba8u: goto label_111ba8;
        case 0x111bacu: goto label_111bac;
        case 0x111bb0u: goto label_111bb0;
        case 0x111bb4u: goto label_111bb4;
        case 0x111bb8u: goto label_111bb8;
        case 0x111bbcu: goto label_111bbc;
        case 0x111bc0u: goto label_111bc0;
        case 0x111bc4u: goto label_111bc4;
        case 0x111bc8u: goto label_111bc8;
        case 0x111bccu: goto label_111bcc;
        case 0x111bd0u: goto label_111bd0;
        case 0x111bd4u: goto label_111bd4;
        case 0x111bd8u: goto label_111bd8;
        case 0x111bdcu: goto label_111bdc;
        case 0x111be0u: goto label_111be0;
        case 0x111be4u: goto label_111be4;
        case 0x111be8u: goto label_111be8;
        case 0x111becu: goto label_111bec;
        case 0x111bf0u: goto label_111bf0;
        case 0x111bf4u: goto label_111bf4;
        case 0x111bf8u: goto label_111bf8;
        case 0x111bfcu: goto label_111bfc;
        case 0x111c00u: goto label_111c00;
        case 0x111c04u: goto label_111c04;
        case 0x111c08u: goto label_111c08;
        case 0x111c0cu: goto label_111c0c;
        case 0x111c10u: goto label_111c10;
        case 0x111c14u: goto label_111c14;
        case 0x111c18u: goto label_111c18;
        case 0x111c1cu: goto label_111c1c;
        case 0x111c20u: goto label_111c20;
        case 0x111c24u: goto label_111c24;
        case 0x111c28u: goto label_111c28;
        case 0x111c2cu: goto label_111c2c;
        case 0x111c30u: goto label_111c30;
        case 0x111c34u: goto label_111c34;
        case 0x111c38u: goto label_111c38;
        case 0x111c3cu: goto label_111c3c;
        case 0x111c40u: goto label_111c40;
        case 0x111c44u: goto label_111c44;
        case 0x111c48u: goto label_111c48;
        case 0x111c4cu: goto label_111c4c;
        case 0x111c50u: goto label_111c50;
        case 0x111c54u: goto label_111c54;
        case 0x111c58u: goto label_111c58;
        case 0x111c5cu: goto label_111c5c;
        case 0x111c60u: goto label_111c60;
        case 0x111c64u: goto label_111c64;
        case 0x111c68u: goto label_111c68;
        case 0x111c6cu: goto label_111c6c;
        default: break;
    }

    ctx->pc = 0x111b78u;

label_111b78:
    // 0x111b78: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x111b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_111b7c:
    // 0x111b7c: 0x8043320  j           func_10CC80
label_111b80:
    if (ctx->pc == 0x111B80u) {
        ctx->pc = 0x111B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B7Cu;
        // 0x111b80: 0x8c448744  lw          $a0, -0x78BC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111B84u;
        goto label_111b84;
    }
    ctx->pc = 0x111B7Cu;
    ctx->pc = 0x111B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111B7Cu;
    // 0x111b80: 0x8c448744  lw          $a0, -0x78BC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    sub_0010CC80_0x10cc80(rdram, ctx, runtime); return;
    ctx->pc = 0x111B84u;
label_111b84:
    // 0x111b84: 0x0  nop
    ctx->pc = 0x111b84u;
    // NOP
label_111b88:
    // 0x111b88: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x111b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_111b8c:
    // 0x111b8c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x111b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_111b90:
    // 0x111b90: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x111b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_111b94:
    // 0x111b94: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x111b94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_111b98:
    // 0x111b98: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x111b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_111b9c:
    // 0x111b9c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x111b9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_111ba0:
    // 0x111ba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x111ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_111ba4:
    // 0x111ba4: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x111ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_111ba8:
    // 0x111ba8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x111ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_111bac:
    // 0x111bac: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x111bacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
label_111bb0:
    // 0x111bb0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x111bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_111bb4:
    // 0x111bb4: 0xc0446d2  jal         func_111B48
label_111bb8:
    if (ctx->pc == 0x111BB8u) {
        ctx->pc = 0x111BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BB4u;
        // 0x111bb8: 0x26149a00  addiu       $s4, $s0, -0x6600 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111BBCu;
        goto label_111bbc;
    }
    ctx->pc = 0x111BB4u;
    SET_GPR_U32(ctx, 31, 0x111BBCu);
    ctx->pc = 0x111BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111BB4u;
    // 0x111bb8: 0x26149a00  addiu       $s4, $s0, -0x6600 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B48u, 0x111BB4u, 0x111BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111BBCu;
label_111bbc:
    // 0x111bbc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x111bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_111bc0:
    // 0x111bc0: 0x8c43873c  lw          $v1, -0x78C4($v0)
    ctx->pc = 0x111bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936380)));
label_111bc4:
    // 0x111bc4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_111bc8:
    if (ctx->pc == 0x111BC8u) {
        ctx->pc = 0x111BCCu;
        goto label_111bcc;
    }
    ctx->pc = 0x111BC4u;
    {
        const bool branch_taken_0x111bc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x111bc4) {
            ctx->pc = 0x111BD4u;
            goto label_111bd4;
        }
    }
    ctx->pc = 0x111BCCu;
label_111bcc:
    // 0x111bcc: 0xc04471c  jal         func_111C70
label_111bd0:
    if (ctx->pc == 0x111BD0u) {
        ctx->pc = 0x111BD4u;
        goto label_111bd4;
    }
    ctx->pc = 0x111BCCu;
    SET_GPR_U32(ctx, 31, 0x111BD4u);
    ctx->pc = 0x111C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111C70u, 0x111BCCu, 0x111BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111BD4u;
label_111bd4:
    // 0x111bd4: 0xc045ba8  jal         func_116EA0
label_111bd8:
    if (ctx->pc == 0x111BD8u) {
        ctx->pc = 0x111BDCu;
        goto label_111bdc;
    }
    ctx->pc = 0x111BD4u;
    SET_GPR_U32(ctx, 31, 0x111BDCu);
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x111BD4u, 0x111BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111BDCu;
label_111bdc:
    // 0x111bdc: 0x8e119a00  lw          $s1, -0x6600($s0)
    ctx->pc = 0x111bdcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941184)));
label_111be0:
    // 0x111be0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x111be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_111be4:
    // 0x111be4: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x111be4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_111be8:
    // 0x111be8: 0xae139a00  sw          $s3, -0x6600($s0)
    ctx->pc = 0x111be8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294941184), GPR_U32(ctx, 19));
label_111bec:
    // 0x111bec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_111bf0:
    if (ctx->pc == 0x111BF0u) {
        ctx->pc = 0x111BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BECu;
        // 0x111bf0: 0xac7c9a40  sw          $gp, -0x65C0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294941248), GPR_U32(ctx, 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111BF4u;
        goto label_111bf4;
    }
    ctx->pc = 0x111BECu;
    {
        const bool branch_taken_0x111bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BECu;
        // 0x111bf0: 0xac7c9a40  sw          $gp, -0x65C0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294941248), GPR_U32(ctx, 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111bec) {
            ctx->pc = 0x111BFCu;
            goto label_111bfc;
        }
    }
    ctx->pc = 0x111BF4u;
label_111bf4:
    // 0x111bf4: 0xc045bbc  jal         func_116EF0
label_111bf8:
    if (ctx->pc == 0x111BF8u) {
        ctx->pc = 0x111BFCu;
        goto label_111bfc;
    }
    ctx->pc = 0x111BF4u;
    SET_GPR_U32(ctx, 31, 0x111BFCu);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x111BF4u, 0x111BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111BFCu;
label_111bfc:
    // 0x111bfc: 0xc0446de  jal         func_111B78
label_111c00:
    if (ctx->pc == 0x111C00u) {
        ctx->pc = 0x111C04u;
        goto label_111c04;
    }
    ctx->pc = 0x111BFCu;
    SET_GPR_U32(ctx, 31, 0x111C04u);
    ctx->pc = 0x111B78u;
    goto label_111b78;
    ctx->pc = 0x111C04u;
label_111c04:
    // 0x111c04: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x111c04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_111c08:
    // 0x111c08: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x111c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_111c0c:
    // 0x111c0c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x111c0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_111c10:
    // 0x111c10: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x111c10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_111c14:
    // 0x111c14: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x111c14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_111c18:
    // 0x111c18: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x111c18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_111c1c:
    // 0x111c1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x111c1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_111c20:
    // 0x111c20: 0x3e00008  jr          $ra
label_111c24:
    if (ctx->pc == 0x111C24u) {
        ctx->pc = 0x111C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C20u;
        // 0x111c24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111C28u;
        goto label_111c28;
    }
    ctx->pc = 0x111C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C20u;
        // 0x111c24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111C28u;
label_111c28:
    // 0x111c28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x111c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_111c2c:
    // 0x111c2c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x111c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_111c30:
    // 0x111c30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x111c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_111c34:
    // 0x111c34: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_111c38:
    if (ctx->pc == 0x111C38u) {
        ctx->pc = 0x111C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C34u;
        // 0x111c38: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111C3Cu;
        goto label_111c3c;
    }
    ctx->pc = 0x111C34u;
    {
        const bool branch_taken_0x111c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x111C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C34u;
        // 0x111c38: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111c34) {
            ctx->pc = 0x111C54u;
            goto label_111c54;
        }
    }
    ctx->pc = 0x111C3Cu;
label_111c3c:
    // 0x111c3c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x111c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_111c40:
    // 0x111c40: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x111c40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_111c44:
    // 0x111c44: 0x8c5c9a40  lw          $gp, -0x65C0($v0)
    ctx->pc = 0x111c44u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941248)));
label_111c48:
    // 0x111c48: 0x60f809  jalr        $v1
label_111c4c:
    if (ctx->pc == 0x111C4Cu) {
        ctx->pc = 0x111C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C48u;
        // 0x111c4c: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111C50u;
        goto label_111c50;
    }
    ctx->pc = 0x111C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x111C50u);
        ctx->pc = 0x111C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C48u;
        // 0x111c4c: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111C48u, 0x111C50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111C50u;
label_111c50:
    // 0x111c50: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x111c50u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_111c54:
    // 0x111c54: 0xf  sync
    ctx->pc = 0x111c54u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_111c58:
    // 0x111c58: 0x42000038  ei
    ctx->pc = 0x111c58u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_111c5c:
    // 0x111c5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x111c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_111c60:
    // 0x111c60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x111c60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_111c64:
    // 0x111c64: 0x3e00008  jr          $ra
label_111c68:
    if (ctx->pc == 0x111C68u) {
        ctx->pc = 0x111C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C64u;
        // 0x111c68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111C6Cu;
        goto label_111c6c;
    }
    ctx->pc = 0x111C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C64u;
        // 0x111c68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111C6Cu;
label_111c6c:
    // 0x111c6c: 0x0  nop
    ctx->pc = 0x111c6cu;
    // NOP
    if (ctx->pc == 0x111c6cu) { ctx->pc = 0x111c70u; }
}
