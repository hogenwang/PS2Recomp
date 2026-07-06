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

// Function: kofxiThreadManagerInitResume
// Address: 0x1b36b8 - 0x1b3800
void kofxiThreadManagerInitResume_0x1b36b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiThreadManagerInitResume_0x1b36b8");
#endif

    switch (ctx->pc) {
        case 0x1b36c8u: goto label_1b36c8;
        case 0x1b36d8u: goto label_1b36d8;
        case 0x1b3778u: goto label_1b3778;
        case 0x1b378cu: goto label_1b378c;
        case 0x1b379cu: goto label_1b379c;
        case 0x1b37a4u: goto label_1b37a4;
        case 0x1b37acu: goto label_1b37ac;
        case 0x1b37b4u: goto label_1b37b4;
        case 0x1b37c4u: goto label_1b37c4;
        case 0x1b37d8u: goto label_1b37d8;
        default: break;
    }

    ctx->pc = 0x1b36b8u;

    // 0x1b36b8: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x1b36b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x1b36bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b36bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b36c0: 0xc07390a  jal         func_1CE428
    ctx->pc = 0x1B36C0u;
    SET_GPR_U32(ctx, 31, 0x1B36C8u);
    ctx->pc = 0x1B36C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B36C0u;
    // 0x1b36c4: 0x248429a0  addiu       $a0, $a0, 0x29A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE428u, 0x1B36C0u, 0x1B36C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B36C8u;
label_1b36c8:
    // 0x1b36c8: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x1b36c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x1b36cc: 0x24842a28  addiu       $a0, $a0, 0x2A28
    ctx->pc = 0x1b36ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10792));
    // 0x1b36d0: 0xc073910  jal         func_1CE440
    ctx->pc = 0x1B36D0u;
    SET_GPR_U32(ctx, 31, 0x1B36D8u);
    ctx->pc = 0x1B36D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B36D0u;
    // 0x1b36d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE440u, 0x1B36D0u, 0x1B36D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B36D8u;
label_1b36d8:
    // 0x1b36d8: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1b36d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1b36dc: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1b36dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1b36e0: 0x24425320  addiu       $v0, $v0, 0x5320
    ctx->pc = 0x1b36e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21280));
    // 0x1b36e4: 0x24635328  addiu       $v1, $v1, 0x5328
    ctx->pc = 0x1b36e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21288));
    // 0x1b36e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1b36e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1b36ec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b36ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b36f0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1b36f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1b36f4: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B36F4u;
    {
        const bool branch_taken_0x1b36f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B36F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B36F4u;
        // 0x1b36f8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b36f4) {
            ctx->pc = 0x1B3738u;
            goto label_1b3738;
        }
    }
    ctx->pc = 0x1B36FCu;
    // 0x1b36fc: 0x3c110037  lui         $s1, 0x37
    ctx->pc = 0x1b36fcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
    // 0x1b3700: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x1b3700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1b3704: 0x26243000  addiu       $a0, $s1, 0x3000
    ctx->pc = 0x1b3704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12288));
    // 0x1b3708: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1b3708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1b370c: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x1b370cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x1b3710: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3714: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1b3714u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1b3718: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1b3718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b371c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1b371cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1b3720: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1b3720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b3724: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1b3724u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1b3728: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1b3728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1b372c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1b372cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1b3730: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B3730u;
    {
        const bool branch_taken_0x1b3730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3730u;
        // 0x1b3734: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3730) {
            ctx->pc = 0x1B3770u;
            goto label_1b3770;
        }
    }
    ctx->pc = 0x1B3738u;
label_1b3738:
    // 0x1b3738: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1b3738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b373c: 0x3c110037  lui         $s1, 0x37
    ctx->pc = 0x1b373cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
    // 0x1b3740: 0x26243000  addiu       $a0, $s1, 0x3000
    ctx->pc = 0x1b3740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12288));
    // 0x1b3744: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1b3744u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1b3748: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b3748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b374c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1b374cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1b3750: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b3750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b3754: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1b3754u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1b3758: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b3758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b375c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1b375cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1b3760: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1b3760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b3764: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x1b3764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x1b3768: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1b3768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b376c: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x1b376cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
label_1b3770:
    // 0x1b3770: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x1B3770u;
    SET_GPR_U32(ctx, 31, 0x1B3778u);
    ctx->pc = 0x1B3774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3770u;
    // 0x1b3774: 0x3c100037  lui         $s0, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB50u, 0x1B3770u, 0x1B3778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3778u;
label_1b3778:
    // 0x1b3778: 0x26103098  addiu       $s0, $s0, 0x3098
    ctx->pc = 0x1b3778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12440));
    // 0x1b377c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b377cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3780: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b3780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b3784: 0xc0432d8  jal         func_10CB60
    ctx->pc = 0x1B3784u;
    SET_GPR_U32(ctx, 31, 0x1B378Cu);
    ctx->pc = 0x1B3788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3784u;
    // 0x1b3788: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB60u, 0x1B3784u, 0x1B378Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B378Cu;
label_1b378c:
    // 0x1b378c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1b378cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1b3790: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1b3790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b3794: 0xc06cc98  jal         func_1B3260
    ctx->pc = 0x1B3794u;
    SET_GPR_U32(ctx, 31, 0x1B379Cu);
    ctx->pc = 0x1B3260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3260u, 0x1B3794u, 0x1B379Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B379Cu;
label_1b379c:
    // 0x1b379c: 0xc06ccf0  jal         func_1B33C0
    ctx->pc = 0x1B379Cu;
    SET_GPR_U32(ctx, 31, 0x1B37A4u);
    ctx->pc = 0x1B33C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B33C0u, 0x1B379Cu, 0x1B37A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B37A4u;
label_1b37a4:
    // 0x1b37a4: 0xc06cd12  jal         func_1B3448
    ctx->pc = 0x1B37A4u;
    SET_GPR_U32(ctx, 31, 0x1B37ACu);
    ctx->pc = 0x1B3448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3448u, 0x1B37A4u, 0x1B37ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B37ACu;
label_1b37ac:
    // 0x1b37ac: 0xc06cd34  jal         func_1B34D0
    ctx->pc = 0x1B37ACu;
    SET_GPR_U32(ctx, 31, 0x1B37B4u);
    ctx->pc = 0x1B34D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B34D0u, 0x1B37ACu, 0x1B37B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B37B4u;
label_1b37b4:
    // 0x1b37b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b37b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b37b8: 0x26223000  addiu       $v0, $s1, 0x3000
    ctx->pc = 0x1b37b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12288));
    // 0x1b37bc: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x1B37BCu;
    SET_GPR_U32(ctx, 31, 0x1B37C4u);
    ctx->pc = 0x1B37C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B37BCu;
    // 0x1b37c0: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAF0u, 0x1B37BCu, 0x1B37C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B37C4u;
label_1b37c4:
    // 0x1b37c4: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1b37c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1b37c8: 0x24a52b80  addiu       $a1, $a1, 0x2B80
    ctx->pc = 0x1b37c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11136));
    // 0x1b37cc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1b37ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b37d0: 0xc0738d4  jal         func_1CE350
    ctx->pc = 0x1B37D0u;
    SET_GPR_U32(ctx, 31, 0x1B37D8u);
    ctx->pc = 0x1B37D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B37D0u;
    // 0x1b37d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE350u, 0x1B37D0u, 0x1B37D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B37D8u;
label_1b37d8:
    // 0x1b37d8: 0x26432ff4  addiu       $v1, $s2, 0x2FF4
    ctx->pc = 0x1b37d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 12276));
    // 0x1b37dc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1b37dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b37e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b37e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b37e4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1b37e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b37e8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1b37e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b37ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b37ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b37f0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1b37f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1b37f4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b37f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1b37f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B37F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B37FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B37F8u;
        // 0x1b37fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B37F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3800u;
}
