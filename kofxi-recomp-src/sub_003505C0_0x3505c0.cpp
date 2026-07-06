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

// Function: sub_003505C0
// Address: 0x3505c0 - 0x350c30
void sub_003505C0_0x3505c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003505C0_0x3505c0");
#endif

    switch (ctx->pc) {
        case 0x3505f0u: goto label_3505f0;
        case 0x3505fcu: goto label_3505fc;
        case 0x350624u: goto label_350624;
        case 0x35062cu: goto label_35062c;
        case 0x350634u: goto label_350634;
        case 0x35063cu: goto label_35063c;
        case 0x350644u: goto label_350644;
        case 0x35064cu: goto label_35064c;
        case 0x350664u: goto label_350664;
        case 0x350674u: goto label_350674;
        case 0x3506a4u: goto label_3506a4;
        case 0x3506c0u: goto label_3506c0;
        case 0x3506d4u: goto label_3506d4;
        case 0x350758u: goto label_350758;
        case 0x35077cu: goto label_35077c;
        case 0x350788u: goto label_350788;
        case 0x350794u: goto label_350794;
        case 0x3507c4u: goto label_3507c4;
        case 0x3507d0u: goto label_3507d0;
        case 0x350868u: goto label_350868;
        case 0x35088cu: goto label_35088c;
        case 0x3508b4u: goto label_3508b4;
        case 0x3508ccu: goto label_3508cc;
        case 0x3508f8u: goto label_3508f8;
        case 0x35091cu: goto label_35091c;
        case 0x350928u: goto label_350928;
        case 0x3509f8u: goto label_3509f8;
        case 0x350a18u: goto label_350a18;
        case 0x350a28u: goto label_350a28;
        case 0x350a34u: goto label_350a34;
        case 0x350a44u: goto label_350a44;
        case 0x350a5cu: goto label_350a5c;
        case 0x350a78u: goto label_350a78;
        case 0x350abcu: goto label_350abc;
        case 0x350ad4u: goto label_350ad4;
        case 0x350b10u: goto label_350b10;
        case 0x350b38u: goto label_350b38;
        case 0x350b58u: goto label_350b58;
        case 0x350b8cu: goto label_350b8c;
        case 0x350bb4u: goto label_350bb4;
        case 0x350bc0u: goto label_350bc0;
        case 0x350bd0u: goto label_350bd0;
        case 0x350bd8u: goto label_350bd8;
        case 0x350be8u: goto label_350be8;
        case 0x350c00u: goto label_350c00;
        case 0x350c14u: goto label_350c14;
        case 0x350c1cu: goto label_350c1c;
        default: break;
    }

    ctx->pc = 0x3505c0u;

    // 0x3505c0: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x3505c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3505c4: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x3505c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x3505c8: 0xac649478  sw          $a0, -0x6B88($v1)
    ctx->pc = 0x3505c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294939768), GPR_U32(ctx, 4));
    // 0x3505cc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3505ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3505d0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3505d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x3505d4: 0xac40fe50  sw          $zero, -0x1B0($v0)
    ctx->pc = 0x3505d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966864), GPR_U32(ctx, 0));
    // 0x3505d8: 0x8082674  j           func_2099D0
    ctx->pc = 0x3505D8u;
    ctx->pc = 0x3505DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3505D8u;
    // 0x3505dc: 0x248405e0  addiu       $a0, $a0, 0x5E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    sub_002099D0_0x2099d0(rdram, ctx, runtime); return;
    ctx->pc = 0x3505E0u;
    // 0x3505e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3505e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3505e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3505e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3505e8: 0xc0c03cc  jal         func_300F30
    ctx->pc = 0x3505E8u;
    SET_GPR_U32(ctx, 31, 0x3505F0u);
    ctx->pc = 0x300F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300F30u, 0x3505E8u, 0x3505F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3505F0u;
label_3505f0:
    // 0x3505f0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3505f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3505f4: 0xc055684  jal         func_155A10
    ctx->pc = 0x3505F4u;
    SET_GPR_U32(ctx, 31, 0x3505FCu);
    ctx->pc = 0x3505F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3505F4u;
    // 0x3505f8: 0xa0409738  sb          $zero, -0x68C8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940472), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x3505F4u, 0x3505FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3505FCu;
label_3505fc:
    // 0x3505fc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3505fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x350600: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x350600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x350604: 0xac40beb0  sw          $zero, -0x4150($v0)
    ctx->pc = 0x350604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950576), GPR_U32(ctx, 0));
    // 0x350608: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x350608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35060c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35060cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x350610: 0xac60beb4  sw          $zero, -0x414C($v1)
    ctx->pc = 0x350610u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950580), GPR_U32(ctx, 0));
    // 0x350614: 0xac40beb8  sw          $zero, -0x4148($v0)
    ctx->pc = 0x350614u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950584), GPR_U32(ctx, 0));
    // 0x350618: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x350618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35061c: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x35061Cu;
    SET_GPR_U32(ctx, 31, 0x350624u);
    ctx->pc = 0x350620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35061Cu;
    // 0x350620: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x35061Cu, 0x350624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350624u;
label_350624:
    // 0x350624: 0xc0d1bc4  jal         func_346F10
    ctx->pc = 0x350624u;
    SET_GPR_U32(ctx, 31, 0x35062Cu);
    ctx->pc = 0x346F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346F10u, 0x350624u, 0x35062Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35062Cu;
label_35062c:
    // 0x35062c: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x35062Cu;
    SET_GPR_U32(ctx, 31, 0x350634u);
    ctx->pc = 0x14D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D1F0u, 0x35062Cu, 0x350634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350634u;
label_350634:
    // 0x350634: 0xc053318  jal         func_14CC60
    ctx->pc = 0x350634u;
    SET_GPR_U32(ctx, 31, 0x35063Cu);
    ctx->pc = 0x14CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CC60u, 0x350634u, 0x35063Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35063Cu;
label_35063c:
    // 0x35063c: 0xc069184  jal         func_1A4610
    ctx->pc = 0x35063Cu;
    SET_GPR_U32(ctx, 31, 0x350644u);
    ctx->pc = 0x350640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35063Cu;
    // 0x350640: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4610u, 0x35063Cu, 0x350644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350644u;
label_350644:
    // 0x350644: 0xc069244  jal         func_1A4910
    ctx->pc = 0x350644u;
    SET_GPR_U32(ctx, 31, 0x35064Cu);
    ctx->pc = 0x1A4910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4910u, 0x350644u, 0x35064Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35064Cu;
label_35064c:
    // 0x35064c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x35064cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x350650: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x350650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x350654: 0x248433f0  addiu       $a0, $a0, 0x33F0
    ctx->pc = 0x350654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13296));
    // 0x350658: 0xac40d9c0  sw          $zero, -0x2640($v0)
    ctx->pc = 0x350658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957504), GPR_U32(ctx, 0));
    // 0x35065c: 0xc082678  jal         func_2099E0
    ctx->pc = 0x35065Cu;
    SET_GPR_U32(ctx, 31, 0x350664u);
    ctx->pc = 0x350660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35065Cu;
    // 0x350660: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x35065Cu, 0x350664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350664u;
label_350664:
    // 0x350664: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x350664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x350668: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x350668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35066c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x35066Cu;
    SET_GPR_U32(ctx, 31, 0x350674u);
    ctx->pc = 0x350670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35066Cu;
    // 0x350670: 0x24060054  addiu       $a2, $zero, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x35066Cu, 0x350674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350674u;
label_350674:
    // 0x350674: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x350674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x350678: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x350678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35067c: 0x8c4740b0  lw          $a3, 0x40B0($v0)
    ctx->pc = 0x35067cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16560)));
    // 0x350680: 0x24051140  addiu       $a1, $zero, 0x1140
    ctx->pc = 0x350680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4416));
    // 0x350684: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x350684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x350688: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x350688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35068c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x35068cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x350690: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x350690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x350694: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x350694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x350698: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x350698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x35069c: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x35069Cu;
    SET_GPR_U32(ctx, 31, 0x3506A4u);
    ctx->pc = 0x3506A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35069Cu;
    // 0x3506a0: 0x24070054  addiu       $a3, $zero, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FE58u, 0x35069Cu, 0x3506A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3506A4u;
label_3506a4:
    // 0x3506a4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3506a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3506a8: 0x9042bea9  lbu         $v0, -0x4157($v0)
    ctx->pc = 0x3506a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950569)));
    // 0x3506ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3506ACu;
    {
        const bool branch_taken_0x3506ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3506ac) {
            ctx->pc = 0x3506C8u;
            goto label_3506c8;
        }
    }
    ctx->pc = 0x3506B4u;
    // 0x3506b4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3506b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x3506b8: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x3506B8u;
    SET_GPR_U32(ctx, 31, 0x3506C0u);
    ctx->pc = 0x3506BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3506B8u;
    // 0x3506bc: 0x248406e0  addiu       $a0, $a0, 0x6E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347260u, 0x3506B8u, 0x3506C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3506C0u;
label_3506c0:
    // 0x3506c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3506C0u;
    {
        const bool branch_taken_0x3506c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3506C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3506C0u;
        // 0x3506c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3506c0) {
            ctx->pc = 0x3506D8u;
            goto label_3506d8;
        }
    }
    ctx->pc = 0x3506C8u;
label_3506c8:
    // 0x3506c8: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3506c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x3506cc: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x3506CCu;
    SET_GPR_U32(ctx, 31, 0x3506D4u);
    ctx->pc = 0x3506D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3506CCu;
    // 0x3506d0: 0x2484e0e0  addiu       $a0, $a0, -0x1F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347260u, 0x3506CCu, 0x3506D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3506D4u;
label_3506d4:
    // 0x3506d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3506d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3506d8:
    // 0x3506d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3506D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3506DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3506D8u;
        // 0x3506dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3506D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3506E0u;
    // 0x3506e0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3506e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3506e4: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x3506e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x3506e8: 0x24847010  addiu       $a0, $a0, 0x7010
    ctx->pc = 0x3506e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28688));
    // 0x3506ec: 0x80558d4  j           func_156350
    ctx->pc = 0x3506ECu;
    ctx->pc = 0x3506F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3506ECu;
    // 0x3506f0: 0x24a50700  addiu       $a1, $a1, 0x700 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    sub_00156350_0x156350(rdram, ctx, runtime); return;
    ctx->pc = 0x3506F4u;
    // 0x3506f4: 0x0  nop
    ctx->pc = 0x3506f4u;
    // NOP
    // 0x3506f8: 0x0  nop
    ctx->pc = 0x3506f8u;
    // NOP
    // 0x3506fc: 0x0  nop
    ctx->pc = 0x3506fcu;
    // NOP
    // 0x350700: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x350700u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x350704: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x350704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x350708: 0x2484ff04  addiu       $a0, $a0, -0xFC
    ctx->pc = 0x350708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967044));
    // 0x35070c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x35070cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x350710: 0xac44eab8  sw          $a0, -0x1548($v0)
    ctx->pc = 0x350710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961848), GPR_U32(ctx, 4));
    // 0x350714: 0x24634310  addiu       $v1, $v1, 0x4310
    ctx->pc = 0x350714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17168));
    // 0x350718: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x350718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x35071c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x35071cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x350720: 0xac43ead0  sw          $v1, -0x1530($v0)
    ctx->pc = 0x350720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961872), GPR_U32(ctx, 3));
    // 0x350724: 0x2484d670  addiu       $a0, $a0, -0x2990
    ctx->pc = 0x350724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956656));
    // 0x350728: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x350728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x35072c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x35072cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x350730: 0x24631158  addiu       $v1, $v1, 0x1158
    ctx->pc = 0x350730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4440));
    // 0x350734: 0x8082674  j           func_2099D0
    ctx->pc = 0x350734u;
    ctx->pc = 0x350738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350734u;
    // 0x350738: 0xac4340a0  sw          $v1, 0x40A0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 16544), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    sub_002099D0_0x2099d0(rdram, ctx, runtime); return;
    ctx->pc = 0x35073Cu;
    // 0x35073c: 0x0  nop
    ctx->pc = 0x35073cu;
    // NOP
    // 0x350740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x350740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x350744: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x350744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350748: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x350748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35074c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x35074cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x350750: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x350750u;
    SET_GPR_U32(ctx, 31, 0x350758u);
    ctx->pc = 0x350754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350750u;
    // 0x350754: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x350750u, 0x350758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350758u;
label_350758:
    // 0x350758: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x350758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x35075c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x35075cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x350760: 0x8c6340b0  lw          $v1, 0x40B0($v1)
    ctx->pc = 0x350760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16560)));
    // 0x350764: 0x24051150  addiu       $a1, $zero, 0x1150
    ctx->pc = 0x350764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4432));
    // 0x350768: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x350768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x35076c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x35076cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x350770: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x350770u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x350774: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x350774u;
    SET_GPR_U32(ctx, 31, 0x35077Cu);
    ctx->pc = 0x350778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350774u;
    // 0x350778: 0xafa3001c  sw          $v1, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FE58u, 0x350774u, 0x35077Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35077Cu;
label_35077c:
    // 0x35077c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x35077cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x350780: 0xc043e52  jal         func_10F948
    ctx->pc = 0x350780u;
    SET_GPR_U32(ctx, 31, 0x350788u);
    ctx->pc = 0x350784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350780u;
    // 0x350784: 0x24845300  addiu       $a0, $a0, 0x5300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x350780u, 0x350788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350788u;
label_350788:
    // 0x350788: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x350788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x35078c: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x35078Cu;
    SET_GPR_U32(ctx, 31, 0x350794u);
    ctx->pc = 0x350790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35078Cu;
    // 0x350790: 0x248407a0  addiu       $a0, $a0, 0x7A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347260u, 0x35078Cu, 0x350794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350794u;
label_350794:
    // 0x350794: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x350794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350798: 0x3e00008  jr          $ra
    ctx->pc = 0x350798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350798u;
        // 0x35079c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3507A0u;
    // 0x3507a0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3507a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x3507a4: 0x80d1c98  j           func_347260
    ctx->pc = 0x3507A4u;
    ctx->pc = 0x3507A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3507A4u;
    // 0x3507a8: 0x24840850  addiu       $a0, $a0, 0x850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    sub_00347260_0x347260(rdram, ctx, runtime); return;
    ctx->pc = 0x3507ACu;
    // 0x3507ac: 0x0  nop
    ctx->pc = 0x3507acu;
    // NOP
    // 0x3507b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3507b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3507b4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3507b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3507b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3507b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3507bc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x3507BCu;
    SET_GPR_U32(ctx, 31, 0x3507C4u);
    ctx->pc = 0x3507C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3507BCu;
    // 0x3507c0: 0x24845320  addiu       $a0, $a0, 0x5320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x3507BCu, 0x3507C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3507C4u;
label_3507c4:
    // 0x3507c4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3507c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x3507c8: 0xc0d0db8  jal         func_3436E0
    ctx->pc = 0x3507C8u;
    SET_GPR_U32(ctx, 31, 0x3507D0u);
    ctx->pc = 0x3507CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3507C8u;
    // 0x3507cc: 0x248407e0  addiu       $a0, $a0, 0x7E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3436E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3436E0u, 0x3507C8u, 0x3507D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3507D0u;
label_3507d0:
    // 0x3507d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3507d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3507d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3507D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3507D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3507D4u;
        // 0x3507d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3507D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3507DCu;
    // 0x3507dc: 0x0  nop
    ctx->pc = 0x3507dcu;
    // NOP
    // 0x3507e0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3507e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x3507e4: 0x80d1c98  j           func_347260
    ctx->pc = 0x3507E4u;
    ctx->pc = 0x3507E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3507E4u;
    // 0x3507e8: 0x24840850  addiu       $a0, $a0, 0x850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    sub_00347260_0x347260(rdram, ctx, runtime); return;
    ctx->pc = 0x3507ECu;
    // 0x3507ec: 0x0  nop
    ctx->pc = 0x3507ecu;
    // NOP
    // 0x3507f0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3507f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3507f4: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x3507f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x3507f8: 0x24847010  addiu       $a0, $a0, 0x7010
    ctx->pc = 0x3507f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28688));
    // 0x3507fc: 0x80558d4  j           func_156350
    ctx->pc = 0x3507FCu;
    ctx->pc = 0x350800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3507FCu;
    // 0x350800: 0x24a50810  addiu       $a1, $a1, 0x810 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    sub_00156350_0x156350(rdram, ctx, runtime); return;
    ctx->pc = 0x350804u;
    // 0x350804: 0x0  nop
    ctx->pc = 0x350804u;
    // NOP
    // 0x350808: 0x0  nop
    ctx->pc = 0x350808u;
    // NOP
    // 0x35080c: 0x0  nop
    ctx->pc = 0x35080cu;
    // NOP
    // 0x350810: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x350810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x350814: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x350814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x350818: 0x2484ff04  addiu       $a0, $a0, -0xFC
    ctx->pc = 0x350818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967044));
    // 0x35081c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x35081cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x350820: 0xac44eab8  sw          $a0, -0x1548($v0)
    ctx->pc = 0x350820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961848), GPR_U32(ctx, 4));
    // 0x350824: 0x24634310  addiu       $v1, $v1, 0x4310
    ctx->pc = 0x350824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17168));
    // 0x350828: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x350828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x35082c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x35082cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x350830: 0xac43ead0  sw          $v1, -0x1530($v0)
    ctx->pc = 0x350830u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961872), GPR_U32(ctx, 3));
    // 0x350834: 0x24848680  addiu       $a0, $a0, -0x7980
    ctx->pc = 0x350834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936192));
    // 0x350838: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x350838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x35083c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x35083cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x350840: 0x24631158  addiu       $v1, $v1, 0x1158
    ctx->pc = 0x350840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4440));
    // 0x350844: 0x8082674  j           func_2099D0
    ctx->pc = 0x350844u;
    ctx->pc = 0x350848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350844u;
    // 0x350848: 0xac4340a0  sw          $v1, 0x40A0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 16544), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    sub_002099D0_0x2099d0(rdram, ctx, runtime); return;
    ctx->pc = 0x35084Cu;
    // 0x35084c: 0x0  nop
    ctx->pc = 0x35084cu;
    // NOP
    // 0x350850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x350850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x350854: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x350854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x350858: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x350858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35085c: 0x24845340  addiu       $a0, $a0, 0x5340
    ctx->pc = 0x35085cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21312));
    // 0x350860: 0xc043e52  jal         func_10F948
    ctx->pc = 0x350860u;
    SET_GPR_U32(ctx, 31, 0x350868u);
    ctx->pc = 0x350864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350860u;
    // 0x350864: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x350860u, 0x350868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350868u;
label_350868:
    // 0x350868: 0x3c1001df  lui         $s0, 0x1DF
    ctx->pc = 0x350868u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)479 << 16));
    // 0x35086c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x35086cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x350870: 0x2610ddc0  addiu       $s0, $s0, -0x2240
    ctx->pc = 0x350870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958528));
    // 0x350874: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x350874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x350878: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x350878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35087c: 0x24844530  addiu       $a0, $a0, 0x4530
    ctx->pc = 0x35087cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17712));
    // 0x350880: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x350880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x350884: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x350884u;
    SET_GPR_U32(ctx, 31, 0x35088Cu);
    ctx->pc = 0x350888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350884u;
    // 0x350888: 0xac4340b0  sw          $v1, 0x40B0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 16560), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x350884u, 0x35088Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35088Cu;
label_35088c:
    // 0x35088c: 0x8e070044  lw          $a3, 0x44($s0)
    ctx->pc = 0x35088cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x350890: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x350890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x350894: 0x8e060048  lw          $a2, 0x48($s0)
    ctx->pc = 0x350894u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x350898: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x350898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x35089c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x35089cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3508a0: 0x2605004c  addiu       $a1, $s0, 0x4C
    ctx->pc = 0x3508a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x3508a4: 0x24844310  addiu       $a0, $a0, 0x4310
    ctx->pc = 0x3508a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17168));
    // 0x3508a8: 0x0  nop
    ctx->pc = 0x3508a8u;
    // NOP
    // 0x3508ac: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x3508ACu;
    SET_GPR_U32(ctx, 31, 0x3508B4u);
    ctx->pc = 0x3508B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3508ACu;
    // 0x3508b0: 0xac46dd80  sw          $a2, -0x2280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958464), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x3508ACu, 0x3508B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3508B4u;
label_3508b4:
    // 0x3508b4: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x3508b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x3508b8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3508b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3508bc: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3508bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x3508c0: 0x248408e0  addiu       $a0, $a0, 0x8E0
    ctx->pc = 0x3508c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2272));
    // 0x3508c4: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3508C4u;
    SET_GPR_U32(ctx, 31, 0x3508CCu);
    ctx->pc = 0x3508C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3508C4u;
    // 0x3508c8: 0xac434410  sw          $v1, 0x4410($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17424), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x3508C4u, 0x3508CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3508CCu;
label_3508cc:
    // 0x3508cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3508ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3508d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3508d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3508d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3508D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3508D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3508D4u;
        // 0x3508d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3508D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3508DCu;
    // 0x3508dc: 0x0  nop
    ctx->pc = 0x3508dcu;
    // NOP
    // 0x3508e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3508e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3508e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3508e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3508e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3508e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3508ec: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x3508ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x3508f0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x3508F0u;
    SET_GPR_U32(ctx, 31, 0x3508F8u);
    ctx->pc = 0x3508F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3508F0u;
    // 0x3508f4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x3508F0u, 0x3508F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3508F8u;
label_3508f8:
    // 0x3508f8: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x3508f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x3508fc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3508fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x350900: 0x8c6340b0  lw          $v1, 0x40B0($v1)
    ctx->pc = 0x350900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16560)));
    // 0x350904: 0x24051210  addiu       $a1, $zero, 0x1210
    ctx->pc = 0x350904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x350908: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x350908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x35090c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x35090cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x350910: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x350910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x350914: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x350914u;
    SET_GPR_U32(ctx, 31, 0x35091Cu);
    ctx->pc = 0x350918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350914u;
    // 0x350918: 0xafa3001c  sw          $v1, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FE58u, 0x350914u, 0x35091Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35091Cu;
label_35091c:
    // 0x35091c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x35091cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x350920: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x350920u;
    SET_GPR_U32(ctx, 31, 0x350928u);
    ctx->pc = 0x350924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350920u;
    // 0x350924: 0x24840940  addiu       $a0, $a0, 0x940 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347260u, 0x350920u, 0x350928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350928u;
label_350928:
    // 0x350928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x350928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35092c: 0x3e00008  jr          $ra
    ctx->pc = 0x35092Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35092Cu;
        // 0x350930: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35092Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350934u;
    // 0x350934: 0x0  nop
    ctx->pc = 0x350934u;
    // NOP
    // 0x350938: 0x0  nop
    ctx->pc = 0x350938u;
    // NOP
    // 0x35093c: 0x0  nop
    ctx->pc = 0x35093cu;
    // NOP
    // 0x350940: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x350940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x350944: 0x80d1c98  j           func_347260
    ctx->pc = 0x350944u;
    ctx->pc = 0x350948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350944u;
    // 0x350948: 0x24840950  addiu       $a0, $a0, 0x950 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    sub_00347260_0x347260(rdram, ctx, runtime); return;
    ctx->pc = 0x35094Cu;
    // 0x35094c: 0x0  nop
    ctx->pc = 0x35094cu;
    // NOP
    // 0x350950: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x350950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x350954: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x350954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x350958: 0x2484ff04  addiu       $a0, $a0, -0xFC
    ctx->pc = 0x350958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967044));
    // 0x35095c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x35095cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x350960: 0xac44eab8  sw          $a0, -0x1548($v0)
    ctx->pc = 0x350960u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961848), GPR_U32(ctx, 4));
    // 0x350964: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x350964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x350968: 0x24634310  addiu       $v1, $v1, 0x4310
    ctx->pc = 0x350968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17168));
    // 0x35096c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x35096cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x350970: 0xac43ead0  sw          $v1, -0x1530($v0)
    ctx->pc = 0x350970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961872), GPR_U32(ctx, 3));
    // 0x350974: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x350974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x350978: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x350978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x35097c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x35097cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x350980: 0x24631158  addiu       $v1, $v1, 0x1158
    ctx->pc = 0x350980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4440));
    // 0x350984: 0x24847010  addiu       $a0, $a0, 0x7010
    ctx->pc = 0x350984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28688));
    // 0x350988: 0xac4340a0  sw          $v1, 0x40A0($v0)
    ctx->pc = 0x350988u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16544), GPR_U32(ctx, 3));
    // 0x35098c: 0x80558d4  j           func_156350
    ctx->pc = 0x35098Cu;
    ctx->pc = 0x350990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35098Cu;
    // 0x350990: 0x24a509a0  addiu       $a1, $a1, 0x9A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    sub_00156350_0x156350(rdram, ctx, runtime); return;
    ctx->pc = 0x350994u;
    // 0x350994: 0x0  nop
    ctx->pc = 0x350994u;
    // NOP
    // 0x350998: 0x0  nop
    ctx->pc = 0x350998u;
    // NOP
    // 0x35099c: 0x0  nop
    ctx->pc = 0x35099cu;
    // NOP
    // 0x3509a0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3509a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3509a4: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x3509a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x3509a8: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x3509a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x3509ac: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3509acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3509b0: 0xac44eab8  sw          $a0, -0x1548($v0)
    ctx->pc = 0x3509b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961848), GPR_U32(ctx, 4));
    // 0x3509b4: 0x24634530  addiu       $v1, $v1, 0x4530
    ctx->pc = 0x3509b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17712));
    // 0x3509b8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3509b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3509bc: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3509bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x3509c0: 0xac43ead0  sw          $v1, -0x1530($v0)
    ctx->pc = 0x3509c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961872), GPR_U32(ctx, 3));
    // 0x3509c4: 0x248409e0  addiu       $a0, $a0, 0x9E0
    ctx->pc = 0x3509c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2528));
    // 0x3509c8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3509c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3509cc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3509ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3509d0: 0x24633248  addiu       $v1, $v1, 0x3248
    ctx->pc = 0x3509d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12872));
    // 0x3509d4: 0x8082674  j           func_2099D0
    ctx->pc = 0x3509D4u;
    ctx->pc = 0x3509D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3509D4u;
    // 0x3509d8: 0xac4340a0  sw          $v1, 0x40A0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 16544), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    sub_002099D0_0x2099d0(rdram, ctx, runtime); return;
    ctx->pc = 0x3509DCu;
    // 0x3509dc: 0x0  nop
    ctx->pc = 0x3509dcu;
    // NOP
    // 0x3509e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3509e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3509e4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3509e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3509e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3509e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3509ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3509ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3509f0: 0xc088696  jal         func_221A58
    ctx->pc = 0x3509F0u;
    SET_GPR_U32(ctx, 31, 0x3509F8u);
    ctx->pc = 0x3509F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3509F0u;
    // 0x3509f4: 0x8c4440a8  lw          $a0, 0x40A8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221A58u, 0x3509F0u, 0x3509F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3509F8u;
label_3509f8:
    // 0x3509f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3509f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3509fc: 0x54430036  bnel        $v0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x3509FCu;
    {
        const bool branch_taken_0x3509fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3509fc) {
            ctx->pc = 0x350A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3509FCu;
            // 0x350a00: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350AD8u;
            goto label_350ad8;
        }
    }
    ctx->pc = 0x350A04u;
    // 0x350a04: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x350a04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x350a08: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x350a08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x350a0c: 0x2484fe60  addiu       $a0, $a0, -0x1A0
    ctx->pc = 0x350a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966880));
    // 0x350a10: 0xc0bb690  jal         func_2EDA40
    ctx->pc = 0x350A10u;
    SET_GPR_U32(ctx, 31, 0x350A18u);
    ctx->pc = 0x350A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350A10u;
    // 0x350a14: 0x24a5fe58  addiu       $a1, $a1, -0x1A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDA40u, 0x350A10u, 0x350A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350A18u;
label_350a18:
    // 0x350a18: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x350a18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x350a1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x350a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350a20: 0xc043e52  jal         func_10F948
    ctx->pc = 0x350A20u;
    SET_GPR_U32(ctx, 31, 0x350A28u);
    ctx->pc = 0x350A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350A20u;
    // 0x350a24: 0x24845360  addiu       $a0, $a0, 0x5360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x350A20u, 0x350A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350A28u;
label_350a28:
    // 0x350a28: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x350a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x350a2c: 0xc08917a  jal         func_2245E8
    ctx->pc = 0x350A2Cu;
    SET_GPR_U32(ctx, 31, 0x350A34u);
    ctx->pc = 0x350A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350A2Cu;
    // 0x350a30: 0x8c4440a0  lw          $a0, 0x40A0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245E8u, 0x350A2Cu, 0x350A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350A34u;
label_350a34:
    // 0x350a34: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x350a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x350a38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x350a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350a3c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x350A3Cu;
    SET_GPR_U32(ctx, 31, 0x350A44u);
    ctx->pc = 0x350A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350A3Cu;
    // 0x350a40: 0x24845370  addiu       $a0, $a0, 0x5370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x350A3Cu, 0x350A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350A44u;
label_350a44:
    // 0x350a44: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x350a44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x350a48: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x350a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x350a4c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x350a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x350a50: 0x2484a020  addiu       $a0, $a0, -0x5FE0
    ctx->pc = 0x350a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942752));
    // 0x350a54: 0xc0bc586  jal         func_2F1618
    ctx->pc = 0x350A54u;
    SET_GPR_U32(ctx, 31, 0x350A5Cu);
    ctx->pc = 0x350A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350A54u;
    // 0x350a58: 0xac439478  sw          $v1, -0x6B88($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294939768), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1618u, 0x350A54u, 0x350A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350A5Cu;
label_350a5c:
    // 0x350a5c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x350a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x350a60: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x350a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x350a64: 0x90509490  lbu         $s0, -0x6B70($v0)
    ctx->pc = 0x350a64u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939792)));
    // 0x350a68: 0x24634640  addiu       $v1, $v1, 0x4640
    ctx->pc = 0x350a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17984));
    // 0x350a6c: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x350a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x350a70: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x350A70u;
    SET_GPR_U32(ctx, 31, 0x350A78u);
    ctx->pc = 0x350A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350A70u;
    // 0x350a74: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x350A70u, 0x350A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350A78u;
label_350a78:
    // 0x350a78: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x350a78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350a7c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x350a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x350a80: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x350a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x350a84: 0x103e3c  dsll32      $a3, $s0, 24
    ctx->pc = 0x350a84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) << (32 + 24));
    // 0x350a88: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x350a88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x350a8c: 0x24634640  addiu       $v1, $v1, 0x4640
    ctx->pc = 0x350a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17984));
    // 0x350a90: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x350a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x350a94: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x350a94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x350a98: 0x8c4440a0  lw          $a0, 0x40A0($v0)
    ctx->pc = 0x350a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16544)));
    // 0x350a9c: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x350a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x350aa0: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x350aa0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x350aa4: 0x24a54530  addiu       $a1, $a1, 0x4530
    ctx->pc = 0x350aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17712));
    // 0x350aa8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x350aa8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350aac: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x350aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x350ab0: 0x8c464630  lw          $a2, 0x4630($v0)
    ctx->pc = 0x350ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17968)));
    // 0x350ab4: 0xc0baf82  jal         func_2EBE08
    ctx->pc = 0x350AB4u;
    SET_GPR_U32(ctx, 31, 0x350ABCu);
    ctx->pc = 0x350AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350AB4u;
    // 0x350ab8: 0x240b270f  addiu       $t3, $zero, 0x270F (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBE08u, 0x350AB4u, 0x350ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350ABCu;
label_350abc:
    // 0x350abc: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x350abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x350ac0: 0x240304b0  addiu       $v1, $zero, 0x4B0
    ctx->pc = 0x350ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
    // 0x350ac4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x350ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x350ac8: 0x24840af0  addiu       $a0, $a0, 0xAF0
    ctx->pc = 0x350ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2800));
    // 0x350acc: 0xc082674  jal         func_2099D0
    ctx->pc = 0x350ACCu;
    SET_GPR_U32(ctx, 31, 0x350AD4u);
    ctx->pc = 0x350AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350ACCu;
    // 0x350ad0: 0xa443be96  sh          $v1, -0x416A($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950550), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x350ACCu, 0x350AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350AD4u;
label_350ad4:
    // 0x350ad4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x350ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_350ad8:
    // 0x350ad8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x350ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350adc: 0x3e00008  jr          $ra
    ctx->pc = 0x350ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350ADCu;
        // 0x350ae0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350AE4u;
    // 0x350ae4: 0x0  nop
    ctx->pc = 0x350ae4u;
    // NOP
    // 0x350ae8: 0x0  nop
    ctx->pc = 0x350ae8u;
    // NOP
    // 0x350aec: 0x0  nop
    ctx->pc = 0x350aecu;
    // NOP
    // 0x350af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x350af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x350af4: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x350af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x350af8: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x350af8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x350afc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x350afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x350b00: 0x2484fe60  addiu       $a0, $a0, -0x1A0
    ctx->pc = 0x350b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966880));
    // 0x350b04: 0x24a5fe58  addiu       $a1, $a1, -0x1A8
    ctx->pc = 0x350b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966872));
    // 0x350b08: 0xc0bb690  jal         func_2EDA40
    ctx->pc = 0x350B08u;
    SET_GPR_U32(ctx, 31, 0x350B10u);
    ctx->pc = 0x350B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350B08u;
    // 0x350b0c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDA40u, 0x350B08u, 0x350B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350B10u;
label_350b10:
    // 0x350b10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x350b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350b14: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x350b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x350b18: 0x16030007  bne         $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x350B18u;
    {
        const bool branch_taken_0x350b18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x350b18) {
            ctx->pc = 0x350B38u;
            goto label_350b38;
        }
    }
    ctx->pc = 0x350B20u;
    // 0x350b20: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x350b20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x350b24: 0x240304b0  addiu       $v1, $zero, 0x4B0
    ctx->pc = 0x350b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
    // 0x350b28: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x350b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x350b2c: 0x24840ba0  addiu       $a0, $a0, 0xBA0
    ctx->pc = 0x350b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2976));
    // 0x350b30: 0xc082674  jal         func_2099D0
    ctx->pc = 0x350B30u;
    SET_GPR_U32(ctx, 31, 0x350B38u);
    ctx->pc = 0x350B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350B30u;
    // 0x350b34: 0xa443be96  sh          $v1, -0x416A($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950550), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x350B30u, 0x350B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350B38u;
label_350b38:
    // 0x350b38: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x350b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x350b3c: 0x8c639650  lw          $v1, -0x69B0($v1)
    ctx->pc = 0x350b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940240)));
    // 0x350b40: 0x12030007  beq         $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x350B40u;
    {
        const bool branch_taken_0x350b40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x350b40) {
            ctx->pc = 0x350B60u;
            goto label_350b60;
        }
    }
    ctx->pc = 0x350B48u;
    // 0x350b48: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x350b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x350b4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x350b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350b50: 0xc043e52  jal         func_10F948
    ctx->pc = 0x350B50u;
    SET_GPR_U32(ctx, 31, 0x350B58u);
    ctx->pc = 0x350B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350B50u;
    // 0x350b54: 0x24845380  addiu       $a0, $a0, 0x5380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x350B50u, 0x350B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350B58u;
label_350b58:
    // 0x350b58: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x350b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x350b5c: 0xac709650  sw          $s0, -0x69B0($v1)
    ctx->pc = 0x350b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294940240), GPR_U32(ctx, 16));
label_350b60:
    // 0x350b60: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x350b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x350b64: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x350b64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x350b68: 0x9465be96  lhu         $a1, -0x416A($v1)
    ctx->pc = 0x350b68u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950550)));
    // 0x350b6c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x350b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x350b70: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x350b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x350b74: 0xa485be96  sh          $a1, -0x416A($a0)
    ctx->pc = 0x350b74u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294950550), (uint16_t)GPR_U32(ctx, 5));
    // 0x350b78: 0x9463be96  lhu         $v1, -0x416A($v1)
    ctx->pc = 0x350b78u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950550)));
    // 0x350b7c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x350B7Cu;
    {
        const bool branch_taken_0x350b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x350b7c) {
            ctx->pc = 0x350B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350B7Cu;
            // 0x350b80: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350B90u;
            goto label_350b90;
        }
    }
    ctx->pc = 0x350B84u;
    // 0x350b84: 0xc0d1b18  jal         func_346C60
    ctx->pc = 0x350B84u;
    SET_GPR_U32(ctx, 31, 0x350B8Cu);
    ctx->pc = 0x350B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350B84u;
    // 0x350b88: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346C60u, 0x350B84u, 0x350B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350B8Cu;
label_350b8c:
    // 0x350b8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x350b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_350b90:
    // 0x350b90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x350b90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350b94: 0x3e00008  jr          $ra
    ctx->pc = 0x350B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350B94u;
        // 0x350b98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350B9Cu;
    // 0x350b9c: 0x0  nop
    ctx->pc = 0x350b9cu;
    // NOP
    // 0x350ba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x350ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x350ba4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x350ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x350ba8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x350ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x350bac: 0xc043e52  jal         func_10F948
    ctx->pc = 0x350BACu;
    SET_GPR_U32(ctx, 31, 0x350BB4u);
    ctx->pc = 0x350BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350BACu;
    // 0x350bb0: 0x24845398  addiu       $a0, $a0, 0x5398 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x350BACu, 0x350BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350BB4u;
label_350bb4:
    // 0x350bb4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x350bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x350bb8: 0x90429490  lbu         $v0, -0x6B70($v0)
    ctx->pc = 0x350bb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939792)));
    // 0x350bbc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_350bc0:
    if (ctx->pc == 0x350BC0u) {
        ctx->pc = 0x350BC4u;
        goto label_fallthrough_0x350bbc;
    }
    ctx->pc = 0x350BBCu;
    {
        const bool branch_taken_0x350bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x350bbc) {
            ctx->pc = 0x350BE0u;
            goto label_350be0;
        }
    }
label_fallthrough_0x350bbc:
    ctx->pc = 0x350BC4u;
    // 0x350bc4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x350bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x350bc8: 0xc082674  jal         func_2099D0
    ctx->pc = 0x350BC8u;
    SET_GPR_U32(ctx, 31, 0x350BD0u);
    ctx->pc = 0x350BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350BC8u;
    // 0x350bcc: 0x24840c30  addiu       $a0, $a0, 0xC30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x350BC8u, 0x350BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350BD0u;
label_350bd0:
    // 0x350bd0: 0xc0d430c  jal         func_350C30
    ctx->pc = 0x350BD0u;
    SET_GPR_U32(ctx, 31, 0x350BD8u);
    ctx->pc = 0x350C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350C30u, 0x350BD0u, 0x350BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350BD8u;
label_350bd8:
    // 0x350bd8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x350BD8u;
    {
        const bool branch_taken_0x350bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350BD8u;
        // 0x350bdc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350bd8) {
            ctx->pc = 0x350C20u;
            goto label_350c20;
        }
    }
    ctx->pc = 0x350BE0u;
label_350be0:
    // 0x350be0: 0xc04a3be  jal         func_128EF8
    ctx->pc = 0x350BE0u;
    SET_GPR_U32(ctx, 31, 0x350BE8u);
    ctx->pc = 0x128EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128EF8u, 0x350BE0u, 0x350BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350BE8u;
label_350be8:
    // 0x350be8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x350be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x350bec: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x350becu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x350bf0: 0x2484bec0  addiu       $a0, $a0, -0x4140
    ctx->pc = 0x350bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950592));
    // 0x350bf4: 0xac62bec0  sw          $v0, -0x4140($v1)
    ctx->pc = 0x350bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950592), GPR_U32(ctx, 2));
    // 0x350bf8: 0xc0bb518  jal         func_2ED460
    ctx->pc = 0x350BF8u;
    SET_GPR_U32(ctx, 31, 0x350C00u);
    ctx->pc = 0x350BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350BF8u;
    // 0x350bfc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED460u, 0x350BF8u, 0x350C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350C00u;
label_350c00:
    // 0x350c00: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x350C00u;
    {
        const bool branch_taken_0x350c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x350c00) {
            ctx->pc = 0x350C1Cu;
            goto label_350c1c;
        }
    }
    ctx->pc = 0x350C08u;
    // 0x350c08: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x350c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x350c0c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x350C0Cu;
    SET_GPR_U32(ctx, 31, 0x350C14u);
    ctx->pc = 0x350C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350C0Cu;
    // 0x350c10: 0x24840c30  addiu       $a0, $a0, 0xC30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x350C0Cu, 0x350C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350C14u;
label_350c14:
    // 0x350c14: 0xc0d430c  jal         func_350C30
    ctx->pc = 0x350C14u;
    SET_GPR_U32(ctx, 31, 0x350C1Cu);
    ctx->pc = 0x350C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350C30u, 0x350C14u, 0x350C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350C1Cu;
label_350c1c:
    // 0x350c1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x350c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_350c20:
    // 0x350c20: 0x3e00008  jr          $ra
    ctx->pc = 0x350C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350C20u;
        // 0x350c24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350C28u;
    // 0x350c28: 0x0  nop
    ctx->pc = 0x350c28u;
    // NOP
    // 0x350c2c: 0x0  nop
    ctx->pc = 0x350c2cu;
    // NOP
}
