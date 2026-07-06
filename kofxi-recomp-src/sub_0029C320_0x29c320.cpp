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

// Function: sub_0029C320
// Address: 0x29c320 - 0x29c410
void sub_0029C320_0x29c320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C320_0x29c320");
#endif

    switch (ctx->pc) {
        case 0x29c368u: goto label_29c368;
        case 0x29c398u: goto label_29c398;
        default: break;
    }

    ctx->pc = 0x29c320u;

    // 0x29c320: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29c320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29c324: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29c324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29c328: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29c328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29c32c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29c32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29c330: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x29c330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c334: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29c334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29c338: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29c338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c33c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x29c33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x29c340: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x29c340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x29c344: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x29c344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x29c348: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x29c348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29c34c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29C34Cu;
    {
        const bool branch_taken_0x29c34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C34Cu;
        // 0x29c350: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c34c) {
            ctx->pc = 0x29C384u;
            goto label_29c384;
        }
    }
    ctx->pc = 0x29C354u;
    // 0x29c354: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x29c354u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x29c358: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x29c358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x29c35c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x29c35cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c360: 0xc0a8c00  jal         func_2A3000
    ctx->pc = 0x29C360u;
    SET_GPR_U32(ctx, 31, 0x29C368u);
    ctx->pc = 0x29C364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C360u;
    // 0x29c364: 0x34a50006  ori         $a1, $a1, 0x6 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3000u, 0x29C360u, 0x29C368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C368u;
label_29c368:
    // 0x29c368: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29c368u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c36c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x29C36Cu;
    {
        const bool branch_taken_0x29c36c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C36Cu;
        // 0x29c370: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c36c) {
            ctx->pc = 0x29C3F8u;
            goto label_29c3f8;
        }
    }
    ctx->pc = 0x29C374u;
    // 0x29c374: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x29c374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x29c378: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x29c378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x29c37c: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x29c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x29c380: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x29c380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_29c384:
    // 0x29c384: 0x2626ffff  addiu       $a2, $s1, -0x1
    ctx->pc = 0x29c384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x29c388: 0x4c0001a  bltz        $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x29C388u;
    {
        const bool branch_taken_0x29c388 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x29C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C388u;
        // 0x29c38c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c388) {
            ctx->pc = 0x29C3F4u;
            goto label_29c3f4;
        }
    }
    ctx->pc = 0x29C390u;
    // 0x29c390: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x29c390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x29c394: 0x0  nop
    ctx->pc = 0x29c394u;
    // NOP
label_29c398:
    // 0x29c398: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x29c398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29c39c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x29c39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x29c3a0: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x29C3A0u;
    {
        const bool branch_taken_0x29c3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c3a0) {
            ctx->pc = 0x29C3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C3A0u;
            // 0x29c3a4: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C3ECu;
            goto label_29c3ec;
        }
    }
    ctx->pc = 0x29C3A8u;
    // 0x29c3a8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x29c3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x29c3ac: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x29c3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x29c3b0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x29c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x29c3b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29c3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29c3b8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x29c3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29c3bc: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x29c3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x29c3c0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x29c3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29c3c4: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x29c3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x29c3c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29C3C8u;
    {
        const bool branch_taken_0x29c3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C3C8u;
        // 0x29c3cc: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c3c8) {
            ctx->pc = 0x29C3E0u;
            goto label_29c3e0;
        }
    }
    ctx->pc = 0x29C3D0u;
    // 0x29c3d0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29c3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x29c3d4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x29c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x29c3d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29C3D8u;
    {
        const bool branch_taken_0x29c3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C3D8u;
        // 0x29c3dc: 0xdc420048  ld          $v0, 0x48($v0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c3d8) {
            ctx->pc = 0x29C3E4u;
            goto label_29c3e4;
        }
    }
    ctx->pc = 0x29C3E0u;
label_29c3e0:
    // 0x29c3e0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x29c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_29c3e4:
    // 0x29c3e4: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x29c3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x29c3e8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29c3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_29c3ec:
    // 0x29c3ec: 0x4c1ffea  bgez        $a2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x29C3ECu;
    {
        const bool branch_taken_0x29c3ec = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x29C3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C3ECu;
        // 0x29c3f0: 0x24a5fffc  addiu       $a1, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c3ec) {
            ctx->pc = 0x29C398u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29c398;
        }
    }
    ctx->pc = 0x29C3F4u;
label_29c3f4:
    // 0x29c3f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29c3f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29c3f8:
    // 0x29c3f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29c3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29c3fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29c3fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29c400: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29c400u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c404: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29c404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c408: 0x3e00008  jr          $ra
    ctx->pc = 0x29C408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C408u;
        // 0x29c40c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C410u;
}
