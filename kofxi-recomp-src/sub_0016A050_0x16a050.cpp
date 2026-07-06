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

// Function: sub_0016A050
// Address: 0x16a050 - 0x16a220
void sub_0016A050_0x16a050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A050_0x16a050");
#endif

    switch (ctx->pc) {
        case 0x16a074u: goto label_16a074;
        case 0x16a0a8u: goto label_16a0a8;
        case 0x16a0c8u: goto label_16a0c8;
        case 0x16a0dcu: goto label_16a0dc;
        case 0x16a0f0u: goto label_16a0f0;
        case 0x16a104u: goto label_16a104;
        case 0x16a118u: goto label_16a118;
        case 0x16a12cu: goto label_16a12c;
        case 0x16a140u: goto label_16a140;
        case 0x16a154u: goto label_16a154;
        case 0x16a168u: goto label_16a168;
        case 0x16a190u: goto label_16a190;
        case 0x16a1c8u: goto label_16a1c8;
        case 0x16a208u: goto label_16a208;
        default: break;
    }

    ctx->pc = 0x16a050u;

    // 0x16a050: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x16a050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x16a054: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x16a054u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x16a058: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16a058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16a05c: 0x25083090  addiu       $t0, $t0, 0x3090
    ctx->pc = 0x16a05cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12432));
    // 0x16a060: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16a060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16a064: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x16a064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x16a068: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16a068u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a06c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16a06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16a070: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16a070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16a074:
    // 0x16a074: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x16a074u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x16a078: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x16a078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x16a07c: 0x85020002  lh          $v0, 0x2($t0)
    ctx->pc = 0x16a07cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x16a080: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x16a080u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x16a084: 0xa4e20002  sh          $v0, 0x2($a3)
    ctx->pc = 0x16a084u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x16a088: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x16a088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x16a08c: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16A08Cu;
    {
        const bool branch_taken_0x16a08c = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x16A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A08Cu;
        // 0x16a090: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a08c) {
            ctx->pc = 0x16A074u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16a074;
        }
    }
    ctx->pc = 0x16A094u;
    // 0x16a094: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16a094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a098: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16a098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a09c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x16a09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a0a0: 0xc0597dc  jal         func_165F70
    ctx->pc = 0x16A0A0u;
    SET_GPR_U32(ctx, 31, 0x16A0A8u);
    ctx->pc = 0x16A0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A0A0u;
    // 0x16a0a4: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165F70u, 0x16A0A0u, 0x16A0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A0A8u;
label_16a0a8:
    // 0x16a0a8: 0x93a20054  lbu         $v0, 0x54($sp)
    ctx->pc = 0x16a0a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x16a0ac: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x16A0ACu;
    {
        const bool branch_taken_0x16a0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a0ac) {
            ctx->pc = 0x16A0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A0ACu;
            // 0x16a0b0: 0x97a2003e  lhu         $v0, 0x3E($sp) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 62)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A170u;
            goto label_16a170;
        }
    }
    ctx->pc = 0x16A0B4u;
    // 0x16a0b4: 0x97a50034  lhu         $a1, 0x34($sp)
    ctx->pc = 0x16a0b4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x16a0b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a0bc: 0x97a60038  lhu         $a2, 0x38($sp)
    ctx->pc = 0x16a0bcu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16a0c0: 0xc05a8c4  jal         func_16A310
    ctx->pc = 0x16A0C0u;
    SET_GPR_U32(ctx, 31, 0x16A0C8u);
    ctx->pc = 0x16A0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A0C0u;
    // 0x16a0c4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A310u, 0x16A0C0u, 0x16A0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A0C8u;
label_16a0c8:
    // 0x16a0c8: 0x97a50034  lhu         $a1, 0x34($sp)
    ctx->pc = 0x16a0c8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x16a0cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a0d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16a0d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a0d4: 0xc05a8c4  jal         func_16A310
    ctx->pc = 0x16A0D4u;
    SET_GPR_U32(ctx, 31, 0x16A0DCu);
    ctx->pc = 0x16A0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A0D4u;
    // 0x16a0d8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A310u, 0x16A0D4u, 0x16A0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A0DCu;
label_16a0dc:
    // 0x16a0dc: 0x97a50034  lhu         $a1, 0x34($sp)
    ctx->pc = 0x16a0dcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x16a0e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a0e4: 0x97a60038  lhu         $a2, 0x38($sp)
    ctx->pc = 0x16a0e4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16a0e8: 0xc05a8c4  jal         func_16A310
    ctx->pc = 0x16A0E8u;
    SET_GPR_U32(ctx, 31, 0x16A0F0u);
    ctx->pc = 0x16A0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A0E8u;
    // 0x16a0ec: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A310u, 0x16A0E8u, 0x16A0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A0F0u;
label_16a0f0:
    // 0x16a0f0: 0x97a50034  lhu         $a1, 0x34($sp)
    ctx->pc = 0x16a0f0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x16a0f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a0f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16a0f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a0fc: 0xc05a8c4  jal         func_16A310
    ctx->pc = 0x16A0FCu;
    SET_GPR_U32(ctx, 31, 0x16A104u);
    ctx->pc = 0x16A100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A0FCu;
    // 0x16a100: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A310u, 0x16A0FCu, 0x16A104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A104u;
label_16a104:
    // 0x16a104: 0x97a50034  lhu         $a1, 0x34($sp)
    ctx->pc = 0x16a104u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x16a108: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a10c: 0x97a60038  lhu         $a2, 0x38($sp)
    ctx->pc = 0x16a10cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16a110: 0xc05a8c4  jal         func_16A310
    ctx->pc = 0x16A110u;
    SET_GPR_U32(ctx, 31, 0x16A118u);
    ctx->pc = 0x16A114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A110u;
    // 0x16a114: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A310u, 0x16A110u, 0x16A118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A118u;
label_16a118:
    // 0x16a118: 0x97a50034  lhu         $a1, 0x34($sp)
    ctx->pc = 0x16a118u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x16a11c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a120: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16a120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a124: 0xc05a8c4  jal         func_16A310
    ctx->pc = 0x16A124u;
    SET_GPR_U32(ctx, 31, 0x16A12Cu);
    ctx->pc = 0x16A128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A124u;
    // 0x16a128: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A310u, 0x16A124u, 0x16A12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A12Cu;
label_16a12c:
    // 0x16a12c: 0x97a50034  lhu         $a1, 0x34($sp)
    ctx->pc = 0x16a12cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x16a130: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a134: 0x97a60038  lhu         $a2, 0x38($sp)
    ctx->pc = 0x16a134u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16a138: 0xc05a8c4  jal         func_16A310
    ctx->pc = 0x16A138u;
    SET_GPR_U32(ctx, 31, 0x16A140u);
    ctx->pc = 0x16A13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A138u;
    // 0x16a13c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A310u, 0x16A138u, 0x16A140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A140u;
label_16a140:
    // 0x16a140: 0x97a50034  lhu         $a1, 0x34($sp)
    ctx->pc = 0x16a140u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x16a144: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a148: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16a148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a14c: 0xc05a8c4  jal         func_16A310
    ctx->pc = 0x16A14Cu;
    SET_GPR_U32(ctx, 31, 0x16A154u);
    ctx->pc = 0x16A150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A14Cu;
    // 0x16a150: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A310u, 0x16A14Cu, 0x16A154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A154u;
label_16a154:
    // 0x16a154: 0x97a50034  lhu         $a1, 0x34($sp)
    ctx->pc = 0x16a154u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x16a158: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a15c: 0x97a60038  lhu         $a2, 0x38($sp)
    ctx->pc = 0x16a15cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16a160: 0xc05a8c4  jal         func_16A310
    ctx->pc = 0x16A160u;
    SET_GPR_U32(ctx, 31, 0x16A168u);
    ctx->pc = 0x16A164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A160u;
    // 0x16a164: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A310u, 0x16A160u, 0x16A168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A168u;
label_16a168:
    // 0x16a168: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x16A168u;
    {
        const bool branch_taken_0x16a168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A168u;
        // 0x16a16c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a168) {
            ctx->pc = 0x16A20Cu;
            goto label_16a20c;
        }
    }
    ctx->pc = 0x16A170u;
label_16a170:
    // 0x16a170: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x16a170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x16a174: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A174u;
    {
        const bool branch_taken_0x16a174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a174) {
            ctx->pc = 0x16A178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A174u;
            // 0x16a178: 0x97a40038  lhu         $a0, 0x38($sp) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A184u;
            goto label_16a184;
        }
    }
    ctx->pc = 0x16A17Cu;
    // 0x16a17c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x16A17Cu;
    {
        const bool branch_taken_0x16a17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A17Cu;
        // 0x16a180: 0x97a60038  lhu         $a2, 0x38($sp) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a17c) {
            ctx->pc = 0x16A1F0u;
            goto label_16a1f0;
        }
    }
    ctx->pc = 0x16A184u;
label_16a184:
    // 0x16a184: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16a184u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a188: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x16a188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x16a18c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x16a18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_16a190:
    // 0x16a190: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x16a190u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16a194: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x16a194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16a198: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A198u;
    {
        const bool branch_taken_0x16a198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a198) {
            ctx->pc = 0x16A1B0u;
            goto label_16a1b0;
        }
    }
    ctx->pc = 0x16A1A0u;
    // 0x16a1a0: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x16a1a0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x16a1a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16a1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16a1a8: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x16a1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x16a1ac: 0x0  nop
    ctx->pc = 0x16a1acu;
    // NOP
label_16a1b0:
    // 0x16a1b0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x16a1b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x16a1b4: 0x28e20006  slti        $v0, $a3, 0x6
    ctx->pc = 0x16a1b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x16a1b8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x16A1B8u;
    {
        const bool branch_taken_0x16a1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A1B8u;
        // 0x16a1bc: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a1b8) {
            ctx->pc = 0x16A190u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16a190;
        }
    }
    ctx->pc = 0x16A1C0u;
    // 0x16a1c0: 0xc067c48  jal         func_19F120
    ctx->pc = 0x16A1C0u;
    SET_GPR_U32(ctx, 31, 0x16A1C8u);
    ctx->pc = 0x19F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F120u, 0x16A1C0u, 0x16A1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A1C8u;
label_16a1c8:
    // 0x16a1c8: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x16a1c8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16a1cc: 0x0  nop
    ctx->pc = 0x16a1ccu;
    // NOP
    // 0x16a1d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16a1d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16a1d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16a1d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a1d8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16a1d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x16a1dc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16a1dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16a1e0: 0x0  nop
    ctx->pc = 0x16a1e0u;
    // NOP
    // 0x16a1e4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x16a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x16a1e8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16a1ec: 0x94460070  lhu         $a2, 0x70($v0)
    ctx->pc = 0x16a1ecu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_16a1f0:
    // 0x16a1f0: 0x97a20042  lhu         $v0, 0x42($sp)
    ctx->pc = 0x16a1f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 66)));
    // 0x16a1f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a1f8: 0x97a50034  lhu         $a1, 0x34($sp)
    ctx->pc = 0x16a1f8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x16a1fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16a200: 0xc05a888  jal         func_16A220
    ctx->pc = 0x16A200u;
    SET_GPR_U32(ctx, 31, 0x16A208u);
    ctx->pc = 0x16A204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A200u;
    // 0x16a204: 0x3047ffff  andi        $a3, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x16A200u, 0x16A208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A208u;
label_16a208:
    // 0x16a208: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16a208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16a20c:
    // 0x16a20c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16a20cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a210: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16a210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a214: 0x3e00008  jr          $ra
    ctx->pc = 0x16A214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A214u;
        // 0x16a218: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A21Cu;
    // 0x16a21c: 0x0  nop
    ctx->pc = 0x16a21cu;
    // NOP
    if (ctx->pc == 0x16a21cu) { ctx->pc = 0x16a220u; }
}
