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

// Function: sub_00212370
// Address: 0x212370 - 0x212480
void sub_00212370_0x212370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212370_0x212370");
#endif

    switch (ctx->pc) {
        case 0x21238cu: goto label_21238c;
        case 0x21239cu: goto label_21239c;
        case 0x2123acu: goto label_2123ac;
        case 0x2123bcu: goto label_2123bc;
        case 0x2123ccu: goto label_2123cc;
        case 0x2123dcu: goto label_2123dc;
        case 0x2123ecu: goto label_2123ec;
        case 0x2123fcu: goto label_2123fc;
        case 0x21240cu: goto label_21240c;
        case 0x21241cu: goto label_21241c;
        case 0x21242cu: goto label_21242c;
        case 0x21243cu: goto label_21243c;
        case 0x21244cu: goto label_21244c;
        case 0x21245cu: goto label_21245c;
        default: break;
    }

    ctx->pc = 0x212370u;

    // 0x212370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x212370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x212374: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x212374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212378: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x212378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21237c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21237cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212380: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212384: 0xc043e52  jal         func_10F948
    ctx->pc = 0x212384u;
    SET_GPR_U32(ctx, 31, 0x21238Cu);
    ctx->pc = 0x212388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212384u;
    // 0x212388: 0x24840438  addiu       $a0, $a0, 0x438 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x212384u, 0x21238Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21238Cu;
label_21238c:
    // 0x21238c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x21238cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x212390: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212394: 0xc043e52  jal         func_10F948
    ctx->pc = 0x212394u;
    SET_GPR_U32(ctx, 31, 0x21239Cu);
    ctx->pc = 0x212398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212394u;
    // 0x212398: 0x24840458  addiu       $a0, $a0, 0x458 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x212394u, 0x21239Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21239Cu;
label_21239c:
    // 0x21239c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21239cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2123a0: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x2123a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2123a4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2123A4u;
    SET_GPR_U32(ctx, 31, 0x2123ACu);
    ctx->pc = 0x2123A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2123A4u;
    // 0x2123a8: 0x24840468  addiu       $a0, $a0, 0x468 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2123A4u, 0x2123ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2123ACu;
label_2123ac:
    // 0x2123ac: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x2123acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2123b0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2123b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2123b4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2123B4u;
    SET_GPR_U32(ctx, 31, 0x2123BCu);
    ctx->pc = 0x2123B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2123B4u;
    // 0x2123b8: 0x24840478  addiu       $a0, $a0, 0x478 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2123B4u, 0x2123BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2123BCu;
label_2123bc:
    // 0x2123bc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2123bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2123c0: 0x26050028  addiu       $a1, $s0, 0x28
    ctx->pc = 0x2123c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x2123c4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2123C4u;
    SET_GPR_U32(ctx, 31, 0x2123CCu);
    ctx->pc = 0x2123C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2123C4u;
    // 0x2123c8: 0x24840488  addiu       $a0, $a0, 0x488 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2123C4u, 0x2123CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2123CCu;
label_2123cc:
    // 0x2123cc: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x2123ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2123d0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2123d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2123d4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2123D4u;
    SET_GPR_U32(ctx, 31, 0x2123DCu);
    ctx->pc = 0x2123D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2123D4u;
    // 0x2123d8: 0x24840498  addiu       $a0, $a0, 0x498 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2123D4u, 0x2123DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2123DCu;
label_2123dc:
    // 0x2123dc: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x2123dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2123e0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2123e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2123e4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2123E4u;
    SET_GPR_U32(ctx, 31, 0x2123ECu);
    ctx->pc = 0x2123E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2123E4u;
    // 0x2123e8: 0x248404a8  addiu       $a0, $a0, 0x4A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2123E4u, 0x2123ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2123ECu;
label_2123ec:
    // 0x2123ec: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x2123ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2123f0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2123f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2123f4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2123F4u;
    SET_GPR_U32(ctx, 31, 0x2123FCu);
    ctx->pc = 0x2123F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2123F4u;
    // 0x2123f8: 0x248404b8  addiu       $a0, $a0, 0x4B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2123F4u, 0x2123FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2123FCu;
label_2123fc:
    // 0x2123fc: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x2123fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x212400: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212404: 0xc043e52  jal         func_10F948
    ctx->pc = 0x212404u;
    SET_GPR_U32(ctx, 31, 0x21240Cu);
    ctx->pc = 0x212408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212404u;
    // 0x212408: 0x248404c8  addiu       $a0, $a0, 0x4C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x212404u, 0x21240Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21240Cu;
label_21240c:
    // 0x21240c: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x21240cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x212410: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212414: 0xc043e52  jal         func_10F948
    ctx->pc = 0x212414u;
    SET_GPR_U32(ctx, 31, 0x21241Cu);
    ctx->pc = 0x212418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212414u;
    // 0x212418: 0x248404d8  addiu       $a0, $a0, 0x4D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x212414u, 0x21241Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21241Cu;
label_21241c:
    // 0x21241c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21241cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212420: 0x26050044  addiu       $a1, $s0, 0x44
    ctx->pc = 0x212420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x212424: 0xc043e52  jal         func_10F948
    ctx->pc = 0x212424u;
    SET_GPR_U32(ctx, 31, 0x21242Cu);
    ctx->pc = 0x212428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212424u;
    // 0x212428: 0x248404e8  addiu       $a0, $a0, 0x4E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x212424u, 0x21242Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21242Cu;
label_21242c:
    // 0x21242c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21242cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212430: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x212430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x212434: 0xc043e52  jal         func_10F948
    ctx->pc = 0x212434u;
    SET_GPR_U32(ctx, 31, 0x21243Cu);
    ctx->pc = 0x212438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212434u;
    // 0x212438: 0x248404f8  addiu       $a0, $a0, 0x4F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x212434u, 0x21243Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21243Cu;
label_21243c:
    // 0x21243c: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x21243cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x212440: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212444: 0xc043e52  jal         func_10F948
    ctx->pc = 0x212444u;
    SET_GPR_U32(ctx, 31, 0x21244Cu);
    ctx->pc = 0x212448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212444u;
    // 0x212448: 0x24840408  addiu       $a0, $a0, 0x408 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x212444u, 0x21244Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21244Cu;
label_21244c:
    // 0x21244c: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x21244cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x212450: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212454: 0xc043e52  jal         func_10F948
    ctx->pc = 0x212454u;
    SET_GPR_U32(ctx, 31, 0x21245Cu);
    ctx->pc = 0x212458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212454u;
    // 0x212458: 0x24840418  addiu       $a0, $a0, 0x418 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x212454u, 0x21245Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21245Cu;
label_21245c:
    // 0x21245c: 0x26100098  addiu       $s0, $s0, 0x98
    ctx->pc = 0x21245cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
    // 0x212460: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x212460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212464: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x212464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x212468: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21246c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21246cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212470: 0x24840428  addiu       $a0, $a0, 0x428
    ctx->pc = 0x212470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1064));
    // 0x212474: 0x8043e52  j           func_10F948
    ctx->pc = 0x212474u;
    ctx->pc = 0x212478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212474u;
    // 0x212478: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x21247Cu;
    // 0x21247c: 0x0  nop
    ctx->pc = 0x21247cu;
    // NOP
}
