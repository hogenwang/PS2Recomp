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

// Function: sub_00344720
// Address: 0x344720 - 0x344ca0
void sub_00344720_0x344720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344720_0x344720");
#endif

    switch (ctx->pc) {
        case 0x344748u: goto label_344748;
        case 0x344764u: goto label_344764;
        case 0x344784u: goto label_344784;
        case 0x3447a4u: goto label_3447a4;
        case 0x3447b4u: goto label_3447b4;
        case 0x3447e0u: goto label_3447e0;
        case 0x3447f4u: goto label_3447f4;
        case 0x344800u: goto label_344800;
        case 0x344814u: goto label_344814;
        case 0x344828u: goto label_344828;
        case 0x344850u: goto label_344850;
        case 0x34485cu: goto label_34485c;
        case 0x344884u: goto label_344884;
        case 0x34488cu: goto label_34488c;
        case 0x34489cu: goto label_34489c;
        case 0x3448acu: goto label_3448ac;
        case 0x3448c0u: goto label_3448c0;
        case 0x3448ecu: goto label_3448ec;
        case 0x344908u: goto label_344908;
        case 0x344948u: goto label_344948;
        case 0x34495cu: goto label_34495c;
        case 0x34496cu: goto label_34496c;
        case 0x344978u: goto label_344978;
        case 0x3449a0u: goto label_3449a0;
        case 0x3449b0u: goto label_3449b0;
        case 0x3449b8u: goto label_3449b8;
        case 0x3449c8u: goto label_3449c8;
        case 0x3449dcu: goto label_3449dc;
        case 0x344a08u: goto label_344a08;
        case 0x344a1cu: goto label_344a1c;
        case 0x344a58u: goto label_344a58;
        case 0x344a6cu: goto label_344a6c;
        case 0x344aa8u: goto label_344aa8;
        case 0x344abcu: goto label_344abc;
        case 0x344b24u: goto label_344b24;
        case 0x344ba4u: goto label_344ba4;
        case 0x344bb8u: goto label_344bb8;
        case 0x344bf8u: goto label_344bf8;
        case 0x344c0cu: goto label_344c0c;
        case 0x344c48u: goto label_344c48;
        case 0x344c5cu: goto label_344c5c;
        case 0x344c8cu: goto label_344c8c;
        case 0x344c94u: goto label_344c94;
        default: break;
    }

    ctx->pc = 0x344720u;

label_344720:
    // 0x344720: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x344720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x344724: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x344724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x344728: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x344728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34472c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34472cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x344730: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x344730u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344734: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x344734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x344738: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x344738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34473c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x34473cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344740: 0xc0828d8  jal         func_20A360
    ctx->pc = 0x344740u;
    SET_GPR_U32(ctx, 31, 0x344748u);
    ctx->pc = 0x344744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344740u;
    // 0x344744: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A360u, 0x344740u, 0x344748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344748u;
label_344748:
    // 0x344748: 0x28410011  slti        $at, $v0, 0x11
    ctx->pc = 0x344748u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x34474c: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x34474Cu;
    {
        const bool branch_taken_0x34474c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34474c) {
            ctx->pc = 0x344750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34474Cu;
            // 0x344750: 0x28410021  slti        $at, $v0, 0x21 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34476Cu;
            goto label_34476c;
        }
    }
    ctx->pc = 0x344754u;
    // 0x344754: 0x3224ffff  andi        $a0, $s1, 0xFFFF
    ctx->pc = 0x344754u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x344758: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x344758u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x34475c: 0xc0836c0  jal         func_20DB00
    ctx->pc = 0x34475Cu;
    SET_GPR_U32(ctx, 31, 0x344764u);
    ctx->pc = 0x344760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34475Cu;
    // 0x344760: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB00u, 0x34475Cu, 0x344764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344764u;
label_344764:
    // 0x344764: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x344764u;
    {
        const bool branch_taken_0x344764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344764u;
        // 0x344768: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344764) {
            ctx->pc = 0x3447B8u;
            goto label_3447b8;
        }
    }
    ctx->pc = 0x34476Cu;
label_34476c:
    // 0x34476c: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x34476Cu;
    {
        const bool branch_taken_0x34476c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34476c) {
            ctx->pc = 0x344770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34476Cu;
            // 0x344770: 0x3210ffff  andi        $s0, $s0, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34478Cu;
            goto label_34478c;
        }
    }
    ctx->pc = 0x344774u;
    // 0x344774: 0x3224ffff  andi        $a0, $s1, 0xFFFF
    ctx->pc = 0x344774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x344778: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x344778u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x34477c: 0xc083768  jal         func_20DDA0
    ctx->pc = 0x34477Cu;
    SET_GPR_U32(ctx, 31, 0x344784u);
    ctx->pc = 0x344780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34477Cu;
    // 0x344780: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DDA0u, 0x34477Cu, 0x344784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344784u;
label_344784:
    // 0x344784: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x344784u;
    {
        const bool branch_taken_0x344784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x344784) {
            ctx->pc = 0x3447B4u;
            goto label_3447b4;
        }
    }
    ctx->pc = 0x34478Cu;
label_34478c:
    // 0x34478c: 0x3231ffff  andi        $s1, $s1, 0xFFFF
    ctx->pc = 0x34478cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x344790: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x344790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344794: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x344794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344798: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x344798u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34479c: 0xc0837b8  jal         func_20DEE0
    ctx->pc = 0x34479Cu;
    SET_GPR_U32(ctx, 31, 0x3447A4u);
    ctx->pc = 0x3447A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34479Cu;
    // 0x3447a0: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DEE0u, 0x34479Cu, 0x3447A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3447A4u;
label_3447a4:
    // 0x3447a4: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x3447a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3447a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3447a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3447ac: 0xc083768  jal         func_20DDA0
    ctx->pc = 0x3447ACu;
    SET_GPR_U32(ctx, 31, 0x3447B4u);
    ctx->pc = 0x3447B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3447ACu;
    // 0x3447b0: 0x26460040  addiu       $a2, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DDA0u, 0x3447ACu, 0x3447B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3447B4u;
label_3447b4:
    // 0x3447b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3447b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3447b8:
    // 0x3447b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3447b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3447bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3447bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3447c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3447c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3447c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3447C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3447C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3447C4u;
        // 0x3447c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3447C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3447CCu;
    // 0x3447cc: 0x0  nop
    ctx->pc = 0x3447ccu;
    // NOP
    // 0x3447d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3447d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3447d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3447d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3447d8: 0xc082918  jal         func_20A460
    ctx->pc = 0x3447D8u;
    SET_GPR_U32(ctx, 31, 0x3447E0u);
    ctx->pc = 0x20A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A460u, 0x3447D8u, 0x3447E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3447E0u;
label_3447e0:
    // 0x3447e0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3447e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3447e4: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3447e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x3447e8: 0x24844880  addiu       $a0, $a0, 0x4880
    ctx->pc = 0x3447e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18560));
    // 0x3447ec: 0xc0838c4  jal         func_20E310
    ctx->pc = 0x3447ECu;
    SET_GPR_U32(ctx, 31, 0x3447F4u);
    ctx->pc = 0x3447F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3447ECu;
    // 0x3447f0: 0x24a549d0  addiu       $a1, $a1, 0x49D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E310u, 0x3447ECu, 0x3447F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3447F4u;
label_3447f4:
    // 0x3447f4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3447f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3447f8: 0xc082998  jal         func_20A660
    ctx->pc = 0x3447F8u;
    SET_GPR_U32(ctx, 31, 0x344800u);
    ctx->pc = 0x3447FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3447F8u;
    // 0x3447fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A660u, 0x3447F8u, 0x344800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344800u;
label_344800:
    // 0x344800: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x344800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x344804: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x344804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x344808: 0x8c464050  lw          $a2, 0x4050($v0)
    ctx->pc = 0x344808u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16464)));
    // 0x34480c: 0xc0d11c8  jal         func_344720
    ctx->pc = 0x34480Cu;
    SET_GPR_U32(ctx, 31, 0x344814u);
    ctx->pc = 0x344810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34480Cu;
    // 0x344810: 0x240500c0  addiu       $a1, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344720u;
    goto label_344720;
    ctx->pc = 0x344814u;
label_344814:
    // 0x344814: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x344814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x344818: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x344818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x34481c: 0x8c464058  lw          $a2, 0x4058($v0)
    ctx->pc = 0x34481cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16472)));
    // 0x344820: 0xc0d11c8  jal         func_344720
    ctx->pc = 0x344820u;
    SET_GPR_U32(ctx, 31, 0x344828u);
    ctx->pc = 0x344824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344820u;
    // 0x344824: 0x24050130  addiu       $a1, $zero, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344720u;
    goto label_344720;
    ctx->pc = 0x344828u;
label_344828:
    // 0x344828: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x344828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34482c: 0x3e00008  jr          $ra
    ctx->pc = 0x34482Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34482Cu;
        // 0x344830: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34482Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344834u;
    // 0x344834: 0x0  nop
    ctx->pc = 0x344834u;
    // NOP
    // 0x344838: 0x0  nop
    ctx->pc = 0x344838u;
    // NOP
    // 0x34483c: 0x0  nop
    ctx->pc = 0x34483cu;
    // NOP
    // 0x344840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x344848: 0xc0c03cc  jal         func_300F30
    ctx->pc = 0x344848u;
    SET_GPR_U32(ctx, 31, 0x344850u);
    ctx->pc = 0x300F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300F30u, 0x344848u, 0x344850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344850u;
label_344850:
    // 0x344850: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x344850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x344854: 0xc055684  jal         func_155A10
    ctx->pc = 0x344854u;
    SET_GPR_U32(ctx, 31, 0x34485Cu);
    ctx->pc = 0x344858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344854u;
    // 0x344858: 0xa0409738  sb          $zero, -0x68C8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940472), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x344854u, 0x34485Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34485Cu;
label_34485c:
    // 0x34485c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34485cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x344860: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x344860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x344864: 0xac40beb0  sw          $zero, -0x4150($v0)
    ctx->pc = 0x344864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950576), GPR_U32(ctx, 0));
    // 0x344868: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x344868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34486c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34486cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x344870: 0xac60beb4  sw          $zero, -0x414C($v1)
    ctx->pc = 0x344870u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950580), GPR_U32(ctx, 0));
    // 0x344874: 0xac40beb8  sw          $zero, -0x4148($v0)
    ctx->pc = 0x344874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950584), GPR_U32(ctx, 0));
    // 0x344878: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x344878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34487c: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x34487Cu;
    SET_GPR_U32(ctx, 31, 0x344884u);
    ctx->pc = 0x344880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34487Cu;
    // 0x344880: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x34487Cu, 0x344884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344884u;
label_344884:
    // 0x344884: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x344884u;
    SET_GPR_U32(ctx, 31, 0x34488Cu);
    ctx->pc = 0x344888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344884u;
    // 0x344888: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x344884u, 0x34488Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34488Cu;
label_34488c:
    // 0x34488c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34488cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x344890: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x344890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344894: 0xc082678  jal         func_2099E0
    ctx->pc = 0x344894u;
    SET_GPR_U32(ctx, 31, 0x34489Cu);
    ctx->pc = 0x344898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344894u;
    // 0x344898: 0x248433f0  addiu       $a0, $a0, 0x33F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x344894u, 0x34489Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34489Cu;
label_34489c:
    // 0x34489c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34489cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3448a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3448a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3448a4: 0xc082678  jal         func_2099E0
    ctx->pc = 0x3448A4u;
    SET_GPR_U32(ctx, 31, 0x3448ACu);
    ctx->pc = 0x3448A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3448A4u;
    // 0x3448a8: 0x24844000  addiu       $a0, $a0, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x3448A4u, 0x3448ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3448ACu;
label_3448ac:
    // 0x3448ac: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3448acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3448b0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3448b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3448b4: 0x248448d0  addiu       $a0, $a0, 0x48D0
    ctx->pc = 0x3448b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18640));
    // 0x3448b8: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3448B8u;
    SET_GPR_U32(ctx, 31, 0x3448C0u);
    ctx->pc = 0x3448BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3448B8u;
    // 0x3448bc: 0xac404378  sw          $zero, 0x4378($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x3448B8u, 0x3448C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3448C0u;
label_3448c0:
    // 0x3448c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3448c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3448c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3448C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3448C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3448C4u;
        // 0x3448c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3448C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3448CCu;
    // 0x3448cc: 0x0  nop
    ctx->pc = 0x3448ccu;
    // NOP
    // 0x3448d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3448d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3448d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3448d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3448d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3448d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3448dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3448dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3448e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3448e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3448e4: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x3448E4u;
    SET_GPR_U32(ctx, 31, 0x3448ECu);
    ctx->pc = 0x3448E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3448E4u;
    // 0x3448e8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x3448E4u, 0x3448ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3448ECu;
label_3448ec:
    // 0x3448ec: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x3448ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3448f0: 0x320300a0  andi        $v1, $s0, 0xA0
    ctx->pc = 0x3448f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)160);
    // 0x3448f4: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3448F4u;
    {
        const bool branch_taken_0x3448f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3448f4) {
            ctx->pc = 0x3448F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3448F4u;
            // 0x3448f8: 0x32032000  andi        $v1, $s0, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x344924u;
            goto label_344924;
        }
    }
    ctx->pc = 0x3448FCu;
    // 0x3448fc: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x3448fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x344900: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x344900u;
    SET_GPR_U32(ctx, 31, 0x344908u);
    ctx->pc = 0x344904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344900u;
    // 0x344904: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x344900u, 0x344908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344908u;
label_344908:
    // 0x344908: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x344908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x34490c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34490cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x344910: 0x8c844378  lw          $a0, 0x4378($a0)
    ctx->pc = 0x344910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17272)));
    // 0x344914: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x344914u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x344918: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x344918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x34491c: 0xac644378  sw          $a0, 0x4378($v1)
    ctx->pc = 0x34491cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17272), GPR_U32(ctx, 4));
    // 0x344920: 0x32032000  andi        $v1, $s0, 0x2000
    ctx->pc = 0x344920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
label_344924:
    // 0x344924: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x344924u;
    {
        const bool branch_taken_0x344924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x344924) {
            ctx->pc = 0x344928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344924u;
            // 0x344928: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34497Cu;
            goto label_34497c;
        }
    }
    ctx->pc = 0x34492Cu;
    // 0x34492c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34492cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x344930: 0x8c424378  lw          $v0, 0x4378($v0)
    ctx->pc = 0x344930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x344934: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x344934u;
    {
        const bool branch_taken_0x344934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x344934) {
            ctx->pc = 0x344938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344934u;
            // 0x344938: 0x2404013e  addiu       $a0, $zero, 0x13E (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344964u;
            goto label_344964;
        }
    }
    ctx->pc = 0x34493Cu;
    // 0x34493c: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x34493cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x344940: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x344940u;
    SET_GPR_U32(ctx, 31, 0x344948u);
    ctx->pc = 0x344944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344940u;
    // 0x344944: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x344940u, 0x344948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344948u;
label_344948:
    // 0x344948: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x344948u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x34494c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x34494cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x344950: 0x24840f90  addiu       $a0, $a0, 0xF90
    ctx->pc = 0x344950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3984));
    // 0x344954: 0xc0558d4  jal         func_156350
    ctx->pc = 0x344954u;
    SET_GPR_U32(ctx, 31, 0x34495Cu);
    ctx->pc = 0x344958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344954u;
    // 0x344958: 0x24a54990  addiu       $a1, $a1, 0x4990 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x344954u, 0x34495Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34495Cu;
label_34495c:
    // 0x34495c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34495Cu;
    {
        const bool branch_taken_0x34495c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34495c) {
            ctx->pc = 0x344978u;
            goto label_344978;
        }
    }
    ctx->pc = 0x344964u;
label_344964:
    // 0x344964: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x344964u;
    SET_GPR_U32(ctx, 31, 0x34496Cu);
    ctx->pc = 0x344968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344964u;
    // 0x344968: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x344964u, 0x34496Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34496Cu;
label_34496c:
    // 0x34496c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34496cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x344970: 0xc082674  jal         func_2099D0
    ctx->pc = 0x344970u;
    SET_GPR_U32(ctx, 31, 0x344978u);
    ctx->pc = 0x344974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344970u;
    // 0x344974: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x344970u, 0x344978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344978u;
label_344978:
    // 0x344978: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x344978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34497c:
    // 0x34497c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34497cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344980: 0x3e00008  jr          $ra
    ctx->pc = 0x344980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344980u;
        // 0x344984: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344988u;
    // 0x344988: 0x0  nop
    ctx->pc = 0x344988u;
    // NOP
    // 0x34498c: 0x0  nop
    ctx->pc = 0x34498cu;
    // NOP
    // 0x344990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x344998: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x344998u;
    SET_GPR_U32(ctx, 31, 0x3449A0u);
    ctx->pc = 0x34499Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344998u;
    // 0x34499c: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x344998u, 0x3449A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3449A0u;
label_3449a0:
    // 0x3449a0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3449a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3449a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3449a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3449a8: 0xc082678  jal         func_2099E0
    ctx->pc = 0x3449A8u;
    SET_GPR_U32(ctx, 31, 0x3449B0u);
    ctx->pc = 0x3449ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3449A8u;
    // 0x3449ac: 0x24843ff0  addiu       $a0, $a0, 0x3FF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x3449A8u, 0x3449B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3449B0u;
label_3449b0:
    // 0x3449b0: 0xc0d0c20  jal         func_343080
    ctx->pc = 0x3449B0u;
    SET_GPR_U32(ctx, 31, 0x3449B8u);
    ctx->pc = 0x343080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343080u, 0x3449B0u, 0x3449B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3449B8u;
label_3449b8:
    // 0x3449b8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3449b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3449bc: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x3449bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x3449c0: 0xc06a2cc  jal         func_1A8B30
    ctx->pc = 0x3449C0u;
    SET_GPR_U32(ctx, 31, 0x3449C8u);
    ctx->pc = 0x3449C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3449C0u;
    // 0x3449c4: 0xac404378  sw          $zero, 0x4378($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B30u, 0x3449C0u, 0x3449C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3449C8u;
label_3449c8:
    // 0x3449c8: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3449c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3449cc: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x3449ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x3449d0: 0x24845b20  addiu       $a0, $a0, 0x5B20
    ctx->pc = 0x3449d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23328));
    // 0x3449d4: 0xc0558d4  jal         func_156350
    ctx->pc = 0x3449D4u;
    SET_GPR_U32(ctx, 31, 0x3449DCu);
    ctx->pc = 0x3449D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3449D4u;
    // 0x3449d8: 0x24a549f0  addiu       $a1, $a1, 0x49F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x3449D4u, 0x3449DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3449DCu;
label_3449dc:
    // 0x3449dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3449dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3449e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3449E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3449E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3449E0u;
        // 0x3449e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3449E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3449E8u;
    // 0x3449e8: 0x0  nop
    ctx->pc = 0x3449e8u;
    // NOP
    // 0x3449ec: 0x0  nop
    ctx->pc = 0x3449ecu;
    // NOP
    // 0x3449f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3449f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3449f4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3449f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3449f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3449f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3449fc: 0x248450a0  addiu       $a0, $a0, 0x50A0
    ctx->pc = 0x3449fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20640));
    // 0x344a00: 0xc06a07a  jal         func_1A81E8
    ctx->pc = 0x344A00u;
    SET_GPR_U32(ctx, 31, 0x344A08u);
    ctx->pc = 0x344A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344A00u;
    // 0x344a04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A81E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A81E8u, 0x344A00u, 0x344A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344A08u;
label_344a08:
    // 0x344a08: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x344a08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x344a0c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x344a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x344a10: 0x24845b20  addiu       $a0, $a0, 0x5B20
    ctx->pc = 0x344a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23328));
    // 0x344a14: 0xc0558d4  jal         func_156350
    ctx->pc = 0x344A14u;
    SET_GPR_U32(ctx, 31, 0x344A1Cu);
    ctx->pc = 0x344A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344A14u;
    // 0x344a18: 0x24a54a30  addiu       $a1, $a1, 0x4A30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x344A14u, 0x344A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344A1Cu;
label_344a1c:
    // 0x344a1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x344a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344a20: 0x3e00008  jr          $ra
    ctx->pc = 0x344A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344A20u;
        // 0x344a24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344A28u;
    // 0x344a28: 0x0  nop
    ctx->pc = 0x344a28u;
    // NOP
    // 0x344a2c: 0x0  nop
    ctx->pc = 0x344a2cu;
    // NOP
    // 0x344a30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344a34: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x344a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x344a38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x344a3c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x344a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x344a40: 0x8c43be80  lw          $v1, -0x4180($v0)
    ctx->pc = 0x344a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950528)));
    // 0x344a44: 0x248450a0  addiu       $a0, $a0, 0x50A0
    ctx->pc = 0x344a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20640));
    // 0x344a48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x344a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344a4c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x344a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x344a50: 0xc06a07a  jal         func_1A81E8
    ctx->pc = 0x344A50u;
    SET_GPR_U32(ctx, 31, 0x344A58u);
    ctx->pc = 0x344A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344A50u;
    // 0x344a54: 0xac4342f8  sw          $v1, 0x42F8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17144), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A81E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A81E8u, 0x344A50u, 0x344A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344A58u;
label_344a58:
    // 0x344a58: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x344a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x344a5c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x344a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x344a60: 0x24845b20  addiu       $a0, $a0, 0x5B20
    ctx->pc = 0x344a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23328));
    // 0x344a64: 0xc0558d4  jal         func_156350
    ctx->pc = 0x344A64u;
    SET_GPR_U32(ctx, 31, 0x344A6Cu);
    ctx->pc = 0x344A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344A64u;
    // 0x344a68: 0x24a54a80  addiu       $a1, $a1, 0x4A80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x344A64u, 0x344A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344A6Cu;
label_344a6c:
    // 0x344a6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x344a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344a70: 0x3e00008  jr          $ra
    ctx->pc = 0x344A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344A70u;
        // 0x344a74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344A78u;
    // 0x344a78: 0x0  nop
    ctx->pc = 0x344a78u;
    // NOP
    // 0x344a7c: 0x0  nop
    ctx->pc = 0x344a7cu;
    // NOP
    // 0x344a80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344a84: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x344a84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x344a88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x344a8c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x344a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x344a90: 0x8c43be80  lw          $v1, -0x4180($v0)
    ctx->pc = 0x344a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950528)));
    // 0x344a94: 0x248450a0  addiu       $a0, $a0, 0x50A0
    ctx->pc = 0x344a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20640));
    // 0x344a98: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x344a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x344a9c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x344a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x344aa0: 0xc06a07a  jal         func_1A81E8
    ctx->pc = 0x344AA0u;
    SET_GPR_U32(ctx, 31, 0x344AA8u);
    ctx->pc = 0x344AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344AA0u;
    // 0x344aa4: 0xac4342fc  sw          $v1, 0x42FC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17148), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A81E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A81E8u, 0x344AA0u, 0x344AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344AA8u;
label_344aa8:
    // 0x344aa8: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x344aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x344aac: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x344aacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x344ab0: 0x24845b20  addiu       $a0, $a0, 0x5B20
    ctx->pc = 0x344ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23328));
    // 0x344ab4: 0xc0558d4  jal         func_156350
    ctx->pc = 0x344AB4u;
    SET_GPR_U32(ctx, 31, 0x344ABCu);
    ctx->pc = 0x344AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344AB4u;
    // 0x344ab8: 0x24a54ad0  addiu       $a1, $a1, 0x4AD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x344AB4u, 0x344ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344ABCu;
label_344abc:
    // 0x344abc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x344abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x344AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344AC0u;
        // 0x344ac4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344AC8u;
    // 0x344ac8: 0x0  nop
    ctx->pc = 0x344ac8u;
    // NOP
    // 0x344acc: 0x0  nop
    ctx->pc = 0x344accu;
    // NOP
    // 0x344ad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344ad4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x344ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x344ad8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x344adc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x344adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x344ae0: 0x8c45be80  lw          $a1, -0x4180($v0)
    ctx->pc = 0x344ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950528)));
    // 0x344ae4: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x344ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x344ae8: 0x8c6342f8  lw          $v1, 0x42F8($v1)
    ctx->pc = 0x344ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17144)));
    // 0x344aec: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x344aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x344af0: 0x8c4242fc  lw          $v0, 0x42FC($v0)
    ctx->pc = 0x344af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17148)));
    // 0x344af4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x344af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x344af8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x344af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x344afc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x344AFCu;
    {
        const bool branch_taken_0x344afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x344B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344AFCu;
        // 0x344b00: 0xac854300  sw          $a1, 0x4300($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 17152), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344afc) {
            ctx->pc = 0x344B2Cu;
            goto label_344b2c;
        }
    }
    ctx->pc = 0x344B04u;
    // 0x344b04: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x344b04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x344b08: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x344b08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x344b0c: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x344b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x344b10: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x344b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x344b14: 0xa443be90  sh          $v1, -0x4170($v0)
    ctx->pc = 0x344b14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 3));
    // 0x344b18: 0x24845690  addiu       $a0, $a0, 0x5690
    ctx->pc = 0x344b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22160));
    // 0x344b1c: 0xc0558d4  jal         func_156350
    ctx->pc = 0x344B1Cu;
    SET_GPR_U32(ctx, 31, 0x344B24u);
    ctx->pc = 0x344B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344B1Cu;
    // 0x344b20: 0x24a54380  addiu       $a1, $a1, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x344B1Cu, 0x344B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344B24u;
label_344b24:
    // 0x344b24: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x344B24u;
    {
        const bool branch_taken_0x344b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B24u;
        // 0x344b28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344b24) {
            ctx->pc = 0x344BBCu;
            goto label_344bbc;
        }
    }
    ctx->pc = 0x344B2Cu;
label_344b2c:
    // 0x344b2c: 0x28610007  slti        $at, $v1, 0x7
    ctx->pc = 0x344b2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x344b30: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x344B30u;
    {
        const bool branch_taken_0x344b30 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x344b30) {
            ctx->pc = 0x344B44u;
            goto label_344b44;
        }
    }
    ctx->pc = 0x344B38u;
    // 0x344b38: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x344b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x344b3c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x344b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x344b40: 0xac4342f8  sw          $v1, 0x42F8($v0)
    ctx->pc = 0x344b40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17144), GPR_U32(ctx, 3));
label_344b44:
    // 0x344b44: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x344b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x344b48: 0x8c4242fc  lw          $v0, 0x42FC($v0)
    ctx->pc = 0x344b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17148)));
    // 0x344b4c: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x344b4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x344b50: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x344B50u;
    {
        const bool branch_taken_0x344b50 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x344b50) {
            ctx->pc = 0x344B64u;
            goto label_344b64;
        }
    }
    ctx->pc = 0x344B58u;
    // 0x344b58: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x344b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x344b5c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x344b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x344b60: 0xac4342fc  sw          $v1, 0x42FC($v0)
    ctx->pc = 0x344b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17148), GPR_U32(ctx, 3));
label_344b64:
    // 0x344b64: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x344b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x344b68: 0x8c424300  lw          $v0, 0x4300($v0)
    ctx->pc = 0x344b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17152)));
    // 0x344b6c: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x344b6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x344b70: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x344B70u;
    {
        const bool branch_taken_0x344b70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x344b70) {
            ctx->pc = 0x344B84u;
            goto label_344b84;
        }
    }
    ctx->pc = 0x344B78u;
    // 0x344b78: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x344b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x344b7c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x344b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x344b80: 0xac434300  sw          $v1, 0x4300($v0)
    ctx->pc = 0x344b80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17152), GPR_U32(ctx, 3));
label_344b84:
    // 0x344b84: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x344b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x344b88: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x344b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x344b8c: 0x8c663f80  lw          $a2, 0x3F80($v1)
    ctx->pc = 0x344b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16256)));
    // 0x344b90: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x344b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x344b94: 0x8c4742f8  lw          $a3, 0x42F8($v0)
    ctx->pc = 0x344b94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17144)));
    // 0x344b98: 0x248450a0  addiu       $a0, $a0, 0x50A0
    ctx->pc = 0x344b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20640));
    // 0x344b9c: 0xc06a094  jal         func_1A8250
    ctx->pc = 0x344B9Cu;
    SET_GPR_U32(ctx, 31, 0x344BA4u);
    ctx->pc = 0x344BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344B9Cu;
    // 0x344ba0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8250u, 0x344B9Cu, 0x344BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344BA4u;
label_344ba4:
    // 0x344ba4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x344ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x344ba8: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x344ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x344bac: 0x24845b20  addiu       $a0, $a0, 0x5B20
    ctx->pc = 0x344bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23328));
    // 0x344bb0: 0xc0558d4  jal         func_156350
    ctx->pc = 0x344BB0u;
    SET_GPR_U32(ctx, 31, 0x344BB8u);
    ctx->pc = 0x344BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344BB0u;
    // 0x344bb4: 0x24a54bd0  addiu       $a1, $a1, 0x4BD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x344BB0u, 0x344BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344BB8u;
label_344bb8:
    // 0x344bb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x344bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_344bbc:
    // 0x344bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x344BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344BBCu;
        // 0x344bc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344BC4u;
    // 0x344bc4: 0x0  nop
    ctx->pc = 0x344bc4u;
    // NOP
    // 0x344bc8: 0x0  nop
    ctx->pc = 0x344bc8u;
    // NOP
    // 0x344bcc: 0x0  nop
    ctx->pc = 0x344bccu;
    // NOP
    // 0x344bd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344bd4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x344bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x344bd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x344bdc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x344bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x344be0: 0x8c463fc0  lw          $a2, 0x3FC0($v0)
    ctx->pc = 0x344be0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16320)));
    // 0x344be4: 0x248450a0  addiu       $a0, $a0, 0x50A0
    ctx->pc = 0x344be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20640));
    // 0x344be8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x344be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x344bec: 0x8c4742fc  lw          $a3, 0x42FC($v0)
    ctx->pc = 0x344becu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17148)));
    // 0x344bf0: 0xc06a094  jal         func_1A8250
    ctx->pc = 0x344BF0u;
    SET_GPR_U32(ctx, 31, 0x344BF8u);
    ctx->pc = 0x344BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344BF0u;
    // 0x344bf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8250u, 0x344BF0u, 0x344BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344BF8u;
label_344bf8:
    // 0x344bf8: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x344bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x344bfc: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x344bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x344c00: 0x24845b20  addiu       $a0, $a0, 0x5B20
    ctx->pc = 0x344c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23328));
    // 0x344c04: 0xc0558d4  jal         func_156350
    ctx->pc = 0x344C04u;
    SET_GPR_U32(ctx, 31, 0x344C0Cu);
    ctx->pc = 0x344C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344C04u;
    // 0x344c08: 0x24a54c20  addiu       $a1, $a1, 0x4C20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x344C04u, 0x344C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344C0Cu;
label_344c0c:
    // 0x344c0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x344c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344c10: 0x3e00008  jr          $ra
    ctx->pc = 0x344C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C10u;
        // 0x344c14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344C18u;
    // 0x344c18: 0x0  nop
    ctx->pc = 0x344c18u;
    // NOP
    // 0x344c1c: 0x0  nop
    ctx->pc = 0x344c1cu;
    // NOP
    // 0x344c20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344c24: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x344c24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x344c28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x344c2c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x344c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x344c30: 0x8c464000  lw          $a2, 0x4000($v0)
    ctx->pc = 0x344c30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16384)));
    // 0x344c34: 0x248450a0  addiu       $a0, $a0, 0x50A0
    ctx->pc = 0x344c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20640));
    // 0x344c38: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x344c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x344c3c: 0x8c474300  lw          $a3, 0x4300($v0)
    ctx->pc = 0x344c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17152)));
    // 0x344c40: 0xc06a094  jal         func_1A8250
    ctx->pc = 0x344C40u;
    SET_GPR_U32(ctx, 31, 0x344C48u);
    ctx->pc = 0x344C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344C40u;
    // 0x344c44: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8250u, 0x344C40u, 0x344C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344C48u;
label_344c48:
    // 0x344c48: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x344c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x344c4c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x344c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x344c50: 0x24845b20  addiu       $a0, $a0, 0x5B20
    ctx->pc = 0x344c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23328));
    // 0x344c54: 0xc0558d4  jal         func_156350
    ctx->pc = 0x344C54u;
    SET_GPR_U32(ctx, 31, 0x344C5Cu);
    ctx->pc = 0x344C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344C54u;
    // 0x344c58: 0x24a54c70  addiu       $a1, $a1, 0x4C70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x344C54u, 0x344C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344C5Cu;
label_344c5c:
    // 0x344c5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x344c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344c60: 0x3e00008  jr          $ra
    ctx->pc = 0x344C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C60u;
        // 0x344c64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344C68u;
    // 0x344c68: 0x0  nop
    ctx->pc = 0x344c68u;
    // NOP
    // 0x344c6c: 0x0  nop
    ctx->pc = 0x344c6cu;
    // NOP
    // 0x344c70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344c74: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x344c74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x344c78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x344c7c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x344c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x344c80: 0xa440be90  sh          $zero, -0x4170($v0)
    ctx->pc = 0x344c80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 0));
    // 0x344c84: 0xc082674  jal         func_2099D0
    ctx->pc = 0x344C84u;
    SET_GPR_U32(ctx, 31, 0x344C8Cu);
    ctx->pc = 0x344C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344C84u;
    // 0x344c88: 0x24844ca0  addiu       $a0, $a0, 0x4CA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x344C84u, 0x344C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344C8Cu;
label_344c8c:
    // 0x344c8c: 0xc0d1328  jal         func_344CA0
    ctx->pc = 0x344C8Cu;
    SET_GPR_U32(ctx, 31, 0x344C94u);
    ctx->pc = 0x344CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344CA0u, 0x344C8Cu, 0x344C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344C94u;
label_344c94:
    // 0x344c94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x344c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344c98: 0x3e00008  jr          $ra
    ctx->pc = 0x344C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C98u;
        // 0x344c9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344CA0u;
}
