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

// Function: sub_0030BDD0
// Address: 0x30bdd0 - 0x30bf00
void sub_0030BDD0_0x30bdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030BDD0_0x30bdd0");
#endif

    switch (ctx->pc) {
        case 0x30be10u: goto label_30be10;
        case 0x30be24u: goto label_30be24;
        case 0x30be34u: goto label_30be34;
        case 0x30be44u: goto label_30be44;
        case 0x30be50u: goto label_30be50;
        case 0x30be64u: goto label_30be64;
        case 0x30be70u: goto label_30be70;
        case 0x30be80u: goto label_30be80;
        case 0x30be90u: goto label_30be90;
        case 0x30bea0u: goto label_30bea0;
        case 0x30beb8u: goto label_30beb8;
        case 0x30beccu: goto label_30becc;
        case 0x30bee0u: goto label_30bee0;
        default: break;
    }

    ctx->pc = 0x30bdd0u;

label_30bdd0:
    // 0x30bdd0: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x30bdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x30bdd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30bdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30bdd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30bdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30bddc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30bddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30bde0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30bde0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bde4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30bde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30bde8: 0x8cb00014  lw          $s0, 0x14($a1)
    ctx->pc = 0x30bde8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x30bdec: 0x12000032  beqz        $s0, . + 4 + (0x32 << 2)
    ctx->pc = 0x30BDECu;
    {
        const bool branch_taken_0x30bdec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BDECu;
        // 0x30bdf0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bdec) {
            ctx->pc = 0x30BEB8u;
            goto label_30beb8;
        }
    }
    ctx->pc = 0x30BDF4u;
    // 0x30bdf4: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x30bdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x30bdf8: 0x50600030  beql        $v1, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x30BDF8u;
    {
        const bool branch_taken_0x30bdf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bdf8) {
            ctx->pc = 0x30BDFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30BDF8u;
            // 0x30bdfc: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30BEBCu;
            goto label_30bebc;
        }
    }
    ctx->pc = 0x30BE00u;
    // 0x30be00: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x30be00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x30be04: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x30be04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x30be08: 0xc040da4  jal         func_103690
    ctx->pc = 0x30BE08u;
    SET_GPR_U32(ctx, 31, 0x30BE10u);
    ctx->pc = 0x30BE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BE08u;
    // 0x30be0c: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103690u, 0x30BE08u, 0x30BE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BE10u;
label_30be10:
    // 0x30be10: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x30be10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x30be14: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x30be14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x30be18: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x30be18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x30be1c: 0xc040d06  jal         func_103418
    ctx->pc = 0x30BE1Cu;
    SET_GPR_U32(ctx, 31, 0x30BE24u);
    ctx->pc = 0x30BE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BE1Cu;
    // 0x30be20: 0x24460020  addiu       $a2, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103418u, 0x30BE1Cu, 0x30BE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BE24u;
label_30be24:
    // 0x30be24: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x30be24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x30be28: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x30be28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x30be2c: 0xc040da4  jal         func_103690
    ctx->pc = 0x30BE2Cu;
    SET_GPR_U32(ctx, 31, 0x30BE34u);
    ctx->pc = 0x30BE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BE2Cu;
    // 0x30be30: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103690u, 0x30BE2Cu, 0x30BE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BE34u;
label_30be34:
    // 0x30be34: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x30be34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x30be38: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x30be38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x30be3c: 0xc040d06  jal         func_103418
    ctx->pc = 0x30BE3Cu;
    SET_GPR_U32(ctx, 31, 0x30BE44u);
    ctx->pc = 0x30BE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BE3Cu;
    // 0x30be40: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103418u, 0x30BE3Cu, 0x30BE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BE44u;
label_30be44:
    // 0x30be44: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x30be44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x30be48: 0xc040da4  jal         func_103690
    ctx->pc = 0x30BE48u;
    SET_GPR_U32(ctx, 31, 0x30BE50u);
    ctx->pc = 0x30BE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BE48u;
    // 0x30be4c: 0x26250060  addiu       $a1, $s1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103690u, 0x30BE48u, 0x30BE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BE50u;
label_30be50:
    // 0x30be50: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x30be50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x30be54: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x30be54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30be58: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x30be58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x30be5c: 0xc040d06  jal         func_103418
    ctx->pc = 0x30BE5Cu;
    SET_GPR_U32(ctx, 31, 0x30BE64u);
    ctx->pc = 0x30BE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BE5Cu;
    // 0x30be60: 0x24460060  addiu       $a2, $v0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103418u, 0x30BE5Cu, 0x30BE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BE64u;
label_30be64:
    // 0x30be64: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x30be64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30be68: 0xc040da4  jal         func_103690
    ctx->pc = 0x30BE68u;
    SET_GPR_U32(ctx, 31, 0x30BE70u);
    ctx->pc = 0x30BE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BE68u;
    // 0x30be6c: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103690u, 0x30BE68u, 0x30BE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BE70u;
label_30be70:
    // 0x30be70: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x30be70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x30be74: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x30be74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x30be78: 0xc040d06  jal         func_103418
    ctx->pc = 0x30BE78u;
    SET_GPR_U32(ctx, 31, 0x30BE80u);
    ctx->pc = 0x30BE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BE78u;
    // 0x30be7c: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103418u, 0x30BE78u, 0x30BE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BE80u;
label_30be80:
    // 0x30be80: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x30be80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x30be84: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x30be84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30be88: 0xc040d06  jal         func_103418
    ctx->pc = 0x30BE88u;
    SET_GPR_U32(ctx, 31, 0x30BE90u);
    ctx->pc = 0x30BE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BE88u;
    // 0x30be8c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103418u, 0x30BE88u, 0x30BE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BE90u;
label_30be90:
    // 0x30be90: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x30be90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x30be94: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x30be94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30be98: 0xc040d06  jal         func_103418
    ctx->pc = 0x30BE98u;
    SET_GPR_U32(ctx, 31, 0x30BEA0u);
    ctx->pc = 0x30BE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BE98u;
    // 0x30be9c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103418u, 0x30BE98u, 0x30BEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BEA0u;
label_30bea0:
    // 0x30bea0: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x30bea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x30bea4: 0x8e060050  lw          $a2, 0x50($s0)
    ctx->pc = 0x30bea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x30bea8: 0x8e07004c  lw          $a3, 0x4C($s0)
    ctx->pc = 0x30bea8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x30beac: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x30beacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30beb0: 0xc0c2f30  jal         func_30BCC0
    ctx->pc = 0x30BEB0u;
    SET_GPR_U32(ctx, 31, 0x30BEB8u);
    ctx->pc = 0x30BEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BEB0u;
    // 0x30beb4: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BCC0u, 0x30BEB0u, 0x30BEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BEB8u;
label_30beb8:
    // 0x30beb8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x30beb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_30bebc:
    // 0x30bebc: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x30BEBCu;
    {
        const bool branch_taken_0x30bebc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bebc) {
            ctx->pc = 0x30BEC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30BEBCu;
            // 0x30bec0: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30BED0u;
            goto label_30bed0;
        }
    }
    ctx->pc = 0x30BEC4u;
    // 0x30bec4: 0xc0c2f74  jal         func_30BDD0
    ctx->pc = 0x30BEC4u;
    SET_GPR_U32(ctx, 31, 0x30BECCu);
    ctx->pc = 0x30BEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BEC4u;
    // 0x30bec8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BDD0u;
    goto label_30bdd0;
    ctx->pc = 0x30BECCu;
label_30becc:
    // 0x30becc: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x30beccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_30bed0:
    // 0x30bed0: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x30BED0u;
    {
        const bool branch_taken_0x30bed0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bed0) {
            ctx->pc = 0x30BED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30BED0u;
            // 0x30bed4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30BEE4u;
            goto label_30bee4;
        }
    }
    ctx->pc = 0x30BED8u;
    // 0x30bed8: 0xc0c2f74  jal         func_30BDD0
    ctx->pc = 0x30BED8u;
    SET_GPR_U32(ctx, 31, 0x30BEE0u);
    ctx->pc = 0x30BEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BED8u;
    // 0x30bedc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BDD0u;
    goto label_30bdd0;
    ctx->pc = 0x30BEE0u;
label_30bee0:
    // 0x30bee0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30bee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_30bee4:
    // 0x30bee4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30bee4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30bee8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30bee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30beec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30beecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30bef0: 0x3e00008  jr          $ra
    ctx->pc = 0x30BEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BEF0u;
        // 0x30bef4: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30BEF8u;
    // 0x30bef8: 0x0  nop
    ctx->pc = 0x30bef8u;
    // NOP
    // 0x30befc: 0x0  nop
    ctx->pc = 0x30befcu;
    // NOP
    if (ctx->pc == 0x30befcu) { ctx->pc = 0x30bf00u; }
}
