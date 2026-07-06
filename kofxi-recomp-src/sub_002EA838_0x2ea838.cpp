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

// Function: sub_002EA838
// Address: 0x2ea838 - 0x2eac18
void sub_002EA838_0x2ea838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA838_0x2ea838");
#endif

    switch (ctx->pc) {
        case 0x2ea838u: goto label_2ea838;
        case 0x2ea83cu: goto label_2ea83c;
        case 0x2ea840u: goto label_2ea840;
        case 0x2ea844u: goto label_2ea844;
        case 0x2ea848u: goto label_2ea848;
        case 0x2ea84cu: goto label_2ea84c;
        case 0x2ea850u: goto label_2ea850;
        case 0x2ea854u: goto label_2ea854;
        case 0x2ea858u: goto label_2ea858;
        case 0x2ea85cu: goto label_2ea85c;
        case 0x2ea860u: goto label_2ea860;
        case 0x2ea864u: goto label_2ea864;
        case 0x2ea868u: goto label_2ea868;
        case 0x2ea86cu: goto label_2ea86c;
        case 0x2ea870u: goto label_2ea870;
        case 0x2ea874u: goto label_2ea874;
        case 0x2ea878u: goto label_2ea878;
        case 0x2ea87cu: goto label_2ea87c;
        case 0x2ea880u: goto label_2ea880;
        case 0x2ea884u: goto label_2ea884;
        case 0x2ea888u: goto label_2ea888;
        case 0x2ea88cu: goto label_2ea88c;
        case 0x2ea890u: goto label_2ea890;
        case 0x2ea894u: goto label_2ea894;
        case 0x2ea898u: goto label_2ea898;
        case 0x2ea89cu: goto label_2ea89c;
        case 0x2ea8a0u: goto label_2ea8a0;
        case 0x2ea8a4u: goto label_2ea8a4;
        case 0x2ea8a8u: goto label_2ea8a8;
        case 0x2ea8acu: goto label_2ea8ac;
        case 0x2ea8b0u: goto label_2ea8b0;
        case 0x2ea8b4u: goto label_2ea8b4;
        case 0x2ea8b8u: goto label_2ea8b8;
        case 0x2ea8bcu: goto label_2ea8bc;
        case 0x2ea8c0u: goto label_2ea8c0;
        case 0x2ea8c4u: goto label_2ea8c4;
        case 0x2ea8c8u: goto label_2ea8c8;
        case 0x2ea8ccu: goto label_2ea8cc;
        case 0x2ea8d0u: goto label_2ea8d0;
        case 0x2ea8d4u: goto label_2ea8d4;
        case 0x2ea8d8u: goto label_2ea8d8;
        case 0x2ea8dcu: goto label_2ea8dc;
        case 0x2ea8e0u: goto label_2ea8e0;
        case 0x2ea8e4u: goto label_2ea8e4;
        case 0x2ea8e8u: goto label_2ea8e8;
        case 0x2ea8ecu: goto label_2ea8ec;
        case 0x2ea8f0u: goto label_2ea8f0;
        case 0x2ea8f4u: goto label_2ea8f4;
        case 0x2ea8f8u: goto label_2ea8f8;
        case 0x2ea8fcu: goto label_2ea8fc;
        case 0x2ea900u: goto label_2ea900;
        case 0x2ea904u: goto label_2ea904;
        case 0x2ea908u: goto label_2ea908;
        case 0x2ea90cu: goto label_2ea90c;
        case 0x2ea910u: goto label_2ea910;
        case 0x2ea914u: goto label_2ea914;
        case 0x2ea918u: goto label_2ea918;
        case 0x2ea91cu: goto label_2ea91c;
        case 0x2ea920u: goto label_2ea920;
        case 0x2ea924u: goto label_2ea924;
        case 0x2ea928u: goto label_2ea928;
        case 0x2ea92cu: goto label_2ea92c;
        case 0x2ea930u: goto label_2ea930;
        case 0x2ea934u: goto label_2ea934;
        case 0x2ea938u: goto label_2ea938;
        case 0x2ea93cu: goto label_2ea93c;
        case 0x2ea940u: goto label_2ea940;
        case 0x2ea944u: goto label_2ea944;
        case 0x2ea948u: goto label_2ea948;
        case 0x2ea94cu: goto label_2ea94c;
        case 0x2ea950u: goto label_2ea950;
        case 0x2ea954u: goto label_2ea954;
        case 0x2ea958u: goto label_2ea958;
        case 0x2ea95cu: goto label_2ea95c;
        case 0x2ea960u: goto label_2ea960;
        case 0x2ea964u: goto label_2ea964;
        case 0x2ea968u: goto label_2ea968;
        case 0x2ea96cu: goto label_2ea96c;
        case 0x2ea970u: goto label_2ea970;
        case 0x2ea974u: goto label_2ea974;
        case 0x2ea978u: goto label_2ea978;
        case 0x2ea97cu: goto label_2ea97c;
        case 0x2ea980u: goto label_2ea980;
        case 0x2ea984u: goto label_2ea984;
        case 0x2ea988u: goto label_2ea988;
        case 0x2ea98cu: goto label_2ea98c;
        case 0x2ea990u: goto label_2ea990;
        case 0x2ea994u: goto label_2ea994;
        case 0x2ea998u: goto label_2ea998;
        case 0x2ea99cu: goto label_2ea99c;
        case 0x2ea9a0u: goto label_2ea9a0;
        case 0x2ea9a4u: goto label_2ea9a4;
        case 0x2ea9a8u: goto label_2ea9a8;
        case 0x2ea9acu: goto label_2ea9ac;
        case 0x2ea9b0u: goto label_2ea9b0;
        case 0x2ea9b4u: goto label_2ea9b4;
        case 0x2ea9b8u: goto label_2ea9b8;
        case 0x2ea9bcu: goto label_2ea9bc;
        case 0x2ea9c0u: goto label_2ea9c0;
        case 0x2ea9c4u: goto label_2ea9c4;
        case 0x2ea9c8u: goto label_2ea9c8;
        case 0x2ea9ccu: goto label_2ea9cc;
        case 0x2ea9d0u: goto label_2ea9d0;
        case 0x2ea9d4u: goto label_2ea9d4;
        case 0x2ea9d8u: goto label_2ea9d8;
        case 0x2ea9dcu: goto label_2ea9dc;
        case 0x2ea9e0u: goto label_2ea9e0;
        case 0x2ea9e4u: goto label_2ea9e4;
        case 0x2ea9e8u: goto label_2ea9e8;
        case 0x2ea9ecu: goto label_2ea9ec;
        case 0x2ea9f0u: goto label_2ea9f0;
        case 0x2ea9f4u: goto label_2ea9f4;
        case 0x2ea9f8u: goto label_2ea9f8;
        case 0x2ea9fcu: goto label_2ea9fc;
        case 0x2eaa00u: goto label_2eaa00;
        case 0x2eaa04u: goto label_2eaa04;
        case 0x2eaa08u: goto label_2eaa08;
        case 0x2eaa0cu: goto label_2eaa0c;
        case 0x2eaa10u: goto label_2eaa10;
        case 0x2eaa14u: goto label_2eaa14;
        case 0x2eaa18u: goto label_2eaa18;
        case 0x2eaa1cu: goto label_2eaa1c;
        case 0x2eaa20u: goto label_2eaa20;
        case 0x2eaa24u: goto label_2eaa24;
        case 0x2eaa28u: goto label_2eaa28;
        case 0x2eaa2cu: goto label_2eaa2c;
        case 0x2eaa30u: goto label_2eaa30;
        case 0x2eaa34u: goto label_2eaa34;
        case 0x2eaa38u: goto label_2eaa38;
        case 0x2eaa3cu: goto label_2eaa3c;
        case 0x2eaa40u: goto label_2eaa40;
        case 0x2eaa44u: goto label_2eaa44;
        case 0x2eaa48u: goto label_2eaa48;
        case 0x2eaa4cu: goto label_2eaa4c;
        case 0x2eaa50u: goto label_2eaa50;
        case 0x2eaa54u: goto label_2eaa54;
        case 0x2eaa58u: goto label_2eaa58;
        case 0x2eaa5cu: goto label_2eaa5c;
        case 0x2eaa60u: goto label_2eaa60;
        case 0x2eaa64u: goto label_2eaa64;
        case 0x2eaa68u: goto label_2eaa68;
        case 0x2eaa6cu: goto label_2eaa6c;
        case 0x2eaa70u: goto label_2eaa70;
        case 0x2eaa74u: goto label_2eaa74;
        case 0x2eaa78u: goto label_2eaa78;
        case 0x2eaa7cu: goto label_2eaa7c;
        case 0x2eaa80u: goto label_2eaa80;
        case 0x2eaa84u: goto label_2eaa84;
        case 0x2eaa88u: goto label_2eaa88;
        case 0x2eaa8cu: goto label_2eaa8c;
        case 0x2eaa90u: goto label_2eaa90;
        case 0x2eaa94u: goto label_2eaa94;
        case 0x2eaa98u: goto label_2eaa98;
        case 0x2eaa9cu: goto label_2eaa9c;
        case 0x2eaaa0u: goto label_2eaaa0;
        case 0x2eaaa4u: goto label_2eaaa4;
        case 0x2eaaa8u: goto label_2eaaa8;
        case 0x2eaaacu: goto label_2eaaac;
        case 0x2eaab0u: goto label_2eaab0;
        case 0x2eaab4u: goto label_2eaab4;
        case 0x2eaab8u: goto label_2eaab8;
        case 0x2eaabcu: goto label_2eaabc;
        case 0x2eaac0u: goto label_2eaac0;
        case 0x2eaac4u: goto label_2eaac4;
        case 0x2eaac8u: goto label_2eaac8;
        case 0x2eaaccu: goto label_2eaacc;
        case 0x2eaad0u: goto label_2eaad0;
        case 0x2eaad4u: goto label_2eaad4;
        case 0x2eaad8u: goto label_2eaad8;
        case 0x2eaadcu: goto label_2eaadc;
        case 0x2eaae0u: goto label_2eaae0;
        case 0x2eaae4u: goto label_2eaae4;
        case 0x2eaae8u: goto label_2eaae8;
        case 0x2eaaecu: goto label_2eaaec;
        case 0x2eaaf0u: goto label_2eaaf0;
        case 0x2eaaf4u: goto label_2eaaf4;
        case 0x2eaaf8u: goto label_2eaaf8;
        case 0x2eaafcu: goto label_2eaafc;
        case 0x2eab00u: goto label_2eab00;
        case 0x2eab04u: goto label_2eab04;
        case 0x2eab08u: goto label_2eab08;
        case 0x2eab0cu: goto label_2eab0c;
        case 0x2eab10u: goto label_2eab10;
        case 0x2eab14u: goto label_2eab14;
        case 0x2eab18u: goto label_2eab18;
        case 0x2eab1cu: goto label_2eab1c;
        case 0x2eab20u: goto label_2eab20;
        case 0x2eab24u: goto label_2eab24;
        case 0x2eab28u: goto label_2eab28;
        case 0x2eab2cu: goto label_2eab2c;
        case 0x2eab30u: goto label_2eab30;
        case 0x2eab34u: goto label_2eab34;
        case 0x2eab38u: goto label_2eab38;
        case 0x2eab3cu: goto label_2eab3c;
        case 0x2eab40u: goto label_2eab40;
        case 0x2eab44u: goto label_2eab44;
        case 0x2eab48u: goto label_2eab48;
        case 0x2eab4cu: goto label_2eab4c;
        case 0x2eab50u: goto label_2eab50;
        case 0x2eab54u: goto label_2eab54;
        case 0x2eab58u: goto label_2eab58;
        case 0x2eab5cu: goto label_2eab5c;
        case 0x2eab60u: goto label_2eab60;
        case 0x2eab64u: goto label_2eab64;
        case 0x2eab68u: goto label_2eab68;
        case 0x2eab6cu: goto label_2eab6c;
        case 0x2eab70u: goto label_2eab70;
        case 0x2eab74u: goto label_2eab74;
        case 0x2eab78u: goto label_2eab78;
        case 0x2eab7cu: goto label_2eab7c;
        case 0x2eab80u: goto label_2eab80;
        case 0x2eab84u: goto label_2eab84;
        case 0x2eab88u: goto label_2eab88;
        case 0x2eab8cu: goto label_2eab8c;
        case 0x2eab90u: goto label_2eab90;
        case 0x2eab94u: goto label_2eab94;
        case 0x2eab98u: goto label_2eab98;
        case 0x2eab9cu: goto label_2eab9c;
        case 0x2eaba0u: goto label_2eaba0;
        case 0x2eaba4u: goto label_2eaba4;
        case 0x2eaba8u: goto label_2eaba8;
        case 0x2eabacu: goto label_2eabac;
        case 0x2eabb0u: goto label_2eabb0;
        case 0x2eabb4u: goto label_2eabb4;
        case 0x2eabb8u: goto label_2eabb8;
        case 0x2eabbcu: goto label_2eabbc;
        case 0x2eabc0u: goto label_2eabc0;
        case 0x2eabc4u: goto label_2eabc4;
        case 0x2eabc8u: goto label_2eabc8;
        case 0x2eabccu: goto label_2eabcc;
        case 0x2eabd0u: goto label_2eabd0;
        case 0x2eabd4u: goto label_2eabd4;
        case 0x2eabd8u: goto label_2eabd8;
        case 0x2eabdcu: goto label_2eabdc;
        case 0x2eabe0u: goto label_2eabe0;
        case 0x2eabe4u: goto label_2eabe4;
        case 0x2eabe8u: goto label_2eabe8;
        case 0x2eabecu: goto label_2eabec;
        case 0x2eabf0u: goto label_2eabf0;
        case 0x2eabf4u: goto label_2eabf4;
        case 0x2eabf8u: goto label_2eabf8;
        case 0x2eabfcu: goto label_2eabfc;
        case 0x2eac00u: goto label_2eac00;
        case 0x2eac04u: goto label_2eac04;
        case 0x2eac08u: goto label_2eac08;
        case 0x2eac0cu: goto label_2eac0c;
        case 0x2eac10u: goto label_2eac10;
        case 0x2eac14u: goto label_2eac14;
        default: break;
    }

    ctx->pc = 0x2ea838u;

label_2ea838:
    // 0x2ea838: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ea838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2ea83c:
    // 0x2ea83c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ea83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2ea840:
    // 0x2ea840: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ea840u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ea844:
    // 0x2ea844: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2ea844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2ea848:
    // 0x2ea848: 0x26540180  addiu       $s4, $s2, 0x180
    ctx->pc = 0x2ea848u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
label_2ea84c:
    // 0x2ea84c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2ea84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2ea850:
    // 0x2ea850: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ea850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2ea854:
    // 0x2ea854: 0x2645078c  addiu       $a1, $s2, 0x78C
    ctx->pc = 0x2ea854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1932));
label_2ea858:
    // 0x2ea858: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ea858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2ea85c:
    // 0x2ea85c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2ea85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2ea860:
    // 0x2ea860: 0xc0435a6  jal         func_10D698
label_2ea864:
    if (ctx->pc == 0x2EA864u) {
        ctx->pc = 0x2EA864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA860u;
        // 0x2ea864: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA868u;
        goto label_2ea868;
    }
    ctx->pc = 0x2EA860u;
    SET_GPR_U32(ctx, 31, 0x2EA868u);
    ctx->pc = 0x2EA864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA860u;
    // 0x2ea864: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D698u, 0x2EA860u, 0x2EA868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA868u;
label_2ea868:
    // 0x2ea868: 0xc08c682  jal         func_231A08
label_2ea86c:
    if (ctx->pc == 0x2EA86Cu) {
        ctx->pc = 0x2EA86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA868u;
        // 0x2ea86c: 0x8e530180  lw          $s3, 0x180($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA870u;
        goto label_2ea870;
    }
    ctx->pc = 0x2EA868u;
    SET_GPR_U32(ctx, 31, 0x2EA870u);
    ctx->pc = 0x2EA86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA868u;
    // 0x2ea86c: 0x8e530180  lw          $s3, 0x180($s2) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x2EA868u, 0x2EA870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA870u;
label_2ea870:
    // 0x2ea870: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ea870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ea874:
    // 0x2ea874: 0xc098552  jal         func_261548
label_2ea878:
    if (ctx->pc == 0x2EA878u) {
        ctx->pc = 0x2EA878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA874u;
        // 0x2ea878: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA87Cu;
        goto label_2ea87c;
    }
    ctx->pc = 0x2EA874u;
    SET_GPR_U32(ctx, 31, 0x2EA87Cu);
    ctx->pc = 0x2EA878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA874u;
    // 0x2ea878: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x2EA874u, 0x2EA87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA87Cu;
label_2ea87c:
    // 0x2ea87c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ea87cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ea880:
    // 0x2ea880: 0xc08c698  jal         func_231A60
label_2ea884:
    if (ctx->pc == 0x2EA884u) {
        ctx->pc = 0x2EA884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA880u;
        // 0x2ea884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA888u;
        goto label_2ea888;
    }
    ctx->pc = 0x2EA880u;
    SET_GPR_U32(ctx, 31, 0x2EA888u);
    ctx->pc = 0x2EA884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA880u;
    // 0x2ea884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x2EA880u, 0x2EA888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA888u;
label_2ea888:
    // 0x2ea888: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
label_2ea88c:
    if (ctx->pc == 0x2EA88Cu) {
        ctx->pc = 0x2EA88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA888u;
        // 0x2ea88c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA890u;
        goto label_2ea890;
    }
    ctx->pc = 0x2EA888u;
    {
        const bool branch_taken_0x2ea888 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA888u;
        // 0x2ea88c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea888) {
            ctx->pc = 0x2EA8C0u;
            goto label_2ea8c0;
        }
    }
    ctx->pc = 0x2EA890u;
label_2ea890:
    // 0x2ea890: 0xc08a8cc  jal         func_22A330
label_2ea894:
    if (ctx->pc == 0x2EA894u) {
        ctx->pc = 0x2EA894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA890u;
        // 0x2ea894: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA898u;
        goto label_2ea898;
    }
    ctx->pc = 0x2EA890u;
    SET_GPR_U32(ctx, 31, 0x2EA898u);
    ctx->pc = 0x2EA894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA890u;
    // 0x2ea894: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A330u, 0x2EA890u, 0x2EA898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA898u;
label_2ea898:
    // 0x2ea898: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ea898u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ea89c:
    // 0x2ea89c: 0x0  nop
    ctx->pc = 0x2ea89cu;
    // NOP
label_2ea8a0:
    // 0x2ea8a0: 0x56200011  bnel        $s1, $zero, . + 4 + (0x11 << 2)
label_2ea8a4:
    if (ctx->pc == 0x2EA8A4u) {
        ctx->pc = 0x2EA8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA8A0u;
        // 0x2ea8a4: 0xae320014  sw          $s2, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA8A8u;
        goto label_2ea8a8;
    }
    ctx->pc = 0x2EA8A0u;
    {
        const bool branch_taken_0x2ea8a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea8a0) {
            ctx->pc = 0x2EA8A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA8A0u;
            // 0x2ea8a4: 0xae320014  sw          $s2, 0x14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA8E8u;
            goto label_2ea8e8;
        }
    }
    ctx->pc = 0x2EA8A8u;
label_2ea8a8:
    // 0x2ea8a8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2ea8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2ea8ac:
    // 0x2ea8ac: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2ea8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2ea8b0:
    // 0x2ea8b0: 0xc08b5ac  jal         func_22D6B0
label_2ea8b4:
    if (ctx->pc == 0x2EA8B4u) {
        ctx->pc = 0x2EA8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA8B0u;
        // 0x2ea8b4: 0x24a50198  addiu       $a1, $a1, 0x198 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA8B8u;
        goto label_2ea8b8;
    }
    ctx->pc = 0x2EA8B0u;
    SET_GPR_U32(ctx, 31, 0x2EA8B8u);
    ctx->pc = 0x2EA8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA8B0u;
    // 0x2ea8b4: 0x24a50198  addiu       $a1, $a1, 0x198 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2EA8B0u, 0x2EA8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA8B8u;
label_2ea8b8:
    // 0x2ea8b8: 0x1000004e  b           . + 4 + (0x4E << 2)
label_2ea8bc:
    if (ctx->pc == 0x2EA8BCu) {
        ctx->pc = 0x2EA8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA8B8u;
        // 0x2ea8bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA8C0u;
        goto label_2ea8c0;
    }
    ctx->pc = 0x2EA8B8u;
    {
        const bool branch_taken_0x2ea8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA8B8u;
        // 0x2ea8bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea8b8) {
            ctx->pc = 0x2EA9F4u;
            goto label_2ea9f4;
        }
    }
    ctx->pc = 0x2EA8C0u;
label_2ea8c0:
    // 0x2ea8c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ea8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea8c4:
    // 0x2ea8c4: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x2ea8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_2ea8c8:
    // 0x2ea8c8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2ea8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ea8cc:
    // 0x2ea8cc: 0xa6220010  sh          $v0, 0x10($s1)
    ctx->pc = 0x2ea8ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
label_2ea8d0:
    // 0x2ea8d0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2ea8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_2ea8d4:
    // 0x2ea8d4: 0xa6240012  sh          $a0, 0x12($s1)
    ctx->pc = 0x2ea8d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 4));
label_2ea8d8:
    // 0x2ea8d8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2ea8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2ea8dc:
    // 0x2ea8dc: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2ea8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2ea8e0:
    // 0x2ea8e0: 0x1000ffef  b           . + 4 + (-0x11 << 2)
label_2ea8e4:
    if (ctx->pc == 0x2EA8E4u) {
        ctx->pc = 0x2EA8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA8E0u;
        // 0x2ea8e4: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA8E8u;
        goto label_2ea8e8;
    }
    ctx->pc = 0x2EA8E0u;
    {
        const bool branch_taken_0x2ea8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA8E0u;
        // 0x2ea8e4: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea8e0) {
            ctx->pc = 0x2EA8A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ea8a0;
        }
    }
    ctx->pc = 0x2EA8E8u;
label_2ea8e8:
    // 0x2ea8e8: 0x2e6200df  sltiu       $v0, $s3, 0xDF
    ctx->pc = 0x2ea8e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)223) ? 1 : 0);
label_2ea8ec:
    // 0x2ea8ec: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_2ea8f0:
    if (ctx->pc == 0x2EA8F0u) {
        ctx->pc = 0x2EA8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA8ECu;
        // 0x2ea8f0: 0xae330018  sw          $s3, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA8F4u;
        goto label_2ea8f4;
    }
    ctx->pc = 0x2EA8ECu;
    {
        const bool branch_taken_0x2ea8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA8ECu;
        // 0x2ea8f0: 0xae330018  sw          $s3, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea8ec) {
            ctx->pc = 0x2EA990u;
            goto label_2ea990;
        }
    }
    ctx->pc = 0x2EA8F4u;
label_2ea8f4:
    // 0x2ea8f4: 0xc08c682  jal         func_231A08
label_2ea8f8:
    if (ctx->pc == 0x2EA8F8u) {
        ctx->pc = 0x2EA8FCu;
        goto label_2ea8fc;
    }
    ctx->pc = 0x2EA8F4u;
    SET_GPR_U32(ctx, 31, 0x2EA8FCu);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x2EA8F4u, 0x2EA8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA8FCu;
label_2ea8fc:
    // 0x2ea8fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ea8fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ea900:
    // 0x2ea900: 0xc098552  jal         func_261548
label_2ea904:
    if (ctx->pc == 0x2EA904u) {
        ctx->pc = 0x2EA904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA900u;
        // 0x2ea904: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA908u;
        goto label_2ea908;
    }
    ctx->pc = 0x2EA900u;
    SET_GPR_U32(ctx, 31, 0x2EA908u);
    ctx->pc = 0x2EA904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA900u;
    // 0x2ea904: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x2EA900u, 0x2EA908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA908u;
label_2ea908:
    // 0x2ea908: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2ea90c:
    if (ctx->pc == 0x2EA90Cu) {
        ctx->pc = 0x2EA90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA908u;
        // 0x2ea90c: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA910u;
        goto label_2ea910;
    }
    ctx->pc = 0x2EA908u;
    {
        const bool branch_taken_0x2ea908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA908u;
        // 0x2ea90c: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea908) {
            ctx->pc = 0x2EA928u;
            goto label_2ea928;
        }
    }
    ctx->pc = 0x2EA910u;
label_2ea910:
    // 0x2ea910: 0xc08a8ec  jal         func_22A3B0
label_2ea914:
    if (ctx->pc == 0x2EA914u) {
        ctx->pc = 0x2EA914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA910u;
        // 0x2ea914: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA918u;
        goto label_2ea918;
    }
    ctx->pc = 0x2EA910u;
    SET_GPR_U32(ctx, 31, 0x2EA918u);
    ctx->pc = 0x2EA914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA910u;
    // 0x2ea914: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A3B0u, 0x2EA910u, 0x2EA918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA918u;
label_2ea918:
    // 0x2ea918: 0xc098552  jal         func_261548
label_2ea91c:
    if (ctx->pc == 0x2EA91Cu) {
        ctx->pc = 0x2EA91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA918u;
        // 0x2ea91c: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA920u;
        goto label_2ea920;
    }
    ctx->pc = 0x2EA918u;
    SET_GPR_U32(ctx, 31, 0x2EA920u);
    ctx->pc = 0x2EA91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA918u;
    // 0x2ea91c: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x2EA918u, 0x2EA920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA920u;
label_2ea920:
    // 0x2ea920: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2ea920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_2ea924:
    // 0x2ea924: 0x0  nop
    ctx->pc = 0x2ea924u;
    // NOP
label_2ea928:
    // 0x2ea928: 0xc08c698  jal         func_231A60
label_2ea92c:
    if (ctx->pc == 0x2EA92Cu) {
        ctx->pc = 0x2EA92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA928u;
        // 0x2ea92c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA930u;
        goto label_2ea930;
    }
    ctx->pc = 0x2EA928u;
    SET_GPR_U32(ctx, 31, 0x2EA930u);
    ctx->pc = 0x2EA92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA928u;
    // 0x2ea92c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x2EA928u, 0x2EA930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA930u;
label_2ea930:
    // 0x2ea930: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x2ea930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2ea934:
    // 0x2ea934: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_2ea938:
    if (ctx->pc == 0x2EA938u) {
        ctx->pc = 0x2EA938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA934u;
        // 0x2ea938: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA93Cu;
        goto label_2ea93c;
    }
    ctx->pc = 0x2EA934u;
    {
        const bool branch_taken_0x2ea934 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA934u;
        // 0x2ea938: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea934) {
            ctx->pc = 0x2EA960u;
            goto label_2ea960;
        }
    }
    ctx->pc = 0x2EA93Cu;
label_2ea93c:
    // 0x2ea93c: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x2ea93cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_2ea940:
    // 0x2ea940: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x2ea940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
label_2ea944:
    // 0x2ea944: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x2ea944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
label_2ea948:
    // 0x2ea948: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x2ea948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
label_2ea94c:
    // 0x2ea94c: 0xa6220012  sh          $v0, 0x12($s1)
    ctx->pc = 0x2ea94cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
label_2ea950:
    // 0x2ea950: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x2ea950u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_2ea954:
    // 0x2ea954: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x2ea954u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_2ea958:
    // 0x2ea958: 0xae310038  sw          $s1, 0x38($s1)
    ctx->pc = 0x2ea958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 17));
label_2ea95c:
    // 0x2ea95c: 0xae310034  sw          $s1, 0x34($s1)
    ctx->pc = 0x2ea95cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 17));
label_2ea960:
    // 0x2ea960: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x2ea960u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_2ea964:
    // 0x2ea964: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ea964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2ea968:
    // 0x2ea968: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_2ea96c:
    if (ctx->pc == 0x2EA96Cu) {
        ctx->pc = 0x2EA96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA968u;
        // 0x2ea96c: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA970u;
        goto label_2ea970;
    }
    ctx->pc = 0x2EA968u;
    {
        const bool branch_taken_0x2ea968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea968) {
            ctx->pc = 0x2EA96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA968u;
            // 0x2ea96c: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA994u;
            goto label_2ea994;
        }
    }
    ctx->pc = 0x2EA970u;
label_2ea970:
    // 0x2ea970: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2ea970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2ea974:
    // 0x2ea974: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2ea974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2ea978:
    // 0x2ea978: 0xc08b5ac  jal         func_22D6B0
label_2ea97c:
    if (ctx->pc == 0x2EA97Cu) {
        ctx->pc = 0x2EA97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA978u;
        // 0x2ea97c: 0x24a501b8  addiu       $a1, $a1, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA980u;
        goto label_2ea980;
    }
    ctx->pc = 0x2EA978u;
    SET_GPR_U32(ctx, 31, 0x2EA980u);
    ctx->pc = 0x2EA97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA978u;
    // 0x2ea97c: 0x24a501b8  addiu       $a1, $a1, 0x1B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2EA978u, 0x2EA980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA980u;
label_2ea980:
    // 0x2ea980: 0xc08a996  jal         func_22A658
label_2ea984:
    if (ctx->pc == 0x2EA984u) {
        ctx->pc = 0x2EA984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA980u;
        // 0x2ea984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA988u;
        goto label_2ea988;
    }
    ctx->pc = 0x2EA980u;
    SET_GPR_U32(ctx, 31, 0x2EA988u);
    ctx->pc = 0x2EA984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA980u;
    // 0x2ea984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A658u, 0x2EA980u, 0x2EA988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA988u;
label_2ea988:
    // 0x2ea988: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2ea98c:
    if (ctx->pc == 0x2EA98Cu) {
        ctx->pc = 0x2EA98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA988u;
        // 0x2ea98c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA990u;
        goto label_2ea990;
    }
    ctx->pc = 0x2EA988u;
    {
        const bool branch_taken_0x2ea988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA988u;
        // 0x2ea98c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea988) {
            ctx->pc = 0x2EA9F4u;
            goto label_2ea9f4;
        }
    }
    ctx->pc = 0x2EA990u;
label_2ea990:
    // 0x2ea990: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2ea990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2ea994:
    // 0x2ea994: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x2ea994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_2ea998:
    // 0x2ea998: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2ea998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ea99c:
    // 0x2ea99c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2ea99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_2ea9a0:
    // 0x2ea9a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ea9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ea9a4:
    // 0x2ea9a4: 0xc08b538  jal         func_22D4E0
label_2ea9a8:
    if (ctx->pc == 0x2EA9A8u) {
        ctx->pc = 0x2EA9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA9A4u;
        // 0x2ea9a8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA9ACu;
        goto label_2ea9ac;
    }
    ctx->pc = 0x2EA9A4u;
    SET_GPR_U32(ctx, 31, 0x2EA9ACu);
    ctx->pc = 0x2EA9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA9A4u;
    // 0x2ea9a8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x2EA9A4u, 0x2EA9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA9ACu;
label_2ea9ac:
    // 0x2ea9ac: 0xae33000c  sw          $s3, 0xC($s1)
    ctx->pc = 0x2ea9acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 19));
label_2ea9b0:
    // 0x2ea9b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ea9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ea9b4:
    // 0x2ea9b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ea9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea9b8:
    // 0x2ea9b8: 0xc0ba8d0  jal         func_2EA340
label_2ea9bc:
    if (ctx->pc == 0x2EA9BCu) {
        ctx->pc = 0x2EA9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA9B8u;
        // 0x2ea9bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA9C0u;
        goto label_2ea9c0;
    }
    ctx->pc = 0x2EA9B8u;
    SET_GPR_U32(ctx, 31, 0x2EA9C0u);
    ctx->pc = 0x2EA9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA9B8u;
    // 0x2ea9bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA340u, 0x2EA9B8u, 0x2EA9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA9C0u;
label_2ea9c0:
    // 0x2ea9c0: 0xde420058  ld          $v0, 0x58($s2)
    ctx->pc = 0x2ea9c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 88)));
label_2ea9c4:
    // 0x2ea9c4: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x2ea9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_2ea9c8:
    // 0x2ea9c8: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x2ea9c8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_2ea9cc:
    // 0x2ea9cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2ea9d0:
    if (ctx->pc == 0x2EA9D0u) {
        ctx->pc = 0x2EA9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA9CCu;
        // 0x2ea9d0: 0xfe420058  sd          $v0, 0x58($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 88), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA9D4u;
        goto label_2ea9d4;
    }
    ctx->pc = 0x2EA9CCu;
    {
        const bool branch_taken_0x2ea9cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA9CCu;
        // 0x2ea9d0: 0xfe420058  sd          $v0, 0x58($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 88), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea9cc) {
            ctx->pc = 0x2EA9DCu;
            goto label_2ea9dc;
        }
    }
    ctx->pc = 0x2EA9D4u;
label_2ea9d4:
    // 0x2ea9d4: 0xc08cd78  jal         func_2335E0
label_2ea9d8:
    if (ctx->pc == 0x2EA9D8u) {
        ctx->pc = 0x2EA9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA9D4u;
        // 0x2ea9d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA9DCu;
        goto label_2ea9dc;
    }
    ctx->pc = 0x2EA9D4u;
    SET_GPR_U32(ctx, 31, 0x2EA9DCu);
    ctx->pc = 0x2EA9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA9D4u;
    // 0x2ea9d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2335E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2335E0u, 0x2EA9D4u, 0x2EA9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA9DCu;
label_2ea9dc:
    // 0x2ea9dc: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x2ea9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_2ea9e0:
    // 0x2ea9e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ea9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ea9e4:
    // 0x2ea9e4: 0x40f809  jalr        $v0
label_2ea9e8:
    if (ctx->pc == 0x2EA9E8u) {
        ctx->pc = 0x2EA9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA9E4u;
        // 0x2ea9e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA9ECu;
        goto label_2ea9ec;
    }
    ctx->pc = 0x2EA9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EA9ECu);
        ctx->pc = 0x2EA9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA9E4u;
        // 0x2ea9e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA9E4u, 0x2EA9ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EA9ECu;
label_2ea9ec:
    // 0x2ea9ec: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ea9f0:
    if (ctx->pc == 0x2EA9F0u) {
        ctx->pc = 0x2EA9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA9ECu;
        // 0x2ea9f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA9F4u;
        goto label_2ea9f4;
    }
    ctx->pc = 0x2EA9ECu;
    {
        const bool branch_taken_0x2ea9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA9ECu;
        // 0x2ea9f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea9ec) {
            ctx->pc = 0x2EAA10u;
            goto label_2eaa10;
        }
    }
    ctx->pc = 0x2EA9F4u;
label_2ea9f4:
    // 0x2ea9f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ea9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea9f8:
    // 0x2ea9f8: 0xc0ba8d0  jal         func_2EA340
label_2ea9fc:
    if (ctx->pc == 0x2EA9FCu) {
        ctx->pc = 0x2EA9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA9F8u;
        // 0x2ea9fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAA00u;
        goto label_2eaa00;
    }
    ctx->pc = 0x2EA9F8u;
    SET_GPR_U32(ctx, 31, 0x2EAA00u);
    ctx->pc = 0x2EA9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA9F8u;
    // 0x2ea9fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA340u, 0x2EA9F8u, 0x2EAA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAA00u;
label_2eaa00:
    // 0x2eaa00: 0xde430060  ld          $v1, 0x60($s2)
    ctx->pc = 0x2eaa00u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 96)));
label_2eaa04:
    // 0x2eaa04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2eaa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2eaa08:
    // 0x2eaa08: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x2eaa08u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
label_2eaa0c:
    // 0x2eaa0c: 0xfe430060  sd          $v1, 0x60($s2)
    ctx->pc = 0x2eaa0cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 3));
label_2eaa10:
    // 0x2eaa10: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2eaa10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2eaa14:
    // 0x2eaa14: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2eaa14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2eaa18:
    // 0x2eaa18: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2eaa18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2eaa1c:
    // 0x2eaa1c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2eaa1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2eaa20:
    // 0x2eaa20: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2eaa20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2eaa24:
    // 0x2eaa24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eaa24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2eaa28:
    // 0x2eaa28: 0x3e00008  jr          $ra
label_2eaa2c:
    if (ctx->pc == 0x2EAA2Cu) {
        ctx->pc = 0x2EAA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA28u;
        // 0x2eaa2c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAA30u;
        goto label_2eaa30;
    }
    ctx->pc = 0x2EAA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EAA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA28u;
        // 0x2eaa2c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EAA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EAA30u;
label_2eaa30:
    // 0x2eaa30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2eaa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2eaa34:
    // 0x2eaa34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eaa34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2eaa38:
    // 0x2eaa38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2eaa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2eaa3c:
    // 0x2eaa3c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2eaa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2eaa40:
    // 0x2eaa40: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_2eaa44:
    if (ctx->pc == 0x2EAA44u) {
        ctx->pc = 0x2EAA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA40u;
        // 0x2eaa44: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAA48u;
        goto label_2eaa48;
    }
    ctx->pc = 0x2EAA40u;
    {
        const bool branch_taken_0x2eaa40 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2EAA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA40u;
        // 0x2eaa44: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaa40) {
            ctx->pc = 0x2EAA68u;
            goto label_2eaa68;
        }
    }
    ctx->pc = 0x2EAA48u;
label_2eaa48:
    // 0x2eaa48: 0xc043324  jal         func_10CC90
label_2eaa4c:
    if (ctx->pc == 0x2EAA4Cu) {
        ctx->pc = 0x2EAA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA48u;
        // 0x2eaa4c: 0x8e042644  lw          $a0, 0x2644($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9796)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAA50u;
        goto label_2eaa50;
    }
    ctx->pc = 0x2EAA48u;
    SET_GPR_U32(ctx, 31, 0x2EAA50u);
    ctx->pc = 0x2EAA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAA48u;
    // 0x2eaa4c: 0x8e042644  lw          $a0, 0x2644($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9796)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC90u, 0x2EAA48u, 0x2EAA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAA50u;
label_2eaa50:
    // 0x2eaa50: 0xc043324  jal         func_10CC90
label_2eaa54:
    if (ctx->pc == 0x2EAA54u) {
        ctx->pc = 0x2EAA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA50u;
        // 0x2eaa54: 0x8e042640  lw          $a0, 0x2640($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9792)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAA58u;
        goto label_2eaa58;
    }
    ctx->pc = 0x2EAA50u;
    SET_GPR_U32(ctx, 31, 0x2EAA58u);
    ctx->pc = 0x2EAA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAA50u;
    // 0x2eaa54: 0x8e042640  lw          $a0, 0x2640($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9792)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC90u, 0x2EAA50u, 0x2EAA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAA58u;
label_2eaa58:
    // 0x2eaa58: 0xc043324  jal         func_10CC90
label_2eaa5c:
    if (ctx->pc == 0x2EAA5Cu) {
        ctx->pc = 0x2EAA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA58u;
        // 0x2eaa5c: 0x8e042638  lw          $a0, 0x2638($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9784)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAA60u;
        goto label_2eaa60;
    }
    ctx->pc = 0x2EAA58u;
    SET_GPR_U32(ctx, 31, 0x2EAA60u);
    ctx->pc = 0x2EAA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAA58u;
    // 0x2eaa5c: 0x8e042638  lw          $a0, 0x2638($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9784)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC90u, 0x2EAA58u, 0x2EAA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAA60u;
label_2eaa60:
    // 0x2eaa60: 0x10000003  b           . + 4 + (0x3 << 2)
label_2eaa64:
    if (ctx->pc == 0x2EAA64u) {
        ctx->pc = 0x2EAA68u;
        goto label_2eaa68;
    }
    ctx->pc = 0x2EAA60u;
    {
        const bool branch_taken_0x2eaa60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eaa60) {
            ctx->pc = 0x2EAA70u;
            goto label_2eaa70;
        }
    }
    ctx->pc = 0x2EAA68u;
label_2eaa68:
    // 0x2eaa68: 0xc043330  jal         func_10CCC0
label_2eaa6c:
    if (ctx->pc == 0x2EAA6Cu) {
        ctx->pc = 0x2EAA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA68u;
        // 0x2eaa6c: 0x8e042644  lw          $a0, 0x2644($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9796)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAA70u;
        goto label_2eaa70;
    }
    ctx->pc = 0x2EAA68u;
    SET_GPR_U32(ctx, 31, 0x2EAA70u);
    ctx->pc = 0x2EAA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAA68u;
    // 0x2eaa6c: 0x8e042644  lw          $a0, 0x2644($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9796)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCC0u, 0x2EAA68u, 0x2EAA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAA70u;
label_2eaa70:
    // 0x2eaa70: 0xf  sync
    ctx->pc = 0x2eaa70u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2eaa74:
    // 0x2eaa74: 0x42000038  ei
    ctx->pc = 0x2eaa74u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_2eaa78:
    // 0x2eaa78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2eaa78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2eaa7c:
    // 0x2eaa7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eaa7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2eaa80:
    // 0x2eaa80: 0x3e00008  jr          $ra
label_2eaa84:
    if (ctx->pc == 0x2EAA84u) {
        ctx->pc = 0x2EAA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA80u;
        // 0x2eaa84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAA88u;
        goto label_2eaa88;
    }
    ctx->pc = 0x2EAA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EAA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA80u;
        // 0x2eaa84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EAA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EAA88u;
label_2eaa88:
    // 0x2eaa88: 0x27bdfda0  addiu       $sp, $sp, -0x260
    ctx->pc = 0x2eaa88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966688));
label_2eaa8c:
    // 0x2eaa8c: 0xffb10230  sd          $s1, 0x230($sp)
    ctx->pc = 0x2eaa8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 17));
label_2eaa90:
    // 0x2eaa90: 0xffbf0250  sd          $ra, 0x250($sp)
    ctx->pc = 0x2eaa90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 31));
label_2eaa94:
    // 0x2eaa94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2eaa94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2eaa98:
    // 0x2eaa98: 0xffb20240  sd          $s2, 0x240($sp)
    ctx->pc = 0x2eaa98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 18));
label_2eaa9c:
    // 0x2eaa9c: 0xffb00220  sd          $s0, 0x220($sp)
    ctx->pc = 0x2eaa9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 16));
label_2eaaa0:
    // 0x2eaaa0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2eaaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2eaaa4:
    // 0x2eaaa4: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2eaaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2eaaa8:
    // 0x2eaaa8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_2eaaac:
    if (ctx->pc == 0x2EAAACu) {
        ctx->pc = 0x2EAAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAAA8u;
        // 0x2eaaac: 0x8e3000c0  lw          $s0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAAB0u;
        goto label_2eaab0;
    }
    ctx->pc = 0x2EAAA8u;
    {
        const bool branch_taken_0x2eaaa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAAA8u;
        // 0x2eaaac: 0x8e3000c0  lw          $s0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaaa8) {
            ctx->pc = 0x2EAB08u;
            goto label_2eab08;
        }
    }
    ctx->pc = 0x2EAAB0u;
label_2eaab0:
    // 0x2eaab0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2eaab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2eaab4:
    // 0x2eaab4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eaab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eaab8:
    // 0x2eaab8: 0xc049cb6  jal         func_1272D8
label_2eaabc:
    if (ctx->pc == 0x2EAABCu) {
        ctx->pc = 0x2EAABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAAB8u;
        // 0x2eaabc: 0x24060214  addiu       $a2, $zero, 0x214 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 532));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAAC0u;
        goto label_2eaac0;
    }
    ctx->pc = 0x2EAAB8u;
    SET_GPR_U32(ctx, 31, 0x2EAAC0u);
    ctx->pc = 0x2EAABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAAB8u;
    // 0x2eaabc: 0x24060214  addiu       $a2, $zero, 0x214 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 532));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2EAAB8u, 0x2EAAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAAC0u;
label_2eaac0:
    // 0x2eaac0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2eaac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2eaac4:
    // 0x2eaac4: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x2eaac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_2eaac8:
    // 0x2eaac8: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x2eaac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2eaacc:
    // 0x2eaacc: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2eaaccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2eaad0:
    // 0x2eaad0: 0xc04a966  jal         func_12A598
label_2eaad4:
    if (ctx->pc == 0x2EAAD4u) {
        ctx->pc = 0x2EAAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAAD0u;
        // 0x2eaad4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAAD8u;
        goto label_2eaad8;
    }
    ctx->pc = 0x2EAAD0u;
    SET_GPR_U32(ctx, 31, 0x2EAAD8u);
    ctx->pc = 0x2EAAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAAD0u;
    // 0x2eaad4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x2EAAD0u, 0x2EAAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAAD8u;
label_2eaad8:
    // 0x2eaad8: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2eaad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2eaadc:
    // 0x2eaadc: 0x27a40104  addiu       $a0, $sp, 0x104
    ctx->pc = 0x2eaadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
label_2eaae0:
    // 0x2eaae0: 0xc04a966  jal         func_12A598
label_2eaae4:
    if (ctx->pc == 0x2EAAE4u) {
        ctx->pc = 0x2EAAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAAE0u;
        // 0x2eaae4: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAAE8u;
        goto label_2eaae8;
    }
    ctx->pc = 0x2EAAE0u;
    SET_GPR_U32(ctx, 31, 0x2EAAE8u);
    ctx->pc = 0x2EAAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAAE0u;
    // 0x2eaae4: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x2EAAE0u, 0x2EAAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAAE8u;
label_2eaae8:
    // 0x2eaae8: 0x27a40204  addiu       $a0, $sp, 0x204
    ctx->pc = 0x2eaae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 516));
label_2eaaec:
    // 0x2eaaec: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x2eaaecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_2eaaf0:
    // 0x2eaaf0: 0xc04a966  jal         func_12A598
label_2eaaf4:
    if (ctx->pc == 0x2EAAF4u) {
        ctx->pc = 0x2EAAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAAF0u;
        // 0x2eaaf4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAAF8u;
        goto label_2eaaf8;
    }
    ctx->pc = 0x2EAAF0u;
    SET_GPR_U32(ctx, 31, 0x2EAAF8u);
    ctx->pc = 0x2EAAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAAF0u;
    // 0x2eaaf4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x2EAAF0u, 0x2EAAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAAF8u;
label_2eaaf8:
    // 0x2eaaf8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2eaaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2eaafc:
    // 0x2eaafc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x2eaafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_2eab00:
    // 0x2eab00: 0x40f809  jalr        $v0
label_2eab04:
    if (ctx->pc == 0x2EAB04u) {
        ctx->pc = 0x2EAB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB00u;
        // 0x2eab04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAB08u;
        goto label_2eab08;
    }
    ctx->pc = 0x2EAB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EAB08u);
        ctx->pc = 0x2EAB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB00u;
        // 0x2eab04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EAB00u, 0x2EAB08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EAB08u;
label_2eab08:
    // 0x2eab08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eab08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2eab0c:
    // 0x2eab0c: 0xc0ba934  jal         func_2EA4D0
label_2eab10:
    if (ctx->pc == 0x2EAB10u) {
        ctx->pc = 0x2EAB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB0Cu;
        // 0x2eab10: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAB14u;
        goto label_2eab14;
    }
    ctx->pc = 0x2EAB0Cu;
    SET_GPR_U32(ctx, 31, 0x2EAB14u);
    ctx->pc = 0x2EAB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAB0Cu;
    // 0x2eab10: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA4D0u, 0x2EAB0Cu, 0x2EAB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAB14u;
label_2eab14:
    // 0x2eab14: 0x26030180  addiu       $v1, $s0, 0x180
    ctx->pc = 0x2eab14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_2eab18:
    // 0x2eab18: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x2eab18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_2eab1c:
    // 0x2eab1c: 0xc043320  jal         func_10CC80
label_2eab20:
    if (ctx->pc == 0x2EAB20u) {
        ctx->pc = 0x2EAB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB1Cu;
        // 0x2eab20: 0xae2300b8  sw          $v1, 0xB8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAB24u;
        goto label_2eab24;
    }
    ctx->pc = 0x2EAB1Cu;
    SET_GPR_U32(ctx, 31, 0x2EAB24u);
    ctx->pc = 0x2EAB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAB1Cu;
    // 0x2eab20: 0xae2300b8  sw          $v1, 0xB8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x2EAB1Cu, 0x2EAB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAB24u;
label_2eab24:
    // 0x2eab24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eab24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2eab28:
    // 0x2eab28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2eab28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eab2c:
    // 0x2eab2c: 0xc0ba8d0  jal         func_2EA340
label_2eab30:
    if (ctx->pc == 0x2EAB30u) {
        ctx->pc = 0x2EAB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB2Cu;
        // 0x2eab30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAB34u;
        goto label_2eab34;
    }
    ctx->pc = 0x2EAB2Cu;
    SET_GPR_U32(ctx, 31, 0x2EAB34u);
    ctx->pc = 0x2EAB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAB2Cu;
    // 0x2eab30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA340u, 0x2EAB2Cu, 0x2EAB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAB34u;
label_2eab34:
    // 0x2eab34: 0xc043328  jal         func_10CCA0
label_2eab38:
    if (ctx->pc == 0x2EAB38u) {
        ctx->pc = 0x2EAB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB34u;
        // 0x2eab38: 0x8e042638  lw          $a0, 0x2638($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9784)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAB3Cu;
        goto label_2eab3c;
    }
    ctx->pc = 0x2EAB34u;
    SET_GPR_U32(ctx, 31, 0x2EAB3Cu);
    ctx->pc = 0x2EAB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAB34u;
    // 0x2eab38: 0x8e042638  lw          $a0, 0x2638($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9784)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x2EAB34u, 0x2EAB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAB3Cu;
label_2eab3c:
    // 0x2eab3c: 0x8e032e90  lw          $v1, 0x2E90($s0)
    ctx->pc = 0x2eab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11920)));
label_2eab40:
    // 0x2eab40: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2eab40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2eab44:
    // 0x2eab44: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_2eab48:
    if (ctx->pc == 0x2EAB48u) {
        ctx->pc = 0x2EAB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB44u;
        // 0x2eab48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAB4Cu;
        goto label_2eab4c;
    }
    ctx->pc = 0x2EAB44u;
    {
        const bool branch_taken_0x2eab44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB44u;
        // 0x2eab48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eab44) {
            ctx->pc = 0x2EABA0u;
            goto label_2eaba0;
        }
    }
    ctx->pc = 0x2EAB4Cu;
label_2eab4c:
    // 0x2eab4c: 0xc08c682  jal         func_231A08
label_2eab50:
    if (ctx->pc == 0x2EAB50u) {
        ctx->pc = 0x2EAB54u;
        goto label_2eab54;
    }
    ctx->pc = 0x2EAB4Cu;
    SET_GPR_U32(ctx, 31, 0x2EAB54u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x2EAB4Cu, 0x2EAB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAB54u;
label_2eab54:
    // 0x2eab54: 0x8e04263c  lw          $a0, 0x263C($s0)
    ctx->pc = 0x2eab54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9788)));
label_2eab58:
    // 0x2eab58: 0xc04332c  jal         func_10CCB0
label_2eab5c:
    if (ctx->pc == 0x2EAB5Cu) {
        ctx->pc = 0x2EAB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB58u;
        // 0x2eab5c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAB60u;
        goto label_2eab60;
    }
    ctx->pc = 0x2EAB58u;
    SET_GPR_U32(ctx, 31, 0x2EAB60u);
    ctx->pc = 0x2EAB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAB58u;
    // 0x2eab5c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x2EAB58u, 0x2EAB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAB60u;
label_2eab60:
    // 0x2eab60: 0x8e03263c  lw          $v1, 0x263C($s0)
    ctx->pc = 0x2eab60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9788)));
label_2eab64:
    // 0x2eab64: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_2eab68:
    if (ctx->pc == 0x2EAB68u) {
        ctx->pc = 0x2EAB6Cu;
        goto label_2eab6c;
    }
    ctx->pc = 0x2EAB64u;
    {
        const bool branch_taken_0x2eab64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2eab64) {
            ctx->pc = 0x2EAB74u;
            goto label_2eab74;
        }
    }
    ctx->pc = 0x2EAB6Cu;
label_2eab6c:
    // 0x2eab6c: 0xc0baa0e  jal         func_2EA838
label_2eab70:
    if (ctx->pc == 0x2EAB70u) {
        ctx->pc = 0x2EAB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB6Cu;
        // 0x2eab70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAB74u;
        goto label_2eab74;
    }
    ctx->pc = 0x2EAB6Cu;
    SET_GPR_U32(ctx, 31, 0x2EAB74u);
    ctx->pc = 0x2EAB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAB6Cu;
    // 0x2eab70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA838u;
    goto label_2ea838;
    ctx->pc = 0x2EAB74u;
label_2eab74:
    // 0x2eab74: 0xc04332c  jal         func_10CCB0
label_2eab78:
    if (ctx->pc == 0x2EAB78u) {
        ctx->pc = 0x2EAB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB74u;
        // 0x2eab78: 0x8e042640  lw          $a0, 0x2640($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9792)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAB7Cu;
        goto label_2eab7c;
    }
    ctx->pc = 0x2EAB74u;
    SET_GPR_U32(ctx, 31, 0x2EAB7Cu);
    ctx->pc = 0x2EAB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAB74u;
    // 0x2eab78: 0x8e042640  lw          $a0, 0x2640($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9792)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x2EAB74u, 0x2EAB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAB7Cu;
label_2eab7c:
    // 0x2eab7c: 0x8e032640  lw          $v1, 0x2640($s0)
    ctx->pc = 0x2eab7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9792)));
label_2eab80:
    // 0x2eab80: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_2eab84:
    if (ctx->pc == 0x2EAB84u) {
        ctx->pc = 0x2EAB88u;
        goto label_2eab88;
    }
    ctx->pc = 0x2EAB80u;
    {
        const bool branch_taken_0x2eab80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2eab80) {
            ctx->pc = 0x2EAB90u;
            goto label_2eab90;
        }
    }
    ctx->pc = 0x2EAB88u;
label_2eab88:
    // 0x2eab88: 0xc0ba9b2  jal         func_2EA6C8
label_2eab8c:
    if (ctx->pc == 0x2EAB8Cu) {
        ctx->pc = 0x2EAB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB88u;
        // 0x2eab8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAB90u;
        goto label_2eab90;
    }
    ctx->pc = 0x2EAB88u;
    SET_GPR_U32(ctx, 31, 0x2EAB90u);
    ctx->pc = 0x2EAB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAB88u;
    // 0x2eab8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA6C8u, 0x2EAB88u, 0x2EAB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAB90u;
label_2eab90:
    // 0x2eab90: 0xc08c698  jal         func_231A60
label_2eab94:
    if (ctx->pc == 0x2EAB94u) {
        ctx->pc = 0x2EAB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB90u;
        // 0x2eab94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAB98u;
        goto label_2eab98;
    }
    ctx->pc = 0x2EAB90u;
    SET_GPR_U32(ctx, 31, 0x2EAB98u);
    ctx->pc = 0x2EAB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAB90u;
    // 0x2eab94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x2EAB90u, 0x2EAB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAB98u;
label_2eab98:
    // 0x2eab98: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
label_2eab9c:
    if (ctx->pc == 0x2EAB9Cu) {
        ctx->pc = 0x2EABA0u;
        goto label_2eaba0;
    }
    ctx->pc = 0x2EAB98u;
    {
        const bool branch_taken_0x2eab98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eab98) {
            ctx->pc = 0x2EAB34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eab34;
        }
    }
    ctx->pc = 0x2EABA0u;
label_2eaba0:
    // 0x2eaba0: 0xc0ba990  jal         func_2EA640
label_2eaba4:
    if (ctx->pc == 0x2EABA4u) {
        ctx->pc = 0x2EABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EABA0u;
        // 0x2eaba4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EABA8u;
        goto label_2eaba8;
    }
    ctx->pc = 0x2EABA0u;
    SET_GPR_U32(ctx, 31, 0x2EABA8u);
    ctx->pc = 0x2EABA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EABA0u;
    // 0x2eaba4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA640u, 0x2EABA0u, 0x2EABA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EABA8u;
label_2eaba8:
    // 0x2eaba8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2eaba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2eabac:
    // 0x2eabac: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x2eabacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_2eabb0:
    // 0x2eabb0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2eabb4:
    if (ctx->pc == 0x2EABB4u) {
        ctx->pc = 0x2EABB8u;
        goto label_2eabb8;
    }
    ctx->pc = 0x2EABB0u;
    {
        const bool branch_taken_0x2eabb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eabb0) {
            ctx->pc = 0x2EABC0u;
            goto label_2eabc0;
        }
    }
    ctx->pc = 0x2EABB8u;
label_2eabb8:
    // 0x2eabb8: 0x40f809  jalr        $v0
label_2eabbc:
    if (ctx->pc == 0x2EABBCu) {
        ctx->pc = 0x2EABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EABB8u;
        // 0x2eabbc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EABC0u;
        goto label_2eabc0;
    }
    ctx->pc = 0x2EABB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EABC0u);
        ctx->pc = 0x2EABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EABB8u;
        // 0x2eabbc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EABB8u, 0x2EABC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EABC0u;
label_2eabc0:
    // 0x2eabc0: 0xc043320  jal         func_10CC80
label_2eabc4:
    if (ctx->pc == 0x2EABC4u) {
        ctx->pc = 0x2EABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EABC0u;
        // 0x2eabc4: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EABC8u;
        goto label_2eabc8;
    }
    ctx->pc = 0x2EABC0u;
    SET_GPR_U32(ctx, 31, 0x2EABC8u);
    ctx->pc = 0x2EABC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EABC0u;
    // 0x2eabc4: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x2EABC0u, 0x2EABC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EABC8u;
label_2eabc8:
    // 0x2eabc8: 0xdfbf0250  ld          $ra, 0x250($sp)
    ctx->pc = 0x2eabc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 592)));
label_2eabcc:
    // 0x2eabcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2eabccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eabd0:
    // 0x2eabd0: 0xdfb20240  ld          $s2, 0x240($sp)
    ctx->pc = 0x2eabd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 576)));
label_2eabd4:
    // 0x2eabd4: 0xdfb10230  ld          $s1, 0x230($sp)
    ctx->pc = 0x2eabd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 560)));
label_2eabd8:
    // 0x2eabd8: 0xdfb00220  ld          $s0, 0x220($sp)
    ctx->pc = 0x2eabd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 544)));
label_2eabdc:
    // 0x2eabdc: 0x3e00008  jr          $ra
label_2eabe0:
    if (ctx->pc == 0x2EABE0u) {
        ctx->pc = 0x2EABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EABDCu;
        // 0x2eabe0: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EABE4u;
        goto label_2eabe4;
    }
    ctx->pc = 0x2EABDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EABDCu;
        // 0x2eabe0: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EABDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EABE4u;
label_2eabe4:
    // 0x2eabe4: 0x0  nop
    ctx->pc = 0x2eabe4u;
    // NOP
label_2eabe8:
    // 0x2eabe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eabe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2eabec:
    // 0x2eabec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2eabecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eabf0:
    // 0x2eabf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2eabf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2eabf4:
    // 0x2eabf4: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x2eabf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_2eabf8:
    // 0x2eabf8: 0x8c442638  lw          $a0, 0x2638($v0)
    ctx->pc = 0x2eabf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9784)));
label_2eabfc:
    // 0x2eabfc: 0xc043320  jal         func_10CC80
label_2eac00:
    if (ctx->pc == 0x2EAC00u) {
        ctx->pc = 0x2EAC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EABFCu;
        // 0x2eac00: 0xac432e90  sw          $v1, 0x2E90($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 11920), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAC04u;
        goto label_2eac04;
    }
    ctx->pc = 0x2EABFCu;
    SET_GPR_U32(ctx, 31, 0x2EAC04u);
    ctx->pc = 0x2EAC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EABFCu;
    // 0x2eac00: 0xac432e90  sw          $v1, 0x2E90($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 11920), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x2EABFCu, 0x2EAC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC04u;
label_2eac04:
    // 0x2eac04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eac04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2eac08:
    // 0x2eac08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2eac08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eac0c:
    // 0x2eac0c: 0x3e00008  jr          $ra
label_2eac10:
    if (ctx->pc == 0x2EAC10u) {
        ctx->pc = 0x2EAC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC0Cu;
        // 0x2eac10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAC14u;
        goto label_2eac14;
    }
    ctx->pc = 0x2EAC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EAC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC0Cu;
        // 0x2eac10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EAC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EAC14u;
label_2eac14:
    // 0x2eac14: 0x0  nop
    ctx->pc = 0x2eac14u;
    // NOP
    if (ctx->pc == 0x2eac14u) { ctx->pc = 0x2eac18u; }
}
