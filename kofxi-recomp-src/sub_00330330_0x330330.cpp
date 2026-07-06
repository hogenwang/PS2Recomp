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

// Function: sub_00330330
// Address: 0x330330 - 0x331460
void sub_00330330_0x330330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330330_0x330330");
#endif

    switch (ctx->pc) {
        case 0x330370u: goto label_330370;
        case 0x3303a0u: goto label_3303a0;
        case 0x3303b0u: goto label_3303b0;
        case 0x3303c0u: goto label_3303c0;
        case 0x330438u: goto label_330438;
        case 0x33049cu: goto label_33049c;
        case 0x3304ccu: goto label_3304cc;
        case 0x3304e8u: goto label_3304e8;
        case 0x3304f8u: goto label_3304f8;
        case 0x330540u: goto label_330540;
        case 0x330554u: goto label_330554;
        case 0x3305b4u: goto label_3305b4;
        case 0x3305e0u: goto label_3305e0;
        case 0x33064cu: goto label_33064c;
        case 0x3306a8u: goto label_3306a8;
        case 0x3306c8u: goto label_3306c8;
        case 0x330718u: goto label_330718;
        case 0x330758u: goto label_330758;
        case 0x330770u: goto label_330770;
        case 0x330788u: goto label_330788;
        case 0x3307b0u: goto label_3307b0;
        case 0x3307b8u: goto label_3307b8;
        case 0x3307c0u: goto label_3307c0;
        case 0x3307c8u: goto label_3307c8;
        case 0x3307d0u: goto label_3307d0;
        case 0x3307d8u: goto label_3307d8;
        case 0x3307e0u: goto label_3307e0;
        case 0x330824u: goto label_330824;
        case 0x330838u: goto label_330838;
        case 0x330840u: goto label_330840;
        case 0x330850u: goto label_330850;
        case 0x330858u: goto label_330858;
        case 0x3308a4u: goto label_3308a4;
        case 0x3308fcu: goto label_3308fc;
        case 0x330958u: goto label_330958;
        case 0x330b10u: goto label_330b10;
        case 0x330b64u: goto label_330b64;
        case 0x330b94u: goto label_330b94;
        case 0x330bc0u: goto label_330bc0;
        case 0x330be0u: goto label_330be0;
        case 0x330bf8u: goto label_330bf8;
        case 0x330c18u: goto label_330c18;
        case 0x330c34u: goto label_330c34;
        case 0x330c84u: goto label_330c84;
        case 0x330cacu: goto label_330cac;
        case 0x330cd4u: goto label_330cd4;
        case 0x330cfcu: goto label_330cfc;
        case 0x330d1cu: goto label_330d1c;
        case 0x330d6cu: goto label_330d6c;
        case 0x330d84u: goto label_330d84;
        case 0x330db4u: goto label_330db4;
        case 0x330e04u: goto label_330e04;
        case 0x330e1cu: goto label_330e1c;
        case 0x330e54u: goto label_330e54;
        case 0x330e80u: goto label_330e80;
        case 0x330ec4u: goto label_330ec4;
        case 0x330f0cu: goto label_330f0c;
        case 0x330f20u: goto label_330f20;
        case 0x330f58u: goto label_330f58;
        case 0x330f68u: goto label_330f68;
        case 0x330fa4u: goto label_330fa4;
        case 0x330fb8u: goto label_330fb8;
        case 0x33100cu: goto label_33100c;
        case 0x331054u: goto label_331054;
        case 0x331068u: goto label_331068;
        case 0x3310a0u: goto label_3310a0;
        case 0x3310c0u: goto label_3310c0;
        case 0x331108u: goto label_331108;
        case 0x331120u: goto label_331120;
        case 0x331158u: goto label_331158;
        case 0x3311b8u: goto label_3311b8;
        case 0x3311e8u: goto label_3311e8;
        case 0x331204u: goto label_331204;
        case 0x331214u: goto label_331214;
        case 0x3312e0u: goto label_3312e0;
        case 0x331330u: goto label_331330;
        case 0x33134cu: goto label_33134c;
        case 0x33136cu: goto label_33136c;
        case 0x331444u: goto label_331444;
        default: break;
    }

    ctx->pc = 0x330330u;

    // 0x330330: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x330330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x330334: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x330334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x330338: 0x24840350  addiu       $a0, $a0, 0x350
    ctx->pc = 0x330338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 848));
    // 0x33033c: 0x24a54650  addiu       $a1, $a1, 0x4650
    ctx->pc = 0x33033cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18000));
    // 0x330340: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x330340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330344: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x330344u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330348: 0x80556d4  j           func_155B50
    ctx->pc = 0x330348u;
    ctx->pc = 0x33034Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330348u;
    // 0x33034c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    sub_00155B50_0x155b50(rdram, ctx, runtime); return;
    ctx->pc = 0x330350u;
    // 0x330350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x330350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x330354: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x330354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x330358: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x330358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33035c: 0x90429738  lbu         $v0, -0x68C8($v0)
    ctx->pc = 0x33035cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940472)));
    // 0x330360: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x330360u;
    {
        const bool branch_taken_0x330360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x330360) {
            ctx->pc = 0x330370u;
            goto label_330370;
        }
    }
    ctx->pc = 0x330368u;
    // 0x330368: 0xc055728  jal         func_155CA0
    ctx->pc = 0x330368u;
    SET_GPR_U32(ctx, 31, 0x330370u);
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x330368u, 0x330370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330370u;
label_330370:
    // 0x330370: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x330370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x330374: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x330374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x330378: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x330378u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x33037c: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x33037Cu;
    {
        const bool branch_taken_0x33037c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33037c) {
            ctx->pc = 0x3303B8u;
            goto label_3303b8;
        }
    }
    ctx->pc = 0x330384u;
    // 0x330384: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x330384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x330388: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x330388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x33038c: 0x904295c0  lbu         $v0, -0x6A40($v0)
    ctx->pc = 0x33038cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940096)));
    // 0x330390: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x330390u;
    {
        const bool branch_taken_0x330390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x330390) {
            ctx->pc = 0x3303A8u;
            goto label_3303a8;
        }
    }
    ctx->pc = 0x330398u;
    // 0x330398: 0xc0c0b6c  jal         func_302DB0
    ctx->pc = 0x330398u;
    SET_GPR_U32(ctx, 31, 0x3303A0u);
    ctx->pc = 0x302DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302DB0u, 0x330398u, 0x3303A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3303A0u;
label_3303a0:
    // 0x3303a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3303A0u;
    {
        const bool branch_taken_0x3303a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3303A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3303A0u;
        // 0x3303a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3303a0) {
            ctx->pc = 0x3303C4u;
            goto label_3303c4;
        }
    }
    ctx->pc = 0x3303A8u;
label_3303a8:
    // 0x3303a8: 0xc0c0b58  jal         func_302D60
    ctx->pc = 0x3303A8u;
    SET_GPR_U32(ctx, 31, 0x3303B0u);
    ctx->pc = 0x302D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302D60u, 0x3303A8u, 0x3303B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3303B0u;
label_3303b0:
    // 0x3303b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3303B0u;
    {
        const bool branch_taken_0x3303b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3303b0) {
            ctx->pc = 0x3303C0u;
            goto label_3303c0;
        }
    }
    ctx->pc = 0x3303B8u;
label_3303b8:
    // 0x3303b8: 0xc0c0b6c  jal         func_302DB0
    ctx->pc = 0x3303B8u;
    SET_GPR_U32(ctx, 31, 0x3303C0u);
    ctx->pc = 0x302DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302DB0u, 0x3303B8u, 0x3303C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3303C0u;
label_3303c0:
    // 0x3303c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3303c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3303c4:
    // 0x3303c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3303C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3303C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3303C4u;
        // 0x3303c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3303C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3303CCu;
    // 0x3303cc: 0x0  nop
    ctx->pc = 0x3303ccu;
    // NOP
    // 0x3303d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3303d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3303d4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3303d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3303d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3303d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3303dc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3303dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3303e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3303e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3303e4: 0x9065e818  lbu         $a1, -0x17E8($v1)
    ctx->pc = 0x3303e4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x3303e8: 0x10a4014c  beq         $a1, $a0, . + 4 + (0x14C << 2)
    ctx->pc = 0x3303E8u;
    {
        const bool branch_taken_0x3303e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x3303e8) {
            ctx->pc = 0x33091Cu;
            goto label_33091c;
        }
    }
    ctx->pc = 0x3303F0u;
    // 0x3303f0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3303f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3303f4: 0x10a30135  beq         $a1, $v1, . + 4 + (0x135 << 2)
    ctx->pc = 0x3303F4u;
    {
        const bool branch_taken_0x3303f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3303f4) {
            ctx->pc = 0x3308CCu;
            goto label_3308cc;
        }
    }
    ctx->pc = 0x3303FCu;
    // 0x3303fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3303fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x330400: 0x10a300a5  beq         $a1, $v1, . + 4 + (0xA5 << 2)
    ctx->pc = 0x330400u;
    {
        const bool branch_taken_0x330400 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x330400) {
            ctx->pc = 0x330698u;
            goto label_330698;
        }
    }
    ctx->pc = 0x330408u;
    // 0x330408: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x330408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33040c: 0x10a30053  beq         $a1, $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x33040Cu;
    {
        const bool branch_taken_0x33040c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33040c) {
            ctx->pc = 0x33055Cu;
            goto label_33055c;
        }
    }
    ctx->pc = 0x330414u;
    // 0x330414: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x330414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x330418: 0x10a30035  beq         $a1, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x330418u;
    {
        const bool branch_taken_0x330418 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x330418) {
            ctx->pc = 0x3304F0u;
            goto label_3304f0;
        }
    }
    ctx->pc = 0x330420u;
    // 0x330420: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x330420u;
    {
        const bool branch_taken_0x330420 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x330420) {
            ctx->pc = 0x330430u;
            goto label_330430;
        }
    }
    ctx->pc = 0x330428u;
    // 0x330428: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x330428u;
    {
        const bool branch_taken_0x330428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330428u;
        // 0x33042c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330428) {
            ctx->pc = 0x330964u;
            goto label_330964;
        }
    }
    ctx->pc = 0x330430u;
label_330430:
    // 0x330430: 0xc0cbf34  jal         func_32FCD0
    ctx->pc = 0x330430u;
    SET_GPR_U32(ctx, 31, 0x330438u);
    ctx->pc = 0x32FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FCD0u, 0x330430u, 0x330438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330438u;
label_330438:
    // 0x330438: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x330438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33043c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x33043cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x330440: 0x8c45e7f8  lw          $a1, -0x1808($v0)
    ctx->pc = 0x330440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961144)));
    // 0x330444: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x330444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x330448: 0x24c64658  addiu       $a2, $a2, 0x4658
    ctx->pc = 0x330448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18008));
    // 0x33044c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33044cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x330450: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x330450u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330454: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x330454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x330458: 0x8c47e800  lw          $a3, -0x1800($v0)
    ctx->pc = 0x330458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961152)));
    // 0x33045c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33045cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x330460: 0xac44e7c0  sw          $a0, -0x1840($v0)
    ctx->pc = 0x330460u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961088), GPR_U32(ctx, 4));
    // 0x330464: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x330464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x330468: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x330468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x33046c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x33046cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x330470: 0x24841180  addiu       $a0, $a0, 0x1180
    ctx->pc = 0x330470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4480));
    // 0x330474: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x330474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x330478: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x330478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x33047c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x33047cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x330480: 0x24a54648  addiu       $a1, $a1, 0x4648
    ctx->pc = 0x330480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17992));
    // 0x330484: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x330484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x330488: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x330488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33048c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x33048cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x330490: 0x24070034  addiu       $a3, $zero, 0x34
    ctx->pc = 0x330490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x330494: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x330494u;
    SET_GPR_U32(ctx, 31, 0x33049Cu);
    ctx->pc = 0x330498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330494u;
    // 0x330498: 0xac62e808  sw          $v0, -0x17F8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961160), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x330494u, 0x33049Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33049Cu;
label_33049c:
    // 0x33049c: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x33049cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3304a0: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x3304a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x3304a4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3304a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3304a8: 0x8c44e808  lw          $a0, -0x17F8($v0)
    ctx->pc = 0x3304a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961160)));
    // 0x3304ac: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x3304acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x3304b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3304b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3304b4: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x3304b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x3304b8: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x3304b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x3304bc: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x3304bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x3304c0: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x3304c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x3304c4: 0xc0c35a0  jal         func_30D680
    ctx->pc = 0x3304C4u;
    SET_GPR_U32(ctx, 31, 0x3304CCu);
    ctx->pc = 0x3304C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3304C4u;
    // 0x3304c8: 0xaca00018  sw          $zero, 0x18($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D680u, 0x3304C4u, 0x3304CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3304CCu;
label_3304cc:
    // 0x3304cc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3304ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3304d0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3304d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3304d4: 0x9063e818  lbu         $v1, -0x17E8($v1)
    ctx->pc = 0x3304d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x3304d8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x3304d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3304dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3304dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3304e0: 0xc0532e0  jal         func_14CB80
    ctx->pc = 0x3304E0u;
    SET_GPR_U32(ctx, 31, 0x3304E8u);
    ctx->pc = 0x3304E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3304E0u;
    // 0x3304e4: 0xa043e818  sb          $v1, -0x17E8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CB80u, 0x3304E0u, 0x3304E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3304E8u;
label_3304e8:
    // 0x3304e8: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x3304E8u;
    {
        const bool branch_taken_0x3304e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3304e8) {
            ctx->pc = 0x330960u;
            goto label_330960;
        }
    }
    ctx->pc = 0x3304F0u;
label_3304f0:
    // 0x3304f0: 0xc0cbf34  jal         func_32FCD0
    ctx->pc = 0x3304F0u;
    SET_GPR_U32(ctx, 31, 0x3304F8u);
    ctx->pc = 0x32FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FCD0u, 0x3304F0u, 0x3304F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3304F8u;
label_3304f8:
    // 0x3304f8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3304f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3304fc: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x3304fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x330500: 0x8c47e7f8  lw          $a3, -0x1808($v0)
    ctx->pc = 0x330500u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961144)));
    // 0x330504: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x330504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x330508: 0x24c64658  addiu       $a2, $a2, 0x4658
    ctx->pc = 0x330508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18008));
    // 0x33050c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33050cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x330510: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x330510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x330514: 0x8c45e800  lw          $a1, -0x1800($v0)
    ctx->pc = 0x330514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961152)));
    // 0x330518: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x330518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33051c: 0xac44e7c0  sw          $a0, -0x1840($v0)
    ctx->pc = 0x33051cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961088), GPR_U32(ctx, 4));
    // 0x330520: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x330520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x330524: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x330524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x330528: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x330528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x33052c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x33052cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x330530: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x330530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x330534: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x330534u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x330538: 0xc0c358c  jal         func_30D630
    ctx->pc = 0x330538u;
    SET_GPR_U32(ctx, 31, 0x330540u);
    ctx->pc = 0x33053Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330538u;
    // 0x33053c: 0xac62e808  sw          $v0, -0x17F8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961160), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D630u, 0x330538u, 0x330540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330540u;
label_330540:
    // 0x330540: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x330540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x330544: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x330544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x330548: 0xa043e818  sb          $v1, -0x17E8($v0)
    ctx->pc = 0x330548u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 3));
    // 0x33054c: 0xc0532e0  jal         func_14CB80
    ctx->pc = 0x33054Cu;
    SET_GPR_U32(ctx, 31, 0x330554u);
    ctx->pc = 0x330550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33054Cu;
    // 0x330550: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CB80u, 0x33054Cu, 0x330554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330554u;
label_330554:
    // 0x330554: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x330554u;
    {
        const bool branch_taken_0x330554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330554) {
            ctx->pc = 0x330960u;
            goto label_330960;
        }
    }
    ctx->pc = 0x33055Cu;
label_33055c:
    // 0x33055c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33055cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x330560: 0x8c63e7d0  lw          $v1, -0x1830($v1)
    ctx->pc = 0x330560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961104)));
    // 0x330564: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x330564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x330568: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x330568u;
    {
        const bool branch_taken_0x330568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x330568) {
            ctx->pc = 0x3305F4u;
            goto label_3305f4;
        }
    }
    ctx->pc = 0x330570u;
    // 0x330570: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x330570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x330574: 0x8c63e7c8  lw          $v1, -0x1838($v1)
    ctx->pc = 0x330574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961096)));
    // 0x330578: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x330578u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x33057c: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x33057Cu;
    {
        const bool branch_taken_0x33057c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33057c) {
            ctx->pc = 0x3305F4u;
            goto label_3305f4;
        }
    }
    ctx->pc = 0x330584u;
    // 0x330584: 0x5464000d  bnel        $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x330584u;
    {
        const bool branch_taken_0x330584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x330584) {
            ctx->pc = 0x330588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330584u;
            // 0x330588: 0x3363c  dsll32      $a2, $v1, 24 (Delay Slot)
            SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3305BCu;
            goto label_3305bc;
        }
    }
    ctx->pc = 0x33058Cu;
    // 0x33058c: 0x3363c  dsll32      $a2, $v1, 24
    ctx->pc = 0x33058cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 24));
    // 0x330590: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x330590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x330594: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x330594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x330598: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x330598u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x33059c: 0x244800c0  addiu       $t0, $v0, 0xC0
    ctx->pc = 0x33059cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3305a0: 0x24840d40  addiu       $a0, $a0, 0xD40
    ctx->pc = 0x3305a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3392));
    // 0x3305a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3305a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3305a8: 0x2407fee0  addiu       $a3, $zero, -0x120
    ctx->pc = 0x3305a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967008));
    // 0x3305ac: 0xc0cc004  jal         func_330010
    ctx->pc = 0x3305ACu;
    SET_GPR_U32(ctx, 31, 0x3305B4u);
    ctx->pc = 0x3305B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3305ACu;
    // 0x3305b0: 0x24090020  addiu       $t1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330010u, 0x3305ACu, 0x3305B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3305B4u;
label_3305b4:
    // 0x3305b4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3305B4u;
    {
        const bool branch_taken_0x3305b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3305b4) {
            ctx->pc = 0x3305E0u;
            goto label_3305e0;
        }
    }
    ctx->pc = 0x3305BCu;
label_3305bc:
    // 0x3305bc: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x3305bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3305c0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x3305c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x3305c4: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x3305c4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x3305c8: 0x244800c0  addiu       $t0, $v0, 0xC0
    ctx->pc = 0x3305c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3305cc: 0x24840d40  addiu       $a0, $a0, 0xD40
    ctx->pc = 0x3305ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3392));
    // 0x3305d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3305d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3305d4: 0x2407fee0  addiu       $a3, $zero, -0x120
    ctx->pc = 0x3305d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967008));
    // 0x3305d8: 0xc0cbfdc  jal         func_32FF70
    ctx->pc = 0x3305D8u;
    SET_GPR_U32(ctx, 31, 0x3305E0u);
    ctx->pc = 0x3305DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3305D8u;
    // 0x3305dc: 0x24090020  addiu       $t1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FF70u, 0x3305D8u, 0x3305E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3305E0u;
label_3305e0:
    // 0x3305e0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3305e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3305e4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3305e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3305e8: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x3305e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x3305ec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3305ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3305f0: 0xac64e7c8  sw          $a0, -0x1838($v1)
    ctx->pc = 0x3305f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
label_3305f4:
    // 0x3305f4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3305f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3305f8: 0x8c63e7d0  lw          $v1, -0x1830($v1)
    ctx->pc = 0x3305f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961104)));
    // 0x3305fc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x3305fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x330600: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x330600u;
    {
        const bool branch_taken_0x330600 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x330600) {
            ctx->pc = 0x33064Cu;
            goto label_33064c;
        }
    }
    ctx->pc = 0x330608u;
    // 0x330608: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x330608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33060c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33060cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x330610: 0x8c84e7c0  lw          $a0, -0x1840($a0)
    ctx->pc = 0x330610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961088)));
    // 0x330614: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x330614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x330618: 0x480000c  bltz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x330618u;
    {
        const bool branch_taken_0x330618 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x33061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330618u;
        // 0x33061c: 0xac64e7c0  sw          $a0, -0x1840($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961088), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330618) {
            ctx->pc = 0x33064Cu;
            goto label_33064c;
        }
    }
    ctx->pc = 0x330620u;
    // 0x330620: 0x24830006  addiu       $v1, $a0, 0x6
    ctx->pc = 0x330620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x330624: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x330624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x330628: 0x3363c  dsll32      $a2, $v1, 24
    ctx->pc = 0x330628u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 24));
    // 0x33062c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x33062cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x330630: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x330630u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x330634: 0x24480120  addiu       $t0, $v0, 0x120
    ctx->pc = 0x330634u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x330638: 0x24840d40  addiu       $a0, $a0, 0xD40
    ctx->pc = 0x330638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3392));
    // 0x33063c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33063cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x330640: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x330640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x330644: 0xc0cbfdc  jal         func_32FF70
    ctx->pc = 0x330644u;
    SET_GPR_U32(ctx, 31, 0x33064Cu);
    ctx->pc = 0x330648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330644u;
    // 0x330648: 0x24090160  addiu       $t1, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FF70u, 0x330644u, 0x33064Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33064Cu;
label_33064c:
    // 0x33064c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33064cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x330650: 0x9064e810  lbu         $a0, -0x17F0($v1)
    ctx->pc = 0x330650u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x330654: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x330654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x330658: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x330658u;
    {
        const bool branch_taken_0x330658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x330658) {
            ctx->pc = 0x330680u;
            goto label_330680;
        }
    }
    ctx->pc = 0x330660u;
    // 0x330660: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x330660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x330664: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x330664u;
    {
        const bool branch_taken_0x330664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x330664) {
            ctx->pc = 0x330680u;
            goto label_330680;
        }
    }
    ctx->pc = 0x33066Cu;
    // 0x33066c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33066cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x330670: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x330670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x330674: 0x9084e818  lbu         $a0, -0x17E8($a0)
    ctx->pc = 0x330674u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294961176)));
    // 0x330678: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x330678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33067c: 0xa064e818  sb          $a0, -0x17E8($v1)
    ctx->pc = 0x33067cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
label_330680:
    // 0x330680: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x330680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x330684: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x330684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x330688: 0x8c84e7d0  lw          $a0, -0x1830($a0)
    ctx->pc = 0x330688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961104)));
    // 0x33068c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33068cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x330690: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x330690u;
    {
        const bool branch_taken_0x330690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330690u;
        // 0x330694: 0xac64e7d0  sw          $a0, -0x1830($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961104), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330690) {
            ctx->pc = 0x330960u;
            goto label_330960;
        }
    }
    ctx->pc = 0x330698u;
label_330698:
    // 0x330698: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x330698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33069c: 0x8044e800  lb          $a0, -0x1800($v0)
    ctx->pc = 0x33069cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961152)));
    // 0x3306a0: 0xc0cd948  jal         func_336520
    ctx->pc = 0x3306A0u;
    SET_GPR_U32(ctx, 31, 0x3306A8u);
    ctx->pc = 0x3306A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3306A0u;
    // 0x3306a4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336520u, 0x3306A0u, 0x3306A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3306A8u;
label_3306a8:
    // 0x3306a8: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x3306a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3306ac: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3306acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x3306b0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3306b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3306b4: 0xac43e800  sw          $v1, -0x1800($v0)
    ctx->pc = 0x3306b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961152), GPR_U32(ctx, 3));
    // 0x3306b8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3306b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3306bc: 0x8044e7f8  lb          $a0, -0x1808($v0)
    ctx->pc = 0x3306bcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961144)));
    // 0x3306c0: 0xc0cd9f0  jal         func_3367C0
    ctx->pc = 0x3306C0u;
    SET_GPR_U32(ctx, 31, 0x3306C8u);
    ctx->pc = 0x3306C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3306C0u;
    // 0x3306c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3367C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3367C0u, 0x3306C0u, 0x3306C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3306C8u;
label_3306c8:
    // 0x3306c8: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x3306c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3306cc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3306ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x3306d0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3306d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3306d4: 0xac43e7f8  sw          $v1, -0x1808($v0)
    ctx->pc = 0x3306d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961144), GPR_U32(ctx, 3));
    // 0x3306d8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3306d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3306dc: 0x8c45e800  lw          $a1, -0x1800($v0)
    ctx->pc = 0x3306dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961152)));
    // 0x3306e0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3306e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3306e4: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x3306e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3306e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3306e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3306ec: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3306ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3306f0: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x3306f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3306f4: 0x24634658  addiu       $v1, $v1, 0x4658
    ctx->pc = 0x3306f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18008));
    // 0x3306f8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3306f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3306fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3306fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x330700: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x330700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x330704: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x330704u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x330708: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x330708u;
    {
        const bool branch_taken_0x330708 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x33070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330708u;
        // 0x33070c: 0xac43e808  sw          $v1, -0x17F8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330708) {
            ctx->pc = 0x330748u;
            goto label_330748;
        }
    }
    ctx->pc = 0x330710u;
    // 0x330710: 0xc068c84  jal         func_1A3210
    ctx->pc = 0x330710u;
    SET_GPR_U32(ctx, 31, 0x330718u);
    ctx->pc = 0x1A3210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3210u, 0x330710u, 0x330718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330718u;
label_330718:
    // 0x330718: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x330718u;
    {
        const bool branch_taken_0x330718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x330718) {
            ctx->pc = 0x33071Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330718u;
            // 0x33071c: 0x24042000  addiu       $a0, $zero, 0x2000 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33074Cu;
            goto label_33074c;
        }
    }
    ctx->pc = 0x330720u;
    // 0x330720: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x330720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x330724: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x330724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x330728: 0xac60e7f8  sw          $zero, -0x1808($v1)
    ctx->pc = 0x330728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961144), GPR_U32(ctx, 0));
    // 0x33072c: 0x8c44e800  lw          $a0, -0x1800($v0)
    ctx->pc = 0x33072cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961152)));
    // 0x330730: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x330730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x330734: 0x24634658  addiu       $v1, $v1, 0x4658
    ctx->pc = 0x330734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18008));
    // 0x330738: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x330738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33073c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33073cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x330740: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x330740u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x330744: 0xac43e808  sw          $v1, -0x17F8($v0)
    ctx->pc = 0x330744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961160), GPR_U32(ctx, 3));
label_330748:
    // 0x330748: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x330748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_33074c:
    // 0x33074c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33074cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x330750: 0xc0cda68  jal         func_3369A0
    ctx->pc = 0x330750u;
    SET_GPR_U32(ctx, 31, 0x330758u);
    ctx->pc = 0x330754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330750u;
    // 0x330754: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3369A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3369A0u, 0x330750u, 0x330758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330758u;
label_330758:
    // 0x330758: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x330758u;
    {
        const bool branch_taken_0x330758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x330758) {
            ctx->pc = 0x33075Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330758u;
            // 0x33075c: 0x24042000  addiu       $a0, $zero, 0x2000 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330768u;
            goto label_330768;
        }
    }
    ctx->pc = 0x330760u;
    // 0x330760: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x330760u;
    {
        const bool branch_taken_0x330760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330760u;
        // 0x330764: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330760) {
            ctx->pc = 0x3307E8u;
            goto label_3307e8;
        }
    }
    ctx->pc = 0x330768u;
label_330768:
    // 0x330768: 0xc0cda68  jal         func_3369A0
    ctx->pc = 0x330768u;
    SET_GPR_U32(ctx, 31, 0x330770u);
    ctx->pc = 0x33076Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330768u;
    // 0x33076c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3369A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3369A0u, 0x330768u, 0x330770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330770u;
label_330770:
    // 0x330770: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x330770u;
    {
        const bool branch_taken_0x330770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x330770) {
            ctx->pc = 0x330774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330770u;
            // 0x330774: 0x24044000  addiu       $a0, $zero, 0x4000 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330780u;
            goto label_330780;
        }
    }
    ctx->pc = 0x330778u;
    // 0x330778: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x330778u;
    {
        const bool branch_taken_0x330778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330778u;
        // 0x33077c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330778) {
            ctx->pc = 0x3307E8u;
            goto label_3307e8;
        }
    }
    ctx->pc = 0x330780u;
label_330780:
    // 0x330780: 0xc0cda68  jal         func_3369A0
    ctx->pc = 0x330780u;
    SET_GPR_U32(ctx, 31, 0x330788u);
    ctx->pc = 0x330784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330780u;
    // 0x330784: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3369A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3369A0u, 0x330780u, 0x330788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330788u;
label_330788:
    // 0x330788: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x330788u;
    {
        const bool branch_taken_0x330788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x330788) {
            ctx->pc = 0x3307E8u;
            goto label_3307e8;
        }
    }
    ctx->pc = 0x330790u;
    // 0x330790: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x330790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x330794: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x330794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x330798: 0x9063e818  lbu         $v1, -0x17E8($v1)
    ctx->pc = 0x330798u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x33079c: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x33079cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x3307a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3307a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3307a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3307a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3307a8: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x3307A8u;
    SET_GPR_U32(ctx, 31, 0x3307B0u);
    ctx->pc = 0x3307ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3307A8u;
    // 0x3307ac: 0xa043e818  sb          $v1, -0x17E8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x3307A8u, 0x3307B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3307B0u;
label_3307b0:
    // 0x3307b0: 0xc054e1c  jal         func_153870
    ctx->pc = 0x3307B0u;
    SET_GPR_U32(ctx, 31, 0x3307B8u);
    ctx->pc = 0x153870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153870u, 0x3307B0u, 0x3307B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3307B8u;
label_3307b8:
    // 0x3307b8: 0xc06871c  jal         func_1A1C70
    ctx->pc = 0x3307B8u;
    SET_GPR_U32(ctx, 31, 0x3307C0u);
    ctx->pc = 0x1A1C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C70u, 0x3307B8u, 0x3307C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3307C0u;
label_3307c0:
    // 0x3307c0: 0xc0692c0  jal         func_1A4B00
    ctx->pc = 0x3307C0u;
    SET_GPR_U32(ctx, 31, 0x3307C8u);
    ctx->pc = 0x1A4B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B00u, 0x3307C0u, 0x3307C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3307C8u;
label_3307c8:
    // 0x3307c8: 0xc0cb1f4  jal         func_32C7D0
    ctx->pc = 0x3307C8u;
    SET_GPR_U32(ctx, 31, 0x3307D0u);
    ctx->pc = 0x32C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C7D0u, 0x3307C8u, 0x3307D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3307D0u;
label_3307d0:
    // 0x3307d0: 0xc0c7cc0  jal         func_31F300
    ctx->pc = 0x3307D0u;
    SET_GPR_U32(ctx, 31, 0x3307D8u);
    ctx->pc = 0x31F300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F300u, 0x3307D0u, 0x3307D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3307D8u;
label_3307d8:
    // 0x3307d8: 0xc053318  jal         func_14CC60
    ctx->pc = 0x3307D8u;
    SET_GPR_U32(ctx, 31, 0x3307E0u);
    ctx->pc = 0x14CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CC60u, 0x3307D8u, 0x3307E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3307E0u;
label_3307e0:
    // 0x3307e0: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x3307E0u;
    {
        const bool branch_taken_0x3307e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3307e0) {
            ctx->pc = 0x330960u;
            goto label_330960;
        }
    }
    ctx->pc = 0x3307E8u;
label_3307e8:
    // 0x3307e8: 0x1200005d  beqz        $s0, . + 4 + (0x5D << 2)
    ctx->pc = 0x3307E8u;
    {
        const bool branch_taken_0x3307e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3307e8) {
            ctx->pc = 0x330960u;
            goto label_330960;
        }
    }
    ctx->pc = 0x3307F0u;
    // 0x3307f0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3307f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3307f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3307f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3307f8: 0x8c44e808  lw          $a0, -0x17F8($v0)
    ctx->pc = 0x3307f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961160)));
    // 0x3307fc: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3307FCu;
    {
        const bool branch_taken_0x3307fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3307fc) {
            ctx->pc = 0x33081Cu;
            goto label_33081c;
        }
    }
    ctx->pc = 0x330804u;
    // 0x330804: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x330804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x330808: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x330808u;
    {
        const bool branch_taken_0x330808 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x330808) {
            ctx->pc = 0x33081Cu;
            goto label_33081c;
        }
    }
    ctx->pc = 0x330810u;
    // 0x330810: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x330810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x330814: 0x54820006  bnel        $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x330814u;
    {
        const bool branch_taken_0x330814 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x330814) {
            ctx->pc = 0x330818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330814u;
            // 0x330818: 0x24040126  addiu       $a0, $zero, 0x126 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330830u;
            goto label_330830;
        }
    }
    ctx->pc = 0x33081Cu;
label_33081c:
    // 0x33081c: 0xc068c84  jal         func_1A3210
    ctx->pc = 0x33081Cu;
    SET_GPR_U32(ctx, 31, 0x330824u);
    ctx->pc = 0x1A3210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3210u, 0x33081Cu, 0x330824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330824u;
label_330824:
    // 0x330824: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x330824u;
    {
        const bool branch_taken_0x330824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x330824) {
            ctx->pc = 0x330960u;
            goto label_330960;
        }
    }
    ctx->pc = 0x33082Cu;
    // 0x33082c: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x33082cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
label_330830:
    // 0x330830: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x330830u;
    SET_GPR_U32(ctx, 31, 0x330838u);
    ctx->pc = 0x330834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330830u;
    // 0x330834: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x330830u, 0x330838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330838u;
label_330838:
    // 0x330838: 0xc053318  jal         func_14CC60
    ctx->pc = 0x330838u;
    SET_GPR_U32(ctx, 31, 0x330840u);
    ctx->pc = 0x14CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CC60u, 0x330838u, 0x330840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330840u;
label_330840:
    // 0x330840: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x330840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x330844: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x330844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x330848: 0xc0cc0bc  jal         func_3302F0
    ctx->pc = 0x330848u;
    SET_GPR_U32(ctx, 31, 0x330850u);
    ctx->pc = 0x33084Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330848u;
    // 0x33084c: 0xa0439720  sb          $v1, -0x68E0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940448), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3302F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3302F0u, 0x330848u, 0x330850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330850u;
label_330850:
    // 0x330850: 0xc0c358c  jal         func_30D630
    ctx->pc = 0x330850u;
    SET_GPR_U32(ctx, 31, 0x330858u);
    ctx->pc = 0x30D630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D630u, 0x330850u, 0x330858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330858u;
label_330858:
    // 0x330858: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x330858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33085c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x33085cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x330860: 0x8c65e808  lw          $a1, -0x17F8($v1)
    ctx->pc = 0x330860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961160)));
    // 0x330864: 0x50a40016  beql        $a1, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x330864u;
    {
        const bool branch_taken_0x330864 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x330864) {
            ctx->pc = 0x330868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330864u;
            // 0x330868: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3308C0u;
            goto label_3308c0;
        }
    }
    ctx->pc = 0x33086Cu;
    // 0x33086c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x33086cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x330870: 0x10a30012  beq         $a1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x330870u;
    {
        const bool branch_taken_0x330870 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x330870) {
            ctx->pc = 0x3308BCu;
            goto label_3308bc;
        }
    }
    ctx->pc = 0x330878u;
    // 0x330878: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x330878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x33087c: 0x10a3000f  beq         $a1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x33087Cu;
    {
        const bool branch_taken_0x33087c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33087c) {
            ctx->pc = 0x3308BCu;
            goto label_3308bc;
        }
    }
    ctx->pc = 0x330884u;
    // 0x330884: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x330884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x330888: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x330888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x33088c: 0x2484fe70  addiu       $a0, $a0, -0x190
    ctx->pc = 0x33088cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966896));
    // 0x330890: 0x24a54648  addiu       $a1, $a1, 0x4648
    ctx->pc = 0x330890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17992));
    // 0x330894: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x330894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330898: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x330898u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33089c: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x33089Cu;
    SET_GPR_U32(ctx, 31, 0x3308A4u);
    ctx->pc = 0x3308A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33089Cu;
    // 0x3308a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x33089Cu, 0x3308A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3308A4u;
label_3308a4:
    // 0x3308a4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3308a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3308a8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3308a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3308ac: 0xac60e7e8  sw          $zero, -0x1818($v1)
    ctx->pc = 0x3308acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961128), GPR_U32(ctx, 0));
    // 0x3308b0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3308b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3308b4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x3308B4u;
    {
        const bool branch_taken_0x3308b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3308B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3308B4u;
        // 0x3308b8: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3308b4) {
            ctx->pc = 0x330960u;
            goto label_330960;
        }
    }
    ctx->pc = 0x3308BCu;
label_3308bc:
    // 0x3308bc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3308bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3308c0:
    // 0x3308c0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3308c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3308c4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x3308C4u;
    {
        const bool branch_taken_0x3308c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3308C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3308C4u;
        // 0x3308c8: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3308c4) {
            ctx->pc = 0x330960u;
            goto label_330960;
        }
    }
    ctx->pc = 0x3308CCu;
label_3308cc:
    // 0x3308cc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3308ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3308d0: 0x9063e810  lbu         $v1, -0x17F0($v1)
    ctx->pc = 0x3308d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x3308d4: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x3308d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x3308d8: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3308D8u;
    {
        const bool branch_taken_0x3308d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3308d8) {
            ctx->pc = 0x330960u;
            goto label_330960;
        }
    }
    ctx->pc = 0x3308E0u;
    // 0x3308e0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3308e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3308e4: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x3308e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x3308e8: 0x8c45e808  lw          $a1, -0x17F8($v0)
    ctx->pc = 0x3308e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961160)));
    // 0x3308ec: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3308ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3308f0: 0x80449720  lb          $a0, -0x68E0($v0)
    ctx->pc = 0x3308f0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x3308f4: 0xc0cc518  jal         func_331460
    ctx->pc = 0x3308F4u;
    SET_GPR_U32(ctx, 31, 0x3308FCu);
    ctx->pc = 0x3308F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3308F4u;
    // 0x3308f8: 0xa0659780  sb          $a1, -0x6880($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294940544), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331460u, 0x3308F4u, 0x3308FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3308FCu;
label_3308fc:
    // 0x3308fc: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3308fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x330900: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x330900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x330904: 0xac80e800  sw          $zero, -0x1800($a0)
    ctx->pc = 0x330904u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961152), GPR_U32(ctx, 0));
    // 0x330908: 0xac60e7f8  sw          $zero, -0x1808($v1)
    ctx->pc = 0x330908u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961144), GPR_U32(ctx, 0));
    // 0x33090c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x33090cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x330910: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x330910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x330914: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x330914u;
    {
        const bool branch_taken_0x330914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330914u;
        // 0x330918: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330914) {
            ctx->pc = 0x330960u;
            goto label_330960;
        }
    }
    ctx->pc = 0x33091Cu;
label_33091c:
    // 0x33091c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33091cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x330920: 0x9064e810  lbu         $a0, -0x17F0($v1)
    ctx->pc = 0x330920u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x330924: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x330924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x330928: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x330928u;
    {
        const bool branch_taken_0x330928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x330928) {
            ctx->pc = 0x330960u;
            goto label_330960;
        }
    }
    ctx->pc = 0x330930u;
    // 0x330930: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x330930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x330934: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x330934u;
    {
        const bool branch_taken_0x330934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x330934) {
            ctx->pc = 0x330960u;
            goto label_330960;
        }
    }
    ctx->pc = 0x33093Cu;
    // 0x33093c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33093cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x330940: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x330940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x330944: 0x8c45e808  lw          $a1, -0x17F8($v0)
    ctx->pc = 0x330944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961160)));
    // 0x330948: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x330948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33094c: 0x80449720  lb          $a0, -0x68E0($v0)
    ctx->pc = 0x33094cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x330950: 0xc0cc518  jal         func_331460
    ctx->pc = 0x330950u;
    SET_GPR_U32(ctx, 31, 0x330958u);
    ctx->pc = 0x330954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330950u;
    // 0x330954: 0xa0659780  sb          $a1, -0x6880($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294940544), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331460u, 0x330950u, 0x330958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330958u;
label_330958:
    // 0x330958: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x330958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33095c: 0xa060e818  sb          $zero, -0x17E8($v1)
    ctx->pc = 0x33095cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 0));
label_330960:
    // 0x330960: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x330960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_330964:
    // 0x330964: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x330964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330968: 0x3e00008  jr          $ra
    ctx->pc = 0x330968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330968u;
        // 0x33096c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330970u;
    // 0x330970: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x330970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x330974: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x330974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x330978: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x330978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x33097c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33097cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x330980: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x330980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x330984: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x330984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x330988: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x330988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33098c: 0x8c930010  lw          $s3, 0x10($a0)
    ctx->pc = 0x33098cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x330990: 0x82620001  lb          $v0, 0x1($s3)
    ctx->pc = 0x330990u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x330994: 0x86720004  lh          $s2, 0x4($s3)
    ctx->pc = 0x330994u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x330998: 0x10430066  beq         $v0, $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x330998u;
    {
        const bool branch_taken_0x330998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x33099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330998u;
        // 0x33099c: 0x86700002  lh          $s0, 0x2($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330998) {
            ctx->pc = 0x330B34u;
            goto label_330b34;
        }
    }
    ctx->pc = 0x3309A0u;
    // 0x3309a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3309a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3309a4: 0x10430019  beq         $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3309A4u;
    {
        const bool branch_taken_0x3309a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3309a4) {
            ctx->pc = 0x330A0Cu;
            goto label_330a0c;
        }
    }
    ctx->pc = 0x3309ACu;
    // 0x3309ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3309ACu;
    {
        const bool branch_taken_0x3309ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3309ac) {
            ctx->pc = 0x3309BCu;
            goto label_3309bc;
        }
    }
    ctx->pc = 0x3309B4u;
    // 0x3309b4: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x3309B4u;
    {
        const bool branch_taken_0x3309b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3309B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3309B4u;
        // 0x3309b8: 0xa6700002  sh          $s0, 0x2($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3309b4) {
            ctx->pc = 0x330B70u;
            goto label_330b70;
        }
    }
    ctx->pc = 0x3309BCu;
label_3309bc:
    // 0x3309bc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3309bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3309c0: 0x9042e818  lbu         $v0, -0x17E8($v0)
    ctx->pc = 0x3309c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961176)));
    // 0x3309c4: 0x14430069  bne         $v0, $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x3309C4u;
    {
        const bool branch_taken_0x3309c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3309c4) {
            ctx->pc = 0x330B6Cu;
            goto label_330b6c;
        }
    }
    ctx->pc = 0x3309CCu;
    // 0x3309cc: 0x26420006  addiu       $v0, $s2, 0x6
    ctx->pc = 0x3309ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
    // 0x3309d0: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x3309d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3309d4: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x3309d4u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x3309d8: 0x2a420010  slti        $v0, $s2, 0x10
    ctx->pc = 0x3309d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3309dc: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x3309DCu;
    {
        const bool branch_taken_0x3309dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3309dc) {
            ctx->pc = 0x330B6Cu;
            goto label_330b6c;
        }
    }
    ctx->pc = 0x3309E4u;
    // 0x3309e4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3309e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3309e8: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x3309e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3309ec: 0x9043e810  lbu         $v1, -0x17F0($v0)
    ctx->pc = 0x3309ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961168)));
    // 0x3309f0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3309f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3309f4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3309f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3309f8: 0xa043e810  sb          $v1, -0x17F0($v0)
    ctx->pc = 0x3309f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961168), (uint8_t)GPR_U32(ctx, 3));
    // 0x3309fc: 0x82620001  lb          $v0, 0x1($s3)
    ctx->pc = 0x3309fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x330a00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x330a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x330a04: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x330A04u;
    {
        const bool branch_taken_0x330a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330A04u;
        // 0x330a08: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330a04) {
            ctx->pc = 0x330B6Cu;
            goto label_330b6c;
        }
    }
    ctx->pc = 0x330A0Cu;
label_330a0c:
    // 0x330a0c: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x330a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x330a10: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x330a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x330a14: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x330a14u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x330a18: 0x14650015  bne         $v1, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x330A18u;
    {
        const bool branch_taken_0x330a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x330a18) {
            ctx->pc = 0x330A70u;
            goto label_330a70;
        }
    }
    ctx->pc = 0x330A20u;
    // 0x330a20: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x330a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x330a24: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x330a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x330a28: 0x9044e818  lbu         $a0, -0x17E8($v0)
    ctx->pc = 0x330a28u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961176)));
    // 0x330a2c: 0x5083000d  beql        $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x330A2Cu;
    {
        const bool branch_taken_0x330a2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x330a2c) {
            ctx->pc = 0x330A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330A2Cu;
            // 0x330a30: 0x82620001  lb          $v0, 0x1($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330A64u;
            goto label_330a64;
        }
    }
    ctx->pc = 0x330A34u;
    // 0x330a34: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x330a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x330a38: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x330A38u;
    {
        const bool branch_taken_0x330a38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x330a38) {
            ctx->pc = 0x330A60u;
            goto label_330a60;
        }
    }
    ctx->pc = 0x330A40u;
    // 0x330a40: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x330a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x330a44: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x330A44u;
    {
        const bool branch_taken_0x330a44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x330a44) {
            ctx->pc = 0x330A60u;
            goto label_330a60;
        }
    }
    ctx->pc = 0x330A4Cu;
    // 0x330a4c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x330a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x330a50: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x330A50u;
    {
        const bool branch_taken_0x330a50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x330a50) {
            ctx->pc = 0x330A60u;
            goto label_330a60;
        }
    }
    ctx->pc = 0x330A58u;
    // 0x330a58: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x330A58u;
    {
        const bool branch_taken_0x330a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330a58) {
            ctx->pc = 0x330B6Cu;
            goto label_330b6c;
        }
    }
    ctx->pc = 0x330A60u;
label_330a60:
    // 0x330a60: 0x82620001  lb          $v0, 0x1($s3)
    ctx->pc = 0x330a60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_330a64:
    // 0x330a64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x330a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x330a68: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x330A68u;
    {
        const bool branch_taken_0x330a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330A68u;
        // 0x330a6c: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330a68) {
            ctx->pc = 0x330B6Cu;
            goto label_330b6c;
        }
    }
    ctx->pc = 0x330A70u;
label_330a70:
    // 0x330a70: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x330a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x330a74: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x330a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x330a78: 0x9066e820  lbu         $a2, -0x17E0($v1)
    ctx->pc = 0x330a78u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961184)));
    // 0x330a7c: 0x10c50018  beq         $a2, $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x330A7Cu;
    {
        const bool branch_taken_0x330a7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x330a7c) {
            ctx->pc = 0x330AE0u;
            goto label_330ae0;
        }
    }
    ctx->pc = 0x330A84u;
    // 0x330a84: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x330a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x330a88: 0x10c3000c  beq         $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x330A88u;
    {
        const bool branch_taken_0x330a88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x330a88) {
            ctx->pc = 0x330ABCu;
            goto label_330abc;
        }
    }
    ctx->pc = 0x330A90u;
    // 0x330a90: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x330a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x330a94: 0x10c30009  beq         $a2, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x330A94u;
    {
        const bool branch_taken_0x330a94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x330a94) {
            ctx->pc = 0x330ABCu;
            goto label_330abc;
        }
    }
    ctx->pc = 0x330A9Cu;
    // 0x330a9c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x330a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x330aa0: 0x10c30006  beq         $a2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x330AA0u;
    {
        const bool branch_taken_0x330aa0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x330aa0) {
            ctx->pc = 0x330ABCu;
            goto label_330abc;
        }
    }
    ctx->pc = 0x330AA8u;
    // 0x330aa8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x330aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x330aac: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x330AACu;
    {
        const bool branch_taken_0x330aac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x330aac) {
            ctx->pc = 0x330ABCu;
            goto label_330abc;
        }
    }
    ctx->pc = 0x330AB4u;
    // 0x330ab4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x330AB4u;
    {
        const bool branch_taken_0x330ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330AB4u;
        // 0x330ab8: 0x3c0301de  lui         $v1, 0x1DE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330ab4) {
            ctx->pc = 0x330B18u;
            goto label_330b18;
        }
    }
    ctx->pc = 0x330ABCu;
label_330abc:
    // 0x330abc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x330abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x330ac0: 0x9042e818  lbu         $v0, -0x17E8($v0)
    ctx->pc = 0x330ac0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961176)));
    // 0x330ac4: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x330ac4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x330ac8: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x330AC8u;
    {
        const bool branch_taken_0x330ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x330ac8) {
            ctx->pc = 0x330B6Cu;
            goto label_330b6c;
        }
    }
    ctx->pc = 0x330AD0u;
    // 0x330ad0: 0x82620001  lb          $v0, 0x1($s3)
    ctx->pc = 0x330ad0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x330ad4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x330ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x330ad8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x330AD8u;
    {
        const bool branch_taken_0x330ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330AD8u;
        // 0x330adc: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330ad8) {
            ctx->pc = 0x330B6Cu;
            goto label_330b6c;
        }
    }
    ctx->pc = 0x330AE0u;
label_330ae0:
    // 0x330ae0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x330ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x330ae4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x330ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x330ae8: 0x9063e818  lbu         $v1, -0x17E8($v1)
    ctx->pc = 0x330ae8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x330aec: 0x54650004  bnel        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x330AECu;
    {
        const bool branch_taken_0x330aec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x330aec) {
            ctx->pc = 0x330AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330AECu;
            // 0x330af0: 0x2862000a  slti        $v0, $v1, 0xA (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x330B00u;
            goto label_330b00;
        }
    }
    ctx->pc = 0x330AF4u;
    // 0x330af4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x330af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x330af8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x330AF8u;
    {
        const bool branch_taken_0x330af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330AF8u;
        // 0x330afc: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330af8) {
            ctx->pc = 0x330B6Cu;
            goto label_330b6c;
        }
    }
    ctx->pc = 0x330B00u;
label_330b00:
    // 0x330b00: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x330B00u;
    {
        const bool branch_taken_0x330b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x330b00) {
            ctx->pc = 0x330B6Cu;
            goto label_330b6c;
        }
    }
    ctx->pc = 0x330B08u;
    // 0x330b08: 0xc055728  jal         func_155CA0
    ctx->pc = 0x330B08u;
    SET_GPR_U32(ctx, 31, 0x330B10u);
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x330B08u, 0x330B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330B10u;
label_330b10:
    // 0x330b10: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x330B10u;
    {
        const bool branch_taken_0x330b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330B10u;
        // 0x330b14: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330b10) {
            ctx->pc = 0x330D20u;
            goto label_330d20;
        }
    }
    ctx->pc = 0x330B18u;
label_330b18:
    // 0x330b18: 0x9063e818  lbu         $v1, -0x17E8($v1)
    ctx->pc = 0x330b18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x330b1c: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x330b1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x330b20: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x330B20u;
    {
        const bool branch_taken_0x330b20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x330b20) {
            ctx->pc = 0x330B6Cu;
            goto label_330b6c;
        }
    }
    ctx->pc = 0x330B28u;
    // 0x330b28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x330b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x330b2c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x330B2Cu;
    {
        const bool branch_taken_0x330b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330B2Cu;
        // 0x330b30: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330b2c) {
            ctx->pc = 0x330B6Cu;
            goto label_330b6c;
        }
    }
    ctx->pc = 0x330B34u;
label_330b34:
    // 0x330b34: 0x2642fffa  addiu       $v0, $s2, -0x6
    ctx->pc = 0x330b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967290));
    // 0x330b38: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x330b38u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x330b3c: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x330b3cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x330b40: 0x2a41ffc1  slti        $at, $s2, -0x3F
    ctx->pc = 0x330b40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4294967233) ? 1 : 0);
    // 0x330b44: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x330B44u;
    {
        const bool branch_taken_0x330b44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x330b44) {
            ctx->pc = 0x330B6Cu;
            goto label_330b6c;
        }
    }
    ctx->pc = 0x330B4Cu;
    // 0x330b4c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x330b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x330b50: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x330b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x330b54: 0x9063e810  lbu         $v1, -0x17F0($v1)
    ctx->pc = 0x330b54u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x330b58: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x330b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x330b5c: 0xc055728  jal         func_155CA0
    ctx->pc = 0x330B5Cu;
    SET_GPR_U32(ctx, 31, 0x330B64u);
    ctx->pc = 0x330B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330B5Cu;
    // 0x330b60: 0xa043e810  sb          $v1, -0x17F0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961168), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x330B5Cu, 0x330B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330B64u;
label_330b64:
    // 0x330b64: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x330B64u;
    {
        const bool branch_taken_0x330b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330b64) {
            ctx->pc = 0x330D1Cu;
            goto label_330d1c;
        }
    }
    ctx->pc = 0x330B6Cu;
label_330b6c:
    // 0x330b6c: 0xa6700002  sh          $s0, 0x2($s3)
    ctx->pc = 0x330b6cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 16));
label_330b70:
    // 0x330b70: 0x128c3c  dsll32      $s1, $s2, 16
    ctx->pc = 0x330b70u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) << (32 + 16));
    // 0x330b74: 0xa6720004  sh          $s2, 0x4($s3)
    ctx->pc = 0x330b74u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 18));
    // 0x330b78: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x330b78u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x330b7c: 0x86650002  lh          $a1, 0x2($s3)
    ctx->pc = 0x330b7cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x330b80: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x330b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x330b84: 0x2484189c  addiu       $a0, $a0, 0x189C
    ctx->pc = 0x330b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6300));
    // 0x330b88: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x330b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330b8c: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x330B8Cu;
    SET_GPR_U32(ctx, 31, 0x330B94u);
    ctx->pc = 0x330B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330B8Cu;
    // 0x330b90: 0x2407a847  addiu       $a3, $zero, -0x57B9 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944839));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302C50u, 0x330B8Cu, 0x330B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330B94u;
label_330b94:
    // 0x330b94: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x330b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x330b98: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x330b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x330b9c: 0x90449780  lbu         $a0, -0x6880($v0)
    ctx->pc = 0x330b9cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x330ba0: 0x54830017  bnel        $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x330BA0u;
    {
        const bool branch_taken_0x330ba0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x330ba0) {
            ctx->pc = 0x330BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330BA0u;
            // 0x330ba4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330C00u;
            goto label_330c00;
        }
    }
    ctx->pc = 0x330BA8u;
    // 0x330ba8: 0x86650002  lh          $a1, 0x2($s3)
    ctx->pc = 0x330ba8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x330bac: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x330bacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x330bb0: 0x2484189c  addiu       $a0, $a0, 0x189C
    ctx->pc = 0x330bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6300));
    // 0x330bb4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x330bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330bb8: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x330BB8u;
    SET_GPR_U32(ctx, 31, 0x330BC0u);
    ctx->pc = 0x330BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330BB8u;
    // 0x330bbc: 0x2407a847  addiu       $a3, $zero, -0x57B9 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944839));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302C50u, 0x330BB8u, 0x330BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330BC0u;
label_330bc0:
    // 0x330bc0: 0x10843c  dsll32      $s0, $s0, 16
    ctx->pc = 0x330bc0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 16));
    // 0x330bc4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x330bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x330bc8: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x330bc8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x330bcc: 0x248418e4  addiu       $a0, $a0, 0x18E4
    ctx->pc = 0x330bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6372));
    // 0x330bd0: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x330bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x330bd4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x330bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330bd8: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x330BD8u;
    SET_GPR_U32(ctx, 31, 0x330BE0u);
    ctx->pc = 0x330BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330BD8u;
    // 0x330bdc: 0x2407a847  addiu       $a3, $zero, -0x57B9 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944839));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302C50u, 0x330BD8u, 0x330BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330BE0u;
label_330be0:
    // 0x330be0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x330be0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x330be4: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x330be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x330be8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x330be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330bec: 0x248418a8  addiu       $a0, $a0, 0x18A8
    ctx->pc = 0x330becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6312));
    // 0x330bf0: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x330BF0u;
    SET_GPR_U32(ctx, 31, 0x330BF8u);
    ctx->pc = 0x330BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330BF0u;
    // 0x330bf4: 0x2407a847  addiu       $a3, $zero, -0x57B9 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944839));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302C50u, 0x330BF0u, 0x330BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330BF8u;
label_330bf8:
    // 0x330bf8: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x330BF8u;
    {
        const bool branch_taken_0x330bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330bf8) {
            ctx->pc = 0x330D1Cu;
            goto label_330d1c;
        }
    }
    ctx->pc = 0x330C00u;
label_330c00:
    // 0x330c00: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x330C00u;
    {
        const bool branch_taken_0x330c00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x330c00) {
            ctx->pc = 0x330C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330C00u;
            // 0x330c04: 0x86650002  lh          $a1, 0x2($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330C20u;
            goto label_330c20;
        }
    }
    ctx->pc = 0x330C08u;
    // 0x330c08: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x330c08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x330c0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x330c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330c10: 0xc0d4bb8  jal         func_352EE0
    ctx->pc = 0x330C10u;
    SET_GPR_U32(ctx, 31, 0x330C18u);
    ctx->pc = 0x330C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330C10u;
    // 0x330c14: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352EE0u, 0x330C10u, 0x330C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330C18u;
label_330c18:
    // 0x330c18: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x330C18u;
    {
        const bool branch_taken_0x330c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330c18) {
            ctx->pc = 0x330D1Cu;
            goto label_330d1c;
        }
    }
    ctx->pc = 0x330C20u;
label_330c20:
    // 0x330c20: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x330c20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x330c24: 0x2484189c  addiu       $a0, $a0, 0x189C
    ctx->pc = 0x330c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6300));
    // 0x330c28: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x330c28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330c2c: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x330C2Cu;
    SET_GPR_U32(ctx, 31, 0x330C34u);
    ctx->pc = 0x330C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330C2Cu;
    // 0x330c30: 0x2407a847  addiu       $a3, $zero, -0x57B9 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944839));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302C50u, 0x330C2Cu, 0x330C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330C34u;
label_330c34:
    // 0x330c34: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x330c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x330c38: 0x9042e820  lbu         $v0, -0x17E0($v0)
    ctx->pc = 0x330c38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961184)));
    // 0x330c3c: 0x2c410012  sltiu       $at, $v0, 0x12
    ctx->pc = 0x330c3cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x330c40: 0x5020002f  beql        $at, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x330C40u;
    {
        const bool branch_taken_0x330c40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x330c40) {
            ctx->pc = 0x330C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330C40u;
            // 0x330c44: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330D00u;
            goto label_330d00;
        }
    }
    ctx->pc = 0x330C48u;
    // 0x330c48: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x330c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x330c4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x330c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x330c50: 0x24634670  addiu       $v1, $v1, 0x4670
    ctx->pc = 0x330c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18032));
    // 0x330c54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x330c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x330c58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x330c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x330c5c: 0x400008  jr          $v0
    ctx->pc = 0x330C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x330C64u: goto label_330c64;
            case 0x330C8Cu: goto label_330c8c;
            case 0x330CB4u: goto label_330cb4;
            case 0x330CDCu: goto label_330cdc;
            case 0x330CFCu: goto label_330cfc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330C5Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x330C64u;
label_330c64:
    // 0x330c64: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x330c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x330c68: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x330c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x330c6c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x330c6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x330c70: 0x248418b4  addiu       $a0, $a0, 0x18B4
    ctx->pc = 0x330c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6324));
    // 0x330c74: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x330c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x330c78: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x330c78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330c7c: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x330C7Cu;
    SET_GPR_U32(ctx, 31, 0x330C84u);
    ctx->pc = 0x330C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330C7Cu;
    // 0x330c80: 0x2407a847  addiu       $a3, $zero, -0x57B9 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944839));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302C50u, 0x330C7Cu, 0x330C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330C84u;
label_330c84:
    // 0x330c84: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x330C84u;
    {
        const bool branch_taken_0x330c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330c84) {
            ctx->pc = 0x330CFCu;
            goto label_330cfc;
        }
    }
    ctx->pc = 0x330C8Cu;
label_330c8c:
    // 0x330c8c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x330c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x330c90: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x330c90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x330c94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x330c94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x330c98: 0x248418c0  addiu       $a0, $a0, 0x18C0
    ctx->pc = 0x330c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6336));
    // 0x330c9c: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x330c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x330ca0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x330ca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330ca4: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x330CA4u;
    SET_GPR_U32(ctx, 31, 0x330CACu);
    ctx->pc = 0x330CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330CA4u;
    // 0x330ca8: 0x2407a847  addiu       $a3, $zero, -0x57B9 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944839));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302C50u, 0x330CA4u, 0x330CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330CACu;
label_330cac:
    // 0x330cac: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x330CACu;
    {
        const bool branch_taken_0x330cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330cac) {
            ctx->pc = 0x330CFCu;
            goto label_330cfc;
        }
    }
    ctx->pc = 0x330CB4u;
label_330cb4:
    // 0x330cb4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x330cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x330cb8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x330cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x330cbc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x330cbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x330cc0: 0x248418d8  addiu       $a0, $a0, 0x18D8
    ctx->pc = 0x330cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6360));
    // 0x330cc4: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x330cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x330cc8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x330cc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330ccc: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x330CCCu;
    SET_GPR_U32(ctx, 31, 0x330CD4u);
    ctx->pc = 0x330CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330CCCu;
    // 0x330cd0: 0x2407a847  addiu       $a3, $zero, -0x57B9 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944839));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302C50u, 0x330CCCu, 0x330CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330CD4u;
label_330cd4:
    // 0x330cd4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x330CD4u;
    {
        const bool branch_taken_0x330cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330cd4) {
            ctx->pc = 0x330CFCu;
            goto label_330cfc;
        }
    }
    ctx->pc = 0x330CDCu;
label_330cdc:
    // 0x330cdc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x330cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x330ce0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x330ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x330ce4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x330ce4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x330ce8: 0x248418cc  addiu       $a0, $a0, 0x18CC
    ctx->pc = 0x330ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6348));
    // 0x330cec: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x330cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x330cf0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x330cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330cf4: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x330CF4u;
    SET_GPR_U32(ctx, 31, 0x330CFCu);
    ctx->pc = 0x330CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330CF4u;
    // 0x330cf8: 0x2407a847  addiu       $a3, $zero, -0x57B9 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944839));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302C50u, 0x330CF4u, 0x330CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330CFCu;
label_330cfc:
    // 0x330cfc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x330cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_330d00:
    // 0x330d00: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x330d00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x330d04: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x330d04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x330d08: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x330d08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330d0c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x330d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x330d10: 0x248418a8  addiu       $a0, $a0, 0x18A8
    ctx->pc = 0x330d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6312));
    // 0x330d14: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x330D14u;
    SET_GPR_U32(ctx, 31, 0x330D1Cu);
    ctx->pc = 0x330D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330D14u;
    // 0x330d18: 0x2407a847  addiu       $a3, $zero, -0x57B9 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944839));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302C50u, 0x330D14u, 0x330D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330D1Cu;
label_330d1c:
    // 0x330d1c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x330d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_330d20:
    // 0x330d20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x330d20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x330d24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x330d24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x330d28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x330d28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x330d2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x330d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330d30: 0x3e00008  jr          $ra
    ctx->pc = 0x330D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330D30u;
        // 0x330d34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330D38u;
    // 0x330d38: 0x0  nop
    ctx->pc = 0x330d38u;
    // NOP
    // 0x330d3c: 0x0  nop
    ctx->pc = 0x330d3cu;
    // NOP
    // 0x330d40: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x330d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x330d44: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x330d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x330d48: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x330d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x330d4c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x330d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x330d50: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x330d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x330d54: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x330d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x330d58: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x330d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x330d5c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x330d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x330d60: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x330d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x330d64: 0xc068c84  jal         func_1A3210
    ctx->pc = 0x330D64u;
    SET_GPR_U32(ctx, 31, 0x330D6Cu);
    ctx->pc = 0x330D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330D64u;
    // 0x330d68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3210u, 0x330D64u, 0x330D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330D6Cu;
label_330d6c:
    // 0x330d6c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x330D6Cu;
    {
        const bool branch_taken_0x330d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x330d6c) {
            ctx->pc = 0x330D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330D6Cu;
            // 0x330d70: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330D78u;
            goto label_330d78;
        }
    }
    ctx->pc = 0x330D74u;
    // 0x330d74: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x330d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_330d78:
    // 0x330d78: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x330d78u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x330d7c: 0xc0cc088  jal         func_330220
    ctx->pc = 0x330D7Cu;
    SET_GPR_U32(ctx, 31, 0x330D84u);
    ctx->pc = 0x330D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330D7Cu;
    // 0x330d80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330220u, 0x330D7Cu, 0x330D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330D84u;
label_330d84:
    // 0x330d84: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x330d84u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x330d88: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x330d88u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x330d8c: 0x86550004  lh          $s5, 0x4($s2)
    ctx->pc = 0x330d8cu;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x330d90: 0x28c10003  slti        $at, $a2, 0x3
    ctx->pc = 0x330d90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x330d94: 0x1020008a  beqz        $at, . + 4 + (0x8A << 2)
    ctx->pc = 0x330D94u;
    {
        const bool branch_taken_0x330d94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x330D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330D94u;
        // 0x330d98: 0x86540002  lh          $s4, 0x2($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330d94) {
            ctx->pc = 0x330FC0u;
            goto label_330fc0;
        }
    }
    ctx->pc = 0x330D9Cu;
    // 0x330d9c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x330d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x330da0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x330da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330da4: 0x24841980  addiu       $a0, $a0, 0x1980
    ctx->pc = 0x330da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6528));
    // 0x330da8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x330da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330dac: 0xc0c0ae8  jal         func_302BA0
    ctx->pc = 0x330DACu;
    SET_GPR_U32(ctx, 31, 0x330DB4u);
    ctx->pc = 0x330DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330DACu;
    // 0x330db0: 0x240700a0  addiu       $a3, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302BA0u, 0x330DACu, 0x330DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330DB4u;
label_330db4:
    // 0x330db4: 0x3c0b003d  lui         $t3, 0x3D
    ctx->pc = 0x330db4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)61 << 16));
    // 0x330db8: 0x26b1fff0  addiu       $s1, $s5, -0x10
    ctx->pc = 0x330db8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967280));
    // 0x330dbc: 0x256b198c  addiu       $t3, $t3, 0x198C
    ctx->pc = 0x330dbcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 6540));
    // 0x330dc0: 0x26960020  addiu       $s6, $s4, 0x20
    ctx->pc = 0x330dc0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x330dc4: 0x95660006  lhu         $a2, 0x6($t3)
    ctx->pc = 0x330dc4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x330dc8: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x330dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x330dcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x330dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x330dd0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x330dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330dd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x330dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330dd8: 0x240700d0  addiu       $a3, $zero, 0xD0
    ctx->pc = 0x330dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x330ddc: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x330ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x330de0: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x330de0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x330de4: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x330de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x330de8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x330de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x330dec: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x330decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x330df0: 0x95690000  lhu         $t1, 0x0($t3)
    ctx->pc = 0x330df0u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x330df4: 0x956a0002  lhu         $t2, 0x2($t3)
    ctx->pc = 0x330df4u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x330df8: 0x956b0004  lhu         $t3, 0x4($t3)
    ctx->pc = 0x330df8u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x330dfc: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x330DFCu;
    SET_GPR_U32(ctx, 31, 0x330E04u);
    ctx->pc = 0x330E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330DFCu;
    // 0x330e00: 0x2406a833  addiu       $a2, $zero, -0x57CD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EA0u, 0x330DFCu, 0x330E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330E04u;
label_330e04:
    // 0x330e04: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x330e04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x330e08: 0x268500f0  addiu       $a1, $s4, 0xF0
    ctx->pc = 0x330e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 240));
    // 0x330e0c: 0x24841998  addiu       $a0, $a0, 0x1998
    ctx->pc = 0x330e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6552));
    // 0x330e10: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x330e10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330e14: 0xc0c0ae8  jal         func_302BA0
    ctx->pc = 0x330E14u;
    SET_GPR_U32(ctx, 31, 0x330E1Cu);
    ctx->pc = 0x330E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330E14u;
    // 0x330e18: 0x240700a0  addiu       $a3, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302BA0u, 0x330E14u, 0x330E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330E1Cu;
label_330e1c:
    // 0x330e1c: 0x82440000  lb          $a0, 0x0($s2)
    ctx->pc = 0x330e1cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x330e20: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x330e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x330e24: 0x24631a38  addiu       $v1, $v1, 0x1A38
    ctx->pc = 0x330e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6712));
    // 0x330e28: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x330e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x330e2c: 0x244218f0  addiu       $v0, $v0, 0x18F0
    ctx->pc = 0x330e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6384));
    // 0x330e30: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x330e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330e34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x330e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x330e38: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x330e38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330e3c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x330e3cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x330e40: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x330e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x330e44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x330e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x330e48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x330e48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x330e4c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x330E4Cu;
    SET_GPR_U32(ctx, 31, 0x330E54u);
    ctx->pc = 0x330E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330E4Cu;
    // 0x330e50: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x330E4Cu, 0x330E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330E54u;
label_330e54:
    // 0x330e54: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x330e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x330e58: 0x26900100  addiu       $s0, $s4, 0x100
    ctx->pc = 0x330e58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
    // 0x330e5c: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x330e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x330e60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x330e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330e64: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x330e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x330e68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x330e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x330e6c: 0x244218f0  addiu       $v0, $v0, 0x18F0
    ctx->pc = 0x330e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6384));
    // 0x330e70: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x330e70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330e74: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x330e74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x330e78: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x330E78u;
    SET_GPR_U32(ctx, 31, 0x330E80u);
    ctx->pc = 0x330E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330E78u;
    // 0x330e7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x330E78u, 0x330E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330E80u;
label_330e80:
    // 0x330e80: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x330e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x330e84: 0x8c64e800  lw          $a0, -0x1800($v1)
    ctx->pc = 0x330e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961152)));
    // 0x330e88: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x330e88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x330e8c: 0x502000b3  beql        $at, $zero, . + 4 + (0xB3 << 2)
    ctx->pc = 0x330E8Cu;
    {
        const bool branch_taken_0x330e8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x330e8c) {
            ctx->pc = 0x330E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330E8Cu;
            // 0x330e90: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33115Cu;
            goto label_33115c;
        }
    }
    ctx->pc = 0x330E94u;
    // 0x330e94: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x330e94u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x330e98: 0x148300af  bne         $a0, $v1, . + 4 + (0xAF << 2)
    ctx->pc = 0x330E98u;
    {
        const bool branch_taken_0x330e98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x330e98) {
            ctx->pc = 0x331158u;
            goto label_331158;
        }
    }
    ctx->pc = 0x330EA0u;
    // 0x330ea0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x330ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x330ea4: 0x8c42e7f8  lw          $v0, -0x1808($v0)
    ctx->pc = 0x330ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961144)));
    // 0x330ea8: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x330EA8u;
    {
        const bool branch_taken_0x330ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x330ea8) {
            ctx->pc = 0x330F70u;
            goto label_330f70;
        }
    }
    ctx->pc = 0x330EB0u;
    // 0x330eb0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x330eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x330eb4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x330eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330eb8: 0x248419ec  addiu       $a0, $a0, 0x19EC
    ctx->pc = 0x330eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6636));
    // 0x330ebc: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x330EBCu;
    SET_GPR_U32(ctx, 31, 0x330EC4u);
    ctx->pc = 0x330EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330EBCu;
    // 0x330ec0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x330EBCu, 0x330EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330EC4u;
label_330ec4:
    // 0x330ec4: 0x3c0b003d  lui         $t3, 0x3D
    ctx->pc = 0x330ec4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)61 << 16));
    // 0x330ec8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x330ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x330ecc: 0x256b19f8  addiu       $t3, $t3, 0x19F8
    ctx->pc = 0x330eccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 6648));
    // 0x330ed0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x330ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x330ed4: 0x95690006  lhu         $t1, 0x6($t3)
    ctx->pc = 0x330ed4u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x330ed8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x330ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330edc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x330edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330ee0: 0x2406a833  addiu       $a2, $zero, -0x57CD
    ctx->pc = 0x330ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x330ee4: 0x240700c0  addiu       $a3, $zero, 0xC0
    ctx->pc = 0x330ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x330ee8: 0xffa90000  sd          $t1, 0x0($sp)
    ctx->pc = 0x330ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 9));
    // 0x330eec: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x330eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x330ef0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x330ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x330ef4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x330ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x330ef8: 0x95690000  lhu         $t1, 0x0($t3)
    ctx->pc = 0x330ef8u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x330efc: 0x956a0002  lhu         $t2, 0x2($t3)
    ctx->pc = 0x330efcu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x330f00: 0x956b0004  lhu         $t3, 0x4($t3)
    ctx->pc = 0x330f00u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x330f04: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x330F04u;
    SET_GPR_U32(ctx, 31, 0x330F0Cu);
    ctx->pc = 0x330F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330F04u;
    // 0x330f08: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EA0u, 0x330F04u, 0x330F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330F0Cu;
label_330f0c:
    // 0x330f0c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x330f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x330f10: 0x268500e0  addiu       $a1, $s4, 0xE0
    ctx->pc = 0x330f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
    // 0x330f14: 0x24841a04  addiu       $a0, $a0, 0x1A04
    ctx->pc = 0x330f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6660));
    // 0x330f18: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x330F18u;
    SET_GPR_U32(ctx, 31, 0x330F20u);
    ctx->pc = 0x330F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330F18u;
    // 0x330f1c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x330F18u, 0x330F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330F20u;
label_330f20:
    // 0x330f20: 0x82440000  lb          $a0, 0x0($s2)
    ctx->pc = 0x330f20u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x330f24: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x330f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x330f28: 0x24631a38  addiu       $v1, $v1, 0x1A38
    ctx->pc = 0x330f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6712));
    // 0x330f2c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x330f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x330f30: 0x244218f0  addiu       $v0, $v0, 0x18F0
    ctx->pc = 0x330f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6384));
    // 0x330f34: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x330f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330f38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x330f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x330f3c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x330f3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330f40: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x330f40u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x330f44: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x330f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x330f48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x330f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x330f4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x330f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x330f50: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x330F50u;
    SET_GPR_U32(ctx, 31, 0x330F58u);
    ctx->pc = 0x330F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330F50u;
    // 0x330f54: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x330F50u, 0x330F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330F58u;
label_330f58:
    // 0x330f58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x330f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330f5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x330f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330f60: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x330F60u;
    SET_GPR_U32(ctx, 31, 0x330F68u);
    ctx->pc = 0x330F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330F60u;
    // 0x330f64: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x330F60u, 0x330F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330F68u;
label_330f68:
    // 0x330f68: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x330F68u;
    {
        const bool branch_taken_0x330f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330f68) {
            ctx->pc = 0x331158u;
            goto label_331158;
        }
    }
    ctx->pc = 0x330F70u;
label_330f70:
    // 0x330f70: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x330f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x330f74: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x330f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330f78: 0x24421a48  addiu       $v0, $v0, 0x1A48
    ctx->pc = 0x330f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6728));
    // 0x330f7c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x330f7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330f80: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x330f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x330f84: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x330f84u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x330f88: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x330f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x330f8c: 0x244218f0  addiu       $v0, $v0, 0x18F0
    ctx->pc = 0x330f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6384));
    // 0x330f90: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x330f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x330f94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x330f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x330f98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x330f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x330f9c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x330F9Cu;
    SET_GPR_U32(ctx, 31, 0x330FA4u);
    ctx->pc = 0x330FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330F9Cu;
    // 0x330fa0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x330F9Cu, 0x330FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330FA4u;
label_330fa4:
    // 0x330fa4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x330fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x330fa8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x330fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330fac: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x330facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330fb0: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x330FB0u;
    SET_GPR_U32(ctx, 31, 0x330FB8u);
    ctx->pc = 0x330FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330FB0u;
    // 0x330fb4: 0x24841968  addiu       $a0, $a0, 0x1968 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x330FB0u, 0x330FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330FB8u;
label_330fb8:
    // 0x330fb8: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x330FB8u;
    {
        const bool branch_taken_0x330fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330fb8) {
            ctx->pc = 0x331158u;
            goto label_331158;
        }
    }
    ctx->pc = 0x330FC0u;
label_330fc0:
    // 0x330fc0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x330fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x330fc4: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x330fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x330fc8: 0x8c45e7f8  lw          $a1, -0x1808($v0)
    ctx->pc = 0x330fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961144)));
    // 0x330fcc: 0x24631a50  addiu       $v1, $v1, 0x1A50
    ctx->pc = 0x330fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6736));
    // 0x330fd0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x330fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x330fd4: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x330fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x330fd8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x330fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x330fdc: 0x8c42e800  lw          $v0, -0x1800($v0)
    ctx->pc = 0x330fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961152)));
    // 0x330fe0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x330fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x330fe4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x330fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x330fe8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x330fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x330fec: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x330fecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x330ff0: 0x14c2002d  bne         $a2, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x330FF0u;
    {
        const bool branch_taken_0x330ff0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x330ff0) {
            ctx->pc = 0x3310A8u;
            goto label_3310a8;
        }
    }
    ctx->pc = 0x330FF8u;
    // 0x330ff8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x330ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x330ffc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x330ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331000: 0x248419ec  addiu       $a0, $a0, 0x19EC
    ctx->pc = 0x331000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6636));
    // 0x331004: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x331004u;
    SET_GPR_U32(ctx, 31, 0x33100Cu);
    ctx->pc = 0x331008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331004u;
    // 0x331008: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x331004u, 0x33100Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33100Cu;
label_33100c:
    // 0x33100c: 0x3c0b003d  lui         $t3, 0x3D
    ctx->pc = 0x33100cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)61 << 16));
    // 0x331010: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x331010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x331014: 0x256b19f8  addiu       $t3, $t3, 0x19F8
    ctx->pc = 0x331014u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 6648));
    // 0x331018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x331018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33101c: 0x95680006  lhu         $t0, 0x6($t3)
    ctx->pc = 0x33101cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x331020: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x331020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x331024: 0x26a5fff0  addiu       $a1, $s5, -0x10
    ctx->pc = 0x331024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967280));
    // 0x331028: 0x2406a833  addiu       $a2, $zero, -0x57CD
    ctx->pc = 0x331028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x33102c: 0x240700c0  addiu       $a3, $zero, 0xC0
    ctx->pc = 0x33102cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x331030: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x331030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x331034: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x331034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x331038: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x331038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x33103c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x33103cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x331040: 0x95690000  lhu         $t1, 0x0($t3)
    ctx->pc = 0x331040u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x331044: 0x956a0002  lhu         $t2, 0x2($t3)
    ctx->pc = 0x331044u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x331048: 0x956b0004  lhu         $t3, 0x4($t3)
    ctx->pc = 0x331048u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x33104c: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x33104Cu;
    SET_GPR_U32(ctx, 31, 0x331054u);
    ctx->pc = 0x331050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33104Cu;
    // 0x331050: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EA0u, 0x33104Cu, 0x331054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331054u;
label_331054:
    // 0x331054: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x331054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x331058: 0x268500e0  addiu       $a1, $s4, 0xE0
    ctx->pc = 0x331058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
    // 0x33105c: 0x24841a04  addiu       $a0, $a0, 0x1A04
    ctx->pc = 0x33105cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6660));
    // 0x331060: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x331060u;
    SET_GPR_U32(ctx, 31, 0x331068u);
    ctx->pc = 0x331064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331060u;
    // 0x331064: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x331060u, 0x331068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331068u;
label_331068:
    // 0x331068: 0x82440000  lb          $a0, 0x0($s2)
    ctx->pc = 0x331068u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33106c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x33106cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x331070: 0x24631a38  addiu       $v1, $v1, 0x1A38
    ctx->pc = 0x331070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6712));
    // 0x331074: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x331074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x331078: 0x244218f0  addiu       $v0, $v0, 0x18F0
    ctx->pc = 0x331078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6384));
    // 0x33107c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x33107cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331080: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x331080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x331084: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x331084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331088: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x331088u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33108c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x33108cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x331090: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x331090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x331094: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x331094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x331098: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x331098u;
    SET_GPR_U32(ctx, 31, 0x3310A0u);
    ctx->pc = 0x33109Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331098u;
    // 0x33109c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x331098u, 0x3310A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3310A0u;
label_3310a0:
    // 0x3310a0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x3310A0u;
    {
        const bool branch_taken_0x3310a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3310a0) {
            ctx->pc = 0x331158u;
            goto label_331158;
        }
    }
    ctx->pc = 0x3310A8u;
label_3310a8:
    // 0x3310a8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3310a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3310ac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3310acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3310b0: 0x248419a4  addiu       $a0, $a0, 0x19A4
    ctx->pc = 0x3310b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6564));
    // 0x3310b4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3310b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3310b8: 0xc0c0ae8  jal         func_302BA0
    ctx->pc = 0x3310B8u;
    SET_GPR_U32(ctx, 31, 0x3310C0u);
    ctx->pc = 0x3310BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3310B8u;
    // 0x3310bc: 0x240700a0  addiu       $a3, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302BA0u, 0x3310B8u, 0x3310C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3310C0u;
label_3310c0:
    // 0x3310c0: 0x3c0b003d  lui         $t3, 0x3D
    ctx->pc = 0x3310c0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)61 << 16));
    // 0x3310c4: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x3310c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x3310c8: 0x256b19b0  addiu       $t3, $t3, 0x19B0
    ctx->pc = 0x3310c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 6576));
    // 0x3310cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3310ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3310d0: 0x95680006  lhu         $t0, 0x6($t3)
    ctx->pc = 0x3310d0u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x3310d4: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x3310d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3310d8: 0x26a5fff0  addiu       $a1, $s5, -0x10
    ctx->pc = 0x3310d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967280));
    // 0x3310dc: 0x2406a833  addiu       $a2, $zero, -0x57CD
    ctx->pc = 0x3310dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x3310e0: 0x240700c0  addiu       $a3, $zero, 0xC0
    ctx->pc = 0x3310e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x3310e4: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x3310e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x3310e8: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x3310e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x3310ec: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x3310ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x3310f0: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x3310f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x3310f4: 0x95690000  lhu         $t1, 0x0($t3)
    ctx->pc = 0x3310f4u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3310f8: 0x956a0002  lhu         $t2, 0x2($t3)
    ctx->pc = 0x3310f8u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x3310fc: 0x956b0004  lhu         $t3, 0x4($t3)
    ctx->pc = 0x3310fcu;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x331100: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x331100u;
    SET_GPR_U32(ctx, 31, 0x331108u);
    ctx->pc = 0x331104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331100u;
    // 0x331104: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EA0u, 0x331100u, 0x331108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331108u;
label_331108:
    // 0x331108: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x331108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33110c: 0x268500e0  addiu       $a1, $s4, 0xE0
    ctx->pc = 0x33110cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
    // 0x331110: 0x248419bc  addiu       $a0, $a0, 0x19BC
    ctx->pc = 0x331110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6588));
    // 0x331114: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x331114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331118: 0xc0c0ae8  jal         func_302BA0
    ctx->pc = 0x331118u;
    SET_GPR_U32(ctx, 31, 0x331120u);
    ctx->pc = 0x33111Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331118u;
    // 0x33111c: 0x240700a0  addiu       $a3, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302BA0u, 0x331118u, 0x331120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331120u;
label_331120:
    // 0x331120: 0x82440000  lb          $a0, 0x0($s2)
    ctx->pc = 0x331120u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x331124: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x331124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x331128: 0x24631a38  addiu       $v1, $v1, 0x1A38
    ctx->pc = 0x331128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6712));
    // 0x33112c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x33112cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x331130: 0x244218f0  addiu       $v0, $v0, 0x18F0
    ctx->pc = 0x331130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6384));
    // 0x331134: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x331134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331138: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x331138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33113c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x33113cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331140: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x331140u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x331144: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x331144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x331148: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x331148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33114c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33114cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x331150: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x331150u;
    SET_GPR_U32(ctx, 31, 0x331158u);
    ctx->pc = 0x331154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331150u;
    // 0x331154: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x331150u, 0x331158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331158u;
label_331158:
    // 0x331158: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x331158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_33115c:
    // 0x33115c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x33115cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x331160: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x331160u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x331164: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x331164u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x331168: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x331168u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33116c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x33116cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x331170: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x331170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x331174: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x331174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x331178: 0x3e00008  jr          $ra
    ctx->pc = 0x331178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331178u;
        // 0x33117c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331180u;
    // 0x331180: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x331180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x331184: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x331184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x331188: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x331188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x33118c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x33118cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x331190: 0x9045e820  lbu         $a1, -0x17E0($v0)
    ctx->pc = 0x331190u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961184)));
    // 0x331194: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x331194u;
    {
        const bool branch_taken_0x331194 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x331198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331194u;
        // 0x331198: 0x8c900010  lw          $s0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331194) {
            ctx->pc = 0x3311C0u;
            goto label_3311c0;
        }
    }
    ctx->pc = 0x33119Cu;
    // 0x33119c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33119cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3311a0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3311a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3311a4: 0x9042e818  lbu         $v0, -0x17E8($v0)
    ctx->pc = 0x3311a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961176)));
    // 0x3311a8: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3311A8u;
    {
        const bool branch_taken_0x3311a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3311a8) {
            ctx->pc = 0x3311ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3311A8u;
            // 0x3311ac: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3311C4u;
            goto label_3311c4;
        }
    }
    ctx->pc = 0x3311B0u;
    // 0x3311b0: 0xc055728  jal         func_155CA0
    ctx->pc = 0x3311B0u;
    SET_GPR_U32(ctx, 31, 0x3311B8u);
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x3311B0u, 0x3311B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3311B8u;
label_3311b8:
    // 0x3311b8: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x3311B8u;
    {
        const bool branch_taken_0x3311b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3311BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3311B8u;
        // 0x3311bc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3311b8) {
            ctx->pc = 0x331448u;
            goto label_331448;
        }
    }
    ctx->pc = 0x3311C0u;
label_3311c0:
    // 0x3311c0: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x3311c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3311c4:
    // 0x3311c4: 0x54a2000b  bnel        $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3311C4u;
    {
        const bool branch_taken_0x3311c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3311c4) {
            ctx->pc = 0x3311C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3311C4u;
            // 0x3311c8: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3311F4u;
            goto label_3311f4;
        }
    }
    ctx->pc = 0x3311CCu;
    // 0x3311cc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3311ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3311d0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3311d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3311d4: 0x9042e818  lbu         $v0, -0x17E8($v0)
    ctx->pc = 0x3311d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961176)));
    // 0x3311d8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3311D8u;
    {
        const bool branch_taken_0x3311d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3311d8) {
            ctx->pc = 0x3311F0u;
            goto label_3311f0;
        }
    }
    ctx->pc = 0x3311E0u;
    // 0x3311e0: 0xc055728  jal         func_155CA0
    ctx->pc = 0x3311E0u;
    SET_GPR_U32(ctx, 31, 0x3311E8u);
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x3311E0u, 0x3311E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3311E8u;
label_3311e8:
    // 0x3311e8: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x3311E8u;
    {
        const bool branch_taken_0x3311e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3311e8) {
            ctx->pc = 0x331444u;
            goto label_331444;
        }
    }
    ctx->pc = 0x3311F0u;
label_3311f0:
    // 0x3311f0: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3311f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3311f4:
    // 0x3311f4: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3311F4u;
    {
        const bool branch_taken_0x3311f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3311f4) {
            ctx->pc = 0x33120Cu;
            goto label_33120c;
        }
    }
    ctx->pc = 0x3311FCu;
    // 0x3311fc: 0xc055728  jal         func_155CA0
    ctx->pc = 0x3311FCu;
    SET_GPR_U32(ctx, 31, 0x331204u);
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x3311FCu, 0x331204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331204u;
label_331204:
    // 0x331204: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x331204u;
    {
        const bool branch_taken_0x331204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331204) {
            ctx->pc = 0x331444u;
            goto label_331444;
        }
    }
    ctx->pc = 0x33120Cu;
label_33120c:
    // 0x33120c: 0xc0c353c  jal         func_30D4F0
    ctx->pc = 0x33120Cu;
    SET_GPR_U32(ctx, 31, 0x331214u);
    ctx->pc = 0x30D4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D4F0u, 0x33120Cu, 0x331214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331214u;
label_331214:
    // 0x331214: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x331214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331218: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x331218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x33121c: 0x9065e820  lbu         $a1, -0x17E0($v1)
    ctx->pc = 0x33121cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961184)));
    // 0x331220: 0x10a40031  beq         $a1, $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x331220u;
    {
        const bool branch_taken_0x331220 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x331220) {
            ctx->pc = 0x3312E8u;
            goto label_3312e8;
        }
    }
    ctx->pc = 0x331228u;
    // 0x331228: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x331228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x33122c: 0x50a3001f  beql        $a1, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x33122Cu;
    {
        const bool branch_taken_0x33122c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33122c) {
            ctx->pc = 0x331230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33122Cu;
            // 0x331230: 0x240b0020  addiu       $t3, $zero, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3312ACu;
            goto label_3312ac;
        }
    }
    ctx->pc = 0x331234u;
    // 0x331234: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x331234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x331238: 0x10a3001b  beq         $a1, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x331238u;
    {
        const bool branch_taken_0x331238 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x331238) {
            ctx->pc = 0x3312A8u;
            goto label_3312a8;
        }
    }
    ctx->pc = 0x331240u;
    // 0x331240: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x331240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x331244: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x331244u;
    {
        const bool branch_taken_0x331244 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x331244) {
            ctx->pc = 0x3312A8u;
            goto label_3312a8;
        }
    }
    ctx->pc = 0x33124Cu;
    // 0x33124c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x33124cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x331250: 0x10a30015  beq         $a1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x331250u;
    {
        const bool branch_taken_0x331250 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x331250) {
            ctx->pc = 0x3312A8u;
            goto label_3312a8;
        }
    }
    ctx->pc = 0x331258u;
    // 0x331258: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x331258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x33125c: 0x10a30012  beq         $a1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x33125Cu;
    {
        const bool branch_taken_0x33125c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33125c) {
            ctx->pc = 0x3312A8u;
            goto label_3312a8;
        }
    }
    ctx->pc = 0x331264u;
    // 0x331264: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x331264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x331268: 0x10a3000f  beq         $a1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x331268u;
    {
        const bool branch_taken_0x331268 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x331268) {
            ctx->pc = 0x3312A8u;
            goto label_3312a8;
        }
    }
    ctx->pc = 0x331270u;
    // 0x331270: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x331270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x331274: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x331274u;
    {
        const bool branch_taken_0x331274 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x331274) {
            ctx->pc = 0x3312A8u;
            goto label_3312a8;
        }
    }
    ctx->pc = 0x33127Cu;
    // 0x33127c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x33127cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x331280: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x331280u;
    {
        const bool branch_taken_0x331280 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x331280) {
            ctx->pc = 0x3312A8u;
            goto label_3312a8;
        }
    }
    ctx->pc = 0x331288u;
    // 0x331288: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x331288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33128c: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33128Cu;
    {
        const bool branch_taken_0x33128c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33128c) {
            ctx->pc = 0x3312A8u;
            goto label_3312a8;
        }
    }
    ctx->pc = 0x331294u;
    // 0x331294: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x331294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x331298: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x331298u;
    {
        const bool branch_taken_0x331298 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x331298) {
            ctx->pc = 0x3312A8u;
            goto label_3312a8;
        }
    }
    ctx->pc = 0x3312A0u;
    // 0x3312a0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3312A0u;
    {
        const bool branch_taken_0x3312a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3312a0) {
            ctx->pc = 0x331330u;
            goto label_331330;
        }
    }
    ctx->pc = 0x3312A8u;
label_3312a8:
    // 0x3312a8: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x3312a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3312ac:
    // 0x3312ac: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x3312acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x3312b0: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x3312b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
    // 0x3312b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3312b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3312b8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3312b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3312bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3312bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3312c0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x3312c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x3312c4: 0x2406a81f  addiu       $a2, $zero, -0x57E1
    ctx->pc = 0x3312c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944799));
    // 0x3312c8: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x3312c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x3312cc: 0x240801c0  addiu       $t0, $zero, 0x1C0
    ctx->pc = 0x3312ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x3312d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3312d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3312d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3312d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3312d8: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x3312D8u;
    SET_GPR_U32(ctx, 31, 0x3312E0u);
    ctx->pc = 0x3312DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3312D8u;
    // 0x3312dc: 0xffa00018  sd          $zero, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EA0u, 0x3312D8u, 0x3312E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3312E0u;
label_3312e0:
    // 0x3312e0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3312E0u;
    {
        const bool branch_taken_0x3312e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3312e0) {
            ctx->pc = 0x331330u;
            goto label_331330;
        }
    }
    ctx->pc = 0x3312E8u;
label_3312e8:
    // 0x3312e8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3312e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3312ec: 0x9063bf18  lbu         $v1, -0x40E8($v1)
    ctx->pc = 0x3312ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950680)));
    // 0x3312f0: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3312F0u;
    {
        const bool branch_taken_0x3312f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3312f0) {
            ctx->pc = 0x331330u;
            goto label_331330;
        }
    }
    ctx->pc = 0x3312F8u;
    // 0x3312f8: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x3312f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3312fc: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x3312fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x331300: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x331300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
    // 0x331304: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x331304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331308: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x331308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x33130c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33130cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331310: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x331310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x331314: 0x2406a81f  addiu       $a2, $zero, -0x57E1
    ctx->pc = 0x331314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944799));
    // 0x331318: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x331318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x33131c: 0x240801c0  addiu       $t0, $zero, 0x1C0
    ctx->pc = 0x33131cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x331320: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x331320u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331324: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x331324u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331328: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x331328u;
    SET_GPR_U32(ctx, 31, 0x331330u);
    ctx->pc = 0x33132Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331328u;
    // 0x33132c: 0xffa00018  sd          $zero, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EA0u, 0x331328u, 0x331330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331330u;
label_331330:
    // 0x331330: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x331330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331334: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x331334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x331338: 0x9063e820  lbu         $v1, -0x17E0($v1)
    ctx->pc = 0x331338u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961184)));
    // 0x33133c: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33133Cu;
    {
        const bool branch_taken_0x33133c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x33133c) {
            ctx->pc = 0x331354u;
            goto label_331354;
        }
    }
    ctx->pc = 0x331344u;
    // 0x331344: 0xc0c0b44  jal         func_302D10
    ctx->pc = 0x331344u;
    SET_GPR_U32(ctx, 31, 0x33134Cu);
    ctx->pc = 0x302D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302D10u, 0x331344u, 0x33134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33134Cu;
label_33134c:
    // 0x33134c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x33134Cu;
    {
        const bool branch_taken_0x33134c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33134c) {
            ctx->pc = 0x33136Cu;
            goto label_33136c;
        }
    }
    ctx->pc = 0x331354u;
label_331354:
    // 0x331354: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x331354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x331358: 0x9063bf18  lbu         $v1, -0x40E8($v1)
    ctx->pc = 0x331358u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950680)));
    // 0x33135c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33135Cu;
    {
        const bool branch_taken_0x33135c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33135c) {
            ctx->pc = 0x33136Cu;
            goto label_33136c;
        }
    }
    ctx->pc = 0x331364u;
    // 0x331364: 0xc0c0b44  jal         func_302D10
    ctx->pc = 0x331364u;
    SET_GPR_U32(ctx, 31, 0x33136Cu);
    ctx->pc = 0x302D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302D10u, 0x331364u, 0x33136Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33136Cu;
label_33136c:
    // 0x33136c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33136cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x331370: 0x9064e820  lbu         $a0, -0x17E0($v1)
    ctx->pc = 0x331370u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961184)));
    // 0x331374: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x331374u;
    {
        const bool branch_taken_0x331374 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x331374) {
            ctx->pc = 0x331394u;
            goto label_331394;
        }
    }
    ctx->pc = 0x33137Cu;
    // 0x33137c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33137cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331380: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x331380u;
    {
        const bool branch_taken_0x331380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x331380) {
            ctx->pc = 0x331394u;
            goto label_331394;
        }
    }
    ctx->pc = 0x331388u;
    // 0x331388: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x331388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x33138c: 0x1483002d  bne         $a0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x33138Cu;
    {
        const bool branch_taken_0x33138c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33138c) {
            ctx->pc = 0x331444u;
            goto label_331444;
        }
    }
    ctx->pc = 0x331394u;
label_331394:
    // 0x331394: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x331394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x331398: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x331398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x33139c: 0x8c42e808  lw          $v0, -0x17F8($v0)
    ctx->pc = 0x33139cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961160)));
    // 0x3313a0: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3313A0u;
    {
        const bool branch_taken_0x3313a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3313a0) {
            ctx->pc = 0x3313A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3313A0u;
            // 0x3313a4: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3313C0u;
            goto label_3313c0;
        }
    }
    ctx->pc = 0x3313A8u;
    // 0x3313a8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3313a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3313ac: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3313acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3313b0: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x3313b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x3313b4: 0x8c42e808  lw          $v0, -0x17F8($v0)
    ctx->pc = 0x3313b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961160)));
    // 0x3313b8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3313b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x3313bc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3313bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3313c0:
    // 0x3313c0: 0x4420016  bltzl       $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3313C0u;
    {
        const bool branch_taken_0x3313c0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3313c0) {
            ctx->pc = 0x3313C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3313C0u;
            // 0x3313c4: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33141Cu;
            goto label_33141c;
        }
    }
    ctx->pc = 0x3313C8u;
    // 0x3313c8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3313c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3313cc: 0x284200a6  slti        $v0, $v0, 0xA6
    ctx->pc = 0x3313ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)166) ? 1 : 0);
    // 0x3313d0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3313D0u;
    {
        const bool branch_taken_0x3313d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3313d0) {
            ctx->pc = 0x3313D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3313D0u;
            // 0x3313d4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3313E8u;
            goto label_3313e8;
        }
    }
    ctx->pc = 0x3313D8u;
    // 0x3313d8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3313d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3313dc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x3313dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3313e0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x3313e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x3313e4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3313e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3313e8:
    // 0x3313e8: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x3313e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3313ec: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3313ECu;
    {
        const bool branch_taken_0x3313ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3313ec) {
            ctx->pc = 0x3313F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3313ECu;
            // 0x3313f0: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331400u;
            goto label_331400;
        }
    }
    ctx->pc = 0x3313F4u;
    // 0x3313f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3313f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3313f8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x3313f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x3313fc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3313fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_331400:
    // 0x331400: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x331400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x331404: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x331404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x331408: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x331408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x33140c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x33140cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x331410: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x331410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x331414: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x331414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x331418: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x331418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_33141c:
    // 0x33141c: 0x2862005a  slti        $v0, $v1, 0x5A
    ctx->pc = 0x33141cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x331420: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x331420u;
    {
        const bool branch_taken_0x331420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x331420) {
            ctx->pc = 0x331424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331420u;
            // 0x331424: 0x2468010e  addiu       $t0, $v1, 0x10E (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 270));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33142Cu;
            goto label_33142c;
        }
    }
    ctx->pc = 0x331428u;
    // 0x331428: 0x2468ffa6  addiu       $t0, $v1, -0x5A
    ctx->pc = 0x331428u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967206));
label_33142c:
    // 0x33142c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33142cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x331430: 0x240501b0  addiu       $a1, $zero, 0x1B0
    ctx->pc = 0x331430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
    // 0x331434: 0x24841890  addiu       $a0, $a0, 0x1890
    ctx->pc = 0x331434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6288));
    // 0x331438: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x331438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33143c: 0xc0c0afc  jal         func_302BF0
    ctx->pc = 0x33143Cu;
    SET_GPR_U32(ctx, 31, 0x331444u);
    ctx->pc = 0x331440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33143Cu;
    // 0x331440: 0x2407a847  addiu       $a3, $zero, -0x57B9 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944839));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302BF0u, 0x33143Cu, 0x331444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331444u;
label_331444:
    // 0x331444: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x331444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_331448:
    // 0x331448: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x331448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33144c: 0x3e00008  jr          $ra
    ctx->pc = 0x33144Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33144Cu;
        // 0x331450: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33144Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331454u;
    // 0x331454: 0x0  nop
    ctx->pc = 0x331454u;
    // NOP
    // 0x331458: 0x0  nop
    ctx->pc = 0x331458u;
    // NOP
    // 0x33145c: 0x0  nop
    ctx->pc = 0x33145cu;
    // NOP
    if (ctx->pc == 0x33145cu) { ctx->pc = 0x331460u; }
}
