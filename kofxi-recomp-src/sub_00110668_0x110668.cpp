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

// Function: sub_00110668
// Address: 0x110668 - 0x1109f0
void sub_00110668_0x110668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110668_0x110668");
#endif

    switch (ctx->pc) {
        case 0x110668u: goto label_110668;
        case 0x11066cu: goto label_11066c;
        case 0x110670u: goto label_110670;
        case 0x110674u: goto label_110674;
        case 0x110678u: goto label_110678;
        case 0x11067cu: goto label_11067c;
        case 0x110680u: goto label_110680;
        case 0x110684u: goto label_110684;
        case 0x110688u: goto label_110688;
        case 0x11068cu: goto label_11068c;
        case 0x110690u: goto label_110690;
        case 0x110694u: goto label_110694;
        case 0x110698u: goto label_110698;
        case 0x11069cu: goto label_11069c;
        case 0x1106a0u: goto label_1106a0;
        case 0x1106a4u: goto label_1106a4;
        case 0x1106a8u: goto label_1106a8;
        case 0x1106acu: goto label_1106ac;
        case 0x1106b0u: goto label_1106b0;
        case 0x1106b4u: goto label_1106b4;
        case 0x1106b8u: goto label_1106b8;
        case 0x1106bcu: goto label_1106bc;
        case 0x1106c0u: goto label_1106c0;
        case 0x1106c4u: goto label_1106c4;
        case 0x1106c8u: goto label_1106c8;
        case 0x1106ccu: goto label_1106cc;
        case 0x1106d0u: goto label_1106d0;
        case 0x1106d4u: goto label_1106d4;
        case 0x1106d8u: goto label_1106d8;
        case 0x1106dcu: goto label_1106dc;
        case 0x1106e0u: goto label_1106e0;
        case 0x1106e4u: goto label_1106e4;
        case 0x1106e8u: goto label_1106e8;
        case 0x1106ecu: goto label_1106ec;
        case 0x1106f0u: goto label_1106f0;
        case 0x1106f4u: goto label_1106f4;
        case 0x1106f8u: goto label_1106f8;
        case 0x1106fcu: goto label_1106fc;
        case 0x110700u: goto label_110700;
        case 0x110704u: goto label_110704;
        case 0x110708u: goto label_110708;
        case 0x11070cu: goto label_11070c;
        case 0x110710u: goto label_110710;
        case 0x110714u: goto label_110714;
        case 0x110718u: goto label_110718;
        case 0x11071cu: goto label_11071c;
        case 0x110720u: goto label_110720;
        case 0x110724u: goto label_110724;
        case 0x110728u: goto label_110728;
        case 0x11072cu: goto label_11072c;
        case 0x110730u: goto label_110730;
        case 0x110734u: goto label_110734;
        case 0x110738u: goto label_110738;
        case 0x11073cu: goto label_11073c;
        case 0x110740u: goto label_110740;
        case 0x110744u: goto label_110744;
        case 0x110748u: goto label_110748;
        case 0x11074cu: goto label_11074c;
        case 0x110750u: goto label_110750;
        case 0x110754u: goto label_110754;
        case 0x110758u: goto label_110758;
        case 0x11075cu: goto label_11075c;
        case 0x110760u: goto label_110760;
        case 0x110764u: goto label_110764;
        case 0x110768u: goto label_110768;
        case 0x11076cu: goto label_11076c;
        case 0x110770u: goto label_110770;
        case 0x110774u: goto label_110774;
        case 0x110778u: goto label_110778;
        case 0x11077cu: goto label_11077c;
        case 0x110780u: goto label_110780;
        case 0x110784u: goto label_110784;
        case 0x110788u: goto label_110788;
        case 0x11078cu: goto label_11078c;
        case 0x110790u: goto label_110790;
        case 0x110794u: goto label_110794;
        case 0x110798u: goto label_110798;
        case 0x11079cu: goto label_11079c;
        case 0x1107a0u: goto label_1107a0;
        case 0x1107a4u: goto label_1107a4;
        case 0x1107a8u: goto label_1107a8;
        case 0x1107acu: goto label_1107ac;
        case 0x1107b0u: goto label_1107b0;
        case 0x1107b4u: goto label_1107b4;
        case 0x1107b8u: goto label_1107b8;
        case 0x1107bcu: goto label_1107bc;
        case 0x1107c0u: goto label_1107c0;
        case 0x1107c4u: goto label_1107c4;
        case 0x1107c8u: goto label_1107c8;
        case 0x1107ccu: goto label_1107cc;
        case 0x1107d0u: goto label_1107d0;
        case 0x1107d4u: goto label_1107d4;
        case 0x1107d8u: goto label_1107d8;
        case 0x1107dcu: goto label_1107dc;
        case 0x1107e0u: goto label_1107e0;
        case 0x1107e4u: goto label_1107e4;
        case 0x1107e8u: goto label_1107e8;
        case 0x1107ecu: goto label_1107ec;
        case 0x1107f0u: goto label_1107f0;
        case 0x1107f4u: goto label_1107f4;
        case 0x1107f8u: goto label_1107f8;
        case 0x1107fcu: goto label_1107fc;
        case 0x110800u: goto label_110800;
        case 0x110804u: goto label_110804;
        case 0x110808u: goto label_110808;
        case 0x11080cu: goto label_11080c;
        case 0x110810u: goto label_110810;
        case 0x110814u: goto label_110814;
        case 0x110818u: goto label_110818;
        case 0x11081cu: goto label_11081c;
        case 0x110820u: goto label_110820;
        case 0x110824u: goto label_110824;
        case 0x110828u: goto label_110828;
        case 0x11082cu: goto label_11082c;
        case 0x110830u: goto label_110830;
        case 0x110834u: goto label_110834;
        case 0x110838u: goto label_110838;
        case 0x11083cu: goto label_11083c;
        case 0x110840u: goto label_110840;
        case 0x110844u: goto label_110844;
        case 0x110848u: goto label_110848;
        case 0x11084cu: goto label_11084c;
        case 0x110850u: goto label_110850;
        case 0x110854u: goto label_110854;
        case 0x110858u: goto label_110858;
        case 0x11085cu: goto label_11085c;
        case 0x110860u: goto label_110860;
        case 0x110864u: goto label_110864;
        case 0x110868u: goto label_110868;
        case 0x11086cu: goto label_11086c;
        case 0x110870u: goto label_110870;
        case 0x110874u: goto label_110874;
        case 0x110878u: goto label_110878;
        case 0x11087cu: goto label_11087c;
        case 0x110880u: goto label_110880;
        case 0x110884u: goto label_110884;
        case 0x110888u: goto label_110888;
        case 0x11088cu: goto label_11088c;
        case 0x110890u: goto label_110890;
        case 0x110894u: goto label_110894;
        case 0x110898u: goto label_110898;
        case 0x11089cu: goto label_11089c;
        case 0x1108a0u: goto label_1108a0;
        case 0x1108a4u: goto label_1108a4;
        case 0x1108a8u: goto label_1108a8;
        case 0x1108acu: goto label_1108ac;
        case 0x1108b0u: goto label_1108b0;
        case 0x1108b4u: goto label_1108b4;
        case 0x1108b8u: goto label_1108b8;
        case 0x1108bcu: goto label_1108bc;
        case 0x1108c0u: goto label_1108c0;
        case 0x1108c4u: goto label_1108c4;
        case 0x1108c8u: goto label_1108c8;
        case 0x1108ccu: goto label_1108cc;
        case 0x1108d0u: goto label_1108d0;
        case 0x1108d4u: goto label_1108d4;
        case 0x1108d8u: goto label_1108d8;
        case 0x1108dcu: goto label_1108dc;
        case 0x1108e0u: goto label_1108e0;
        case 0x1108e4u: goto label_1108e4;
        case 0x1108e8u: goto label_1108e8;
        case 0x1108ecu: goto label_1108ec;
        case 0x1108f0u: goto label_1108f0;
        case 0x1108f4u: goto label_1108f4;
        case 0x1108f8u: goto label_1108f8;
        case 0x1108fcu: goto label_1108fc;
        case 0x110900u: goto label_110900;
        case 0x110904u: goto label_110904;
        case 0x110908u: goto label_110908;
        case 0x11090cu: goto label_11090c;
        case 0x110910u: goto label_110910;
        case 0x110914u: goto label_110914;
        case 0x110918u: goto label_110918;
        case 0x11091cu: goto label_11091c;
        case 0x110920u: goto label_110920;
        case 0x110924u: goto label_110924;
        case 0x110928u: goto label_110928;
        case 0x11092cu: goto label_11092c;
        case 0x110930u: goto label_110930;
        case 0x110934u: goto label_110934;
        case 0x110938u: goto label_110938;
        case 0x11093cu: goto label_11093c;
        case 0x110940u: goto label_110940;
        case 0x110944u: goto label_110944;
        case 0x110948u: goto label_110948;
        case 0x11094cu: goto label_11094c;
        case 0x110950u: goto label_110950;
        case 0x110954u: goto label_110954;
        case 0x110958u: goto label_110958;
        case 0x11095cu: goto label_11095c;
        case 0x110960u: goto label_110960;
        case 0x110964u: goto label_110964;
        case 0x110968u: goto label_110968;
        case 0x11096cu: goto label_11096c;
        case 0x110970u: goto label_110970;
        case 0x110974u: goto label_110974;
        case 0x110978u: goto label_110978;
        case 0x11097cu: goto label_11097c;
        case 0x110980u: goto label_110980;
        case 0x110984u: goto label_110984;
        case 0x110988u: goto label_110988;
        case 0x11098cu: goto label_11098c;
        case 0x110990u: goto label_110990;
        case 0x110994u: goto label_110994;
        case 0x110998u: goto label_110998;
        case 0x11099cu: goto label_11099c;
        case 0x1109a0u: goto label_1109a0;
        case 0x1109a4u: goto label_1109a4;
        case 0x1109a8u: goto label_1109a8;
        case 0x1109acu: goto label_1109ac;
        case 0x1109b0u: goto label_1109b0;
        case 0x1109b4u: goto label_1109b4;
        case 0x1109b8u: goto label_1109b8;
        case 0x1109bcu: goto label_1109bc;
        case 0x1109c0u: goto label_1109c0;
        case 0x1109c4u: goto label_1109c4;
        case 0x1109c8u: goto label_1109c8;
        case 0x1109ccu: goto label_1109cc;
        case 0x1109d0u: goto label_1109d0;
        case 0x1109d4u: goto label_1109d4;
        case 0x1109d8u: goto label_1109d8;
        case 0x1109dcu: goto label_1109dc;
        case 0x1109e0u: goto label_1109e0;
        case 0x1109e4u: goto label_1109e4;
        case 0x1109e8u: goto label_1109e8;
        case 0x1109ecu: goto label_1109ec;
        default: break;
    }

    ctx->pc = 0x110668u;

label_110668:
    // 0x110668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_11066c:
    // 0x11066c: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
label_110670:
    if (ctx->pc == 0x110670u) {
        ctx->pc = 0x110670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11066Cu;
        // 0x110670: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110674u;
        goto label_110674;
    }
    ctx->pc = 0x11066Cu;
    {
        const bool branch_taken_0x11066c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x110670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11066Cu;
        // 0x110670: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11066c) {
            ctx->pc = 0x110684u;
            goto label_110684;
        }
    }
    ctx->pc = 0x110674u;
label_110674:
    // 0x110674: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x110674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_110678:
    // 0x110678: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x110678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_11067c:
    // 0x11067c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_110680:
    if (ctx->pc == 0x110680u) {
        ctx->pc = 0x110680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11067Cu;
        // 0x110680: 0x8c83001c  lw          $v1, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110684u;
        goto label_110684;
    }
    ctx->pc = 0x11067Cu;
    {
        const bool branch_taken_0x11067c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11067c) {
            ctx->pc = 0x110680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11067Cu;
            // 0x110680: 0x8c83001c  lw          $v1, 0x1C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110694u;
            goto label_110694;
        }
    }
    ctx->pc = 0x110684u;
label_110684:
    // 0x110684: 0xc04418e  jal         func_110638
label_110688:
    if (ctx->pc == 0x110688u) {
        ctx->pc = 0x11068Cu;
        goto label_11068c;
    }
    ctx->pc = 0x110684u;
    SET_GPR_U32(ctx, 31, 0x11068Cu);
    ctx->pc = 0x110638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110638u, 0x110684u, 0x11068Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11068Cu;
label_11068c:
    // 0x11068c: 0x10000004  b           . + 4 + (0x4 << 2)
label_110690:
    if (ctx->pc == 0x110690u) {
        ctx->pc = 0x110690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11068Cu;
        // 0x110690: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110694u;
        goto label_110694;
    }
    ctx->pc = 0x11068Cu;
    {
        const bool branch_taken_0x11068c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11068Cu;
        // 0x110690: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11068c) {
            ctx->pc = 0x1106A0u;
            goto label_1106a0;
        }
    }
    ctx->pc = 0x110694u;
label_110694:
    // 0x110694: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x110694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_110698:
    // 0x110698: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x110698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_11069c:
    // 0x11069c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11069cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1106a0:
    // 0x1106a0: 0x3e00008  jr          $ra
label_1106a4:
    if (ctx->pc == 0x1106A4u) {
        ctx->pc = 0x1106A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106A0u;
        // 0x1106a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1106A8u;
        goto label_1106a8;
    }
    ctx->pc = 0x1106A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1106A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106A0u;
        // 0x1106a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1106A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1106A8u;
label_1106a8:
    // 0x1106a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1106a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1106ac:
    // 0x1106ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1106acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1106b0:
    // 0x1106b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1106b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1106b4:
    // 0x1106b4: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x1106b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_1106b8:
    // 0x1106b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1106b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1106bc:
    // 0x1106bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1106bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1106c0:
    // 0x1106c0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1106c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1106c4:
    // 0x1106c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1106c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1106c8:
    // 0x1106c8: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x1106c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_1106cc:
    // 0x1106cc: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_1106d0:
    if (ctx->pc == 0x1106D0u) {
        ctx->pc = 0x1106D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106CCu;
        // 0x1106d0: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1106D4u;
        goto label_1106d4;
    }
    ctx->pc = 0x1106CCu;
    {
        const bool branch_taken_0x1106cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1106D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106CCu;
        // 0x1106d0: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1106cc) {
            ctx->pc = 0x1106F4u;
            goto label_1106f4;
        }
    }
    ctx->pc = 0x1106D4u;
label_1106d4:
    // 0x1106d4: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_1106d8:
    if (ctx->pc == 0x1106D8u) {
        ctx->pc = 0x1106D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106D4u;
        // 0x1106d8: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1106DCu;
        goto label_1106dc;
    }
    ctx->pc = 0x1106D4u;
    {
        const bool branch_taken_0x1106d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1106D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106D4u;
        // 0x1106d8: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1106d4) {
            ctx->pc = 0x11073Cu;
            goto label_11073c;
        }
    }
    ctx->pc = 0x1106DCu;
label_1106dc:
    // 0x1106dc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1106dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1106e0:
    // 0x1106e0: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x1106e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
label_1106e4:
    // 0x1106e4: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_1106e8:
    if (ctx->pc == 0x1106E8u) {
        ctx->pc = 0x1106ECu;
        goto label_1106ec;
    }
    ctx->pc = 0x1106E4u;
    {
        const bool branch_taken_0x1106e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1106e4) {
            ctx->pc = 0x11072Cu;
            goto label_11072c;
        }
    }
    ctx->pc = 0x1106ECu;
label_1106ec:
    // 0x1106ec: 0x10000014  b           . + 4 + (0x14 << 2)
label_1106f0:
    if (ctx->pc == 0x1106F0u) {
        ctx->pc = 0x1106F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106ECu;
        // 0x1106f0: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1106F4u;
        goto label_1106f4;
    }
    ctx->pc = 0x1106ECu;
    {
        const bool branch_taken_0x1106ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1106F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106ECu;
        // 0x1106f0: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1106ec) {
            ctx->pc = 0x110740u;
            goto label_110740;
        }
    }
    ctx->pc = 0x1106F4u;
label_1106f4:
    // 0x1106f4: 0x8e51001c  lw          $s1, 0x1C($s2)
    ctx->pc = 0x1106f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_1106f8:
    // 0x1106f8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1106f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1106fc:
    // 0x1106fc: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_110700:
    if (ctx->pc == 0x110700u) {
        ctx->pc = 0x110700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106FCu;
        // 0x110700: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110704u;
        goto label_110704;
    }
    ctx->pc = 0x1106FCu;
    {
        const bool branch_taken_0x1106fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1106fc) {
            ctx->pc = 0x110700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1106FCu;
            // 0x110700: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110740u;
            goto label_110740;
        }
    }
    ctx->pc = 0x110704u;
label_110704:
    // 0x110704: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x110704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_110708:
    // 0x110708: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x110708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_11070c:
    // 0x11070c: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x11070cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_110710:
    // 0x110710: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x110710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_110714:
    // 0x110714: 0x40f809  jalr        $v0
label_110718:
    if (ctx->pc == 0x110718u) {
        ctx->pc = 0x110718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110714u;
        // 0x110718: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11071Cu;
        goto label_11071c;
    }
    ctx->pc = 0x110714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11071Cu);
        ctx->pc = 0x110718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110714u;
        // 0x110718: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110714u, 0x11071Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11071Cu;
label_11071c:
    // 0x11071c: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x11071cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_110720:
    // 0x110720: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x110720u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_110724:
    // 0x110724: 0x10000005  b           . + 4 + (0x5 << 2)
label_110728:
    if (ctx->pc == 0x110728u) {
        ctx->pc = 0x110728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110724u;
        // 0x110728: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11072Cu;
        goto label_11072c;
    }
    ctx->pc = 0x110724u;
    {
        const bool branch_taken_0x110724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110724u;
        // 0x110728: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110724) {
            ctx->pc = 0x11073Cu;
            goto label_11073c;
        }
    }
    ctx->pc = 0x11072Cu;
label_11072c:
    // 0x11072c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x11072cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_110730:
    // 0x110730: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x110730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_110734:
    // 0x110734: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x110734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_110738:
    // 0x110738: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x110738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_11073c:
    // 0x11073c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x11073cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_110740:
    // 0x110740: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
label_110744:
    if (ctx->pc == 0x110744u) {
        ctx->pc = 0x110748u;
        goto label_110748;
    }
    ctx->pc = 0x110740u;
    {
        const bool branch_taken_0x110740 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x110740) {
            ctx->pc = 0x110750u;
            goto label_110750;
        }
    }
    ctx->pc = 0x110748u;
label_110748:
    // 0x110748: 0xc043324  jal         func_10CC90
label_11074c:
    if (ctx->pc == 0x11074Cu) {
        ctx->pc = 0x110750u;
        goto label_110750;
    }
    ctx->pc = 0x110748u;
    SET_GPR_U32(ctx, 31, 0x110750u);
    ctx->pc = 0x10CC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC90u, 0x110748u, 0x110750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110750u;
label_110750:
    // 0x110750: 0xc044186  jal         func_110618
label_110754:
    if (ctx->pc == 0x110754u) {
        ctx->pc = 0x110754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110750u;
        // 0x110754: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110758u;
        goto label_110758;
    }
    ctx->pc = 0x110750u;
    SET_GPR_U32(ctx, 31, 0x110758u);
    ctx->pc = 0x110754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110750u;
    // 0x110754: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110618u, 0x110750u, 0x110758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110758u;
label_110758:
    // 0x110758: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x110758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_11075c:
    // 0x11075c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11075cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_110760:
    // 0x110760: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x110760u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_110764:
    // 0x110764: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x110764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_110768:
    // 0x110768: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x110768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11076c:
    // 0x11076c: 0x3e00008  jr          $ra
label_110770:
    if (ctx->pc == 0x110770u) {
        ctx->pc = 0x110770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11076Cu;
        // 0x110770: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110774u;
        goto label_110774;
    }
    ctx->pc = 0x11076Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11076Cu;
        // 0x110770: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11076Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110774u;
label_110774:
    // 0x110774: 0x0  nop
    ctx->pc = 0x110774u;
    // NOP
label_110778:
    // 0x110778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_11077c:
    // 0x11077c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x11077cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_110780:
    // 0x110780: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_110784:
    // 0x110784: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x110784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_110788:
    // 0x110788: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x110788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_11078c:
    // 0x11078c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x11078cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_110790:
    // 0x110790: 0x8ca70024  lw          $a3, 0x24($a1)
    ctx->pc = 0x110790u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_110794:
    // 0x110794: 0x8ca80028  lw          $t0, 0x28($a1)
    ctx->pc = 0x110794u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_110798:
    // 0x110798: 0xc04405c  jal         func_110170
label_11079c:
    if (ctx->pc == 0x11079Cu) {
        ctx->pc = 0x11079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110798u;
        // 0x11079c: 0x8ca9002c  lw          $t1, 0x2C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1107A0u;
        goto label_1107a0;
    }
    ctx->pc = 0x110798u;
    SET_GPR_U32(ctx, 31, 0x1107A0u);
    ctx->pc = 0x11079Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110798u;
    // 0x11079c: 0x8ca9002c  lw          $t1, 0x2C($a1) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110170u, 0x110798u, 0x1107A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1107A0u;
label_1107a0:
    // 0x1107a0: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x1107a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_1107a4:
    // 0x1107a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1107a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1107a8:
    // 0x1107a8: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1107a8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_1107ac:
    // 0x1107ac: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1107acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1107b0:
    // 0x1107b0: 0x3e00008  jr          $ra
label_1107b4:
    if (ctx->pc == 0x1107B4u) {
        ctx->pc = 0x1107B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1107B0u;
        // 0x1107b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1107B8u;
        goto label_1107b8;
    }
    ctx->pc = 0x1107B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1107B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1107B0u;
        // 0x1107b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1107B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1107B8u;
label_1107b8:
    // 0x1107b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1107b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1107bc:
    // 0x1107bc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1107bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1107c0:
    // 0x1107c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1107c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1107c4:
    // 0x1107c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1107c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1107c8:
    // 0x1107c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1107c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1107cc:
    // 0x1107cc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1107ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1107d0:
    // 0x1107d0: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1107d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1107d4:
    // 0x1107d4: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x1107d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
label_1107d8:
    // 0x1107d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1107dc:
    if (ctx->pc == 0x1107DCu) {
        ctx->pc = 0x1107E0u;
        goto label_1107e0;
    }
    ctx->pc = 0x1107D8u;
    {
        const bool branch_taken_0x1107d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1107d8) {
            ctx->pc = 0x1107F0u;
            goto label_1107f0;
        }
    }
    ctx->pc = 0x1107E0u;
label_1107e0:
    // 0x1107e0: 0xc04419a  jal         func_110668
label_1107e4:
    if (ctx->pc == 0x1107E4u) {
        ctx->pc = 0x1107E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1107E0u;
        // 0x1107e4: 0x52c02  srl         $a1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1107E8u;
        goto label_1107e8;
    }
    ctx->pc = 0x1107E0u;
    SET_GPR_U32(ctx, 31, 0x1107E8u);
    ctx->pc = 0x1107E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1107E0u;
    // 0x1107e4: 0x52c02  srl         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110668u;
    goto label_110668;
    ctx->pc = 0x1107E8u;
label_1107e8:
    // 0x1107e8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1107ec:
    if (ctx->pc == 0x1107ECu) {
        ctx->pc = 0x1107ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1107E8u;
        // 0x1107ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1107F0u;
        goto label_1107f0;
    }
    ctx->pc = 0x1107E8u;
    {
        const bool branch_taken_0x1107e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1107ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1107E8u;
        // 0x1107ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1107e8) {
            ctx->pc = 0x1107FCu;
            goto label_1107fc;
        }
    }
    ctx->pc = 0x1107F0u;
label_1107f0:
    // 0x1107f0: 0xc04418e  jal         func_110638
label_1107f4:
    if (ctx->pc == 0x1107F4u) {
        ctx->pc = 0x1107F8u;
        goto label_1107f8;
    }
    ctx->pc = 0x1107F0u;
    SET_GPR_U32(ctx, 31, 0x1107F8u);
    ctx->pc = 0x110638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110638u, 0x1107F0u, 0x1107F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1107F8u;
label_1107f8:
    // 0x1107f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1107f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1107fc:
    // 0x1107fc: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1107fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_110800:
    // 0x110800: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x110800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_110804:
    // 0x110804: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x110804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_110808:
    // 0x110808: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x110808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
label_11080c:
    // 0x11080c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x11080cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_110810:
    // 0x110810: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x110810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_110814:
    // 0x110814: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x110814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
label_110818:
    // 0x110818: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x110818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_11081c:
    // 0x11081c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x11081cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_110820:
    // 0x110820: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x110820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_110824:
    // 0x110824: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x110824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_110828:
    // 0x110828: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x110828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_11082c:
    // 0x11082c: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x11082cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_110830:
    // 0x110830: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x110830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_110834:
    // 0x110834: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x110834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
label_110838:
    // 0x110838: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x110838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_11083c:
    // 0x11083c: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x11083cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_110840:
    // 0x110840: 0x8e290028  lw          $t1, 0x28($s1)
    ctx->pc = 0x110840u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_110844:
    // 0x110844: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x110844u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_110848:
    // 0x110848: 0xc04405c  jal         func_110170
label_11084c:
    if (ctx->pc == 0x11084Cu) {
        ctx->pc = 0x11084Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110848u;
        // 0x11084c: 0x8e280024  lw          $t0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110850u;
        goto label_110850;
    }
    ctx->pc = 0x110848u;
    SET_GPR_U32(ctx, 31, 0x110850u);
    ctx->pc = 0x11084Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110848u;
    // 0x11084c: 0x8e280024  lw          $t0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110170u, 0x110848u, 0x110850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110850u;
label_110850:
    // 0x110850: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_110854:
    if (ctx->pc == 0x110854u) {
        ctx->pc = 0x110854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110850u;
        // 0x110854: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110858u;
        goto label_110858;
    }
    ctx->pc = 0x110850u;
    {
        const bool branch_taken_0x110850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110850u;
        // 0x110854: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110850) {
            ctx->pc = 0x110878u;
            goto label_110878;
        }
    }
    ctx->pc = 0x110858u;
label_110858:
    // 0x110858: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x110858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11085c:
    // 0x11085c: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x11085cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
label_110860:
    // 0x110860: 0x24a50778  addiu       $a1, $a1, 0x778
    ctx->pc = 0x110860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1912));
label_110864:
    // 0x110864: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x110864u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_110868:
    // 0x110868: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x110868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_11086c:
    // 0x11086c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11086cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_110870:
    // 0x110870: 0x8046330  j           func_118CC0
label_110874:
    if (ctx->pc == 0x110874u) {
        ctx->pc = 0x110874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110870u;
        // 0x110874: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110878u;
        goto label_110878;
    }
    ctx->pc = 0x110870u;
    ctx->pc = 0x110874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110870u;
    // 0x110874: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118CC0u, 0x110870u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x110878u;
label_110878:
    // 0x110878: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x110878u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11087c:
    // 0x11087c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11087cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_110880:
    // 0x110880: 0x3e00008  jr          $ra
label_110884:
    if (ctx->pc == 0x110884u) {
        ctx->pc = 0x110884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110880u;
        // 0x110884: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110888u;
        goto label_110888;
    }
    ctx->pc = 0x110880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110880u;
        // 0x110884: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110888u;
label_110888:
    // 0x110888: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x110888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_11088c:
    // 0x11088c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x11088cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_110890:
    // 0x110890: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x110890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_110894:
    // 0x110894: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x110894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_110898:
    // 0x110898: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x110898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_11089c:
    // 0x11089c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x11089cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_1108a0:
    // 0x1108a0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1108a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_1108a4:
    // 0x1108a4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1108a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1108a8:
    // 0x1108a8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1108a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_1108ac:
    // 0x1108ac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1108acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1108b0:
    // 0x1108b0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1108b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1108b4:
    // 0x1108b4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1108b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1108b8:
    // 0x1108b8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1108b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1108bc:
    // 0x1108bc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1108bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1108c0:
    // 0x1108c0: 0xc04415c  jal         func_110570
label_1108c4:
    if (ctx->pc == 0x1108C4u) {
        ctx->pc = 0x1108C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1108C0u;
        // 0x1108c4: 0x24848200  addiu       $a0, $a0, -0x7E00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1108C8u;
        goto label_1108c8;
    }
    ctx->pc = 0x1108C0u;
    SET_GPR_U32(ctx, 31, 0x1108C8u);
    ctx->pc = 0x1108C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1108C0u;
    // 0x1108c4: 0x24848200  addiu       $a0, $a0, -0x7E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110570u, 0x1108C0u, 0x1108C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1108C8u;
label_1108c8:
    // 0x1108c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1108c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1108cc:
    // 0x1108cc: 0x1200003e  beqz        $s0, . + 4 + (0x3E << 2)
label_1108d0:
    if (ctx->pc == 0x1108D0u) {
        ctx->pc = 0x1108D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1108CCu;
        // 0x1108d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1108D4u;
        goto label_1108d4;
    }
    ctx->pc = 0x1108CCu;
    {
        const bool branch_taken_0x1108cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1108D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1108CCu;
        // 0x1108d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1108cc) {
            ctx->pc = 0x1109C8u;
            goto label_1109c8;
        }
    }
    ctx->pc = 0x1108D4u;
label_1108d4:
    // 0x1108d4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1108d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1108d8:
    // 0x1108d8: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x1108d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_1108dc:
    // 0x1108dc: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1108dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_1108e0:
    // 0x1108e0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1108e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1108e4:
    // 0x1108e4: 0xae130020  sw          $s3, 0x20($s0)
    ctx->pc = 0x1108e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 19));
label_1108e8:
    // 0x1108e8: 0xae140024  sw          $s4, 0x24($s0)
    ctx->pc = 0x1108e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 20));
label_1108ec:
    // 0x1108ec: 0xae150028  sw          $s5, 0x28($s0)
    ctx->pc = 0x1108ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 21));
label_1108f0:
    // 0x1108f0: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x1108f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
label_1108f4:
    // 0x1108f4: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
label_1108f8:
    if (ctx->pc == 0x1108F8u) {
        ctx->pc = 0x1108F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1108F4u;
        // 0x1108f8: 0xae11001c  sw          $s1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1108FCu;
        goto label_1108fc;
    }
    ctx->pc = 0x1108F4u;
    {
        const bool branch_taken_0x1108f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1108F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1108F4u;
        // 0x1108f8: 0xae11001c  sw          $s1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1108f4) {
            ctx->pc = 0x11098Cu;
            goto label_11098c;
        }
    }
    ctx->pc = 0x1108FCu;
label_1108fc:
    // 0x1108fc: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x1108fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_110900:
    // 0x110900: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x110900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_110904:
    // 0x110904: 0x2442a790  addiu       $v0, $v0, -0x5870
    ctx->pc = 0x110904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
label_110908:
    // 0x110908: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x110908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_11090c:
    // 0x11090c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x11090cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_110910:
    // 0x110910: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x110910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_110914:
    // 0x110914: 0xc043318  jal         func_10CC60
label_110918:
    if (ctx->pc == 0x110918u) {
        ctx->pc = 0x110918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110914u;
        // 0x110918: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11091Cu;
        goto label_11091c;
    }
    ctx->pc = 0x110914u;
    SET_GPR_U32(ctx, 31, 0x11091Cu);
    ctx->pc = 0x110918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110914u;
    // 0x110918: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x110914u, 0x11091Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11091Cu;
label_11091c:
    // 0x11091c: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
label_110920:
    if (ctx->pc == 0x110920u) {
        ctx->pc = 0x110920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11091Cu;
        // 0x110920: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110924u;
        goto label_110924;
    }
    ctx->pc = 0x11091Cu;
    {
        const bool branch_taken_0x11091c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x110920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11091Cu;
        // 0x110920: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11091c) {
            ctx->pc = 0x110934u;
            goto label_110934;
        }
    }
    ctx->pc = 0x110924u;
label_110924:
    // 0x110924: 0xc044186  jal         func_110618
label_110928:
    if (ctx->pc == 0x110928u) {
        ctx->pc = 0x110928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110924u;
        // 0x110928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11092Cu;
        goto label_11092c;
    }
    ctx->pc = 0x110924u;
    SET_GPR_U32(ctx, 31, 0x11092Cu);
    ctx->pc = 0x110928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110924u;
    // 0x110928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110618u, 0x110924u, 0x11092Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11092Cu;
label_11092c:
    // 0x11092c: 0x10000026  b           . + 4 + (0x26 << 2)
label_110930:
    if (ctx->pc == 0x110930u) {
        ctx->pc = 0x110930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11092Cu;
        // 0x110930: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110934u;
        goto label_110934;
    }
    ctx->pc = 0x11092Cu;
    {
        const bool branch_taken_0x11092c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11092Cu;
        // 0x110930: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11092c) {
            ctx->pc = 0x1109C8u;
            goto label_1109c8;
        }
    }
    ctx->pc = 0x110934u;
label_110934:
    // 0x110934: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x110934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_110938:
    // 0x110938: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x110938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11093c:
    // 0x11093c: 0x3484000c  ori         $a0, $a0, 0xC
    ctx->pc = 0x11093cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
label_110940:
    // 0x110940: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x110940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_110944:
    // 0x110944: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x110944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110948:
    // 0x110948: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x110948u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11094c:
    // 0x11094c: 0xc04404c  jal         func_110130
label_110950:
    if (ctx->pc == 0x110950u) {
        ctx->pc = 0x110950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11094Cu;
        // 0x110950: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110954u;
        goto label_110954;
    }
    ctx->pc = 0x11094Cu;
    SET_GPR_U32(ctx, 31, 0x110954u);
    ctx->pc = 0x110950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11094Cu;
    // 0x110950: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110130u, 0x11094Cu, 0x110954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110954u;
label_110954:
    // 0x110954: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_110958:
    if (ctx->pc == 0x110958u) {
        ctx->pc = 0x11095Cu;
        goto label_11095c;
    }
    ctx->pc = 0x110954u;
    {
        const bool branch_taken_0x110954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110954) {
            ctx->pc = 0x110974u;
            goto label_110974;
        }
    }
    ctx->pc = 0x11095Cu;
label_11095c:
    // 0x11095c: 0xc044186  jal         func_110618
label_110960:
    if (ctx->pc == 0x110960u) {
        ctx->pc = 0x110960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11095Cu;
        // 0x110960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110964u;
        goto label_110964;
    }
    ctx->pc = 0x11095Cu;
    SET_GPR_U32(ctx, 31, 0x110964u);
    ctx->pc = 0x110960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11095Cu;
    // 0x110960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110618u, 0x11095Cu, 0x110964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110964u;
label_110964:
    // 0x110964: 0xc04331c  jal         func_10CC70
label_110968:
    if (ctx->pc == 0x110968u) {
        ctx->pc = 0x110968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110964u;
        // 0x110968: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11096Cu;
        goto label_11096c;
    }
    ctx->pc = 0x110964u;
    SET_GPR_U32(ctx, 31, 0x11096Cu);
    ctx->pc = 0x110968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110964u;
    // 0x110968: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x110964u, 0x11096Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11096Cu;
label_11096c:
    // 0x11096c: 0x10000016  b           . + 4 + (0x16 << 2)
label_110970:
    if (ctx->pc == 0x110970u) {
        ctx->pc = 0x110970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11096Cu;
        // 0x110970: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110974u;
        goto label_110974;
    }
    ctx->pc = 0x11096Cu;
    {
        const bool branch_taken_0x11096c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11096Cu;
        // 0x110970: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11096c) {
            ctx->pc = 0x1109C8u;
            goto label_1109c8;
        }
    }
    ctx->pc = 0x110974u;
label_110974:
    // 0x110974: 0xc043328  jal         func_10CCA0
label_110978:
    if (ctx->pc == 0x110978u) {
        ctx->pc = 0x110978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110974u;
        // 0x110978: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11097Cu;
        goto label_11097c;
    }
    ctx->pc = 0x110974u;
    SET_GPR_U32(ctx, 31, 0x11097Cu);
    ctx->pc = 0x110978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110974u;
    // 0x110978: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x110974u, 0x11097Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11097Cu;
label_11097c:
    // 0x11097c: 0xc04331c  jal         func_10CC70
label_110980:
    if (ctx->pc == 0x110980u) {
        ctx->pc = 0x110980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11097Cu;
        // 0x110980: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110984u;
        goto label_110984;
    }
    ctx->pc = 0x11097Cu;
    SET_GPR_U32(ctx, 31, 0x110984u);
    ctx->pc = 0x110980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11097Cu;
    // 0x110980: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x11097Cu, 0x110984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110984u;
label_110984:
    // 0x110984: 0x10000010  b           . + 4 + (0x10 << 2)
label_110988:
    if (ctx->pc == 0x110988u) {
        ctx->pc = 0x110988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110984u;
        // 0x110988: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11098Cu;
        goto label_11098c;
    }
    ctx->pc = 0x110984u;
    {
        const bool branch_taken_0x110984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110984u;
        // 0x110988: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110984) {
            ctx->pc = 0x1109C8u;
            goto label_1109c8;
        }
    }
    ctx->pc = 0x11098Cu;
label_11098c:
    // 0x11098c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11098cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_110990:
    // 0x110990: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x110990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_110994:
    // 0x110994: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x110994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_110998:
    // 0x110998: 0x3484000c  ori         $a0, $a0, 0xC
    ctx->pc = 0x110998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
label_11099c:
    // 0x11099c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11099cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1109a0:
    // 0x1109a0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1109a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1109a4:
    // 0x1109a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1109a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1109a8:
    // 0x1109a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1109a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1109ac:
    // 0x1109ac: 0xc04404c  jal         func_110130
label_1109b0:
    if (ctx->pc == 0x1109B0u) {
        ctx->pc = 0x1109B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1109ACu;
        // 0x1109b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1109B4u;
        goto label_1109b4;
    }
    ctx->pc = 0x1109ACu;
    SET_GPR_U32(ctx, 31, 0x1109B4u);
    ctx->pc = 0x1109B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1109ACu;
    // 0x1109b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110130u, 0x1109ACu, 0x1109B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1109B4u;
label_1109b4:
    // 0x1109b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1109b8:
    if (ctx->pc == 0x1109B8u) {
        ctx->pc = 0x1109B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1109B4u;
        // 0x1109b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1109BCu;
        goto label_1109bc;
    }
    ctx->pc = 0x1109B4u;
    {
        const bool branch_taken_0x1109b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1109B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1109B4u;
        // 0x1109b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1109b4) {
            ctx->pc = 0x1109C8u;
            goto label_1109c8;
        }
    }
    ctx->pc = 0x1109BCu;
label_1109bc:
    // 0x1109bc: 0xc044186  jal         func_110618
label_1109c0:
    if (ctx->pc == 0x1109C0u) {
        ctx->pc = 0x1109C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1109BCu;
        // 0x1109c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1109C4u;
        goto label_1109c4;
    }
    ctx->pc = 0x1109BCu;
    SET_GPR_U32(ctx, 31, 0x1109C4u);
    ctx->pc = 0x1109C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1109BCu;
    // 0x1109c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110618u, 0x1109BCu, 0x1109C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1109C4u;
label_1109c4:
    // 0x1109c4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1109c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1109c8:
    // 0x1109c8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1109c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1109cc:
    // 0x1109cc: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x1109ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1109d0:
    // 0x1109d0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1109d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1109d4:
    // 0x1109d4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1109d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1109d8:
    // 0x1109d8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1109d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1109dc:
    // 0x1109dc: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1109dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1109e0:
    // 0x1109e0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1109e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1109e4:
    // 0x1109e4: 0x3e00008  jr          $ra
label_1109e8:
    if (ctx->pc == 0x1109E8u) {
        ctx->pc = 0x1109E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1109E4u;
        // 0x1109e8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1109ECu;
        goto label_1109ec;
    }
    ctx->pc = 0x1109E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1109E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1109E4u;
        // 0x1109e8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1109E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1109ECu;
label_1109ec:
    // 0x1109ec: 0x0  nop
    ctx->pc = 0x1109ecu;
    // NOP
    if (ctx->pc == 0x1109ecu) { ctx->pc = 0x1109f0u; }
}
