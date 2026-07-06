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

// Function: sub_001DE7A0
// Address: 0x1de7a0 - 0x1debc0
void sub_001DE7A0_0x1de7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE7A0_0x1de7a0");
#endif

    switch (ctx->pc) {
        case 0x1de7a0u: goto label_1de7a0;
        case 0x1de7a4u: goto label_1de7a4;
        case 0x1de7a8u: goto label_1de7a8;
        case 0x1de7acu: goto label_1de7ac;
        case 0x1de7b0u: goto label_1de7b0;
        case 0x1de7b4u: goto label_1de7b4;
        case 0x1de7b8u: goto label_1de7b8;
        case 0x1de7bcu: goto label_1de7bc;
        case 0x1de7c0u: goto label_1de7c0;
        case 0x1de7c4u: goto label_1de7c4;
        case 0x1de7c8u: goto label_1de7c8;
        case 0x1de7ccu: goto label_1de7cc;
        case 0x1de7d0u: goto label_1de7d0;
        case 0x1de7d4u: goto label_1de7d4;
        case 0x1de7d8u: goto label_1de7d8;
        case 0x1de7dcu: goto label_1de7dc;
        case 0x1de7e0u: goto label_1de7e0;
        case 0x1de7e4u: goto label_1de7e4;
        case 0x1de7e8u: goto label_1de7e8;
        case 0x1de7ecu: goto label_1de7ec;
        case 0x1de7f0u: goto label_1de7f0;
        case 0x1de7f4u: goto label_1de7f4;
        case 0x1de7f8u: goto label_1de7f8;
        case 0x1de7fcu: goto label_1de7fc;
        case 0x1de800u: goto label_1de800;
        case 0x1de804u: goto label_1de804;
        case 0x1de808u: goto label_1de808;
        case 0x1de80cu: goto label_1de80c;
        case 0x1de810u: goto label_1de810;
        case 0x1de814u: goto label_1de814;
        case 0x1de818u: goto label_1de818;
        case 0x1de81cu: goto label_1de81c;
        case 0x1de820u: goto label_1de820;
        case 0x1de824u: goto label_1de824;
        case 0x1de828u: goto label_1de828;
        case 0x1de82cu: goto label_1de82c;
        case 0x1de830u: goto label_1de830;
        case 0x1de834u: goto label_1de834;
        case 0x1de838u: goto label_1de838;
        case 0x1de83cu: goto label_1de83c;
        case 0x1de840u: goto label_1de840;
        case 0x1de844u: goto label_1de844;
        case 0x1de848u: goto label_1de848;
        case 0x1de84cu: goto label_1de84c;
        case 0x1de850u: goto label_1de850;
        case 0x1de854u: goto label_1de854;
        case 0x1de858u: goto label_1de858;
        case 0x1de85cu: goto label_1de85c;
        case 0x1de860u: goto label_1de860;
        case 0x1de864u: goto label_1de864;
        case 0x1de868u: goto label_1de868;
        case 0x1de86cu: goto label_1de86c;
        case 0x1de870u: goto label_1de870;
        case 0x1de874u: goto label_1de874;
        case 0x1de878u: goto label_1de878;
        case 0x1de87cu: goto label_1de87c;
        case 0x1de880u: goto label_1de880;
        case 0x1de884u: goto label_1de884;
        case 0x1de888u: goto label_1de888;
        case 0x1de88cu: goto label_1de88c;
        case 0x1de890u: goto label_1de890;
        case 0x1de894u: goto label_1de894;
        case 0x1de898u: goto label_1de898;
        case 0x1de89cu: goto label_1de89c;
        case 0x1de8a0u: goto label_1de8a0;
        case 0x1de8a4u: goto label_1de8a4;
        case 0x1de8a8u: goto label_1de8a8;
        case 0x1de8acu: goto label_1de8ac;
        case 0x1de8b0u: goto label_1de8b0;
        case 0x1de8b4u: goto label_1de8b4;
        case 0x1de8b8u: goto label_1de8b8;
        case 0x1de8bcu: goto label_1de8bc;
        case 0x1de8c0u: goto label_1de8c0;
        case 0x1de8c4u: goto label_1de8c4;
        case 0x1de8c8u: goto label_1de8c8;
        case 0x1de8ccu: goto label_1de8cc;
        case 0x1de8d0u: goto label_1de8d0;
        case 0x1de8d4u: goto label_1de8d4;
        case 0x1de8d8u: goto label_1de8d8;
        case 0x1de8dcu: goto label_1de8dc;
        case 0x1de8e0u: goto label_1de8e0;
        case 0x1de8e4u: goto label_1de8e4;
        case 0x1de8e8u: goto label_1de8e8;
        case 0x1de8ecu: goto label_1de8ec;
        case 0x1de8f0u: goto label_1de8f0;
        case 0x1de8f4u: goto label_1de8f4;
        case 0x1de8f8u: goto label_1de8f8;
        case 0x1de8fcu: goto label_1de8fc;
        case 0x1de900u: goto label_1de900;
        case 0x1de904u: goto label_1de904;
        case 0x1de908u: goto label_1de908;
        case 0x1de90cu: goto label_1de90c;
        case 0x1de910u: goto label_1de910;
        case 0x1de914u: goto label_1de914;
        case 0x1de918u: goto label_1de918;
        case 0x1de91cu: goto label_1de91c;
        case 0x1de920u: goto label_1de920;
        case 0x1de924u: goto label_1de924;
        case 0x1de928u: goto label_1de928;
        case 0x1de92cu: goto label_1de92c;
        case 0x1de930u: goto label_1de930;
        case 0x1de934u: goto label_1de934;
        case 0x1de938u: goto label_1de938;
        case 0x1de93cu: goto label_1de93c;
        case 0x1de940u: goto label_1de940;
        case 0x1de944u: goto label_1de944;
        case 0x1de948u: goto label_1de948;
        case 0x1de94cu: goto label_1de94c;
        case 0x1de950u: goto label_1de950;
        case 0x1de954u: goto label_1de954;
        case 0x1de958u: goto label_1de958;
        case 0x1de95cu: goto label_1de95c;
        case 0x1de960u: goto label_1de960;
        case 0x1de964u: goto label_1de964;
        case 0x1de968u: goto label_1de968;
        case 0x1de96cu: goto label_1de96c;
        case 0x1de970u: goto label_1de970;
        case 0x1de974u: goto label_1de974;
        case 0x1de978u: goto label_1de978;
        case 0x1de97cu: goto label_1de97c;
        case 0x1de980u: goto label_1de980;
        case 0x1de984u: goto label_1de984;
        case 0x1de988u: goto label_1de988;
        case 0x1de98cu: goto label_1de98c;
        case 0x1de990u: goto label_1de990;
        case 0x1de994u: goto label_1de994;
        case 0x1de998u: goto label_1de998;
        case 0x1de99cu: goto label_1de99c;
        case 0x1de9a0u: goto label_1de9a0;
        case 0x1de9a4u: goto label_1de9a4;
        case 0x1de9a8u: goto label_1de9a8;
        case 0x1de9acu: goto label_1de9ac;
        case 0x1de9b0u: goto label_1de9b0;
        case 0x1de9b4u: goto label_1de9b4;
        case 0x1de9b8u: goto label_1de9b8;
        case 0x1de9bcu: goto label_1de9bc;
        case 0x1de9c0u: goto label_1de9c0;
        case 0x1de9c4u: goto label_1de9c4;
        case 0x1de9c8u: goto label_1de9c8;
        case 0x1de9ccu: goto label_1de9cc;
        case 0x1de9d0u: goto label_1de9d0;
        case 0x1de9d4u: goto label_1de9d4;
        case 0x1de9d8u: goto label_1de9d8;
        case 0x1de9dcu: goto label_1de9dc;
        case 0x1de9e0u: goto label_1de9e0;
        case 0x1de9e4u: goto label_1de9e4;
        case 0x1de9e8u: goto label_1de9e8;
        case 0x1de9ecu: goto label_1de9ec;
        case 0x1de9f0u: goto label_1de9f0;
        case 0x1de9f4u: goto label_1de9f4;
        case 0x1de9f8u: goto label_1de9f8;
        case 0x1de9fcu: goto label_1de9fc;
        case 0x1dea00u: goto label_1dea00;
        case 0x1dea04u: goto label_1dea04;
        case 0x1dea08u: goto label_1dea08;
        case 0x1dea0cu: goto label_1dea0c;
        case 0x1dea10u: goto label_1dea10;
        case 0x1dea14u: goto label_1dea14;
        case 0x1dea18u: goto label_1dea18;
        case 0x1dea1cu: goto label_1dea1c;
        case 0x1dea20u: goto label_1dea20;
        case 0x1dea24u: goto label_1dea24;
        case 0x1dea28u: goto label_1dea28;
        case 0x1dea2cu: goto label_1dea2c;
        case 0x1dea30u: goto label_1dea30;
        case 0x1dea34u: goto label_1dea34;
        case 0x1dea38u: goto label_1dea38;
        case 0x1dea3cu: goto label_1dea3c;
        case 0x1dea40u: goto label_1dea40;
        case 0x1dea44u: goto label_1dea44;
        case 0x1dea48u: goto label_1dea48;
        case 0x1dea4cu: goto label_1dea4c;
        case 0x1dea50u: goto label_1dea50;
        case 0x1dea54u: goto label_1dea54;
        case 0x1dea58u: goto label_1dea58;
        case 0x1dea5cu: goto label_1dea5c;
        case 0x1dea60u: goto label_1dea60;
        case 0x1dea64u: goto label_1dea64;
        case 0x1dea68u: goto label_1dea68;
        case 0x1dea6cu: goto label_1dea6c;
        case 0x1dea70u: goto label_1dea70;
        case 0x1dea74u: goto label_1dea74;
        case 0x1dea78u: goto label_1dea78;
        case 0x1dea7cu: goto label_1dea7c;
        case 0x1dea80u: goto label_1dea80;
        case 0x1dea84u: goto label_1dea84;
        case 0x1dea88u: goto label_1dea88;
        case 0x1dea8cu: goto label_1dea8c;
        case 0x1dea90u: goto label_1dea90;
        case 0x1dea94u: goto label_1dea94;
        case 0x1dea98u: goto label_1dea98;
        case 0x1dea9cu: goto label_1dea9c;
        case 0x1deaa0u: goto label_1deaa0;
        case 0x1deaa4u: goto label_1deaa4;
        case 0x1deaa8u: goto label_1deaa8;
        case 0x1deaacu: goto label_1deaac;
        case 0x1deab0u: goto label_1deab0;
        case 0x1deab4u: goto label_1deab4;
        case 0x1deab8u: goto label_1deab8;
        case 0x1deabcu: goto label_1deabc;
        case 0x1deac0u: goto label_1deac0;
        case 0x1deac4u: goto label_1deac4;
        case 0x1deac8u: goto label_1deac8;
        case 0x1deaccu: goto label_1deacc;
        case 0x1dead0u: goto label_1dead0;
        case 0x1dead4u: goto label_1dead4;
        case 0x1dead8u: goto label_1dead8;
        case 0x1deadcu: goto label_1deadc;
        case 0x1deae0u: goto label_1deae0;
        case 0x1deae4u: goto label_1deae4;
        case 0x1deae8u: goto label_1deae8;
        case 0x1deaecu: goto label_1deaec;
        case 0x1deaf0u: goto label_1deaf0;
        case 0x1deaf4u: goto label_1deaf4;
        case 0x1deaf8u: goto label_1deaf8;
        case 0x1deafcu: goto label_1deafc;
        case 0x1deb00u: goto label_1deb00;
        case 0x1deb04u: goto label_1deb04;
        case 0x1deb08u: goto label_1deb08;
        case 0x1deb0cu: goto label_1deb0c;
        case 0x1deb10u: goto label_1deb10;
        case 0x1deb14u: goto label_1deb14;
        case 0x1deb18u: goto label_1deb18;
        case 0x1deb1cu: goto label_1deb1c;
        case 0x1deb20u: goto label_1deb20;
        case 0x1deb24u: goto label_1deb24;
        case 0x1deb28u: goto label_1deb28;
        case 0x1deb2cu: goto label_1deb2c;
        case 0x1deb30u: goto label_1deb30;
        case 0x1deb34u: goto label_1deb34;
        case 0x1deb38u: goto label_1deb38;
        case 0x1deb3cu: goto label_1deb3c;
        case 0x1deb40u: goto label_1deb40;
        case 0x1deb44u: goto label_1deb44;
        case 0x1deb48u: goto label_1deb48;
        case 0x1deb4cu: goto label_1deb4c;
        case 0x1deb50u: goto label_1deb50;
        case 0x1deb54u: goto label_1deb54;
        case 0x1deb58u: goto label_1deb58;
        case 0x1deb5cu: goto label_1deb5c;
        case 0x1deb60u: goto label_1deb60;
        case 0x1deb64u: goto label_1deb64;
        case 0x1deb68u: goto label_1deb68;
        case 0x1deb6cu: goto label_1deb6c;
        case 0x1deb70u: goto label_1deb70;
        case 0x1deb74u: goto label_1deb74;
        case 0x1deb78u: goto label_1deb78;
        case 0x1deb7cu: goto label_1deb7c;
        case 0x1deb80u: goto label_1deb80;
        case 0x1deb84u: goto label_1deb84;
        case 0x1deb88u: goto label_1deb88;
        case 0x1deb8cu: goto label_1deb8c;
        case 0x1deb90u: goto label_1deb90;
        case 0x1deb94u: goto label_1deb94;
        case 0x1deb98u: goto label_1deb98;
        case 0x1deb9cu: goto label_1deb9c;
        case 0x1deba0u: goto label_1deba0;
        case 0x1deba4u: goto label_1deba4;
        case 0x1deba8u: goto label_1deba8;
        case 0x1debacu: goto label_1debac;
        case 0x1debb0u: goto label_1debb0;
        case 0x1debb4u: goto label_1debb4;
        case 0x1debb8u: goto label_1debb8;
        case 0x1debbcu: goto label_1debbc;
        default: break;
    }

    ctx->pc = 0x1de7a0u;

label_1de7a0:
    // 0x1de7a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1de7a4:
    // 0x1de7a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1de7a8:
    // 0x1de7a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1de7ac:
    // 0x1de7ac: 0x80779ee  j           func_1DE7B8
label_1de7b0:
    if (ctx->pc == 0x1DE7B0u) {
        ctx->pc = 0x1DE7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7ACu;
        // 0x1de7b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE7B4u;
        goto label_1de7b4;
    }
    ctx->pc = 0x1DE7ACu;
    ctx->pc = 0x1DE7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE7ACu;
    // 0x1de7b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE7B8u;
    goto label_1de7b8;
    ctx->pc = 0x1DE7B4u;
label_1de7b4:
    // 0x1de7b4: 0x0  nop
    ctx->pc = 0x1de7b4u;
    // NOP
label_1de7b8:
    // 0x1de7b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1de7bc:
    // 0x1de7bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1de7c0:
    // 0x1de7c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1de7c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1de7c4:
    // 0x1de7c4: 0x12000042  beqz        $s0, . + 4 + (0x42 << 2)
label_1de7c8:
    if (ctx->pc == 0x1DE7C8u) {
        ctx->pc = 0x1DE7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7C4u;
        // 0x1de7c8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE7CCu;
        goto label_1de7cc;
    }
    ctx->pc = 0x1DE7C4u;
    {
        const bool branch_taken_0x1de7c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7C4u;
        // 0x1de7c8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de7c4) {
            ctx->pc = 0x1DE8D0u;
            goto label_1de8d0;
        }
    }
    ctx->pc = 0x1DE7CCu;
label_1de7cc:
    // 0x1de7cc: 0xc079e92  jal         func_1E7A48
label_1de7d0:
    if (ctx->pc == 0x1DE7D0u) {
        ctx->pc = 0x1DE7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7CCu;
        // 0x1de7d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE7D4u;
        goto label_1de7d4;
    }
    ctx->pc = 0x1DE7CCu;
    SET_GPR_U32(ctx, 31, 0x1DE7D4u);
    ctx->pc = 0x1DE7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE7CCu;
    // 0x1de7d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7A48u, 0x1DE7CCu, 0x1DE7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE7D4u;
label_1de7d4:
    // 0x1de7d4: 0xc0785ba  jal         func_1E16E8
label_1de7d8:
    if (ctx->pc == 0x1DE7D8u) {
        ctx->pc = 0x1DE7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7D4u;
        // 0x1de7d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE7DCu;
        goto label_1de7dc;
    }
    ctx->pc = 0x1DE7D4u;
    SET_GPR_U32(ctx, 31, 0x1DE7DCu);
    ctx->pc = 0x1DE7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE7D4u;
    // 0x1de7d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E16E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E16E8u, 0x1DE7D4u, 0x1DE7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE7DCu;
label_1de7dc:
    // 0x1de7dc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1de7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1de7e0:
    // 0x1de7e0: 0xc079e92  jal         func_1E7A48
label_1de7e4:
    if (ctx->pc == 0x1DE7E4u) {
        ctx->pc = 0x1DE7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7E0u;
        // 0x1de7e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE7E8u;
        goto label_1de7e8;
    }
    ctx->pc = 0x1DE7E0u;
    SET_GPR_U32(ctx, 31, 0x1DE7E8u);
    ctx->pc = 0x1DE7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE7E0u;
    // 0x1de7e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7A48u, 0x1DE7E0u, 0x1DE7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE7E8u;
label_1de7e8:
    // 0x1de7e8: 0xc0791a0  jal         func_1E4680
label_1de7ec:
    if (ctx->pc == 0x1DE7ECu) {
        ctx->pc = 0x1DE7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7E8u;
        // 0x1de7ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE7F0u;
        goto label_1de7f0;
    }
    ctx->pc = 0x1DE7E8u;
    SET_GPR_U32(ctx, 31, 0x1DE7F0u);
    ctx->pc = 0x1DE7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE7E8u;
    // 0x1de7ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4680u, 0x1DE7E8u, 0x1DE7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE7F0u;
label_1de7f0:
    // 0x1de7f0: 0x8e0400a8  lw          $a0, 0xA8($s0)
    ctx->pc = 0x1de7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_1de7f4:
    // 0x1de7f4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1de7f8:
    if (ctx->pc == 0x1DE7F8u) {
        ctx->pc = 0x1DE7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7F4u;
        // 0x1de7f8: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE7FCu;
        goto label_1de7fc;
    }
    ctx->pc = 0x1DE7F4u;
    {
        const bool branch_taken_0x1de7f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de7f4) {
            ctx->pc = 0x1DE7F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE7F4u;
            // 0x1de7f8: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE808u;
            goto label_1de808;
        }
    }
    ctx->pc = 0x1DE7FCu;
label_1de7fc:
    // 0x1de7fc: 0xc078e8a  jal         func_1E3A28
label_1de800:
    if (ctx->pc == 0x1DE800u) {
        ctx->pc = 0x1DE804u;
        goto label_1de804;
    }
    ctx->pc = 0x1DE7FCu;
    SET_GPR_U32(ctx, 31, 0x1DE804u);
    ctx->pc = 0x1E3A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A28u, 0x1DE7FCu, 0x1DE804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE804u;
label_1de804:
    // 0x1de804: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x1de804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1de808:
    // 0x1de808: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1de80c:
    if (ctx->pc == 0x1DE80Cu) {
        ctx->pc = 0x1DE80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE808u;
        // 0x1de80c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE810u;
        goto label_1de810;
    }
    ctx->pc = 0x1DE808u;
    {
        const bool branch_taken_0x1de808 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de808) {
            ctx->pc = 0x1DE80Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE808u;
            // 0x1de80c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE81Cu;
            goto label_1de81c;
        }
    }
    ctx->pc = 0x1DE810u;
label_1de810:
    // 0x1de810: 0xc07179a  jal         func_1C5E68
label_1de814:
    if (ctx->pc == 0x1DE814u) {
        ctx->pc = 0x1DE818u;
        goto label_1de818;
    }
    ctx->pc = 0x1DE810u;
    SET_GPR_U32(ctx, 31, 0x1DE818u);
    ctx->pc = 0x1C5E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5E68u, 0x1DE810u, 0x1DE818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE818u;
label_1de818:
    // 0x1de818: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x1de818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1de81c:
    // 0x1de81c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1de820:
    if (ctx->pc == 0x1DE820u) {
        ctx->pc = 0x1DE820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE81Cu;
        // 0x1de820: 0x8e0403c4  lw          $a0, 0x3C4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 964)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE824u;
        goto label_1de824;
    }
    ctx->pc = 0x1DE81Cu;
    {
        const bool branch_taken_0x1de81c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de81c) {
            ctx->pc = 0x1DE820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE81Cu;
            // 0x1de820: 0x8e0403c4  lw          $a0, 0x3C4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 964)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE830u;
            goto label_1de830;
        }
    }
    ctx->pc = 0x1DE824u;
label_1de824:
    // 0x1de824: 0xc079f5e  jal         func_1E7D78
label_1de828:
    if (ctx->pc == 0x1DE828u) {
        ctx->pc = 0x1DE82Cu;
        goto label_1de82c;
    }
    ctx->pc = 0x1DE824u;
    SET_GPR_U32(ctx, 31, 0x1DE82Cu);
    ctx->pc = 0x1E7D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7D78u, 0x1DE824u, 0x1DE82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE82Cu;
label_1de82c:
    // 0x1de82c: 0x8e0403c4  lw          $a0, 0x3C4($s0)
    ctx->pc = 0x1de82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 964)));
label_1de830:
    // 0x1de830: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_1de834:
    if (ctx->pc == 0x1DE834u) {
        ctx->pc = 0x1DE834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE830u;
        // 0x1de834: 0x8e0403e4  lw          $a0, 0x3E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 996)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE838u;
        goto label_1de838;
    }
    ctx->pc = 0x1DE830u;
    {
        const bool branch_taken_0x1de830 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de830) {
            ctx->pc = 0x1DE834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE830u;
            // 0x1de834: 0x8e0403e4  lw          $a0, 0x3E4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 996)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE84Cu;
            goto label_1de84c;
        }
    }
    ctx->pc = 0x1DE838u;
label_1de838:
    // 0x1de838: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1de838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1de83c:
    // 0x1de83c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1de83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1de840:
    // 0x1de840: 0x40f809  jalr        $v0
label_1de844:
    if (ctx->pc == 0x1DE844u) {
        ctx->pc = 0x1DE848u;
        goto label_1de848;
    }
    ctx->pc = 0x1DE840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DE848u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE840u, 0x1DE848u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DE848u;
label_1de848:
    // 0x1de848: 0x8e0403e4  lw          $a0, 0x3E4($s0)
    ctx->pc = 0x1de848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 996)));
label_1de84c:
    // 0x1de84c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_1de850:
    if (ctx->pc == 0x1DE850u) {
        ctx->pc = 0x1DE850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE84Cu;
        // 0x1de850: 0x8e0404d4  lw          $a0, 0x4D4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE854u;
        goto label_1de854;
    }
    ctx->pc = 0x1DE84Cu;
    {
        const bool branch_taken_0x1de84c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de84c) {
            ctx->pc = 0x1DE850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE84Cu;
            // 0x1de850: 0x8e0404d4  lw          $a0, 0x4D4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE868u;
            goto label_1de868;
        }
    }
    ctx->pc = 0x1DE854u;
label_1de854:
    // 0x1de854: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1de854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1de858:
    // 0x1de858: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1de858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1de85c:
    // 0x1de85c: 0x40f809  jalr        $v0
label_1de860:
    if (ctx->pc == 0x1DE860u) {
        ctx->pc = 0x1DE864u;
        goto label_1de864;
    }
    ctx->pc = 0x1DE85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DE864u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE85Cu, 0x1DE864u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DE864u;
label_1de864:
    // 0x1de864: 0x8e0404d4  lw          $a0, 0x4D4($s0)
    ctx->pc = 0x1de864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_1de868:
    // 0x1de868: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1de86c:
    if (ctx->pc == 0x1DE86Cu) {
        ctx->pc = 0x1DE86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE868u;
        // 0x1de86c: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE870u;
        goto label_1de870;
    }
    ctx->pc = 0x1DE868u;
    {
        const bool branch_taken_0x1de868 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de868) {
            ctx->pc = 0x1DE86Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE868u;
            // 0x1de86c: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE87Cu;
            goto label_1de87c;
        }
    }
    ctx->pc = 0x1DE870u;
label_1de870:
    // 0x1de870: 0xc0772f8  jal         func_1DCBE0
label_1de874:
    if (ctx->pc == 0x1DE874u) {
        ctx->pc = 0x1DE878u;
        goto label_1de878;
    }
    ctx->pc = 0x1DE870u;
    SET_GPR_U32(ctx, 31, 0x1DE878u);
    ctx->pc = 0x1DCBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBE0u, 0x1DE870u, 0x1DE878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE878u;
label_1de878:
    // 0x1de878: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1de878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1de87c:
    // 0x1de87c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1de880:
    if (ctx->pc == 0x1DE880u) {
        ctx->pc = 0x1DE884u;
        goto label_1de884;
    }
    ctx->pc = 0x1DE87Cu;
    {
        const bool branch_taken_0x1de87c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de87c) {
            ctx->pc = 0x1DE88Cu;
            goto label_1de88c;
        }
    }
    ctx->pc = 0x1DE884u;
label_1de884:
    // 0x1de884: 0xc0777ea  jal         func_1DDFA8
label_1de888:
    if (ctx->pc == 0x1DE888u) {
        ctx->pc = 0x1DE88Cu;
        goto label_1de88c;
    }
    ctx->pc = 0x1DE884u;
    SET_GPR_U32(ctx, 31, 0x1DE88Cu);
    ctx->pc = 0x1DDFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDFA8u, 0x1DE884u, 0x1DE88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE88Cu;
label_1de88c:
    // 0x1de88c: 0xc0799ca  jal         func_1E6728
label_1de890:
    if (ctx->pc == 0x1DE890u) {
        ctx->pc = 0x1DE890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE88Cu;
        // 0x1de890: 0x26040488  addiu       $a0, $s0, 0x488 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE894u;
        goto label_1de894;
    }
    ctx->pc = 0x1DE88Cu;
    SET_GPR_U32(ctx, 31, 0x1DE894u);
    ctx->pc = 0x1DE890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE88Cu;
    // 0x1de890: 0x26040488  addiu       $a0, $s0, 0x488 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6728u, 0x1DE88Cu, 0x1DE894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE894u;
label_1de894:
    // 0x1de894: 0xc0799ca  jal         func_1E6728
label_1de898:
    if (ctx->pc == 0x1DE898u) {
        ctx->pc = 0x1DE898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE894u;
        // 0x1de898: 0x260404a8  addiu       $a0, $s0, 0x4A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE89Cu;
        goto label_1de89c;
    }
    ctx->pc = 0x1DE894u;
    SET_GPR_U32(ctx, 31, 0x1DE89Cu);
    ctx->pc = 0x1DE898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE894u;
    // 0x1de898: 0x260404a8  addiu       $a0, $s0, 0x4A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6728u, 0x1DE894u, 0x1DE89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE89Cu;
label_1de89c:
    // 0x1de89c: 0xc077b9e  jal         func_1DEE78
label_1de8a0:
    if (ctx->pc == 0x1DE8A0u) {
        ctx->pc = 0x1DE8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE89Cu;
        // 0x1de8a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE8A4u;
        goto label_1de8a4;
    }
    ctx->pc = 0x1DE89Cu;
    SET_GPR_U32(ctx, 31, 0x1DE8A4u);
    ctx->pc = 0x1DE8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE89Cu;
    // 0x1de8a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE78u, 0x1DE89Cu, 0x1DE8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE8A4u;
label_1de8a4:
    // 0x1de8a4: 0xc077bbe  jal         func_1DEEF8
label_1de8a8:
    if (ctx->pc == 0x1DE8A8u) {
        ctx->pc = 0x1DE8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE8A4u;
        // 0x1de8a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE8ACu;
        goto label_1de8ac;
    }
    ctx->pc = 0x1DE8A4u;
    SET_GPR_U32(ctx, 31, 0x1DE8ACu);
    ctx->pc = 0x1DE8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE8A4u;
    // 0x1de8a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEEF8u, 0x1DE8A4u, 0x1DE8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE8ACu;
label_1de8ac:
    // 0x1de8ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1de8b0:
    if (ctx->pc == 0x1DE8B0u) {
        ctx->pc = 0x1DE8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE8ACu;
        // 0x1de8b0: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE8B4u;
        goto label_1de8b4;
    }
    ctx->pc = 0x1DE8ACu;
    {
        const bool branch_taken_0x1de8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE8ACu;
        // 0x1de8b0: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de8ac) {
            ctx->pc = 0x1DE8BCu;
            goto label_1de8bc;
        }
    }
    ctx->pc = 0x1DE8B4u;
label_1de8b4:
    // 0x1de8b4: 0xc079afa  jal         func_1E6BE8
label_1de8b8:
    if (ctx->pc == 0x1DE8B8u) {
        ctx->pc = 0x1DE8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE8B4u;
        // 0x1de8b8: 0x2484c8e0  addiu       $a0, $a0, -0x3720 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE8BCu;
        goto label_1de8bc;
    }
    ctx->pc = 0x1DE8B4u;
    SET_GPR_U32(ctx, 31, 0x1DE8BCu);
    ctx->pc = 0x1DE8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE8B4u;
    // 0x1de8b8: 0x2484c8e0  addiu       $a0, $a0, -0x3720 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1DE8B4u, 0x1DE8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE8BCu;
label_1de8bc:
    // 0x1de8bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1de8c0:
    // 0x1de8c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1de8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de8c4:
    // 0x1de8c4: 0xc049cb6  jal         func_1272D8
label_1de8c8:
    if (ctx->pc == 0x1DE8C8u) {
        ctx->pc = 0x1DE8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE8C4u;
        // 0x1de8c8: 0x2406050c  addiu       $a2, $zero, 0x50C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE8CCu;
        goto label_1de8cc;
    }
    ctx->pc = 0x1DE8C4u;
    SET_GPR_U32(ctx, 31, 0x1DE8CCu);
    ctx->pc = 0x1DE8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE8C4u;
    // 0x1de8c8: 0x2406050c  addiu       $a2, $zero, 0x50C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1DE8C4u, 0x1DE8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE8CCu;
label_1de8cc:
    // 0x1de8cc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1de8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1de8d0:
    // 0x1de8d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de8d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1de8d4:
    // 0x1de8d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1de8d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1de8d8:
    // 0x1de8d8: 0x3e00008  jr          $ra
label_1de8dc:
    if (ctx->pc == 0x1DE8DCu) {
        ctx->pc = 0x1DE8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE8D8u;
        // 0x1de8dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE8E0u;
        goto label_1de8e0;
    }
    ctx->pc = 0x1DE8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE8D8u;
        // 0x1de8dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE8E0u;
label_1de8e0:
    // 0x1de8e0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1de8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1de8e4:
    // 0x1de8e4: 0x3e00008  jr          $ra
label_1de8e8:
    if (ctx->pc == 0x1DE8E8u) {
        ctx->pc = 0x1DE8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE8E4u;
        // 0x1de8e8: 0xac44ec04  sw          $a0, -0x13FC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294962180), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE8ECu;
        goto label_1de8ec;
    }
    ctx->pc = 0x1DE8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE8E4u;
        // 0x1de8e8: 0xac44ec04  sw          $a0, -0x13FC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294962180), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE8E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE8ECu;
label_1de8ec:
    // 0x1de8ec: 0x0  nop
    ctx->pc = 0x1de8ecu;
    // NOP
label_1de8f0:
    // 0x1de8f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1de8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1de8f4:
    // 0x1de8f4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1de8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_1de8f8:
    // 0x1de8f8: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1de8f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1de8fc:
    // 0x1de8fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1de900:
    // 0x1de900: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1de900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1de904:
    // 0x1de904: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1de904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1de908:
    // 0x1de908: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1de908u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1de90c:
    // 0x1de90c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1de90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1de910:
    // 0x1de910: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1de910u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1de914:
    // 0x1de914: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1de914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de918:
    // 0x1de918: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x1de918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1de91c:
    // 0x1de91c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1de91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1de920:
    // 0x1de920: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1de920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1de924:
    // 0x1de924: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1de924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1de928:
    // 0x1de928: 0xc049cb6  jal         func_1272D8
label_1de92c:
    if (ctx->pc == 0x1DE92Cu) {
        ctx->pc = 0x1DE92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE928u;
        // 0x1de92c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE930u;
        goto label_1de930;
    }
    ctx->pc = 0x1DE928u;
    SET_GPR_U32(ctx, 31, 0x1DE930u);
    ctx->pc = 0x1DE92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE928u;
    // 0x1de92c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1DE928u, 0x1DE930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE930u;
label_1de930:
    // 0x1de930: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
label_1de934:
    if (ctx->pc == 0x1DE934u) {
        ctx->pc = 0x1DE934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE930u;
        // 0x1de934: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE938u;
        goto label_1de938;
    }
    ctx->pc = 0x1DE930u;
    {
        const bool branch_taken_0x1de930 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE930u;
        // 0x1de934: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de930) {
            ctx->pc = 0x1DE94Cu;
            goto label_1de94c;
        }
    }
    ctx->pc = 0x1DE938u;
label_1de938:
    // 0x1de938: 0x1a600004  blez        $s3, . + 4 + (0x4 << 2)
label_1de93c:
    if (ctx->pc == 0x1DE93Cu) {
        ctx->pc = 0x1DE940u;
        goto label_1de940;
    }
    ctx->pc = 0x1DE938u;
    {
        const bool branch_taken_0x1de938 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x1de938) {
            ctx->pc = 0x1DE94Cu;
            goto label_1de94c;
        }
    }
    ctx->pc = 0x1DE940u;
label_1de940:
    // 0x1de940: 0x326207ff  andi        $v0, $s3, 0x7FF
    ctx->pc = 0x1de940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2047);
label_1de944:
    // 0x1de944: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1de948:
    if (ctx->pc == 0x1DE948u) {
        ctx->pc = 0x1DE94Cu;
        goto label_1de94c;
    }
    ctx->pc = 0x1DE944u;
    {
        const bool branch_taken_0x1de944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de944) {
            ctx->pc = 0x1DE978u;
            goto label_1de978;
        }
    }
    ctx->pc = 0x1DE94Cu;
label_1de94c:
    // 0x1de94c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de94cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1de950:
    // 0x1de950: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de950u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1de954:
    // 0x1de954: 0x2484c8f8  addiu       $a0, $a0, -0x3708
    ctx->pc = 0x1de954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953208));
label_1de958:
    // 0x1de958: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1de958u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1de95c:
    // 0x1de95c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1de95cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1de960:
    // 0x1de960: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1de960u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1de964:
    // 0x1de964: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1de964u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1de968:
    // 0x1de968: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1de968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1de96c:
    // 0x1de96c: 0x8079afa  j           func_1E6BE8
label_1de970:
    if (ctx->pc == 0x1DE970u) {
        ctx->pc = 0x1DE970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE96Cu;
        // 0x1de970: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE974u;
        goto label_1de974;
    }
    ctx->pc = 0x1DE96Cu;
    ctx->pc = 0x1DE970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE96Cu;
    // 0x1de970: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1DE974u;
label_1de974:
    // 0x1de974: 0x0  nop
    ctx->pc = 0x1de974u;
    // NOP
label_1de978:
    // 0x1de978: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_1de97c:
    if (ctx->pc == 0x1DE97Cu) {
        ctx->pc = 0x1DE97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE978u;
        // 0x1de97c: 0x3c0401c0  lui         $a0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)448 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE980u;
        goto label_1de980;
    }
    ctx->pc = 0x1DE978u;
    {
        const bool branch_taken_0x1de978 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE978u;
        // 0x1de97c: 0x3c0401c0  lui         $a0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de978) {
            ctx->pc = 0x1DE9D0u;
            goto label_1de9d0;
        }
    }
    ctx->pc = 0x1DE980u;
label_1de980:
    // 0x1de980: 0x2405008c  addiu       $a1, $zero, 0x8C
    ctx->pc = 0x1de980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_1de984:
    // 0x1de984: 0xc0772f0  jal         func_1DCBC0
label_1de988:
    if (ctx->pc == 0x1DE988u) {
        ctx->pc = 0x1DE988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE984u;
        // 0x1de988: 0x2484b988  addiu       $a0, $a0, -0x4678 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE98Cu;
        goto label_1de98c;
    }
    ctx->pc = 0x1DE984u;
    SET_GPR_U32(ctx, 31, 0x1DE98Cu);
    ctx->pc = 0x1DE988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE984u;
    // 0x1de988: 0x2484b988  addiu       $a0, $a0, -0x4678 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBC0u, 0x1DE984u, 0x1DE98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE98Cu;
label_1de98c:
    // 0x1de98c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de98cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1de990:
    // 0x1de990: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1de990u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1de994:
    // 0x1de994: 0xc0772fa  jal         func_1DCBE8
label_1de998:
    if (ctx->pc == 0x1DE998u) {
        ctx->pc = 0x1DE998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE994u;
        // 0x1de998: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE99Cu;
        goto label_1de99c;
    }
    ctx->pc = 0x1DE994u;
    SET_GPR_U32(ctx, 31, 0x1DE99Cu);
    ctx->pc = 0x1DE998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE994u;
    // 0x1de998: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBE8u, 0x1DE994u, 0x1DE99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE99Cu;
label_1de99c:
    // 0x1de99c: 0x1312c3  sra         $v0, $s3, 11
    ctx->pc = 0x1de99cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 19), 11));
label_1de9a0:
    // 0x1de9a0: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_1de9a4:
    if (ctx->pc == 0x1DE9A4u) {
        ctx->pc = 0x1DE9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE9A0u;
        // 0x1de9a4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE9A8u;
        goto label_1de9a8;
    }
    ctx->pc = 0x1DE9A0u;
    {
        const bool branch_taken_0x1de9a0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1DE9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE9A0u;
        // 0x1de9a4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de9a0) {
            ctx->pc = 0x1DE9C8u;
            goto label_1de9c8;
        }
    }
    ctx->pc = 0x1DE9A8u;
label_1de9a8:
    // 0x1de9a8: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1de9a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1de9ac:
    // 0x1de9ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de9acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1de9b0:
    // 0x1de9b0: 0x26100800  addiu       $s0, $s0, 0x800
    ctx->pc = 0x1de9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2048));
label_1de9b4:
    // 0x1de9b4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1de9b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1de9b8:
    // 0x1de9b8: 0xc07738e  jal         func_1DCE38
label_1de9bc:
    if (ctx->pc == 0x1DE9BCu) {
        ctx->pc = 0x1DE9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE9B8u;
        // 0x1de9bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE9C0u;
        goto label_1de9c0;
    }
    ctx->pc = 0x1DE9B8u;
    SET_GPR_U32(ctx, 31, 0x1DE9C0u);
    ctx->pc = 0x1DE9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE9B8u;
    // 0x1de9bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCE38u, 0x1DE9B8u, 0x1DE9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE9C0u;
label_1de9c0:
    // 0x1de9c0: 0x1620fffb  bnez        $s1, . + 4 + (-0x5 << 2)
label_1de9c4:
    if (ctx->pc == 0x1DE9C4u) {
        ctx->pc = 0x1DE9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE9C0u;
        // 0x1de9c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE9C8u;
        goto label_1de9c8;
    }
    ctx->pc = 0x1DE9C0u;
    {
        const bool branch_taken_0x1de9c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE9C0u;
        // 0x1de9c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de9c0) {
            ctx->pc = 0x1DE9B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1de9b0;
        }
    }
    ctx->pc = 0x1DE9C8u;
label_1de9c8:
    // 0x1de9c8: 0xc0772f8  jal         func_1DCBE0
label_1de9cc:
    if (ctx->pc == 0x1DE9CCu) {
        ctx->pc = 0x1DE9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE9C8u;
        // 0x1de9cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE9D0u;
        goto label_1de9d0;
    }
    ctx->pc = 0x1DE9C8u;
    SET_GPR_U32(ctx, 31, 0x1DE9D0u);
    ctx->pc = 0x1DE9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE9C8u;
    // 0x1de9cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBE0u, 0x1DE9C8u, 0x1DE9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE9D0u;
label_1de9d0:
    // 0x1de9d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1de9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1de9d4:
    // 0x1de9d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1de9d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1de9d8:
    // 0x1de9d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1de9d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1de9dc:
    // 0x1de9dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1de9dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1de9e0:
    // 0x1de9e0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1de9e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1de9e4:
    // 0x1de9e4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1de9e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1de9e8:
    // 0x1de9e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de9e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1de9ec:
    // 0x1de9ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de9ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1de9f0:
    // 0x1de9f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1de9f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1de9f4:
    // 0x1de9f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1de9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1de9f8:
    // 0x1de9f8: 0x8077a80  j           func_1DEA00
label_1de9fc:
    if (ctx->pc == 0x1DE9FCu) {
        ctx->pc = 0x1DE9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE9F8u;
        // 0x1de9fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEA00u;
        goto label_1dea00;
    }
    ctx->pc = 0x1DE9F8u;
    ctx->pc = 0x1DE9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE9F8u;
    // 0x1de9fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEA00u;
    goto label_1dea00;
    ctx->pc = 0x1DEA00u;
label_1dea00:
    // 0x1dea00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1dea00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1dea04:
    // 0x1dea04: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x1dea04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
label_1dea08:
    // 0x1dea08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1dea08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1dea0c:
    // 0x1dea0c: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x1dea0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_1dea10:
    // 0x1dea10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1dea10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dea14:
    // 0x1dea14: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x1dea14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
label_1dea18:
    // 0x1dea18: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1dea18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1dea1c:
    // 0x1dea1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1dea1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1dea20:
    // 0x1dea20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dea20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dea24:
    // 0x1dea24: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1dea24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_1dea28:
    // 0x1dea28: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1dea28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1dea2c:
    // 0x1dea2c: 0xc049cb6  jal         func_1272D8
label_1dea30:
    if (ctx->pc == 0x1DEA30u) {
        ctx->pc = 0x1DEA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA2Cu;
        // 0x1dea30: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEA34u;
        goto label_1dea34;
    }
    ctx->pc = 0x1DEA2Cu;
    SET_GPR_U32(ctx, 31, 0x1DEA34u);
    ctx->pc = 0x1DEA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA2Cu;
    // 0x1dea30: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1DEA2Cu, 0x1DEA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA34u;
label_1dea34:
    // 0x1dea34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1dea34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dea38:
    // 0x1dea38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dea38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dea3c:
    // 0x1dea3c: 0xc049cb6  jal         func_1272D8
label_1dea40:
    if (ctx->pc == 0x1DEA40u) {
        ctx->pc = 0x1DEA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA3Cu;
        // 0x1dea40: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEA44u;
        goto label_1dea44;
    }
    ctx->pc = 0x1DEA3Cu;
    SET_GPR_U32(ctx, 31, 0x1DEA44u);
    ctx->pc = 0x1DEA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA3Cu;
    // 0x1dea40: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1DEA3Cu, 0x1DEA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA44u;
label_1dea44:
    // 0x1dea44: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1dea44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1dea48:
    // 0x1dea48: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_1dea4c:
    if (ctx->pc == 0x1DEA4Cu) {
        ctx->pc = 0x1DEA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA48u;
        // 0x1dea4c: 0x2484c930  addiu       $a0, $a0, -0x36D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEA50u;
        goto label_1dea50;
    }
    ctx->pc = 0x1DEA48u;
    {
        const bool branch_taken_0x1dea48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA48u;
        // 0x1dea4c: 0x2484c930  addiu       $a0, $a0, -0x36D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea48) {
            ctx->pc = 0x1DEA68u;
            goto label_1dea68;
        }
    }
    ctx->pc = 0x1DEA50u;
label_1dea50:
    // 0x1dea50: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_1dea54:
    if (ctx->pc == 0x1DEA54u) {
        ctx->pc = 0x1DEA58u;
        goto label_1dea58;
    }
    ctx->pc = 0x1DEA50u;
    {
        const bool branch_taken_0x1dea50 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dea50) {
            ctx->pc = 0x1DEA68u;
            goto label_1dea68;
        }
    }
    ctx->pc = 0x1DEA58u;
label_1dea58:
    // 0x1dea58: 0x1e200007  bgtz        $s1, . + 4 + (0x7 << 2)
label_1dea5c:
    if (ctx->pc == 0x1DEA5Cu) {
        ctx->pc = 0x1DEA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA58u;
        // 0x1dea5c: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEA60u;
        goto label_1dea60;
    }
    ctx->pc = 0x1DEA58u;
    {
        const bool branch_taken_0x1dea58 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x1DEA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA58u;
        // 0x1dea5c: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea58) {
            ctx->pc = 0x1DEA78u;
            goto label_1dea78;
        }
    }
    ctx->pc = 0x1DEA60u;
label_1dea60:
    // 0x1dea60: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1dea60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1dea64:
    // 0x1dea64: 0x2484c958  addiu       $a0, $a0, -0x36A8
    ctx->pc = 0x1dea64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953304));
label_1dea68:
    // 0x1dea68: 0xc079afa  jal         func_1E6BE8
label_1dea6c:
    if (ctx->pc == 0x1DEA6Cu) {
        ctx->pc = 0x1DEA70u;
        goto label_1dea70;
    }
    ctx->pc = 0x1DEA68u;
    SET_GPR_U32(ctx, 31, 0x1DEA70u);
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1DEA68u, 0x1DEA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA70u;
label_1dea70:
    // 0x1dea70: 0x1000004c  b           . + 4 + (0x4C << 2)
label_1dea74:
    if (ctx->pc == 0x1DEA74u) {
        ctx->pc = 0x1DEA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA70u;
        // 0x1dea74: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEA78u;
        goto label_1dea78;
    }
    ctx->pc = 0x1DEA70u;
    {
        const bool branch_taken_0x1dea70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA70u;
        // 0x1dea74: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea70) {
            ctx->pc = 0x1DEBA4u;
            goto label_1deba4;
        }
    }
    ctx->pc = 0x1DEA78u;
label_1dea78:
    // 0x1dea78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dea78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dea7c:
    // 0x1dea7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dea7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dea80:
    // 0x1dea80: 0xc07af32  jal         func_1EBCC8
label_1dea84:
    if (ctx->pc == 0x1DEA84u) {
        ctx->pc = 0x1DEA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA80u;
        // 0x1dea84: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEA88u;
        goto label_1dea88;
    }
    ctx->pc = 0x1DEA80u;
    SET_GPR_U32(ctx, 31, 0x1DEA88u);
    ctx->pc = 0x1DEA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA80u;
    // 0x1dea84: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBCC8u, 0x1DEA80u, 0x1DEA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA88u;
label_1dea88:
    // 0x1dea88: 0x97a30030  lhu         $v1, 0x30($sp)
    ctx->pc = 0x1dea88u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
label_1dea8c:
    // 0x1dea8c: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x1dea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_1dea90:
    // 0x1dea90: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_1dea94:
    if (ctx->pc == 0x1DEA94u) {
        ctx->pc = 0x1DEA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA90u;
        // 0x1dea94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEA98u;
        goto label_1dea98;
    }
    ctx->pc = 0x1DEA90u;
    {
        const bool branch_taken_0x1dea90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DEA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA90u;
        // 0x1dea94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea90) {
            ctx->pc = 0x1DEAF8u;
            goto label_1deaf8;
        }
    }
    ctx->pc = 0x1DEA98u;
label_1dea98:
    // 0x1dea98: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1dea98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1dea9c:
    // 0x1dea9c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1dea9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1deaa0:
    // 0x1deaa0: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x1deaa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1deaa4:
    // 0x1deaa4: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x1deaa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1deaa8:
    // 0x1deaa8: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x1deaa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1deaac:
    // 0x1deaac: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x1deaacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1deab0:
    // 0x1deab0: 0x6ba5001f  ldl         $a1, 0x1F($sp)
    ctx->pc = 0x1deab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1deab4:
    // 0x1deab4: 0x6fa50018  ldr         $a1, 0x18($sp)
    ctx->pc = 0x1deab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1deab8:
    // 0x1deab8: 0xb2620007  sdl         $v0, 0x7($s3)
    ctx->pc = 0x1deab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1deabc:
    // 0x1deabc: 0xb6620000  sdr         $v0, 0x0($s3)
    ctx->pc = 0x1deabcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1deac0:
    // 0x1deac0: 0xb263000f  sdl         $v1, 0xF($s3)
    ctx->pc = 0x1deac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1deac4:
    // 0x1deac4: 0xb6630008  sdr         $v1, 0x8($s3)
    ctx->pc = 0x1deac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1deac8:
    // 0x1deac8: 0xb2640017  sdl         $a0, 0x17($s3)
    ctx->pc = 0x1deac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1deacc:
    // 0x1deacc: 0xb6640010  sdr         $a0, 0x10($s3)
    ctx->pc = 0x1deaccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1dead0:
    // 0x1dead0: 0xb265001f  sdl         $a1, 0x1F($s3)
    ctx->pc = 0x1dead0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1dead4:
    // 0x1dead4: 0xb6650018  sdr         $a1, 0x18($s3)
    ctx->pc = 0x1dead4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1dead8:
    // 0x1dead8: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x1dead8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1deadc:
    // 0x1deadc: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x1deadcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1deae0:
    // 0x1deae0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1deae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1deae4:
    // 0x1deae4: 0xb2620027  sdl         $v0, 0x27($s3)
    ctx->pc = 0x1deae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1deae8:
    // 0x1deae8: 0xb6620020  sdr         $v0, 0x20($s3)
    ctx->pc = 0x1deae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1deaec:
    // 0x1deaec: 0xae630028  sw          $v1, 0x28($s3)
    ctx->pc = 0x1deaecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
label_1deaf0:
    // 0x1deaf0: 0x1000002b  b           . + 4 + (0x2B << 2)
label_1deaf4:
    if (ctx->pc == 0x1DEAF4u) {
        ctx->pc = 0x1DEAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEAF0u;
        // 0x1deaf4: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEAF8u;
        goto label_1deaf8;
    }
    ctx->pc = 0x1DEAF0u;
    {
        const bool branch_taken_0x1deaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEAF0u;
        // 0x1deaf4: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deaf0) {
            ctx->pc = 0x1DEBA0u;
            goto label_1deba0;
        }
    }
    ctx->pc = 0x1DEAF8u;
label_1deaf8:
    // 0x1deaf8: 0xc077af0  jal         func_1DEBC0
label_1deafc:
    if (ctx->pc == 0x1DEAFCu) {
        ctx->pc = 0x1DEB00u;
        goto label_1deb00;
    }
    ctx->pc = 0x1DEAF8u;
    SET_GPR_U32(ctx, 31, 0x1DEB00u);
    ctx->pc = 0x1DEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEBC0u, 0x1DEAF8u, 0x1DEB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB00u;
label_1deb00:
    // 0x1deb00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1deb00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1deb04:
    // 0x1deb04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1deb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1deb08:
    // 0x1deb08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1deb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1deb0c:
    // 0x1deb0c: 0x8faa0044  lw          $t2, 0x44($sp)
    ctx->pc = 0x1deb0cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1deb10:
    // 0x1deb10: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1deb10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1deb14:
    // 0x1deb14: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x1deb14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1deb18:
    // 0x1deb18: 0x8fa8005c  lw          $t0, 0x5C($sp)
    ctx->pc = 0x1deb18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1deb1c:
    // 0x1deb1c: 0x83a90058  lb          $t1, 0x58($sp)
    ctx->pc = 0x1deb1cu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
label_1deb20:
    // 0x1deb20: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x1deb20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_1deb24:
    // 0x1deb24: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1deb24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_1deb28:
    // 0x1deb28: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x1deb28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
label_1deb2c:
    // 0x1deb2c: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x1deb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
label_1deb30:
    // 0x1deb30: 0xafa80024  sw          $t0, 0x24($sp)
    ctx->pc = 0x1deb30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 8));
label_1deb34:
    // 0x1deb34: 0xc077f7a  jal         func_1DFDE8
label_1deb38:
    if (ctx->pc == 0x1DEB38u) {
        ctx->pc = 0x1DEB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB34u;
        // 0x1deb38: 0xafa90028  sw          $t1, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEB3Cu;
        goto label_1deb3c;
    }
    ctx->pc = 0x1DEB34u;
    SET_GPR_U32(ctx, 31, 0x1DEB3Cu);
    ctx->pc = 0x1DEB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB34u;
    // 0x1deb38: 0xafa90028  sw          $t1, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFDE8u, 0x1DEB34u, 0x1DEB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB3Cu;
label_1deb3c:
    // 0x1deb3c: 0xc077b04  jal         func_1DEC10
label_1deb40:
    if (ctx->pc == 0x1DEB40u) {
        ctx->pc = 0x1DEB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB3Cu;
        // 0x1deb40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEB44u;
        goto label_1deb44;
    }
    ctx->pc = 0x1DEB3Cu;
    SET_GPR_U32(ctx, 31, 0x1DEB44u);
    ctx->pc = 0x1DEB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB3Cu;
    // 0x1deb40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEC10u, 0x1DEB3Cu, 0x1DEB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB44u;
label_1deb44:
    // 0x1deb44: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1deb44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1deb48:
    // 0x1deb48: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1deb48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1deb4c:
    // 0x1deb4c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1deb4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1deb50:
    // 0x1deb50: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x1deb50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1deb54:
    // 0x1deb54: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x1deb54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1deb58:
    // 0x1deb58: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x1deb58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1deb5c:
    // 0x1deb5c: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x1deb5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1deb60:
    // 0x1deb60: 0x6ba5001f  ldl         $a1, 0x1F($sp)
    ctx->pc = 0x1deb60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1deb64:
    // 0x1deb64: 0x6fa50018  ldr         $a1, 0x18($sp)
    ctx->pc = 0x1deb64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1deb68:
    // 0x1deb68: 0xb2620007  sdl         $v0, 0x7($s3)
    ctx->pc = 0x1deb68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1deb6c:
    // 0x1deb6c: 0xb6620000  sdr         $v0, 0x0($s3)
    ctx->pc = 0x1deb6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1deb70:
    // 0x1deb70: 0xb263000f  sdl         $v1, 0xF($s3)
    ctx->pc = 0x1deb70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1deb74:
    // 0x1deb74: 0xb6630008  sdr         $v1, 0x8($s3)
    ctx->pc = 0x1deb74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1deb78:
    // 0x1deb78: 0xb2640017  sdl         $a0, 0x17($s3)
    ctx->pc = 0x1deb78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1deb7c:
    // 0x1deb7c: 0xb6640010  sdr         $a0, 0x10($s3)
    ctx->pc = 0x1deb7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1deb80:
    // 0x1deb80: 0xb265001f  sdl         $a1, 0x1F($s3)
    ctx->pc = 0x1deb80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1deb84:
    // 0x1deb84: 0xb6650018  sdr         $a1, 0x18($s3)
    ctx->pc = 0x1deb84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1deb88:
    // 0x1deb88: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x1deb88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1deb8c:
    // 0x1deb8c: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x1deb8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1deb90:
    // 0x1deb90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1deb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1deb94:
    // 0x1deb94: 0xb2620027  sdl         $v0, 0x27($s3)
    ctx->pc = 0x1deb94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1deb98:
    // 0x1deb98: 0xb6620020  sdr         $v0, 0x20($s3)
    ctx->pc = 0x1deb98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1deb9c:
    // 0x1deb9c: 0xae630028  sw          $v1, 0x28($s3)
    ctx->pc = 0x1deb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
label_1deba0:
    // 0x1deba0: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1deba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1deba4:
    // 0x1deba4: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x1deba4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_1deba8:
    // 0x1deba8: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1deba8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1debac:
    // 0x1debac: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x1debacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_1debb0:
    // 0x1debb0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1debb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1debb4:
    // 0x1debb4: 0x3e00008  jr          $ra
label_1debb8:
    if (ctx->pc == 0x1DEBB8u) {
        ctx->pc = 0x1DEBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEBB4u;
        // 0x1debb8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEBBCu;
        goto label_1debbc;
    }
    ctx->pc = 0x1DEBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEBB4u;
        // 0x1debb8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEBBCu;
label_1debbc:
    // 0x1debbc: 0x0  nop
    ctx->pc = 0x1debbcu;
    // NOP
}
