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

// Function: sub_002EA388
// Address: 0x2ea388 - 0x2ea4d0
void sub_002EA388_0x2ea388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA388_0x2ea388");
#endif

    switch (ctx->pc) {
        case 0x2ea3e0u: goto label_2ea3e0;
        case 0x2ea3f0u: goto label_2ea3f0;
        case 0x2ea400u: goto label_2ea400;
        case 0x2ea420u: goto label_2ea420;
        case 0x2ea42cu: goto label_2ea42c;
        case 0x2ea440u: goto label_2ea440;
        case 0x2ea474u: goto label_2ea474;
        case 0x2ea498u: goto label_2ea498;
        case 0x2ea4b8u: goto label_2ea4b8;
        default: break;
    }

    ctx->pc = 0x2ea388u;

    // 0x2ea388: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ea388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ea38c: 0x3c0801cb  lui         $t0, 0x1CB
    ctx->pc = 0x2ea38cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)459 << 16));
    // 0x2ea390: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ea390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ea394: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ea394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea398: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ea398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ea39c: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2ea39cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2ea3a0: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x2ea3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x2ea3a4: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x2ea3a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
    // 0x2ea3a8: 0x2510fe00  addiu       $s0, $t0, -0x200
    ctx->pc = 0x2ea3a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966784));
    // 0x2ea3ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ea3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ea3b0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ea3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ea3b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ea3b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea3b8: 0xad02fe00  sw          $v0, -0x200($t0)
    ctx->pc = 0x2ea3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294966784), GPR_U32(ctx, 2));
    // 0x2ea3bc: 0x2463aa88  addiu       $v1, $v1, -0x5578
    ctx->pc = 0x2ea3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945416));
    // 0x2ea3c0: 0x24c6b340  addiu       $a2, $a2, -0x4CC0
    ctx->pc = 0x2ea3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947648));
    // 0x2ea3c4: 0x24e7abe8  addiu       $a3, $a3, -0x5418
    ctx->pc = 0x2ea3c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945768));
    // 0x2ea3c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ea3c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea3cc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2ea3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x2ea3d0: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x2ea3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x2ea3d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ea3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea3d8: 0xc08c6a6  jal         func_231A98
    ctx->pc = 0x2EA3D8u;
    SET_GPR_U32(ctx, 31, 0x2EA3E0u);
    ctx->pc = 0x2EA3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA3D8u;
    // 0x2ea3dc: 0xae07000c  sw          $a3, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A98u, 0x2EA3D8u, 0x2EA3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA3E0u;
label_2ea3e0:
    // 0x2ea3e0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2ea3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2ea3e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ea3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea3e8: 0xc08c6a6  jal         func_231A98
    ctx->pc = 0x2EA3E8u;
    SET_GPR_U32(ctx, 31, 0x2EA3F0u);
    ctx->pc = 0x2EA3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA3E8u;
    // 0x2ea3ec: 0xae120014  sw          $s2, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A98u, 0x2EA3E8u, 0x2EA3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA3F0u;
label_2ea3f0:
    // 0x2ea3f0: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2ea3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2ea3f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ea3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea3f8: 0xc09896a  jal         func_2625A8
    ctx->pc = 0x2EA3F8u;
    SET_GPR_U32(ctx, 31, 0x2EA400u);
    ctx->pc = 0x2EA3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA3F8u;
    // 0x2ea3fc: 0xae11001c  sw          $s1, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2625A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2625A8u, 0x2EA3F8u, 0x2EA400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA400u;
label_2ea400:
    // 0x2ea400: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ea400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea404: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA404u;
    {
        const bool branch_taken_0x2ea404 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2EA408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA404u;
        // 0x2ea408: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea404) {
            ctx->pc = 0x2EA418u;
            goto label_2ea418;
        }
    }
    ctx->pc = 0x2EA40Cu;
    // 0x2ea40c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2ea40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ea410: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2EA410u;
    {
        const bool branch_taken_0x2ea410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA410u;
        // 0x2ea414: 0x24a50048  addiu       $a1, $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea410) {
            ctx->pc = 0x2EA438u;
            goto label_2ea438;
        }
    }
    ctx->pc = 0x2EA418u;
label_2ea418:
    // 0x2ea418: 0xc098b6c  jal         func_262DB0
    ctx->pc = 0x2EA418u;
    SET_GPR_U32(ctx, 31, 0x2EA420u);
    ctx->pc = 0x2EA41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA418u;
    // 0x2ea41c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262DB0u, 0x2EA418u, 0x2EA420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA420u;
label_2ea420:
    // 0x2ea420: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ea420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea424: 0x6010007  bgez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EA424u;
    {
        const bool branch_taken_0x2ea424 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2EA428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA424u;
        // 0x2ea428: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea424) {
            ctx->pc = 0x2EA444u;
            goto label_2ea444;
        }
    }
    ctx->pc = 0x2EA42Cu;
label_2ea42c:
    // 0x2ea42c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2ea42cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2ea430: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2ea430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ea434: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x2ea434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
label_2ea438:
    // 0x2ea438: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2EA438u;
    SET_GPR_U32(ctx, 31, 0x2EA440u);
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2EA438u, 0x2EA440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA440u;
label_2ea440:
    // 0x2ea440: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ea440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ea444:
    // 0x2ea444: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ea444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ea448: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ea448u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ea44c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ea44cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ea450: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ea450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea454: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA454u;
        // 0x2ea458: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA45Cu;
    // 0x2ea45c: 0x0  nop
    ctx->pc = 0x2ea45cu;
    // NOP
    // 0x2ea460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ea460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ea464: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ea464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ea468: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ea468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ea46c: 0xc098b8a  jal         func_262E28
    ctx->pc = 0x2EA46Cu;
    SET_GPR_U32(ctx, 31, 0x2EA474u);
    ctx->pc = 0x2EA470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA46Cu;
    // 0x2ea470: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E28u, 0x2EA46Cu, 0x2EA474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA474u;
label_2ea474:
    // 0x2ea474: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ea474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea478: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA478u;
    {
        const bool branch_taken_0x2ea478 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2EA47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA478u;
        // 0x2ea47c: 0x3c0401cb  lui         $a0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea478) {
            ctx->pc = 0x2EA490u;
            goto label_2ea490;
        }
    }
    ctx->pc = 0x2EA480u;
    // 0x2ea480: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2ea480u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2ea484: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2ea484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ea488: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2EA488u;
    {
        const bool branch_taken_0x2ea488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA488u;
        // 0x2ea48c: 0x24a500a8  addiu       $a1, $a1, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea488) {
            ctx->pc = 0x2EA4B0u;
            goto label_2ea4b0;
        }
    }
    ctx->pc = 0x2EA490u;
label_2ea490:
    // 0x2ea490: 0xc098974  jal         func_2625D0
    ctx->pc = 0x2EA490u;
    SET_GPR_U32(ctx, 31, 0x2EA498u);
    ctx->pc = 0x2EA494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA490u;
    // 0x2ea494: 0x2484fe00  addiu       $a0, $a0, -0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2625D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2625D0u, 0x2EA490u, 0x2EA498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA498u;
label_2ea498:
    // 0x2ea498: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ea498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea49c: 0x6010007  bgez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EA49Cu;
    {
        const bool branch_taken_0x2ea49c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2EA4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA49Cu;
        // 0x2ea4a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea49c) {
            ctx->pc = 0x2EA4BCu;
            goto label_2ea4bc;
        }
    }
    ctx->pc = 0x2EA4A4u;
    // 0x2ea4a4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2ea4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2ea4a8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2ea4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ea4ac: 0x24a500e0  addiu       $a1, $a1, 0xE0
    ctx->pc = 0x2ea4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
label_2ea4b0:
    // 0x2ea4b0: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2EA4B0u;
    SET_GPR_U32(ctx, 31, 0x2EA4B8u);
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2EA4B0u, 0x2EA4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA4B8u;
label_2ea4b8:
    // 0x2ea4b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ea4b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ea4bc:
    // 0x2ea4bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ea4bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ea4c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ea4c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4C4u;
        // 0x2ea4c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA4C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA4CCu;
    // 0x2ea4cc: 0x0  nop
    ctx->pc = 0x2ea4ccu;
    // NOP
}
