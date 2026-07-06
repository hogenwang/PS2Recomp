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

// Function: sub_0034BFA0
// Address: 0x34bfa0 - 0x34c750
void sub_0034BFA0_0x34bfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034BFA0_0x34bfa0");
#endif

    switch (ctx->pc) {
        case 0x34bff0u: goto label_34bff0;
        case 0x34c008u: goto label_34c008;
        case 0x34c034u: goto label_34c034;
        case 0x34c048u: goto label_34c048;
        case 0x34c05cu: goto label_34c05c;
        case 0x34c078u: goto label_34c078;
        case 0x34c094u: goto label_34c094;
        case 0x34c0b0u: goto label_34c0b0;
        case 0x34c0fcu: goto label_34c0fc;
        case 0x34c110u: goto label_34c110;
        case 0x34c124u: goto label_34c124;
        case 0x34c138u: goto label_34c138;
        case 0x34c14cu: goto label_34c14c;
        case 0x34c160u: goto label_34c160;
        case 0x34c174u: goto label_34c174;
        case 0x34c188u: goto label_34c188;
        case 0x34c19cu: goto label_34c19c;
        case 0x34c1d4u: goto label_34c1d4;
        case 0x34c1e8u: goto label_34c1e8;
        case 0x34c218u: goto label_34c218;
        case 0x34c22cu: goto label_34c22c;
        case 0x34c270u: goto label_34c270;
        case 0x34c288u: goto label_34c288;
        case 0x34c290u: goto label_34c290;
        case 0x34c2acu: goto label_34c2ac;
        case 0x34c2d0u: goto label_34c2d0;
        case 0x34c330u: goto label_34c330;
        case 0x34c33cu: goto label_34c33c;
        case 0x34c37cu: goto label_34c37c;
        case 0x34c388u: goto label_34c388;
        case 0x34c3a4u: goto label_34c3a4;
        case 0x34c3b0u: goto label_34c3b0;
        case 0x34c424u: goto label_34c424;
        case 0x34c430u: goto label_34c430;
        case 0x34c47cu: goto label_34c47c;
        case 0x34c484u: goto label_34c484;
        case 0x34c488u: goto label_34c488;
        case 0x34c4a4u: goto label_34c4a4;
        case 0x34c4b0u: goto label_34c4b0;
        case 0x34c4ccu: goto label_34c4cc;
        case 0x34c504u: goto label_34c504;
        case 0x34c520u: goto label_34c520;
        case 0x34c52cu: goto label_34c52c;
        case 0x34c554u: goto label_34c554;
        case 0x34c578u: goto label_34c578;
        case 0x34c594u: goto label_34c594;
        case 0x34c5b4u: goto label_34c5b4;
        case 0x34c5f4u: goto label_34c5f4;
        case 0x34c600u: goto label_34c600;
        case 0x34c614u: goto label_34c614;
        case 0x34c62cu: goto label_34c62c;
        case 0x34c64cu: goto label_34c64c;
        case 0x34c65cu: goto label_34c65c;
        case 0x34c688u: goto label_34c688;
        case 0x34c6b4u: goto label_34c6b4;
        case 0x34c6d0u: goto label_34c6d0;
        case 0x34c6f0u: goto label_34c6f0;
        case 0x34c710u: goto label_34c710;
        case 0x34c740u: goto label_34c740;
        default: break;
    }

    ctx->pc = 0x34bfa0u;

    // 0x34bfa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34bfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34bfa4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34bfa8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34bfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34bfac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34bfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34bfb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34bfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34bfb4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34bfb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bfb8: 0x1083008b  beq         $a0, $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x34BFB8u;
    {
        const bool branch_taken_0x34bfb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x34BFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BFB8u;
        // 0x34bfbc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bfb8) {
            ctx->pc = 0x34C1E8u;
            goto label_34c1e8;
        }
    }
    ctx->pc = 0x34BFC0u;
    // 0x34bfc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34bfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34bfc4: 0x10830077  beq         $a0, $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x34BFC4u;
    {
        const bool branch_taken_0x34bfc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34bfc4) {
            ctx->pc = 0x34C1A4u;
            goto label_34c1a4;
        }
    }
    ctx->pc = 0x34BFCCu;
    // 0x34bfcc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34BFCCu;
    {
        const bool branch_taken_0x34bfcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bfcc) {
            ctx->pc = 0x34BFDCu;
            goto label_34bfdc;
        }
    }
    ctx->pc = 0x34BFD4u;
    // 0x34bfd4: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x34BFD4u;
    {
        const bool branch_taken_0x34bfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BFD4u;
        // 0x34bfd8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bfd4) {
            ctx->pc = 0x34C230u;
            goto label_34c230;
        }
    }
    ctx->pc = 0x34BFDCu;
label_34bfdc:
    // 0x34bfdc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34bfe0: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x34bfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x34bfe4: 0x8c444078  lw          $a0, 0x4078($v0)
    ctx->pc = 0x34bfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16504)));
    // 0x34bfe8: 0xc049c48  jal         func_127120
    ctx->pc = 0x34BFE8u;
    SET_GPR_U32(ctx, 31, 0x34BFF0u);
    ctx->pc = 0x34BFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BFE8u;
    // 0x34bfec: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x34BFE8u, 0x34BFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BFF0u;
label_34bff0:
    // 0x34bff0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34bff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34bff4: 0x26050024  addiu       $a1, $s0, 0x24
    ctx->pc = 0x34bff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x34bff8: 0x8c424078  lw          $v0, 0x4078($v0)
    ctx->pc = 0x34bff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16504)));
    // 0x34bffc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x34bffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34c000: 0xc049c48  jal         func_127120
    ctx->pc = 0x34C000u;
    SET_GPR_U32(ctx, 31, 0x34C008u);
    ctx->pc = 0x34C004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C000u;
    // 0x34c004: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x34C000u, 0x34C008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C008u;
label_34c008:
    // 0x34c008: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34c008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34c00c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x34c00cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34c010: 0x8c634078  lw          $v1, 0x4078($v1)
    ctx->pc = 0x34c010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16504)));
    // 0x34c014: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34c014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34c018: 0x26050044  addiu       $a1, $s0, 0x44
    ctx->pc = 0x34c018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x34c01c: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x34c01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x34c020: 0xac660058  sw          $a2, 0x58($v1)
    ctx->pc = 0x34c020u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 6));
    // 0x34c024: 0x8c424078  lw          $v0, 0x4078($v0)
    ctx->pc = 0x34c024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16504)));
    // 0x34c028: 0xac51005c  sw          $s1, 0x5C($v0)
    ctx->pc = 0x34c028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 17));
    // 0x34c02c: 0xc0d2ea8  jal         func_34BAA0
    ctx->pc = 0x34C02Cu;
    SET_GPR_U32(ctx, 31, 0x34C034u);
    ctx->pc = 0x34C030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C02Cu;
    // 0x34c030: 0xafa5003c  sw          $a1, 0x3C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BAA0u, 0x34C02Cu, 0x34C034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C034u;
label_34c034:
    // 0x34c034: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34c034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34c038: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x34c038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x34c03c: 0x8c634078  lw          $v1, 0x4078($v1)
    ctx->pc = 0x34c03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16504)));
    // 0x34c040: 0xc0d2ea8  jal         func_34BAA0
    ctx->pc = 0x34C040u;
    SET_GPR_U32(ctx, 31, 0x34C048u);
    ctx->pc = 0x34C044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C040u;
    // 0x34c044: 0xac620040  sw          $v0, 0x40($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BAA0u, 0x34C040u, 0x34C048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C048u;
label_34c048:
    // 0x34c048: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34c048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34c04c: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x34c04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x34c050: 0x8c634078  lw          $v1, 0x4078($v1)
    ctx->pc = 0x34c050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16504)));
    // 0x34c054: 0xc0d2ea8  jal         func_34BAA0
    ctx->pc = 0x34C054u;
    SET_GPR_U32(ctx, 31, 0x34C05Cu);
    ctx->pc = 0x34C058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C054u;
    // 0x34c058: 0xac620044  sw          $v0, 0x44($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BAA0u, 0x34C054u, 0x34C05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C05Cu;
label_34c05c:
    // 0x34c05c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34c05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34c060: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x34c060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x34c064: 0x8c654078  lw          $a1, 0x4078($v1)
    ctx->pc = 0x34c064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16504)));
    // 0x34c068: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x34c068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x34c06c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x34c06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34c070: 0xc0d2ea8  jal         func_34BAA0
    ctx->pc = 0x34C070u;
    SET_GPR_U32(ctx, 31, 0x34C078u);
    ctx->pc = 0x34C074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C070u;
    // 0x34c074: 0xaca20048  sw          $v0, 0x48($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BAA0u, 0x34C070u, 0x34C078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C078u;
label_34c078:
    // 0x34c078: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34c078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34c07c: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x34c07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x34c080: 0x8c654078  lw          $a1, 0x4078($v1)
    ctx->pc = 0x34c080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16504)));
    // 0x34c084: 0x8ca3004c  lw          $v1, 0x4C($a1)
    ctx->pc = 0x34c084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x34c088: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x34c088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34c08c: 0xc0d2ea8  jal         func_34BAA0
    ctx->pc = 0x34C08Cu;
    SET_GPR_U32(ctx, 31, 0x34C094u);
    ctx->pc = 0x34C090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C08Cu;
    // 0x34c090: 0xaca2004c  sw          $v0, 0x4C($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BAA0u, 0x34C08Cu, 0x34C094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C094u;
label_34c094:
    // 0x34c094: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34c094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34c098: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x34c098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x34c09c: 0x8c654078  lw          $a1, 0x4078($v1)
    ctx->pc = 0x34c09cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16504)));
    // 0x34c0a0: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x34c0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x34c0a4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x34c0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34c0a8: 0xc0d2ea8  jal         func_34BAA0
    ctx->pc = 0x34C0A8u;
    SET_GPR_U32(ctx, 31, 0x34C0B0u);
    ctx->pc = 0x34C0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C0A8u;
    // 0x34c0ac: 0xaca20050  sw          $v0, 0x50($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BAA0u, 0x34C0A8u, 0x34C0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C0B0u;
label_34c0b0:
    // 0x34c0b0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x34c0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x34c0b4: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34c0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34c0b8: 0x8c854078  lw          $a1, 0x4078($a0)
    ctx->pc = 0x34c0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16504)));
    // 0x34c0bc: 0x8ca40054  lw          $a0, 0x54($a1)
    ctx->pc = 0x34c0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x34c0c0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x34c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x34c0c4: 0xaca20054  sw          $v0, 0x54($a1)
    ctx->pc = 0x34c0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 2));
    // 0x34c0c8: 0x8c624078  lw          $v0, 0x4078($v1)
    ctx->pc = 0x34c0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16504)));
    // 0x34c0cc: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x34c0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x34c0d0: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x34c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x34c0d4: 0x2c410064  sltiu       $at, $v0, 0x64
    ctx->pc = 0x34c0d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x34c0d8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x34C0D8u;
    {
        const bool branch_taken_0x34c0d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c0d8) {
            ctx->pc = 0x34C0E8u;
            goto label_34c0e8;
        }
    }
    ctx->pc = 0x34C0E0u;
    // 0x34c0e0: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x34c0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x34c0e4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34c0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_34c0e8:
    // 0x34c0e8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34c0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34c0ec: 0x8c424078  lw          $v0, 0x4078($v0)
    ctx->pc = 0x34c0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16504)));
    // 0x34c0f0: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x34c0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x34c0f4: 0xc0835b0  jal         func_20D6C0
    ctx->pc = 0x34C0F4u;
    SET_GPR_U32(ctx, 31, 0x34C0FCu);
    ctx->pc = 0x34C0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C0F4u;
    // 0x34c0f8: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D6C0u, 0x34C0F4u, 0x34C0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C0FCu;
label_34c0fc:
    // 0x34c0fc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34c0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34c100: 0x8c424078  lw          $v0, 0x4078($v0)
    ctx->pc = 0x34c100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16504)));
    // 0x34c104: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x34c104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x34c108: 0xc083614  jal         func_20D850
    ctx->pc = 0x34C108u;
    SET_GPR_U32(ctx, 31, 0x34C110u);
    ctx->pc = 0x34C10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C108u;
    // 0x34c10c: 0x24440090  addiu       $a0, $v0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D850u, 0x34C108u, 0x34C110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C110u;
label_34c110:
    // 0x34c110: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34c110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34c114: 0x8c424078  lw          $v0, 0x4078($v0)
    ctx->pc = 0x34c114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16504)));
    // 0x34c118: 0x8c450044  lw          $a1, 0x44($v0)
    ctx->pc = 0x34c118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x34c11c: 0xc083614  jal         func_20D850
    ctx->pc = 0x34C11Cu;
    SET_GPR_U32(ctx, 31, 0x34C124u);
    ctx->pc = 0x34C120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C11Cu;
    // 0x34c120: 0x244400b0  addiu       $a0, $v0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D850u, 0x34C11Cu, 0x34C124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C124u;
label_34c124:
    // 0x34c124: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34c124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34c128: 0x8c424078  lw          $v0, 0x4078($v0)
    ctx->pc = 0x34c128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16504)));
    // 0x34c12c: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x34c12cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x34c130: 0xc083614  jal         func_20D850
    ctx->pc = 0x34C130u;
    SET_GPR_U32(ctx, 31, 0x34C138u);
    ctx->pc = 0x34C134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C130u;
    // 0x34c134: 0x244400d0  addiu       $a0, $v0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D850u, 0x34C130u, 0x34C138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C138u;
label_34c138:
    // 0x34c138: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34c138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34c13c: 0x8c424078  lw          $v0, 0x4078($v0)
    ctx->pc = 0x34c13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16504)));
    // 0x34c140: 0x8c45004c  lw          $a1, 0x4C($v0)
    ctx->pc = 0x34c140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x34c144: 0xc083614  jal         func_20D850
    ctx->pc = 0x34C144u;
    SET_GPR_U32(ctx, 31, 0x34C14Cu);
    ctx->pc = 0x34C148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C144u;
    // 0x34c148: 0x244400f0  addiu       $a0, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D850u, 0x34C144u, 0x34C14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C14Cu;
label_34c14c:
    // 0x34c14c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34c14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34c150: 0x8c424078  lw          $v0, 0x4078($v0)
    ctx->pc = 0x34c150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16504)));
    // 0x34c154: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x34c154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x34c158: 0xc083614  jal         func_20D850
    ctx->pc = 0x34C158u;
    SET_GPR_U32(ctx, 31, 0x34C160u);
    ctx->pc = 0x34C15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C158u;
    // 0x34c15c: 0x24440110  addiu       $a0, $v0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D850u, 0x34C158u, 0x34C160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C160u;
label_34c160:
    // 0x34c160: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34c160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34c164: 0x8c424078  lw          $v0, 0x4078($v0)
    ctx->pc = 0x34c164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16504)));
    // 0x34c168: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x34c168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x34c16c: 0xc083614  jal         func_20D850
    ctx->pc = 0x34C16Cu;
    SET_GPR_U32(ctx, 31, 0x34C174u);
    ctx->pc = 0x34C170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C16Cu;
    // 0x34c170: 0x24440130  addiu       $a0, $v0, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D850u, 0x34C16Cu, 0x34C174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C174u;
label_34c174:
    // 0x34c174: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34c174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34c178: 0x8c424078  lw          $v0, 0x4078($v0)
    ctx->pc = 0x34c178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16504)));
    // 0x34c17c: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x34c17cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x34c180: 0xc083614  jal         func_20D850
    ctx->pc = 0x34C180u;
    SET_GPR_U32(ctx, 31, 0x34C188u);
    ctx->pc = 0x34C184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C180u;
    // 0x34c184: 0x24440150  addiu       $a0, $v0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D850u, 0x34C180u, 0x34C188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C188u;
label_34c188:
    // 0x34c188: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34c188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34c18c: 0x8c424078  lw          $v0, 0x4078($v0)
    ctx->pc = 0x34c18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16504)));
    // 0x34c190: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x34c190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x34c194: 0xc083614  jal         func_20D850
    ctx->pc = 0x34C194u;
    SET_GPR_U32(ctx, 31, 0x34C19Cu);
    ctx->pc = 0x34C198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C194u;
    // 0x34c198: 0x24440170  addiu       $a0, $v0, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D850u, 0x34C194u, 0x34C19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C19Cu;
label_34c19c:
    // 0x34c19c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x34C19Cu;
    {
        const bool branch_taken_0x34c19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c19c) {
            ctx->pc = 0x34C22Cu;
            goto label_34c22c;
        }
    }
    ctx->pc = 0x34C1A4u;
label_34c1a4:
    // 0x34c1a4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34c1a8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x34c1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34c1ac: 0x8c444078  lw          $a0, 0x4078($v0)
    ctx->pc = 0x34c1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16504)));
    // 0x34c1b0: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34c1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34c1b4: 0xac850060  sw          $a1, 0x60($a0)
    ctx->pc = 0x34c1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 5));
    // 0x34c1b8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34c1bc: 0x8c634078  lw          $v1, 0x4078($v1)
    ctx->pc = 0x34c1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16504)));
    // 0x34c1c0: 0xac710064  sw          $s1, 0x64($v1)
    ctx->pc = 0x34c1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 17));
    // 0x34c1c4: 0x8c424078  lw          $v0, 0x4078($v0)
    ctx->pc = 0x34c1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16504)));
    // 0x34c1c8: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x34c1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x34c1cc: 0xc083614  jal         func_20D850
    ctx->pc = 0x34C1CCu;
    SET_GPR_U32(ctx, 31, 0x34C1D4u);
    ctx->pc = 0x34C1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C1CCu;
    // 0x34c1d0: 0x244401d0  addiu       $a0, $v0, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D850u, 0x34C1CCu, 0x34C1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C1D4u;
label_34c1d4:
    // 0x34c1d4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34c1d8: 0x8c424078  lw          $v0, 0x4078($v0)
    ctx->pc = 0x34c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16504)));
    // 0x34c1dc: 0x8c450064  lw          $a1, 0x64($v0)
    ctx->pc = 0x34c1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x34c1e0: 0xc083614  jal         func_20D850
    ctx->pc = 0x34C1E0u;
    SET_GPR_U32(ctx, 31, 0x34C1E8u);
    ctx->pc = 0x34C1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C1E0u;
    // 0x34c1e4: 0x244401f0  addiu       $a0, $v0, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D850u, 0x34C1E0u, 0x34C1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C1E8u;
label_34c1e8:
    // 0x34c1e8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34c1ec: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x34c1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34c1f0: 0x8c444078  lw          $a0, 0x4078($v0)
    ctx->pc = 0x34c1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16504)));
    // 0x34c1f4: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34c1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34c1f8: 0xac850068  sw          $a1, 0x68($a0)
    ctx->pc = 0x34c1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 5));
    // 0x34c1fc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34c200: 0x8c634078  lw          $v1, 0x4078($v1)
    ctx->pc = 0x34c200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16504)));
    // 0x34c204: 0xac71006c  sw          $s1, 0x6C($v1)
    ctx->pc = 0x34c204u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 17));
    // 0x34c208: 0x8c424078  lw          $v0, 0x4078($v0)
    ctx->pc = 0x34c208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16504)));
    // 0x34c20c: 0x8c450068  lw          $a1, 0x68($v0)
    ctx->pc = 0x34c20cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x34c210: 0xc083614  jal         func_20D850
    ctx->pc = 0x34C210u;
    SET_GPR_U32(ctx, 31, 0x34C218u);
    ctx->pc = 0x34C214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C210u;
    // 0x34c214: 0x24440190  addiu       $a0, $v0, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D850u, 0x34C210u, 0x34C218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C218u;
label_34c218:
    // 0x34c218: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34c218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34c21c: 0x8c424078  lw          $v0, 0x4078($v0)
    ctx->pc = 0x34c21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16504)));
    // 0x34c220: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x34c220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x34c224: 0xc083614  jal         func_20D850
    ctx->pc = 0x34C224u;
    SET_GPR_U32(ctx, 31, 0x34C22Cu);
    ctx->pc = 0x34C228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C224u;
    // 0x34c228: 0x244401b0  addiu       $a0, $v0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D850u, 0x34C224u, 0x34C22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C22Cu;
label_34c22c:
    // 0x34c22c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34c22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34c230:
    // 0x34c230: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34c230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34c234: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34c234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34c238: 0x3e00008  jr          $ra
    ctx->pc = 0x34C238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C238u;
        // 0x34c23c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34C240u;
    // 0x34c240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34c240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34c244: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34c244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34c248: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34c248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34c24c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34c24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34c250: 0x9450be90  lhu         $s0, -0x4170($v0)
    ctx->pc = 0x34c250u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950544)));
    // 0x34c254: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34c254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34c258: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34C258u;
    {
        const bool branch_taken_0x34c258 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x34C25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C258u;
        // 0x34c25c: 0xa440be92  sh          $zero, -0x416E($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294950546), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c258) {
            ctx->pc = 0x34C278u;
            goto label_34c278;
        }
    }
    ctx->pc = 0x34C260u;
    // 0x34c260: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34c260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34c264: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34c264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c268: 0xc082678  jal         func_2099E0
    ctx->pc = 0x34C268u;
    SET_GPR_U32(ctx, 31, 0x34C270u);
    ctx->pc = 0x34C26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C268u;
    // 0x34c26c: 0x2484b530  addiu       $a0, $a0, -0x4AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x34C268u, 0x34C270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C270u;
label_34c270:
    // 0x34c270: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x34C270u;
    {
        const bool branch_taken_0x34c270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c270) {
            ctx->pc = 0x34C288u;
            goto label_34c288;
        }
    }
    ctx->pc = 0x34C278u;
label_34c278:
    // 0x34c278: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34c278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34c27c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34c27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c280: 0xc082678  jal         func_2099E0
    ctx->pc = 0x34C280u;
    SET_GPR_U32(ctx, 31, 0x34C288u);
    ctx->pc = 0x34C284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C280u;
    // 0x34c284: 0x2484b6c0  addiu       $a0, $a0, -0x4940 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x34C280u, 0x34C288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C288u;
label_34c288:
    // 0x34c288: 0xc0d0c20  jal         func_343080
    ctx->pc = 0x34C288u;
    SET_GPR_U32(ctx, 31, 0x34C290u);
    ctx->pc = 0x343080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343080u, 0x34C288u, 0x34C290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C290u;
label_34c290:
    // 0x34c290: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34c290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34c294: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34c294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34c298: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34c298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34c29c: 0xa470be98  sh          $s0, -0x4168($v1)
    ctx->pc = 0x34c29cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294950552), (uint16_t)GPR_U32(ctx, 16));
    // 0x34c2a0: 0x2484c2c0  addiu       $a0, $a0, -0x3D40
    ctx->pc = 0x34c2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951616));
    // 0x34c2a4: 0xc0d0d18  jal         func_343460
    ctx->pc = 0x34C2A4u;
    SET_GPR_U32(ctx, 31, 0x34C2ACu);
    ctx->pc = 0x34C2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C2A4u;
    // 0x34c2a8: 0xa440be9a  sh          $zero, -0x4166($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950554), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343460u, 0x34C2A4u, 0x34C2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C2ACu;
label_34c2ac:
    // 0x34c2ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34c2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34c2b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34c2b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34c2b4: 0x3e00008  jr          $ra
    ctx->pc = 0x34C2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C2B4u;
        // 0x34c2b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34C2BCu;
    // 0x34c2bc: 0x0  nop
    ctx->pc = 0x34c2bcu;
    // NOP
    // 0x34c2c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34c2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34c2c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34c2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34c2c8: 0xc0d0c20  jal         func_343080
    ctx->pc = 0x34C2C8u;
    SET_GPR_U32(ctx, 31, 0x34C2D0u);
    ctx->pc = 0x343080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343080u, 0x34C2C8u, 0x34C2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C2D0u;
label_34c2d0:
    // 0x34c2d0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34c2d4: 0x3c0301df  lui         $v1, 0x1DF
    ctx->pc = 0x34c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)479 << 16));
    // 0x34c2d8: 0x9446be90  lhu         $a2, -0x4170($v0)
    ctx->pc = 0x34c2d8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950544)));
    // 0x34c2dc: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x34c2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x34c2e0: 0x8c67dd80  lw          $a3, -0x2280($v1)
    ctx->pc = 0x34c2e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958464)));
    // 0x34c2e4: 0x24a55230  addiu       $a1, $a1, 0x5230
    ctx->pc = 0x34c2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21040));
    // 0x34c2e8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34c2ec: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x34c2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x34c2f0: 0x9444be92  lhu         $a0, -0x416E($v0)
    ctx->pc = 0x34c2f0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950546)));
    // 0x34c2f4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x34c2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x34c2f8: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x34c2f8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34c2fc: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x34c2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x34c300: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x34c300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x34c304: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x34c304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x34c308: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34c308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34c30c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34c30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34c310: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x34c310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x34c314: 0x24053530  addiu       $a1, $zero, 0x3530
    ctx->pc = 0x34c314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13616));
    // 0x34c318: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x34c318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x34c31c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x34c31cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34c320: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x34c320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34c324: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x34c324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34c328: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34C328u;
    SET_GPR_U32(ctx, 31, 0x34C330u);
    ctx->pc = 0x34C32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C328u;
    // 0x34c32c: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FE58u, 0x34C328u, 0x34C330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C330u;
label_34c330:
    // 0x34c330: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34c330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34c334: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x34C334u;
    SET_GPR_U32(ctx, 31, 0x34C33Cu);
    ctx->pc = 0x34C338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C334u;
    // 0x34c338: 0x2484c350  addiu       $a0, $a0, -0x3CB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347260u, 0x34C334u, 0x34C33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C33Cu;
label_34c33c:
    // 0x34c33c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34c33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34c340: 0x3e00008  jr          $ra
    ctx->pc = 0x34C340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C340u;
        // 0x34c344: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34C348u;
    // 0x34c348: 0x0  nop
    ctx->pc = 0x34c348u;
    // NOP
    // 0x34c34c: 0x0  nop
    ctx->pc = 0x34c34cu;
    // NOP
    // 0x34c350: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34c350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34c354: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34c354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34c358: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34c358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34c35c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34c35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c360: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34c360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34c364: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34c364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34c368: 0x9442be90  lhu         $v0, -0x4170($v0)
    ctx->pc = 0x34c368u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950544)));
    // 0x34c36c: 0x3c1001df  lui         $s0, 0x1DF
    ctx->pc = 0x34c36cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)479 << 16));
    // 0x34c370: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x34C370u;
    {
        const bool branch_taken_0x34c370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x34C374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C370u;
        // 0x34c374: 0x2610ddc0  addiu       $s0, $s0, -0x2240 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c370) {
            ctx->pc = 0x34C3A0u;
            goto label_34c3a0;
        }
    }
    ctx->pc = 0x34C378u;
    // 0x34c378: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34c378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34c37c:
    // 0x34c37c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34c37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c380: 0xc0d2f78  jal         func_34BDE0
    ctx->pc = 0x34C380u;
    SET_GPR_U32(ctx, 31, 0x34C388u);
    ctx->pc = 0x34C384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C380u;
    // 0x34c384: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BDE0u, 0x34C380u, 0x34C388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C388u;
label_34c388:
    // 0x34c388: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x34c388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x34c38c: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x34c38cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x34c390: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34C390u;
    {
        const bool branch_taken_0x34c390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34C394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C390u;
        // 0x34c394: 0x26100074  addiu       $s0, $s0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c390) {
            ctx->pc = 0x34C37Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34c37c;
        }
    }
    ctx->pc = 0x34C398u;
    // 0x34c398: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x34C398u;
    {
        const bool branch_taken_0x34c398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c398) {
            ctx->pc = 0x34C3C0u;
            goto label_34c3c0;
        }
    }
    ctx->pc = 0x34C3A0u;
label_34c3a0:
    // 0x34c3a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34c3a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34c3a4:
    // 0x34c3a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34c3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c3a8: 0xc0d2f0c  jal         func_34BC30
    ctx->pc = 0x34C3A8u;
    SET_GPR_U32(ctx, 31, 0x34C3B0u);
    ctx->pc = 0x34C3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C3A8u;
    // 0x34c3ac: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BC30u, 0x34C3A8u, 0x34C3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C3B0u;
label_34c3b0:
    // 0x34c3b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x34c3b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x34c3b4: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x34c3b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x34c3b8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34C3B8u;
    {
        const bool branch_taken_0x34c3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C3B8u;
        // 0x34c3bc: 0x26100074  addiu       $s0, $s0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c3b8) {
            ctx->pc = 0x34C3A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34c3a4;
        }
    }
    ctx->pc = 0x34C3C0u;
label_34c3c0:
    // 0x34c3c0: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34c3c4: 0x8c47dd80  lw          $a3, -0x2280($v0)
    ctx->pc = 0x34c3c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x34c3c8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x34c3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x34c3cc: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34c3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34c3d0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x34c3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x34c3d4: 0xafa4003c  sw          $a0, 0x3C($sp)
    ctx->pc = 0x34c3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
    // 0x34c3d8: 0x24a55230  addiu       $a1, $a1, 0x5230
    ctx->pc = 0x34c3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21040));
    // 0x34c3dc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34c3e0: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x34c3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x34c3e4: 0x9446be90  lhu         $a2, -0x4170($v0)
    ctx->pc = 0x34c3e4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950544)));
    // 0x34c3e8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x34c3e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34c3ec: 0x9463be92  lhu         $v1, -0x416E($v1)
    ctx->pc = 0x34c3ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950546)));
    // 0x34c3f0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34c3f4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x34c3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x34c3f8: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x34c3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x34c3fc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x34c3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34c400: 0x90a80000  lbu         $t0, 0x0($a1)
    ctx->pc = 0x34c400u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34c404: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x34c404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34c408: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34c408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34c40c: 0x24053530  addiu       $a1, $zero, 0x3530
    ctx->pc = 0x34c40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13616));
    // 0x34c410: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34c410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34c414: 0xafa80034  sw          $t0, 0x34($sp)
    ctx->pc = 0x34c414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 8));
    // 0x34c418: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x34c418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x34c41c: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34C41Cu;
    SET_GPR_U32(ctx, 31, 0x34C424u);
    ctx->pc = 0x34C420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C41Cu;
    // 0x34c420: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FE58u, 0x34C41Cu, 0x34C424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C424u;
label_34c424:
    // 0x34c424: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34c424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34c428: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x34C428u;
    SET_GPR_U32(ctx, 31, 0x34C430u);
    ctx->pc = 0x34C42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C428u;
    // 0x34c42c: 0x2484c450  addiu       $a0, $a0, -0x3BB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347260u, 0x34C428u, 0x34C430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C430u;
label_34c430:
    // 0x34c430: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34c430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34c434: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34c434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34c438: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34c438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34c43c: 0x3e00008  jr          $ra
    ctx->pc = 0x34C43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C43Cu;
        // 0x34c440: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34C444u;
    // 0x34c444: 0x0  nop
    ctx->pc = 0x34c444u;
    // NOP
    // 0x34c448: 0x0  nop
    ctx->pc = 0x34c448u;
    // NOP
    // 0x34c44c: 0x0  nop
    ctx->pc = 0x34c44cu;
    // NOP
    // 0x34c450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34c450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34c454: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34c454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34c458: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34c458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34c45c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34c45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c460: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34c460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34c464: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34c464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34c468: 0x9442be90  lhu         $v0, -0x4170($v0)
    ctx->pc = 0x34c468u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950544)));
    // 0x34c46c: 0x3c1001df  lui         $s0, 0x1DF
    ctx->pc = 0x34c46cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)479 << 16));
    // 0x34c470: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x34C470u;
    {
        const bool branch_taken_0x34c470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x34C474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C470u;
        // 0x34c474: 0x2610ddc0  addiu       $s0, $s0, -0x2240 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c470) {
            ctx->pc = 0x34C4A0u;
            goto label_34c4a0;
        }
    }
    ctx->pc = 0x34C478u;
    // 0x34c478: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34c478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34c47c:
    // 0x34c47c: 0x2624000a  addiu       $a0, $s1, 0xA
    ctx->pc = 0x34c47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
    // 0x34c480: 0xc0d2f78  jal         func_34BDE0
label_34c484:
    if (ctx->pc == 0x34C484u) {
        ctx->pc = 0x34C484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C480u;
        // 0x34c484: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34C488u;
        goto label_34c488;
    }
    ctx->pc = 0x34C480u;
    SET_GPR_U32(ctx, 31, 0x34C488u);
    ctx->pc = 0x34C484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C480u;
    // 0x34c484: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BDE0u, 0x34C480u, 0x34C488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C488u;
label_34c488:
    // 0x34c488: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x34c488u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x34c48c: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x34c48cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x34c490: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34C490u;
    {
        const bool branch_taken_0x34c490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34C494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C490u;
        // 0x34c494: 0x26100074  addiu       $s0, $s0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c490) {
            ctx->pc = 0x34C47Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34c47c;
        }
    }
    ctx->pc = 0x34C498u;
    // 0x34c498: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x34C498u;
    {
        const bool branch_taken_0x34c498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c498) {
            ctx->pc = 0x34C4C0u;
            goto label_34c4c0;
        }
    }
    ctx->pc = 0x34C4A0u;
label_34c4a0:
    // 0x34c4a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34c4a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34c4a4:
    // 0x34c4a4: 0x2624000a  addiu       $a0, $s1, 0xA
    ctx->pc = 0x34c4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
    // 0x34c4a8: 0xc0d2f0c  jal         func_34BC30
    ctx->pc = 0x34C4A8u;
    SET_GPR_U32(ctx, 31, 0x34C4B0u);
    ctx->pc = 0x34C4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C4A8u;
    // 0x34c4ac: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BC30u, 0x34C4A8u, 0x34C4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C4B0u;
label_34c4b0:
    // 0x34c4b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x34c4b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x34c4b4: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x34c4b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x34c4b8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34C4B8u;
    {
        const bool branch_taken_0x34c4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C4B8u;
        // 0x34c4bc: 0x26100074  addiu       $s0, $s0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c4b8) {
            ctx->pc = 0x34C4A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34c4a4;
        }
    }
    ctx->pc = 0x34C4C0u;
label_34c4c0:
    // 0x34c4c0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34c4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34c4c4: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34C4C4u;
    SET_GPR_U32(ctx, 31, 0x34C4CCu);
    ctx->pc = 0x34C4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C4C4u;
    // 0x34c4c8: 0x2484c4e0  addiu       $a0, $a0, -0x3B20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x34C4C4u, 0x34C4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C4CCu;
label_34c4cc:
    // 0x34c4cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34c4ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34c4d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34c4d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34c4d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34c4d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34c4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x34C4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C4D8u;
        // 0x34c4dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34C4E0u;
    // 0x34c4e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34c4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34c4e4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34c4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34c4e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34c4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34c4ec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34c4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34c4f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34c4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34c4f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34c4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34c4f8: 0x9450be92  lhu         $s0, -0x416E($v0)
    ctx->pc = 0x34c4f8u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950546)));
    // 0x34c4fc: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x34C4FCu;
    SET_GPR_U32(ctx, 31, 0x34C504u);
    ctx->pc = 0x34C500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C4FCu;
    // 0x34c500: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x34C4FCu, 0x34C504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C504u;
label_34c504:
    // 0x34c504: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x34c504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x34c508: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x34c508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x34c50c: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x34C50Cu;
    {
        const bool branch_taken_0x34c50c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c50c) {
            ctx->pc = 0x34C510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34C50Cu;
            // 0x34c510: 0x30830200  andi        $v1, $a0, 0x200 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34C540u;
            goto label_34c540;
        }
    }
    ctx->pc = 0x34C514u;
    // 0x34c514: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x34c514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x34c518: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34C518u;
    SET_GPR_U32(ctx, 31, 0x34C520u);
    ctx->pc = 0x34C51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C518u;
    // 0x34c51c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x34C518u, 0x34C520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C520u;
label_34c520:
    // 0x34c520: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34c520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34c524: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x34C524u;
    SET_GPR_U32(ctx, 31, 0x34C52Cu);
    ctx->pc = 0x34C528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C524u;
    // 0x34c528: 0x2484b3a0  addiu       $a0, $a0, -0x4C60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x34C524u, 0x34C52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C52Cu;
label_34c52c:
    // 0x34c52c: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x34c52cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x34c530: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34c530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34c534: 0x9484be90  lhu         $a0, -0x4170($a0)
    ctx->pc = 0x34c534u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294950544)));
    // 0x34c538: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x34C538u;
    {
        const bool branch_taken_0x34c538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C538u;
        // 0x34c53c: 0xac644378  sw          $a0, 0x4378($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 17272), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c538) {
            ctx->pc = 0x34C5B4u;
            goto label_34c5b4;
        }
    }
    ctx->pc = 0x34C540u;
label_34c540:
    // 0x34c540: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x34C540u;
    {
        const bool branch_taken_0x34c540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c540) {
            ctx->pc = 0x34C544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34C540u;
            // 0x34c544: 0x30830100  andi        $v1, $a0, 0x100 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34C580u;
            goto label_34c580;
        }
    }
    ctx->pc = 0x34C548u;
    // 0x34c548: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x34c548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x34c54c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34C54Cu;
    SET_GPR_U32(ctx, 31, 0x34C554u);
    ctx->pc = 0x34C550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C54Cu;
    // 0x34c550: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x34C54Cu, 0x34C554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C554u;
label_34c554:
    // 0x34c554: 0x2a010004  slti        $at, $s0, 0x4
    ctx->pc = 0x34c554u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x34c558: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x34C558u;
    {
        const bool branch_taken_0x34c558 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c558) {
            ctx->pc = 0x34C55Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34C558u;
            // 0x34c55c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34C564u;
            goto label_34c564;
        }
    }
    ctx->pc = 0x34C560u;
    // 0x34c560: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x34c560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_34c564:
    // 0x34c564: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34c564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34c568: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34c568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34c56c: 0x2484c2c0  addiu       $a0, $a0, -0x3D40
    ctx->pc = 0x34c56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951616));
    // 0x34c570: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34C570u;
    SET_GPR_U32(ctx, 31, 0x34C578u);
    ctx->pc = 0x34C574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C570u;
    // 0x34c574: 0xa443be92  sh          $v1, -0x416E($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950546), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x34C570u, 0x34C578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C578u;
label_34c578:
    // 0x34c578: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x34C578u;
    {
        const bool branch_taken_0x34c578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C578u;
        // 0x34c57c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c578) {
            ctx->pc = 0x34C5B8u;
            goto label_34c5b8;
        }
    }
    ctx->pc = 0x34C580u;
label_34c580:
    // 0x34c580: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x34C580u;
    {
        const bool branch_taken_0x34c580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c580) {
            ctx->pc = 0x34C5B4u;
            goto label_34c5b4;
        }
    }
    ctx->pc = 0x34C588u;
    // 0x34c588: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x34c588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x34c58c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34C58Cu;
    SET_GPR_U32(ctx, 31, 0x34C594u);
    ctx->pc = 0x34C590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C58Cu;
    // 0x34c590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x34C58Cu, 0x34C594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C594u;
label_34c594:
    // 0x34c594: 0x52000002  beql        $s0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x34C594u;
    {
        const bool branch_taken_0x34c594 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c594) {
            ctx->pc = 0x34C598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34C594u;
            // 0x34c598: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34C5A0u;
            goto label_34c5a0;
        }
    }
    ctx->pc = 0x34C59Cu;
    // 0x34c59c: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x34c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_34c5a0:
    // 0x34c5a0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34c5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34c5a4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34c5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34c5a8: 0x2484c2c0  addiu       $a0, $a0, -0x3D40
    ctx->pc = 0x34c5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951616));
    // 0x34c5ac: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34C5ACu;
    SET_GPR_U32(ctx, 31, 0x34C5B4u);
    ctx->pc = 0x34C5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C5ACu;
    // 0x34c5b0: 0xa443be92  sh          $v1, -0x416E($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950546), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x34C5ACu, 0x34C5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C5B4u;
label_34c5b4:
    // 0x34c5b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34c5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34c5b8:
    // 0x34c5b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34c5b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34c5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x34C5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C5BCu;
        // 0x34c5c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34C5C4u;
    // 0x34c5c4: 0x0  nop
    ctx->pc = 0x34c5c4u;
    // NOP
    // 0x34c5c8: 0x0  nop
    ctx->pc = 0x34c5c8u;
    // NOP
    // 0x34c5cc: 0x0  nop
    ctx->pc = 0x34c5ccu;
    // NOP
    // 0x34c5d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34c5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34c5d4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34c5d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34c5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x34c5dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34c5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34c5e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34c5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34c5e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34c5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34c5e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34c5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34c5ec: 0xc082918  jal         func_20A460
    ctx->pc = 0x34C5ECu;
    SET_GPR_U32(ctx, 31, 0x34C5F4u);
    ctx->pc = 0x34C5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C5ECu;
    // 0x34c5f0: 0x9450be92  lhu         $s0, -0x416E($v0) (Delay Slot)
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950546)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A460u, 0x34C5ECu, 0x34C5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C5F4u;
label_34c5f4:
    // 0x34c5f4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x34c5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34c5f8: 0xc082998  jal         func_20A660
    ctx->pc = 0x34C5F8u;
    SET_GPR_U32(ctx, 31, 0x34C600u);
    ctx->pc = 0x34C5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C5F8u;
    // 0x34c5fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A660u, 0x34C5F8u, 0x34C600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C600u;
label_34c600:
    // 0x34c600: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x34c600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x34c604: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x34c604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x34c608: 0x24847ec0  addiu       $a0, $a0, 0x7EC0
    ctx->pc = 0x34c608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32448));
    // 0x34c60c: 0xc0838c4  jal         func_20E310
    ctx->pc = 0x34C60Cu;
    SET_GPR_U32(ctx, 31, 0x34C614u);
    ctx->pc = 0x34C610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C60Cu;
    // 0x34c610: 0x24a58940  addiu       $a1, $a1, -0x76C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E310u, 0x34C60Cu, 0x34C614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C614u;
label_34c614:
    // 0x34c614: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x34c614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x34c618: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x34c618u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x34c61c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34c61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c620: 0x24a57ec0  addiu       $a1, $a1, 0x7EC0
    ctx->pc = 0x34c620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32448));
    // 0x34c624: 0xc083a44  jal         func_20E910
    ctx->pc = 0x34C624u;
    SET_GPR_U32(ctx, 31, 0x34C62Cu);
    ctx->pc = 0x34C628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C624u;
    // 0x34c628: 0x24c689e0  addiu       $a2, $a2, -0x7620 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E910u, 0x34C624u, 0x34C62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C62Cu;
label_34c62c:
    // 0x34c62c: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x34c62cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x34c630: 0x3c08003e  lui         $t0, 0x3E
    ctx->pc = 0x34c630u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)62 << 16));
    // 0x34c634: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x34c634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34c638: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34c638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c63c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x34c63cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34c640: 0x24e77ec0  addiu       $a3, $a3, 0x7EC0
    ctx->pc = 0x34c640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32448));
    // 0x34c644: 0xc0838dc  jal         func_20E370
    ctx->pc = 0x34C644u;
    SET_GPR_U32(ctx, 31, 0x34C64Cu);
    ctx->pc = 0x34C648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C644u;
    // 0x34c648: 0x25088a30  addiu       $t0, $t0, -0x75D0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294937136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E370u, 0x34C644u, 0x34C64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C64Cu;
label_34c64c:
    // 0x34c64c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x34c64cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c650: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x34c650u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c654: 0x24110068  addiu       $s1, $zero, 0x68
    ctx->pc = 0x34c654u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x34c658: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x34c658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34c65c:
    // 0x34c65c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34c65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34c660: 0x8c634080  lw          $v1, 0x4080($v1)
    ctx->pc = 0x34c660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16512)));
    // 0x34c664: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x34c664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x34c668: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x34c668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x34c66c: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x34C66Cu;
    {
        const bool branch_taken_0x34c66c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c66c) {
            ctx->pc = 0x34C710u;
            goto label_34c710;
        }
    }
    ctx->pc = 0x34C674u;
    // 0x34c674: 0x24870048  addiu       $a3, $a0, 0x48
    ctx->pc = 0x34c674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x34c678: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x34c678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x34c67c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34c67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34c680: 0xc083788  jal         func_20DE20
    ctx->pc = 0x34C680u;
    SET_GPR_U32(ctx, 31, 0x34C688u);
    ctx->pc = 0x34C684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C680u;
    // 0x34c684: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DE20u, 0x34C680u, 0x34C688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C688u;
label_34c688:
    // 0x34c688: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34c688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34c68c: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x34c68cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x34c690: 0x8c424080  lw          $v0, 0x4080($v0)
    ctx->pc = 0x34c690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16512)));
    // 0x34c694: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x34c694u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x34c698: 0x24a58700  addiu       $a1, $a1, -0x7900
    ctx->pc = 0x34c698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936320));
    // 0x34c69c: 0x24c68a60  addiu       $a2, $a2, -0x75A0
    ctx->pc = 0x34c69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937184));
    // 0x34c6a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34c6a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c6a4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x34c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x34c6a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34c6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34c6ac: 0xc083850  jal         func_20E140
    ctx->pc = 0x34C6ACu;
    SET_GPR_U32(ctx, 31, 0x34C6B4u);
    ctx->pc = 0x34C6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C6ACu;
    // 0x34c6b0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E140u, 0x34C6ACu, 0x34C6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C6B4u;
label_34c6b4:
    // 0x34c6b4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34c6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34c6b8: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x34c6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x34c6bc: 0x8c424080  lw          $v0, 0x4080($v0)
    ctx->pc = 0x34c6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16512)));
    // 0x34c6c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x34c6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c6c4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x34c6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x34c6c8: 0xc083768  jal         func_20DDA0
    ctx->pc = 0x34C6C8u;
    SET_GPR_U32(ctx, 31, 0x34C6D0u);
    ctx->pc = 0x34C6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C6C8u;
    // 0x34c6cc: 0x24460068  addiu       $a2, $v0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DDA0u, 0x34C6C8u, 0x34C6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C6D0u;
label_34c6d0:
    // 0x34c6d0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34c6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34c6d4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x34c6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34c6d8: 0x8c424080  lw          $v0, 0x4080($v0)
    ctx->pc = 0x34c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16512)));
    // 0x34c6dc: 0x24050190  addiu       $a1, $zero, 0x190
    ctx->pc = 0x34c6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x34c6e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x34c6e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c6e4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x34c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x34c6e8: 0xc083788  jal         func_20DE20
    ctx->pc = 0x34C6E8u;
    SET_GPR_U32(ctx, 31, 0x34C6F0u);
    ctx->pc = 0x34C6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C6E8u;
    // 0x34c6ec: 0x244700a8  addiu       $a3, $v0, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DE20u, 0x34C6E8u, 0x34C6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C6F0u;
label_34c6f0:
    // 0x34c6f0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34c6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34c6f4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x34c6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34c6f8: 0x8c424080  lw          $v0, 0x4080($v0)
    ctx->pc = 0x34c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16512)));
    // 0x34c6fc: 0x240501f0  addiu       $a1, $zero, 0x1F0
    ctx->pc = 0x34c6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
    // 0x34c700: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x34c700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c704: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x34c704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x34c708: 0xc083788  jal         func_20DE20
    ctx->pc = 0x34C708u;
    SET_GPR_U32(ctx, 31, 0x34C710u);
    ctx->pc = 0x34C70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C708u;
    // 0x34c70c: 0x24470088  addiu       $a3, $v0, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DE20u, 0x34C708u, 0x34C710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C710u;
label_34c710:
    // 0x34c710: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x34c710u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x34c714: 0x2a630014  slti        $v1, $s3, 0x14
    ctx->pc = 0x34c714u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x34c718: 0x265200c8  addiu       $s2, $s2, 0xC8
    ctx->pc = 0x34c718u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 200));
    // 0x34c71c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x34c71cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x34c720: 0x1460ffce  bnez        $v1, . + 4 + (-0x32 << 2)
    ctx->pc = 0x34C720u;
    {
        const bool branch_taken_0x34c720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34C724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C720u;
        // 0x34c724: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c720) {
            ctx->pc = 0x34C65Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34c65c;
        }
    }
    ctx->pc = 0x34C728u;
    // 0x34c728: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34c728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34c72c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34c72cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34c730: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34c730u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34c734: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34c734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34c738: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34c738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34c73c: 0x3e00008  jr          $ra
label_34c740:
    if (ctx->pc == 0x34C740u) {
        ctx->pc = 0x34C740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C73Cu;
        // 0x34c740: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34C744u;
        goto label_fallthrough_0x34c73c;
    }
    ctx->pc = 0x34C73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C73Cu;
        // 0x34c740: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34c73c:
    ctx->pc = 0x34C744u;
    // 0x34c744: 0x0  nop
    ctx->pc = 0x34c744u;
    // NOP
    // 0x34c748: 0x0  nop
    ctx->pc = 0x34c748u;
    // NOP
    // 0x34c74c: 0x0  nop
    ctx->pc = 0x34c74cu;
    // NOP
    if (ctx->pc == 0x34c74cu) { ctx->pc = 0x34c750u; }
}
