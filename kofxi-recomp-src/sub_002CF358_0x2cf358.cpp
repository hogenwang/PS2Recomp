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

// Function: sub_002CF358
// Address: 0x2cf358 - 0x2cf3f0
void sub_002CF358_0x2cf358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF358_0x2cf358");
#endif

    switch (ctx->pc) {
        case 0x2cf358u: goto label_2cf358;
        case 0x2cf35cu: goto label_2cf35c;
        case 0x2cf360u: goto label_2cf360;
        case 0x2cf364u: goto label_2cf364;
        case 0x2cf368u: goto label_2cf368;
        case 0x2cf36cu: goto label_2cf36c;
        case 0x2cf370u: goto label_2cf370;
        case 0x2cf374u: goto label_2cf374;
        case 0x2cf378u: goto label_2cf378;
        case 0x2cf37cu: goto label_2cf37c;
        case 0x2cf380u: goto label_2cf380;
        case 0x2cf384u: goto label_2cf384;
        case 0x2cf388u: goto label_2cf388;
        case 0x2cf38cu: goto label_2cf38c;
        case 0x2cf390u: goto label_2cf390;
        case 0x2cf394u: goto label_2cf394;
        case 0x2cf398u: goto label_2cf398;
        case 0x2cf39cu: goto label_2cf39c;
        case 0x2cf3a0u: goto label_2cf3a0;
        case 0x2cf3a4u: goto label_2cf3a4;
        case 0x2cf3a8u: goto label_2cf3a8;
        case 0x2cf3acu: goto label_2cf3ac;
        case 0x2cf3b0u: goto label_2cf3b0;
        case 0x2cf3b4u: goto label_2cf3b4;
        case 0x2cf3b8u: goto label_2cf3b8;
        case 0x2cf3bcu: goto label_2cf3bc;
        case 0x2cf3c0u: goto label_2cf3c0;
        case 0x2cf3c4u: goto label_2cf3c4;
        case 0x2cf3c8u: goto label_2cf3c8;
        case 0x2cf3ccu: goto label_2cf3cc;
        case 0x2cf3d0u: goto label_2cf3d0;
        case 0x2cf3d4u: goto label_2cf3d4;
        case 0x2cf3d8u: goto label_2cf3d8;
        case 0x2cf3dcu: goto label_2cf3dc;
        case 0x2cf3e0u: goto label_2cf3e0;
        case 0x2cf3e4u: goto label_2cf3e4;
        case 0x2cf3e8u: goto label_2cf3e8;
        case 0x2cf3ecu: goto label_2cf3ec;
        default: break;
    }

    ctx->pc = 0x2cf358u;

label_2cf358:
    // 0x2cf358: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cf358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2cf35c:
    // 0x2cf35c: 0x24020203  addiu       $v0, $zero, 0x203
    ctx->pc = 0x2cf35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
label_2cf360:
    // 0x2cf360: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cf360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2cf364:
    // 0x2cf364: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cf364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf368:
    // 0x2cf368: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cf368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2cf36c:
    // 0x2cf36c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2cf36cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2cf370:
    // 0x2cf370: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cf370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2cf374:
    // 0x2cf374: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2cf374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2cf378:
    // 0x2cf378: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2cf378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2cf37c:
    // 0x2cf37c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_2cf380:
    if (ctx->pc == 0x2CF380u) {
        ctx->pc = 0x2CF380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF37Cu;
        // 0x2cf380: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF384u;
        goto label_2cf384;
    }
    ctx->pc = 0x2CF37Cu;
    {
        const bool branch_taken_0x2cf37c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF37Cu;
        // 0x2cf380: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf37c) {
            ctx->pc = 0x2CF3D8u;
            goto label_2cf3d8;
        }
    }
    ctx->pc = 0x2CF384u;
label_2cf384:
    // 0x2cf384: 0xc0b3d2e  jal         func_2CF4B8
label_2cf388:
    if (ctx->pc == 0x2CF388u) {
        ctx->pc = 0x2CF38Cu;
        goto label_2cf38c;
    }
    ctx->pc = 0x2CF384u;
    SET_GPR_U32(ctx, 31, 0x2CF38Cu);
    ctx->pc = 0x2CF4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF4B8u, 0x2CF384u, 0x2CF38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF38Cu;
label_2cf38c:
    // 0x2cf38c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cf38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cf390:
    // 0x2cf390: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2cf390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cf394:
    // 0x2cf394: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2cf398:
    if (ctx->pc == 0x2CF398u) {
        ctx->pc = 0x2CF398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF394u;
        // 0x2cf398: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF39Cu;
        goto label_2cf39c;
    }
    ctx->pc = 0x2CF394u;
    {
        const bool branch_taken_0x2cf394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF394u;
        // 0x2cf398: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf394) {
            ctx->pc = 0x2CF3D8u;
            goto label_2cf3d8;
        }
    }
    ctx->pc = 0x2CF39Cu;
label_2cf39c:
    // 0x2cf39c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2cf39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cf3a0:
    // 0x2cf3a0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2cf3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2cf3a4:
    // 0x2cf3a4: 0x40f809  jalr        $v0
label_2cf3a8:
    if (ctx->pc == 0x2CF3A8u) {
        ctx->pc = 0x2CF3ACu;
        goto label_2cf3ac;
    }
    ctx->pc = 0x2CF3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CF3ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF3A4u, 0x2CF3ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CF3ACu;
label_2cf3ac:
    // 0x2cf3ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cf3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cf3b0:
    // 0x2cf3b0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2cf3b4:
    if (ctx->pc == 0x2CF3B4u) {
        ctx->pc = 0x2CF3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF3B0u;
        // 0x2cf3b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF3B8u;
        goto label_2cf3b8;
    }
    ctx->pc = 0x2CF3B0u;
    {
        const bool branch_taken_0x2cf3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF3B0u;
        // 0x2cf3b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf3b0) {
            ctx->pc = 0x2CF3D8u;
            goto label_2cf3d8;
        }
    }
    ctx->pc = 0x2CF3B8u;
label_2cf3b8:
    // 0x2cf3b8: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x2cf3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cf3bc:
    // 0x2cf3bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cf3bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cf3c0:
    // 0x2cf3c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cf3c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2cf3c4:
    // 0x2cf3c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cf3c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cf3c8:
    // 0x2cf3c8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2cf3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2cf3cc:
    // 0x2cf3cc: 0x80b3d08  j           func_2CF420
label_2cf3d0:
    if (ctx->pc == 0x2CF3D0u) {
        ctx->pc = 0x2CF3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF3CCu;
        // 0x2cf3d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF3D4u;
        goto label_2cf3d4;
    }
    ctx->pc = 0x2CF3CCu;
    ctx->pc = 0x2CF3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF3CCu;
    // 0x2cf3d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF420u;
    sub_002CF420_0x2cf420(rdram, ctx, runtime); return;
    ctx->pc = 0x2CF3D4u;
label_2cf3d4:
    // 0x2cf3d4: 0x0  nop
    ctx->pc = 0x2cf3d4u;
    // NOP
label_2cf3d8:
    // 0x2cf3d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cf3d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cf3dc:
    // 0x2cf3dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cf3dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2cf3e0:
    // 0x2cf3e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cf3e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cf3e4:
    // 0x2cf3e4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2cf3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2cf3e8:
    // 0x2cf3e8: 0x3e00008  jr          $ra
label_2cf3ec:
    if (ctx->pc == 0x2CF3ECu) {
        ctx->pc = 0x2CF3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF3E8u;
        // 0x2cf3ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF3F0u;
        goto label_fallthrough_0x2cf3e8;
    }
    ctx->pc = 0x2CF3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF3E8u;
        // 0x2cf3ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2cf3e8:
    ctx->pc = 0x2CF3F0u;
}
