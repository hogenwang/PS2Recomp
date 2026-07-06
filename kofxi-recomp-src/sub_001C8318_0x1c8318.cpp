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

// Function: sub_001C8318
// Address: 0x1c8318 - 0x1c8450
void sub_001C8318_0x1c8318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8318_0x1c8318");
#endif

    switch (ctx->pc) {
        case 0x1c8378u: goto label_1c8378;
        case 0x1c8380u: goto label_1c8380;
        case 0x1c8390u: goto label_1c8390;
        case 0x1c8398u: goto label_1c8398;
        case 0x1c83a4u: goto label_1c83a4;
        case 0x1c83b0u: goto label_1c83b0;
        case 0x1c83ecu: goto label_1c83ec;
        default: break;
    }

    ctx->pc = 0x1c8318u;

    // 0x1c8318: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c8318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c831c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c831cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8320: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8324: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c8324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c8328: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c8328u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c832c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c832cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c8330: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c8330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c8334: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c8334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c8338: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x1c8338u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1c833c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1c833cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c8340: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C8340u;
    {
        const bool branch_taken_0x1c8340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8340u;
        // 0x1c8344: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8340) {
            ctx->pc = 0x1C8370u;
            goto label_1c8370;
        }
    }
    ctx->pc = 0x1C8348u;
    // 0x1c8348: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c8348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c834c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c834cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8350: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c8350u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8354: 0x2484b1d8  addiu       $a0, $a0, -0x4E28
    ctx->pc = 0x1c8354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947288));
    // 0x1c8358: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c8358u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c835c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c835cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c8360: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c8360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8364: 0x806ba0a  j           func_1AE828
    ctx->pc = 0x1C8364u;
    ctx->pc = 0x1C8368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8364u;
    // 0x1c8368: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    ctx->pc = 0x1C836Cu;
    // 0x1c836c: 0x0  nop
    ctx->pc = 0x1c836cu;
    // NOP
label_1c8370:
    // 0x1c8370: 0xc06e4a0  jal         func_1B9280
    ctx->pc = 0x1C8370u;
    SET_GPR_U32(ctx, 31, 0x1C8378u);
    ctx->pc = 0x1B9280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9280u, 0x1C8370u, 0x1C8378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8378u;
label_1c8378:
    // 0x1c8378: 0xc072114  jal         func_1C8450
    ctx->pc = 0x1C8378u;
    SET_GPR_U32(ctx, 31, 0x1C8380u);
    ctx->pc = 0x1C837Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8378u;
    // 0x1c837c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8450u, 0x1C8378u, 0x1C8380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8380u;
label_1c8380:
    // 0x1c8380: 0x3c04001d  lui         $a0, 0x1D
    ctx->pc = 0x1c8380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)29 << 16));
    // 0x1c8384: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8388: 0xc071e8e  jal         func_1C7A38
    ctx->pc = 0x1C8388u;
    SET_GPR_U32(ctx, 31, 0x1C8390u);
    ctx->pc = 0x1C838Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8388u;
    // 0x1c838c: 0x248485f8  addiu       $a0, $a0, -0x7A08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7A38u, 0x1C8388u, 0x1C8390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8390u;
label_1c8390:
    // 0x1c8390: 0xc071eb0  jal         func_1C7AC0
    ctx->pc = 0x1C8390u;
    SET_GPR_U32(ctx, 31, 0x1C8398u);
    ctx->pc = 0x1C8394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8390u;
    // 0x1c8394: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7AC0u, 0x1C8390u, 0x1C8398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8398u;
label_1c8398:
    // 0x1c8398: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c8398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c839c: 0xc06cf8a  jal         func_1B3E28
    ctx->pc = 0x1C839Cu;
    SET_GPR_U32(ctx, 31, 0x1C83A4u);
    ctx->pc = 0x1C83A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C839Cu;
    // 0x1c83a0: 0x8c510004  lw          $s1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3E28u, 0x1C839Cu, 0x1C83A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83A4u;
label_1c83a4:
    // 0x1c83a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c83a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83a8: 0xc071ede  jal         func_1C7B78
    ctx->pc = 0x1C83A8u;
    SET_GPR_U32(ctx, 31, 0x1C83B0u);
    ctx->pc = 0x1C83ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83A8u;
    // 0x1c83ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7B78u, 0x1C83A8u, 0x1C83B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83B0u;
label_1c83b0:
    // 0x1c83b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c83b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83b4: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C83B4u;
    {
        const bool branch_taken_0x1c83b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C83B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83B4u;
        // 0x1c83b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83b4) {
            ctx->pc = 0x1C83E0u;
            goto label_1c83e0;
        }
    }
    ctx->pc = 0x1C83BCu;
    // 0x1c83bc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c83bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c83c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c83c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c83c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c83c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c83c8: 0x2484b218  addiu       $a0, $a0, -0x4DE8
    ctx->pc = 0x1c83c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947352));
    // 0x1c83cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c83ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c83d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c83d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c83d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c83d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c83d8: 0x806ba0a  j           func_1AE828
    ctx->pc = 0x1C83D8u;
    ctx->pc = 0x1C83DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83D8u;
    // 0x1c83dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    ctx->pc = 0x1C83E0u;
label_1c83e0:
    // 0x1c83e0: 0x8e2500ec  lw          $a1, 0xEC($s1)
    ctx->pc = 0x1c83e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
    // 0x1c83e4: 0xc072054  jal         func_1C8150
    ctx->pc = 0x1C83E4u;
    SET_GPR_U32(ctx, 31, 0x1C83ECu);
    ctx->pc = 0x1C83E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83E4u;
    // 0x1c83e8: 0x8e2600f0  lw          $a2, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8150u, 0x1C83E4u, 0x1C83ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83ECu;
label_1c83ec:
    // 0x1c83ec: 0xae3000e8  sw          $s0, 0xE8($s1)
    ctx->pc = 0x1c83ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 16));
    // 0x1c83f0: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1c83f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1c83f4: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1c83f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1c83f8: 0x3c04001d  lui         $a0, 0x1D
    ctx->pc = 0x1c83f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)29 << 16));
    // 0x1c83fc: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x1c83fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
    // 0x1c8400: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8400u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8404: 0x24428520  addiu       $v0, $v0, -0x7AE0
    ctx->pc = 0x1c8404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935840));
    // 0x1c8408: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c8408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c840c: 0x246385a8  addiu       $v1, $v1, -0x7A58
    ctx->pc = 0x1c840cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935976));
    // 0x1c8410: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c8410u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8414: 0x24848590  addiu       $a0, $a0, -0x7A70
    ctx->pc = 0x1c8414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935952));
    // 0x1c8418: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c8418u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c841c: 0x24a585e0  addiu       $a1, $a1, -0x7A20
    ctx->pc = 0x1c841cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936032));
    // 0x1c8420: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c8420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8424: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x1c8424u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x1c8428: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x1c8428u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
    // 0x1c842c: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1c842cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x1c8430: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x1c8430u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x1c8434: 0xacc2c380  sw          $v0, -0x3C80($a2)
    ctx->pc = 0x1c8434u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294951808), GPR_U32(ctx, 2));
    // 0x1c8438: 0xace3e694  sw          $v1, -0x196C($a3)
    ctx->pc = 0x1c8438u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960788), GPR_U32(ctx, 3));
    // 0x1c843c: 0xad04e698  sw          $a0, -0x1968($t0)
    ctx->pc = 0x1c843cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294960792), GPR_U32(ctx, 4));
    // 0x1c8440: 0x0  nop
    ctx->pc = 0x1c8440u;
    // NOP
    // 0x1c8444: 0x806cf90  j           func_1B3E40
    ctx->pc = 0x1C8444u;
    ctx->pc = 0x1C8448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8444u;
    // 0x1c8448: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3E40u;
    kofxiVblankSchedulerDispatch_0x1b3e40(rdram, ctx, runtime); return;
    ctx->pc = 0x1C844Cu;
    // 0x1c844c: 0x0  nop
    ctx->pc = 0x1c844cu;
    // NOP
    if (ctx->pc == 0x1c844cu) { ctx->pc = 0x1c8450u; }
}
