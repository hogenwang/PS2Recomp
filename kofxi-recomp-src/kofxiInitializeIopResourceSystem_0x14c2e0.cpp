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

// Function: kofxiInitializeIopResourceSystem
// Address: 0x14c2e0 - 0x14c6e0
void kofxiInitializeIopResourceSystem_0x14c2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiInitializeIopResourceSystem_0x14c2e0");
#endif

    switch (ctx->pc) {
        case 0x14c310u: goto label_14c310;
        case 0x14c318u: goto label_14c318;
        case 0x14c324u: goto label_14c324;
        case 0x14c32cu: goto label_14c32c;
        case 0x14c33cu: goto label_14c33c;
        case 0x14c350u: goto label_14c350;
        case 0x14c364u: goto label_14c364;
        case 0x14c378u: goto label_14c378;
        case 0x14c38cu: goto label_14c38c;
        case 0x14c3c0u: goto label_14c3c0;
        case 0x14c3d4u: goto label_14c3d4;
        case 0x14c3ecu: goto label_14c3ec;
        case 0x14c400u: goto label_14c400;
        case 0x14c404u: goto label_14c404;
        case 0x14c40cu: goto label_14c40c;
        case 0x14c414u: goto label_14c414;
        case 0x14c41cu: goto label_14c41c;
        case 0x14c444u: goto label_14c444;
        case 0x14c458u: goto label_14c458;
        case 0x14c470u: goto label_14c470;
        case 0x14c488u: goto label_14c488;
        case 0x14c49cu: goto label_14c49c;
        case 0x14c4b0u: goto label_14c4b0;
        case 0x14c4ccu: goto label_14c4cc;
        case 0x14c4d4u: goto label_14c4d4;
        case 0x14c4e8u: goto label_14c4e8;
        case 0x14c530u: goto label_14c530;
        case 0x14c548u: goto label_14c548;
        case 0x14c560u: goto label_14c560;
        case 0x14c574u: goto label_14c574;
        case 0x14c584u: goto label_14c584;
        case 0x14c598u: goto label_14c598;
        case 0x14c5acu: goto label_14c5ac;
        case 0x14c5c4u: goto label_14c5c4;
        case 0x14c5d8u: goto label_14c5d8;
        case 0x14c5dcu: goto label_14c5dc;
        case 0x14c610u: goto label_14c610;
        case 0x14c638u: goto label_14c638;
        case 0x14c648u: goto label_14c648;
        case 0x14c658u: goto label_14c658;
        case 0x14c66cu: goto label_14c66c;
        case 0x14c680u: goto label_14c680;
        case 0x14c694u: goto label_14c694;
        case 0x14c6a8u: goto label_14c6a8;
        default: break;
    }

    ctx->pc = 0x14c2e0u;

    // 0x14c2e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14c2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14c2e4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x14c2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x14c2e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14c2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14c2ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14c2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14c2f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14c2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14c2f4: 0x8c64e070  lw          $a0, -0x1F90($v1)
    ctx->pc = 0x14c2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959216)));
    // 0x14c2f8: 0x3c031972  lui         $v1, 0x1972
    ctx->pc = 0x14c2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6514 << 16));
    // 0x14c2fc: 0x34630515  ori         $v1, $v1, 0x515
    ctx->pc = 0x14c2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1301);
    // 0x14c300: 0x508300f0  beql        $a0, $v1, . + 4 + (0xF0 << 2)
    ctx->pc = 0x14C300u;
    {
        const bool branch_taken_0x14c300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14c300) {
            ctx->pc = 0x14C304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C300u;
            // 0x14c304: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C6C4u;
            goto label_14c6c4;
        }
    }
    ctx->pc = 0x14C308u;
    // 0x14c308: 0xc06e172  jal         func_1B85C8
    ctx->pc = 0x14C308u;
    SET_GPR_U32(ctx, 31, 0x14C310u);
    ctx->pc = 0x14C30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C308u;
    // 0x14c30c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B85C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B85C8u, 0x14C308u, 0x14C310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C310u;
label_14c310:
    // 0x14c310: 0xc06cd9c  jal         func_1B3670
    ctx->pc = 0x14C310u;
    SET_GPR_U32(ctx, 31, 0x14C318u);
    ctx->pc = 0x14C314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C310u;
    // 0x14c314: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3670u, 0x14C310u, 0x14C318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C318u;
label_14c318:
    // 0x14c318: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x14c318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x14c31c: 0xc040800  jal         func_102000
    ctx->pc = 0x14C31Cu;
    SET_GPR_U32(ctx, 31, 0x14C324u);
    ctx->pc = 0x14C320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C31Cu;
    // 0x14c320: 0x2484ac40  addiu       $a0, $a0, -0x53C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102000u, 0x14C31Cu, 0x14C324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C324u;
label_14c324:
    // 0x14c324: 0xc04644c  jal         func_119130
    ctx->pc = 0x14C324u;
    SET_GPR_U32(ctx, 31, 0x14C32Cu);
    ctx->pc = 0x119130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119130u, 0x14C324u, 0x14C32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C32Cu;
label_14c32c:
    // 0x14c32c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x14c32cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x14c330: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14c330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c334: 0xc06cd96  jal         func_1B3658
    ctx->pc = 0x14C334u;
    SET_GPR_U32(ctx, 31, 0x14C33Cu);
    ctx->pc = 0x14C338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C334u;
    // 0x14c338: 0x2484a9c0  addiu       $a0, $a0, -0x5640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3658u, 0x14C334u, 0x14C33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C33Cu;
label_14c33c:
    // 0x14c33c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14c33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c340: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x14c340u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x14c344: 0x24060980  addiu       $a2, $zero, 0x980
    ctx->pc = 0x14c344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2432));
    // 0x14c348: 0xc0464a2  jal         func_119288
    ctx->pc = 0x14C348u;
    SET_GPR_U32(ctx, 31, 0x14C350u);
    ctx->pc = 0x14C34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C348u;
    // 0x14c34c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119288u, 0x14C348u, 0x14C350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C350u;
label_14c350:
    // 0x14c350: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14c350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c354: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x14c354u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x14c358: 0x24060a80  addiu       $a2, $zero, 0xA80
    ctx->pc = 0x14c358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2688));
    // 0x14c35c: 0xc0464a2  jal         func_119288
    ctx->pc = 0x14C35Cu;
    SET_GPR_U32(ctx, 31, 0x14C364u);
    ctx->pc = 0x14C360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C35Cu;
    // 0x14c360: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119288u, 0x14C35Cu, 0x14C364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C364u;
label_14c364:
    // 0x14c364: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14c364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c368: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x14c368u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x14c36c: 0x24060981  addiu       $a2, $zero, 0x981
    ctx->pc = 0x14c36cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2433));
    // 0x14c370: 0xc0464a2  jal         func_119288
    ctx->pc = 0x14C370u;
    SET_GPR_U32(ctx, 31, 0x14C378u);
    ctx->pc = 0x14C374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C370u;
    // 0x14c374: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119288u, 0x14C370u, 0x14C378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C378u;
label_14c378:
    // 0x14c378: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14c378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c37c: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x14c37cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x14c380: 0x24060a81  addiu       $a2, $zero, 0xA81
    ctx->pc = 0x14c380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2689));
    // 0x14c384: 0xc0464a2  jal         func_119288
    ctx->pc = 0x14C384u;
    SET_GPR_U32(ctx, 31, 0x14C38Cu);
    ctx->pc = 0x14C388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C384u;
    // 0x14c388: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119288u, 0x14C384u, 0x14C38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C38Cu;
label_14c38c:
    // 0x14c38c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x14c38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14c390: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14c390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c394: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x14c394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x14c398: 0x34058070  ori         $a1, $zero, 0x8070
    ctx->pc = 0x14c398u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32880);
    // 0x14c39c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x14c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14c3a0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x14c3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14c3a4: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x14c3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x14c3a8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x14c3a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c3ac: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x14c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x14c3b0: 0xa7a00038  sh          $zero, 0x38($sp)
    ctx->pc = 0x14c3b0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 56), (uint16_t)GPR_U32(ctx, 0));
    // 0x14c3b4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x14c3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x14c3b8: 0xc0464a2  jal         func_119288
    ctx->pc = 0x14C3B8u;
    SET_GPR_U32(ctx, 31, 0x14C3C0u);
    ctx->pc = 0x14C3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C3B8u;
    // 0x14c3bc: 0xa7a0003a  sh          $zero, 0x3A($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 58), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119288u, 0x14C3B8u, 0x14C3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C3C0u;
label_14c3c0:
    // 0x14c3c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14c3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c3c4: 0x34058130  ori         $a1, $zero, 0x8130
    ctx->pc = 0x14c3c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33072);
    // 0x14c3c8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14c3c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c3cc: 0xc0464a2  jal         func_119288
    ctx->pc = 0x14C3CCu;
    SET_GPR_U32(ctx, 31, 0x14C3D4u);
    ctx->pc = 0x14C3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C3CCu;
    // 0x14c3d0: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119288u, 0x14C3CCu, 0x14C3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C3D4u;
label_14c3d4:
    // 0x14c3d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14c3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c3d8: 0x34058150  ori         $a1, $zero, 0x8150
    ctx->pc = 0x14c3d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33104);
    // 0x14c3dc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14c3dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c3e0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x14c3e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c3e4: 0xc0464a2  jal         func_119288
    ctx->pc = 0x14C3E4u;
    SET_GPR_U32(ctx, 31, 0x14C3ECu);
    ctx->pc = 0x14C3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C3E4u;
    // 0x14c3e8: 0x24080007  addiu       $t0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119288u, 0x14C3E4u, 0x14C3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C3ECu;
label_14c3ec:
    // 0x14c3ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14c3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c3f0: 0x340580f0  ori         $a1, $zero, 0x80F0
    ctx->pc = 0x14c3f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
    // 0x14c3f4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14c3f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c3f8: 0xc0464a2  jal         func_119288
    ctx->pc = 0x14C3F8u;
    SET_GPR_U32(ctx, 31, 0x14C400u);
    ctx->pc = 0x14C3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C3F8u;
    // 0x14c3fc: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119288u, 0x14C3F8u, 0x14C400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C400u;
label_14c400:
    // 0x14c400: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14c400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14c404:
    // 0x14c404: 0xc06cfea  jal         func_1B3FA8
    ctx->pc = 0x14C404u;
    SET_GPR_U32(ctx, 31, 0x14C40Cu);
    ctx->pc = 0x1B3FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3FA8u, 0x14C404u, 0x14C40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C40Cu;
label_14c40c:
    // 0x14c40c: 0xc06d03c  jal         func_1B40F0
    ctx->pc = 0x14C40Cu;
    SET_GPR_U32(ctx, 31, 0x14C414u);
    ctx->pc = 0x1B40F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40F0u, 0x14C40Cu, 0x14C414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C414u;
label_14c414:
    // 0x14c414: 0xc04042e  jal         func_1010B8
    ctx->pc = 0x14C414u;
    SET_GPR_U32(ctx, 31, 0x14C41Cu);
    ctx->pc = 0x14C418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C414u;
    // 0x14c418: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1010B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1010B8u, 0x14C414u, 0x14C41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C41Cu;
label_14c41c:
    // 0x14c41c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x14c41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14c420: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x14c420u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14c424: 0x2a02001e  slti        $v0, $s0, 0x1E
    ctx->pc = 0x14c424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x14c428: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x14C428u;
    {
        const bool branch_taken_0x14c428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c428) {
            ctx->pc = 0x14C404u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14c404;
        }
    }
    ctx->pc = 0x14C430u;
    // 0x14c430: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14c430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c434: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x14c434u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x14c438: 0x24060b81  addiu       $a2, $zero, 0xB81
    ctx->pc = 0x14c438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2945));
    // 0x14c43c: 0xc0464a2  jal         func_119288
    ctx->pc = 0x14C43Cu;
    SET_GPR_U32(ctx, 31, 0x14C444u);
    ctx->pc = 0x14C440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C43Cu;
    // 0x14c440: 0x24073fff  addiu       $a3, $zero, 0x3FFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119288u, 0x14C43Cu, 0x14C444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C444u;
label_14c444:
    // 0x14c444: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14c444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c448: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x14c448u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x14c44c: 0x24060c81  addiu       $a2, $zero, 0xC81
    ctx->pc = 0x14c44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3201));
    // 0x14c450: 0xc0464a2  jal         func_119288
    ctx->pc = 0x14C450u;
    SET_GPR_U32(ctx, 31, 0x14C458u);
    ctx->pc = 0x14C454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C450u;
    // 0x14c454: 0x24073fff  addiu       $a3, $zero, 0x3FFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119288u, 0x14C450u, 0x14C458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C458u;
label_14c458:
    // 0x14c458: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x14c458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x14c45c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14c45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c460: 0x34058030  ori         $a1, $zero, 0x8030
    ctx->pc = 0x14c460u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32816);
    // 0x14c464: 0x24061901  addiu       $a2, $zero, 0x1901
    ctx->pc = 0x14c464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6401));
    // 0x14c468: 0xc0464a2  jal         func_119288
    ctx->pc = 0x14C468u;
    SET_GPR_U32(ctx, 31, 0x14C470u);
    ctx->pc = 0x14C46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C468u;
    // 0x14c46c: 0x3447ffff  ori         $a3, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x119288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119288u, 0x14C468u, 0x14C470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C470u;
label_14c470:
    // 0x14c470: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x14c470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x14c474: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14c474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c478: 0x34058030  ori         $a1, $zero, 0x8030
    ctx->pc = 0x14c478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32816);
    // 0x14c47c: 0x24061b01  addiu       $a2, $zero, 0x1B01
    ctx->pc = 0x14c47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6913));
    // 0x14c480: 0xc0464a2  jal         func_119288
    ctx->pc = 0x14C480u;
    SET_GPR_U32(ctx, 31, 0x14C488u);
    ctx->pc = 0x14C484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C480u;
    // 0x14c484: 0x3447ffff  ori         $a3, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x119288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119288u, 0x14C480u, 0x14C488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C488u;
label_14c488:
    // 0x14c488: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14c488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c48c: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x14c48cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x14c490: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x14c490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x14c494: 0xc0464a2  jal         func_119288
    ctx->pc = 0x14C494u;
    SET_GPR_U32(ctx, 31, 0x14C49Cu);
    ctx->pc = 0x14C498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C494u;
    // 0x14c498: 0x24070ccc  addiu       $a3, $zero, 0xCCC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119288u, 0x14C494u, 0x14C49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C49Cu;
label_14c49c:
    // 0x14c49c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14c49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c4a0: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x14c4a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x14c4a4: 0x24060801  addiu       $a2, $zero, 0x801
    ctx->pc = 0x14c4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
    // 0x14c4a8: 0xc0464a2  jal         func_119288
    ctx->pc = 0x14C4A8u;
    SET_GPR_U32(ctx, 31, 0x14C4B0u);
    ctx->pc = 0x14C4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C4A8u;
    // 0x14c4ac: 0x24070cfc  addiu       $a3, $zero, 0xCFC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3324));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119288u, 0x14C4A8u, 0x14C4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C4B0u;
label_14c4b0:
    // 0x14c4b0: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x14c4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x14c4b4: 0x3c070093  lui         $a3, 0x93
    ctx->pc = 0x14c4b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)147 << 16));
    // 0x14c4b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14c4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c4bc: 0x24a5cef0  addiu       $a1, $a1, -0x3110
    ctx->pc = 0x14c4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954736));
    // 0x14c4c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14c4c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c4c4: 0xc06bbc8  jal         func_1AEF20
    ctx->pc = 0x14C4C4u;
    SET_GPR_U32(ctx, 31, 0x14C4CCu);
    ctx->pc = 0x14C4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C4C4u;
    // 0x14c4c8: 0x24e7e700  addiu       $a3, $a3, -0x1900 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF20u, 0x14C4C4u, 0x14C4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C4CCu;
label_14c4cc:
    // 0x14c4cc: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x14C4CCu;
    SET_GPR_U32(ctx, 31, 0x14C4D4u);
    ctx->pc = 0x14C4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C4CCu;
    // 0x14c4d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x14C4CCu, 0x14C4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C4D4u;
label_14c4d4:
    // 0x14c4d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14c4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14c4d8: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14C4D8u;
    {
        const bool branch_taken_0x14c4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14c4d8) {
            ctx->pc = 0x14C4F0u;
            goto label_14c4f0;
        }
    }
    ctx->pc = 0x14C4E0u;
    // 0x14c4e0: 0xc06cfea  jal         func_1B3FA8
    ctx->pc = 0x14C4E0u;
    SET_GPR_U32(ctx, 31, 0x14C4E8u);
    ctx->pc = 0x1B3FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3FA8u, 0x14C4E0u, 0x14C4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C4E8u;
label_14c4e8:
    // 0x14c4e8: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x14C4E8u;
    {
        const bool branch_taken_0x14c4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c4e8) {
            ctx->pc = 0x14C4CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14c4cc;
        }
    }
    ctx->pc = 0x14C4F0u;
label_14c4f0:
    // 0x14c4f0: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x14c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x14c4f4: 0x9047b26a  lbu         $a3, -0x4D96($v0)
    ctx->pc = 0x14c4f4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947434)));
    // 0x14c4f8: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x14c4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x14c4fc: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x14c4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x14c500: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14c500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14c504: 0x24c6e080  addiu       $a2, $a2, -0x1F80
    ctx->pc = 0x14c504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959232));
    // 0x14c508: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x14c508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14c50c: 0x30e70007  andi        $a3, $a3, 0x7
    ctx->pc = 0x14c50cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
    // 0x14c510: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14c510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14c514: 0xa0a75d88  sb          $a3, 0x5D88($a1)
    ctx->pc = 0x14c514u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 23944), (uint8_t)GPR_U32(ctx, 7));
    // 0x14c518: 0x90635d88  lbu         $v1, 0x5D88($v1)
    ctx->pc = 0x14c518u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23944)));
    // 0x14c51c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14c51cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14c520: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x14c520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14c524: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14c524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14c528: 0xc06dfd0  jal         func_1B7F40
    ctx->pc = 0x14C528u;
    SET_GPR_U32(ctx, 31, 0x14C530u);
    ctx->pc = 0x14C52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C528u;
    // 0x14c52c: 0xac435d90  sw          $v1, 0x5D90($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 23952), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F40u, 0x14C528u, 0x14C530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C530u;
label_14c530:
    // 0x14c530: 0x3c050090  lui         $a1, 0x90
    ctx->pc = 0x14c530u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)144 << 16));
    // 0x14c534: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x14c534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x14c538: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x14c538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14c53c: 0x24a5e500  addiu       $a1, $a1, -0x1B00
    ctx->pc = 0x14c53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960384));
    // 0x14c540: 0xc06e1ee  jal         func_1B87B8
    ctx->pc = 0x14C540u;
    SET_GPR_U32(ctx, 31, 0x14C548u);
    ctx->pc = 0x14C544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C540u;
    // 0x14c544: 0x344601e4  ori         $a2, $v0, 0x1E4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)484);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B87B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B87B8u, 0x14C540u, 0x14C548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C548u;
label_14c548:
    // 0x14c548: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x14c548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x14c54c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14c54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c550: 0xac62e4c0  sw          $v0, -0x1B40($v1)
    ctx->pc = 0x14c550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960320), GPR_U32(ctx, 2));
    // 0x14c554: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14c554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c558: 0xc06e75a  jal         func_1B9D68
    ctx->pc = 0x14C558u;
    SET_GPR_U32(ctx, 31, 0x14C560u);
    ctx->pc = 0x14C55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C558u;
    // 0x14c55c: 0x2406ff80  addiu       $a2, $zero, -0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9D68u, 0x14C558u, 0x14C560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C560u;
label_14c560:
    // 0x14c560: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x14c560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x14c564: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14c564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c568: 0x8c44e4c0  lw          $a0, -0x1B40($v0)
    ctx->pc = 0x14c568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960320)));
    // 0x14c56c: 0xc06e75a  jal         func_1B9D68
    ctx->pc = 0x14C56Cu;
    SET_GPR_U32(ctx, 31, 0x14C574u);
    ctx->pc = 0x14C570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C56Cu;
    // 0x14c570: 0x2406ff80  addiu       $a2, $zero, -0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9D68u, 0x14C56Cu, 0x14C574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C574u;
label_14c574:
    // 0x14c574: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x14c574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x14c578: 0x8c44e4c0  lw          $a0, -0x1B40($v0)
    ctx->pc = 0x14c578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960320)));
    // 0x14c57c: 0xc06e98e  jal         func_1BA638
    ctx->pc = 0x14C57Cu;
    SET_GPR_U32(ctx, 31, 0x14C584u);
    ctx->pc = 0x14C580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C57Cu;
    // 0x14c580: 0x2405004b  addiu       $a1, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA638u, 0x14C57Cu, 0x14C584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C584u;
label_14c584:
    // 0x14c584: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x14c584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x14c588: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14c588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14c58c: 0x8c455d90  lw          $a1, 0x5D90($v0)
    ctx->pc = 0x14c58cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23952)));
    // 0x14c590: 0xc06e822  jal         func_1BA088
    ctx->pc = 0x14C590u;
    SET_GPR_U32(ctx, 31, 0x14C598u);
    ctx->pc = 0x14C594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C590u;
    // 0x14c594: 0x8c64e4c0  lw          $a0, -0x1B40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960320)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA088u, 0x14C590u, 0x14C598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C598u;
label_14c598:
    // 0x14c598: 0x3c050088  lui         $a1, 0x88
    ctx->pc = 0x14c598u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)136 << 16));
    // 0x14c59c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x14c59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14c5a0: 0x24a5eb00  addiu       $a1, $a1, -0x1500
    ctx->pc = 0x14c5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961920));
    // 0x14c5a4: 0xc06e1ee  jal         func_1B87B8
    ctx->pc = 0x14C5A4u;
    SET_GPR_U32(ctx, 31, 0x14C5ACu);
    ctx->pc = 0x14C5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C5A4u;
    // 0x14c5a8: 0x340681c0  ori         $a2, $zero, 0x81C0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33216);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B87B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B87B8u, 0x14C5A4u, 0x14C5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C5ACu;
label_14c5ac:
    // 0x14c5ac: 0x3c030088  lui         $v1, 0x88
    ctx->pc = 0x14c5acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)136 << 16));
    // 0x14c5b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14c5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c5b4: 0xac62eae0  sw          $v0, -0x1520($v1)
    ctx->pc = 0x14c5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961888), GPR_U32(ctx, 2));
    // 0x14c5b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14c5b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c5bc: 0xc06e75a  jal         func_1B9D68
    ctx->pc = 0x14C5BCu;
    SET_GPR_U32(ctx, 31, 0x14C5C4u);
    ctx->pc = 0x14C5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C5BCu;
    // 0x14c5c0: 0x2406ff80  addiu       $a2, $zero, -0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9D68u, 0x14C5BCu, 0x14C5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C5C4u;
label_14c5c4:
    // 0x14c5c4: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x14c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
    // 0x14c5c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14c5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c5cc: 0x8c44eae0  lw          $a0, -0x1520($v0)
    ctx->pc = 0x14c5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961888)));
    // 0x14c5d0: 0xc06e75a  jal         func_1B9D68
    ctx->pc = 0x14C5D0u;
    SET_GPR_U32(ctx, 31, 0x14C5D8u);
    ctx->pc = 0x14C5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C5D0u;
    // 0x14c5d4: 0x2406ff80  addiu       $a2, $zero, -0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9D68u, 0x14C5D0u, 0x14C5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C5D8u;
label_14c5d8:
    // 0x14c5d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14c5d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14c5dc:
    // 0x14c5dc: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x14c5dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x14c5e0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14c5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14c5e4: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x14c5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x14c5e8: 0x24425dc0  addiu       $v0, $v0, 0x5DC0
    ctx->pc = 0x14c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24000));
    // 0x14c5ec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14c5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14c5f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14c5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c5f4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x14c5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x14c5f8: 0x24064100  addiu       $a2, $zero, 0x4100
    ctx->pc = 0x14c5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16640));
    // 0x14c5fc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14c5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14c600: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x14c600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x14c604: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x14c604u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14c608: 0xc06e1ee  jal         func_1B87B8
    ctx->pc = 0x14C608u;
    SET_GPR_U32(ctx, 31, 0x14C610u);
    ctx->pc = 0x14C60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C608u;
    // 0x14c60c: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B87B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B87B8u, 0x14C608u, 0x14C610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C610u;
label_14c610:
    // 0x14c610: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x14c610u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x14c614: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x14c614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14c618: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x14c618u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14c61c: 0x2a02000e  slti        $v0, $s0, 0xE
    ctx->pc = 0x14c61cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x14c620: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x14C620u;
    {
        const bool branch_taken_0x14c620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C620u;
        // 0x14c624: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c620) {
            ctx->pc = 0x14C5DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14c5dc;
        }
    }
    ctx->pc = 0x14C628u;
    // 0x14c628: 0x3c050088  lui         $a1, 0x88
    ctx->pc = 0x14c628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)136 << 16));
    // 0x14c62c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x14c62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14c630: 0xc052b7c  jal         func_14ADF0
    ctx->pc = 0x14C630u;
    SET_GPR_U32(ctx, 31, 0x14C638u);
    ctx->pc = 0x14C634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C630u;
    // 0x14c634: 0x24a56cc0  addiu       $a1, $a1, 0x6CC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ADF0u, 0x14C630u, 0x14C638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C638u;
label_14c638:
    // 0x14c638: 0x3c050082  lui         $a1, 0x82
    ctx->pc = 0x14c638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)130 << 16));
    // 0x14c63c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x14c63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14c640: 0xc052b7c  jal         func_14ADF0
    ctx->pc = 0x14C640u;
    SET_GPR_U32(ctx, 31, 0x14C648u);
    ctx->pc = 0x14C644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C640u;
    // 0x14c644: 0x24a5c2c0  addiu       $a1, $a1, -0x3D40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ADF0u, 0x14C640u, 0x14C648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C648u;
label_14c648:
    // 0x14c648: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x14c648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14c64c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14c650: 0xc05304c  jal         func_14C130
    ctx->pc = 0x14C650u;
    SET_GPR_U32(ctx, 31, 0x14C658u);
    ctx->pc = 0x14C654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C650u;
    // 0x14c654: 0xa0435d98  sb          $v1, 0x5D98($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 23960), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C130u, 0x14C650u, 0x14C658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C658u;
label_14c658:
    // 0x14c658: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14c658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c65c: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x14c65cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x14c660: 0x24060980  addiu       $a2, $zero, 0x980
    ctx->pc = 0x14c660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2432));
    // 0x14c664: 0xc0464a2  jal         func_119288
    ctx->pc = 0x14C664u;
    SET_GPR_U32(ctx, 31, 0x14C66Cu);
    ctx->pc = 0x14C668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C664u;
    // 0x14c668: 0x24073fff  addiu       $a3, $zero, 0x3FFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119288u, 0x14C664u, 0x14C66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C66Cu;
label_14c66c:
    // 0x14c66c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14c66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c670: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x14c670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x14c674: 0x24060a80  addiu       $a2, $zero, 0xA80
    ctx->pc = 0x14c674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2688));
    // 0x14c678: 0xc0464a2  jal         func_119288
    ctx->pc = 0x14C678u;
    SET_GPR_U32(ctx, 31, 0x14C680u);
    ctx->pc = 0x14C67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C678u;
    // 0x14c67c: 0x24073fff  addiu       $a3, $zero, 0x3FFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119288u, 0x14C678u, 0x14C680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C680u;
label_14c680:
    // 0x14c680: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14c680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c684: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x14c684u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x14c688: 0x24060981  addiu       $a2, $zero, 0x981
    ctx->pc = 0x14c688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2433));
    // 0x14c68c: 0xc0464a2  jal         func_119288
    ctx->pc = 0x14C68Cu;
    SET_GPR_U32(ctx, 31, 0x14C694u);
    ctx->pc = 0x14C690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C68Cu;
    // 0x14c690: 0x24073fff  addiu       $a3, $zero, 0x3FFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119288u, 0x14C68Cu, 0x14C694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C694u;
label_14c694:
    // 0x14c694: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14c694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c698: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x14c698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x14c69c: 0x24060a81  addiu       $a2, $zero, 0xA81
    ctx->pc = 0x14c69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2689));
    // 0x14c6a0: 0xc0464a2  jal         func_119288
    ctx->pc = 0x14C6A0u;
    SET_GPR_U32(ctx, 31, 0x14C6A8u);
    ctx->pc = 0x14C6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C6A0u;
    // 0x14c6a4: 0x24073fff  addiu       $a3, $zero, 0x3FFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119288u, 0x14C6A0u, 0x14C6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C6A8u;
label_14c6a8:
    // 0x14c6a8: 0x3c031972  lui         $v1, 0x1972
    ctx->pc = 0x14c6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6514 << 16));
    // 0x14c6ac: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x14c6acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x14c6b0: 0x34650515  ori         $a1, $v1, 0x515
    ctx->pc = 0x14c6b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1301);
    // 0x14c6b4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14c6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14c6b8: 0xac85e070  sw          $a1, -0x1F90($a0)
    ctx->pc = 0x14c6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294959216), GPR_U32(ctx, 5));
    // 0x14c6bc: 0xa0605d18  sb          $zero, 0x5D18($v1)
    ctx->pc = 0x14c6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 23832), (uint8_t)GPR_U32(ctx, 0));
    // 0x14c6c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14c6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14c6c4:
    // 0x14c6c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14c6c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c6c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14c6c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c6cc: 0x3e00008  jr          $ra
    ctx->pc = 0x14C6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C6CCu;
        // 0x14c6d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C6CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C6D4u;
    // 0x14c6d4: 0x0  nop
    ctx->pc = 0x14c6d4u;
    // NOP
    // 0x14c6d8: 0x0  nop
    ctx->pc = 0x14c6d8u;
    // NOP
    // 0x14c6dc: 0x0  nop
    ctx->pc = 0x14c6dcu;
    // NOP
}
