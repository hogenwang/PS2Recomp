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

// Function: sub_001E8388
// Address: 0x1e8388 - 0x1e8730
void sub_001E8388_0x1e8388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8388_0x1e8388");
#endif

    switch (ctx->pc) {
        case 0x1e8388u: goto label_1e8388;
        case 0x1e838cu: goto label_1e838c;
        case 0x1e8390u: goto label_1e8390;
        case 0x1e8394u: goto label_1e8394;
        case 0x1e8398u: goto label_1e8398;
        case 0x1e839cu: goto label_1e839c;
        case 0x1e83a0u: goto label_1e83a0;
        case 0x1e83a4u: goto label_1e83a4;
        case 0x1e83a8u: goto label_1e83a8;
        case 0x1e83acu: goto label_1e83ac;
        case 0x1e83b0u: goto label_1e83b0;
        case 0x1e83b4u: goto label_1e83b4;
        case 0x1e83b8u: goto label_1e83b8;
        case 0x1e83bcu: goto label_1e83bc;
        case 0x1e83c0u: goto label_1e83c0;
        case 0x1e83c4u: goto label_1e83c4;
        case 0x1e83c8u: goto label_1e83c8;
        case 0x1e83ccu: goto label_1e83cc;
        case 0x1e83d0u: goto label_1e83d0;
        case 0x1e83d4u: goto label_1e83d4;
        case 0x1e83d8u: goto label_1e83d8;
        case 0x1e83dcu: goto label_1e83dc;
        case 0x1e83e0u: goto label_1e83e0;
        case 0x1e83e4u: goto label_1e83e4;
        case 0x1e83e8u: goto label_1e83e8;
        case 0x1e83ecu: goto label_1e83ec;
        case 0x1e83f0u: goto label_1e83f0;
        case 0x1e83f4u: goto label_1e83f4;
        case 0x1e83f8u: goto label_1e83f8;
        case 0x1e83fcu: goto label_1e83fc;
        case 0x1e8400u: goto label_1e8400;
        case 0x1e8404u: goto label_1e8404;
        case 0x1e8408u: goto label_1e8408;
        case 0x1e840cu: goto label_1e840c;
        case 0x1e8410u: goto label_1e8410;
        case 0x1e8414u: goto label_1e8414;
        case 0x1e8418u: goto label_1e8418;
        case 0x1e841cu: goto label_1e841c;
        case 0x1e8420u: goto label_1e8420;
        case 0x1e8424u: goto label_1e8424;
        case 0x1e8428u: goto label_1e8428;
        case 0x1e842cu: goto label_1e842c;
        case 0x1e8430u: goto label_1e8430;
        case 0x1e8434u: goto label_1e8434;
        case 0x1e8438u: goto label_1e8438;
        case 0x1e843cu: goto label_1e843c;
        case 0x1e8440u: goto label_1e8440;
        case 0x1e8444u: goto label_1e8444;
        case 0x1e8448u: goto label_1e8448;
        case 0x1e844cu: goto label_1e844c;
        case 0x1e8450u: goto label_1e8450;
        case 0x1e8454u: goto label_1e8454;
        case 0x1e8458u: goto label_1e8458;
        case 0x1e845cu: goto label_1e845c;
        case 0x1e8460u: goto label_1e8460;
        case 0x1e8464u: goto label_1e8464;
        case 0x1e8468u: goto label_1e8468;
        case 0x1e846cu: goto label_1e846c;
        case 0x1e8470u: goto label_1e8470;
        case 0x1e8474u: goto label_1e8474;
        case 0x1e8478u: goto label_1e8478;
        case 0x1e847cu: goto label_1e847c;
        case 0x1e8480u: goto label_1e8480;
        case 0x1e8484u: goto label_1e8484;
        case 0x1e8488u: goto label_1e8488;
        case 0x1e848cu: goto label_1e848c;
        case 0x1e8490u: goto label_1e8490;
        case 0x1e8494u: goto label_1e8494;
        case 0x1e8498u: goto label_1e8498;
        case 0x1e849cu: goto label_1e849c;
        case 0x1e84a0u: goto label_1e84a0;
        case 0x1e84a4u: goto label_1e84a4;
        case 0x1e84a8u: goto label_1e84a8;
        case 0x1e84acu: goto label_1e84ac;
        case 0x1e84b0u: goto label_1e84b0;
        case 0x1e84b4u: goto label_1e84b4;
        case 0x1e84b8u: goto label_1e84b8;
        case 0x1e84bcu: goto label_1e84bc;
        case 0x1e84c0u: goto label_1e84c0;
        case 0x1e84c4u: goto label_1e84c4;
        case 0x1e84c8u: goto label_1e84c8;
        case 0x1e84ccu: goto label_1e84cc;
        case 0x1e84d0u: goto label_1e84d0;
        case 0x1e84d4u: goto label_1e84d4;
        case 0x1e84d8u: goto label_1e84d8;
        case 0x1e84dcu: goto label_1e84dc;
        case 0x1e84e0u: goto label_1e84e0;
        case 0x1e84e4u: goto label_1e84e4;
        case 0x1e84e8u: goto label_1e84e8;
        case 0x1e84ecu: goto label_1e84ec;
        case 0x1e84f0u: goto label_1e84f0;
        case 0x1e84f4u: goto label_1e84f4;
        case 0x1e84f8u: goto label_1e84f8;
        case 0x1e84fcu: goto label_1e84fc;
        case 0x1e8500u: goto label_1e8500;
        case 0x1e8504u: goto label_1e8504;
        case 0x1e8508u: goto label_1e8508;
        case 0x1e850cu: goto label_1e850c;
        case 0x1e8510u: goto label_1e8510;
        case 0x1e8514u: goto label_1e8514;
        case 0x1e8518u: goto label_1e8518;
        case 0x1e851cu: goto label_1e851c;
        case 0x1e8520u: goto label_1e8520;
        case 0x1e8524u: goto label_1e8524;
        case 0x1e8528u: goto label_1e8528;
        case 0x1e852cu: goto label_1e852c;
        case 0x1e8530u: goto label_1e8530;
        case 0x1e8534u: goto label_1e8534;
        case 0x1e8538u: goto label_1e8538;
        case 0x1e853cu: goto label_1e853c;
        case 0x1e8540u: goto label_1e8540;
        case 0x1e8544u: goto label_1e8544;
        case 0x1e8548u: goto label_1e8548;
        case 0x1e854cu: goto label_1e854c;
        case 0x1e8550u: goto label_1e8550;
        case 0x1e8554u: goto label_1e8554;
        case 0x1e8558u: goto label_1e8558;
        case 0x1e855cu: goto label_1e855c;
        case 0x1e8560u: goto label_1e8560;
        case 0x1e8564u: goto label_1e8564;
        case 0x1e8568u: goto label_1e8568;
        case 0x1e856cu: goto label_1e856c;
        case 0x1e8570u: goto label_1e8570;
        case 0x1e8574u: goto label_1e8574;
        case 0x1e8578u: goto label_1e8578;
        case 0x1e857cu: goto label_1e857c;
        case 0x1e8580u: goto label_1e8580;
        case 0x1e8584u: goto label_1e8584;
        case 0x1e8588u: goto label_1e8588;
        case 0x1e858cu: goto label_1e858c;
        case 0x1e8590u: goto label_1e8590;
        case 0x1e8594u: goto label_1e8594;
        case 0x1e8598u: goto label_1e8598;
        case 0x1e859cu: goto label_1e859c;
        case 0x1e85a0u: goto label_1e85a0;
        case 0x1e85a4u: goto label_1e85a4;
        case 0x1e85a8u: goto label_1e85a8;
        case 0x1e85acu: goto label_1e85ac;
        case 0x1e85b0u: goto label_1e85b0;
        case 0x1e85b4u: goto label_1e85b4;
        case 0x1e85b8u: goto label_1e85b8;
        case 0x1e85bcu: goto label_1e85bc;
        case 0x1e85c0u: goto label_1e85c0;
        case 0x1e85c4u: goto label_1e85c4;
        case 0x1e85c8u: goto label_1e85c8;
        case 0x1e85ccu: goto label_1e85cc;
        case 0x1e85d0u: goto label_1e85d0;
        case 0x1e85d4u: goto label_1e85d4;
        case 0x1e85d8u: goto label_1e85d8;
        case 0x1e85dcu: goto label_1e85dc;
        case 0x1e85e0u: goto label_1e85e0;
        case 0x1e85e4u: goto label_1e85e4;
        case 0x1e85e8u: goto label_1e85e8;
        case 0x1e85ecu: goto label_1e85ec;
        case 0x1e85f0u: goto label_1e85f0;
        case 0x1e85f4u: goto label_1e85f4;
        case 0x1e85f8u: goto label_1e85f8;
        case 0x1e85fcu: goto label_1e85fc;
        case 0x1e8600u: goto label_1e8600;
        case 0x1e8604u: goto label_1e8604;
        case 0x1e8608u: goto label_1e8608;
        case 0x1e860cu: goto label_1e860c;
        case 0x1e8610u: goto label_1e8610;
        case 0x1e8614u: goto label_1e8614;
        case 0x1e8618u: goto label_1e8618;
        case 0x1e861cu: goto label_1e861c;
        case 0x1e8620u: goto label_1e8620;
        case 0x1e8624u: goto label_1e8624;
        case 0x1e8628u: goto label_1e8628;
        case 0x1e862cu: goto label_1e862c;
        case 0x1e8630u: goto label_1e8630;
        case 0x1e8634u: goto label_1e8634;
        case 0x1e8638u: goto label_1e8638;
        case 0x1e863cu: goto label_1e863c;
        case 0x1e8640u: goto label_1e8640;
        case 0x1e8644u: goto label_1e8644;
        case 0x1e8648u: goto label_1e8648;
        case 0x1e864cu: goto label_1e864c;
        case 0x1e8650u: goto label_1e8650;
        case 0x1e8654u: goto label_1e8654;
        case 0x1e8658u: goto label_1e8658;
        case 0x1e865cu: goto label_1e865c;
        case 0x1e8660u: goto label_1e8660;
        case 0x1e8664u: goto label_1e8664;
        case 0x1e8668u: goto label_1e8668;
        case 0x1e866cu: goto label_1e866c;
        case 0x1e8670u: goto label_1e8670;
        case 0x1e8674u: goto label_1e8674;
        case 0x1e8678u: goto label_1e8678;
        case 0x1e867cu: goto label_1e867c;
        case 0x1e8680u: goto label_1e8680;
        case 0x1e8684u: goto label_1e8684;
        case 0x1e8688u: goto label_1e8688;
        case 0x1e868cu: goto label_1e868c;
        case 0x1e8690u: goto label_1e8690;
        case 0x1e8694u: goto label_1e8694;
        case 0x1e8698u: goto label_1e8698;
        case 0x1e869cu: goto label_1e869c;
        case 0x1e86a0u: goto label_1e86a0;
        case 0x1e86a4u: goto label_1e86a4;
        case 0x1e86a8u: goto label_1e86a8;
        case 0x1e86acu: goto label_1e86ac;
        case 0x1e86b0u: goto label_1e86b0;
        case 0x1e86b4u: goto label_1e86b4;
        case 0x1e86b8u: goto label_1e86b8;
        case 0x1e86bcu: goto label_1e86bc;
        case 0x1e86c0u: goto label_1e86c0;
        case 0x1e86c4u: goto label_1e86c4;
        case 0x1e86c8u: goto label_1e86c8;
        case 0x1e86ccu: goto label_1e86cc;
        case 0x1e86d0u: goto label_1e86d0;
        case 0x1e86d4u: goto label_1e86d4;
        case 0x1e86d8u: goto label_1e86d8;
        case 0x1e86dcu: goto label_1e86dc;
        case 0x1e86e0u: goto label_1e86e0;
        case 0x1e86e4u: goto label_1e86e4;
        case 0x1e86e8u: goto label_1e86e8;
        case 0x1e86ecu: goto label_1e86ec;
        case 0x1e86f0u: goto label_1e86f0;
        case 0x1e86f4u: goto label_1e86f4;
        case 0x1e86f8u: goto label_1e86f8;
        case 0x1e86fcu: goto label_1e86fc;
        case 0x1e8700u: goto label_1e8700;
        case 0x1e8704u: goto label_1e8704;
        case 0x1e8708u: goto label_1e8708;
        case 0x1e870cu: goto label_1e870c;
        case 0x1e8710u: goto label_1e8710;
        case 0x1e8714u: goto label_1e8714;
        case 0x1e8718u: goto label_1e8718;
        case 0x1e871cu: goto label_1e871c;
        case 0x1e8720u: goto label_1e8720;
        case 0x1e8724u: goto label_1e8724;
        case 0x1e8728u: goto label_1e8728;
        case 0x1e872cu: goto label_1e872c;
        default: break;
    }

    ctx->pc = 0x1e8388u;

label_1e8388:
    // 0x1e8388: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e8388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e838c:
    // 0x1e838c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e838cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1e8390:
    // 0x1e8390: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e8390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e8394:
    // 0x1e8394: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1e8394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1e8398:
    // 0x1e8398: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e8398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e839c:
    // 0x1e839c: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
label_1e83a0:
    if (ctx->pc == 0x1E83A0u) {
        ctx->pc = 0x1E83A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E839Cu;
        // 0x1e83a0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E83A4u;
        goto label_1e83a4;
    }
    ctx->pc = 0x1E839Cu;
    {
        const bool branch_taken_0x1e839c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E83A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E839Cu;
        // 0x1e83a0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e839c) {
            ctx->pc = 0x1E83C0u;
            goto label_1e83c0;
        }
    }
    ctx->pc = 0x1E83A4u;
label_1e83a4:
    // 0x1e83a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e83a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e83a8:
    // 0x1e83a8: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1e83a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1e83ac:
    // 0x1e83ac: 0x60f809  jalr        $v1
label_1e83b0:
    if (ctx->pc == 0x1E83B0u) {
        ctx->pc = 0x1E83B4u;
        goto label_1e83b4;
    }
    ctx->pc = 0x1E83ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E83B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E83ACu, 0x1E83B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E83B4u;
label_1e83b4:
    // 0x1e83b4: 0x10000012  b           . + 4 + (0x12 << 2)
label_1e83b8:
    if (ctx->pc == 0x1E83B8u) {
        ctx->pc = 0x1E83B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E83B4u;
        // 0x1e83b8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E83BCu;
        goto label_1e83bc;
    }
    ctx->pc = 0x1E83B4u;
    {
        const bool branch_taken_0x1e83b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E83B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E83B4u;
        // 0x1e83b8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e83b4) {
            ctx->pc = 0x1E8400u;
            goto label_1e8400;
        }
    }
    ctx->pc = 0x1E83BCu;
label_1e83bc:
    // 0x1e83bc: 0x0  nop
    ctx->pc = 0x1e83bcu;
    // NOP
label_1e83c0:
    // 0x1e83c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e83c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e83c4:
    // 0x1e83c4: 0xc07337e  jal         func_1CCDF8
label_1e83c8:
    if (ctx->pc == 0x1E83C8u) {
        ctx->pc = 0x1E83C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E83C4u;
        // 0x1e83c8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E83CCu;
        goto label_1e83cc;
    }
    ctx->pc = 0x1E83C4u;
    SET_GPR_U32(ctx, 31, 0x1E83CCu);
    ctx->pc = 0x1E83C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E83C4u;
    // 0x1e83c8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCDF8u, 0x1E83C4u, 0x1E83CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E83CCu;
label_1e83cc:
    // 0x1e83cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e83ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e83d0:
    // 0x1e83d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e83d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e83d4:
    // 0x1e83d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e83d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e83d8:
    // 0x1e83d8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1e83d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1e83dc:
    // 0x1e83dc: 0x40f809  jalr        $v0
label_1e83e0:
    if (ctx->pc == 0x1E83E0u) {
        ctx->pc = 0x1E83E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E83DCu;
        // 0x1e83e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E83E4u;
        goto label_1e83e4;
    }
    ctx->pc = 0x1E83DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E83E4u);
        ctx->pc = 0x1E83E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E83DCu;
        // 0x1e83e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E83DCu, 0x1E83E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E83E4u;
label_1e83e4:
    // 0x1e83e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e83e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e83e8:
    // 0x1e83e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e83e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e83ec:
    // 0x1e83ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e83ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e83f0:
    // 0x1e83f0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1e83f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1e83f4:
    // 0x1e83f4: 0x40f809  jalr        $v0
label_1e83f8:
    if (ctx->pc == 0x1E83F8u) {
        ctx->pc = 0x1E83F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E83F4u;
        // 0x1e83f8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E83FCu;
        goto label_1e83fc;
    }
    ctx->pc = 0x1E83F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E83FCu);
        ctx->pc = 0x1E83F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E83F4u;
        // 0x1e83f8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E83F4u, 0x1E83FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E83FCu;
label_1e83fc:
    // 0x1e83fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e83fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e8400:
    // 0x1e8400: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1e8400u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1e8404:
    // 0x1e8404: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e8404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e8408:
    // 0x1e8408: 0x3e00008  jr          $ra
label_1e840c:
    if (ctx->pc == 0x1E840Cu) {
        ctx->pc = 0x1E840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8408u;
        // 0x1e840c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8410u;
        goto label_1e8410;
    }
    ctx->pc = 0x1E8408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8408u;
        // 0x1e840c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8410u;
label_1e8410:
    // 0x1e8410: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e8410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e8414:
    // 0x1e8414: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e8414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1e8418:
    // 0x1e8418: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1e8418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1e841c:
    // 0x1e841c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1e841cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e8420:
    // 0x1e8420: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1e8420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1e8424:
    // 0x1e8424: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1e8424u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e8428:
    // 0x1e8428: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1e8428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_1e842c:
    // 0x1e842c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1e842cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e8430:
    // 0x1e8430: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e8430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1e8434:
    // 0x1e8434: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1e8434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e8438:
    // 0x1e8438: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1e8438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1e843c:
    // 0x1e843c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1e843cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1e8440:
    // 0x1e8440: 0x8c91205c  lw          $s1, 0x205C($a0)
    ctx->pc = 0x1e8440u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8284)));
label_1e8444:
    // 0x1e8444: 0x8e330004  lw          $s3, 0x4($s1)
    ctx->pc = 0x1e8444u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1e8448:
    // 0x1e8448: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1e8448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1e844c:
    // 0x1e844c: 0xc07a0d6  jal         func_1E8358
label_1e8450:
    if (ctx->pc == 0x1E8450u) {
        ctx->pc = 0x1E8450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E844Cu;
        // 0x1e8450: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8454u;
        goto label_1e8454;
    }
    ctx->pc = 0x1E844Cu;
    SET_GPR_U32(ctx, 31, 0x1E8454u);
    ctx->pc = 0x1E8450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E844Cu;
    // 0x1e8450: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8358u, 0x1E844Cu, 0x1E8454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8454u;
label_1e8454:
    // 0x1e8454: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x1e8454u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_1e8458:
    // 0x1e8458: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x1e8458u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1e845c:
    // 0x1e845c: 0x34c69000  ori         $a2, $a2, 0x9000
    ctx->pc = 0x1e845cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)36864);
label_1e8460:
    // 0x1e8460: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1e8460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1e8464:
    // 0x1e8464: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e8464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e8468:
    // 0x1e8468: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x1e8468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1e846c:
    // 0x1e846c: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x1e846cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_1e8470:
    // 0x1e8470: 0xd0182a  slt         $v1, $a2, $s0
    ctx->pc = 0x1e8470u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1e8474:
    // 0x1e8474: 0xc3800b  movn        $s0, $a2, $v1
    ctx->pc = 0x1e8474u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
label_1e8478:
    // 0x1e8478: 0xc0757de  jal         func_1D5F78
label_1e847c:
    if (ctx->pc == 0x1E847Cu) {
        ctx->pc = 0x1E847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8478u;
        // 0x1e847c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8480u;
        goto label_1e8480;
    }
    ctx->pc = 0x1E8478u;
    SET_GPR_U32(ctx, 31, 0x1E8480u);
    ctx->pc = 0x1E847Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8478u;
    // 0x1e847c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F78u, 0x1E8478u, 0x1E8480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8480u;
label_1e8480:
    // 0x1e8480: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e8480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e8484:
    // 0x1e8484: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e8484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e8488:
    // 0x1e8488: 0xc07a0e2  jal         func_1E8388
label_1e848c:
    if (ctx->pc == 0x1E848Cu) {
        ctx->pc = 0x1E848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8488u;
        // 0x1e848c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8490u;
        goto label_1e8490;
    }
    ctx->pc = 0x1E8488u;
    SET_GPR_U32(ctx, 31, 0x1E8490u);
    ctx->pc = 0x1E848Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8488u;
    // 0x1e848c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8388u;
    goto label_1e8388;
    ctx->pc = 0x1E8490u;
label_1e8490:
    // 0x1e8490: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x1e8490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_1e8494:
    // 0x1e8494: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1e8494u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e8498:
    // 0x1e8498: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e8498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1e849c:
    // 0x1e849c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1e849cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1e84a0:
    // 0x1e84a0: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x1e84a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
label_1e84a4:
    // 0x1e84a4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1e84a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e84a8:
    // 0x1e84a8: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x1e84a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
label_1e84ac:
    // 0x1e84ac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1e84acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1e84b0:
    // 0x1e84b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e84b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e84b4:
    // 0x1e84b4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1e84b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1e84b8:
    // 0x1e84b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e84b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e84bc:
    // 0x1e84bc: 0x3e00008  jr          $ra
label_1e84c0:
    if (ctx->pc == 0x1E84C0u) {
        ctx->pc = 0x1E84C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E84BCu;
        // 0x1e84c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E84C4u;
        goto label_1e84c4;
    }
    ctx->pc = 0x1E84BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E84C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E84BCu;
        // 0x1e84c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E84BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E84C4u;
label_1e84c4:
    // 0x1e84c4: 0x0  nop
    ctx->pc = 0x1e84c4u;
    // NOP
label_1e84c8:
    // 0x1e84c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e84c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1e84cc:
    // 0x1e84cc: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1e84ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_1e84d0:
    // 0x1e84d0: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x1e84d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e84d4:
    // 0x1e84d4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1e84d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1e84d8:
    // 0x1e84d8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1e84d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1e84dc:
    // 0x1e84dc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e84dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e84e0:
    // 0x1e84e0: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1e84e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_1e84e4:
    // 0x1e84e4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1e84e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e84e8:
    // 0x1e84e8: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1e84e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_1e84ec:
    // 0x1e84ec: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1e84ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e84f0:
    // 0x1e84f0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1e84f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1e84f4:
    // 0x1e84f4: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1e84f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1e84f8:
    // 0x1e84f8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1e84f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1e84fc:
    // 0x1e84fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e84fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e8500:
    // 0x1e8500: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1e8500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1e8504:
    // 0x1e8504: 0x26910d88  addiu       $s1, $s4, 0xD88
    ctx->pc = 0x1e8504u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 3464));
label_1e8508:
    // 0x1e8508: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1e8508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_1e850c:
    // 0x1e850c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1e850cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_1e8510:
    // 0x1e8510: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x1e8510u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
label_1e8514:
    // 0x1e8514: 0xc07a2b4  jal         func_1E8AD0
label_1e8518:
    if (ctx->pc == 0x1E8518u) {
        ctx->pc = 0x1E8518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8514u;
        // 0x1e8518: 0x8e93205c  lw          $s3, 0x205C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E851Cu;
        goto label_1e851c;
    }
    ctx->pc = 0x1E8514u;
    SET_GPR_U32(ctx, 31, 0x1E851Cu);
    ctx->pc = 0x1E8518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8514u;
    // 0x1e8518: 0x8e93205c  lw          $s3, 0x205C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8AD0u, 0x1E8514u, 0x1E851Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E851Cu;
label_1e851c:
    // 0x1e851c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_1e8520:
    if (ctx->pc == 0x1E8520u) {
        ctx->pc = 0x1E8520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E851Cu;
        // 0x1e8520: 0x3c02001f  lui         $v0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8524u;
        goto label_1e8524;
    }
    ctx->pc = 0x1E851Cu;
    {
        const bool branch_taken_0x1e851c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e851c) {
            ctx->pc = 0x1E8520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E851Cu;
            // 0x1e8520: 0x3c02001f  lui         $v0, 0x1F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8560u;
            goto label_1e8560;
        }
    }
    ctx->pc = 0x1E8524u;
label_1e8524:
    // 0x1e8524: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1e8524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1e8528:
    // 0x1e8528: 0xc07eeee  jal         func_1FBBB8
label_1e852c:
    if (ctx->pc == 0x1E852Cu) {
        ctx->pc = 0x1E852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8528u;
        // 0x1e852c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8530u;
        goto label_1e8530;
    }
    ctx->pc = 0x1E8528u;
    SET_GPR_U32(ctx, 31, 0x1E8530u);
    ctx->pc = 0x1E852Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8528u;
    // 0x1e852c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBBB8u, 0x1E8528u, 0x1E8530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8530u;
label_1e8530:
    // 0x1e8530: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e8530u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e8534:
    // 0x1e8534: 0x6400072  bltz        $s2, . + 4 + (0x72 << 2)
label_1e8538:
    if (ctx->pc == 0x1E8538u) {
        ctx->pc = 0x1E8538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8534u;
        // 0x1e8538: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E853Cu;
        goto label_1e853c;
    }
    ctx->pc = 0x1E8534u;
    {
        const bool branch_taken_0x1e8534 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x1E8538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8534u;
        // 0x1e8538: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8534) {
            ctx->pc = 0x1E8700u;
            goto label_1e8700;
        }
    }
    ctx->pc = 0x1E853Cu;
label_1e853c:
    // 0x1e853c: 0xc07ec02  jal         func_1FB008
label_1e8540:
    if (ctx->pc == 0x1E8540u) {
        ctx->pc = 0x1E8540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E853Cu;
        // 0x1e8540: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8544u;
        goto label_1e8544;
    }
    ctx->pc = 0x1E853Cu;
    SET_GPR_U32(ctx, 31, 0x1E8544u);
    ctx->pc = 0x1E8540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E853Cu;
    // 0x1e8540: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1E853Cu, 0x1E8544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8544u;
label_1e8544:
    // 0x1e8544: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1e8548:
    if (ctx->pc == 0x1E8548u) {
        ctx->pc = 0x1E8548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8544u;
        // 0x1e8548: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E854Cu;
        goto label_1e854c;
    }
    ctx->pc = 0x1E8544u;
    {
        const bool branch_taken_0x1e8544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8544) {
            ctx->pc = 0x1E8548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E8544u;
            // 0x1e8548: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8570u;
            goto label_1e8570;
        }
    }
    ctx->pc = 0x1E854Cu;
label_1e854c:
    // 0x1e854c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1e854cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1e8550:
    // 0x1e8550: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e8550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e8554:
    // 0x1e8554: 0xc07ef24  jal         func_1FBC90
label_1e8558:
    if (ctx->pc == 0x1E8558u) {
        ctx->pc = 0x1E8558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8554u;
        // 0x1e8558: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E855Cu;
        goto label_1e855c;
    }
    ctx->pc = 0x1E8554u;
    SET_GPR_U32(ctx, 31, 0x1E855Cu);
    ctx->pc = 0x1E8558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8554u;
    // 0x1e8558: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBC90u, 0x1E8554u, 0x1E855Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E855Cu;
label_1e855c:
    // 0x1e855c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1e855cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_1e8560:
    // 0x1e8560: 0x24428410  addiu       $v0, $v0, -0x7BF0
    ctx->pc = 0x1e8560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935568));
label_1e8564:
    // 0x1e8564: 0x10000066  b           . + 4 + (0x66 << 2)
label_1e8568:
    if (ctx->pc == 0x1E8568u) {
        ctx->pc = 0x1E8568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8564u;
        // 0x1e8568: 0xae62003c  sw          $v0, 0x3C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E856Cu;
        goto label_1e856c;
    }
    ctx->pc = 0x1E8564u;
    {
        const bool branch_taken_0x1e8564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8564u;
        // 0x1e8568: 0xae62003c  sw          $v0, 0x3C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8564) {
            ctx->pc = 0x1E8700u;
            goto label_1e8700;
        }
    }
    ctx->pc = 0x1E856Cu;
label_1e856c:
    // 0x1e856c: 0x0  nop
    ctx->pc = 0x1e856cu;
    // NOP
label_1e8570:
    // 0x1e8570: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e8570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e8574:
    // 0x1e8574: 0xc07ef06  jal         func_1FBC18
label_1e8578:
    if (ctx->pc == 0x1E8578u) {
        ctx->pc = 0x1E8578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8574u;
        // 0x1e8578: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E857Cu;
        goto label_1e857c;
    }
    ctx->pc = 0x1E8574u;
    SET_GPR_U32(ctx, 31, 0x1E857Cu);
    ctx->pc = 0x1E8578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8574u;
    // 0x1e8578: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBC18u, 0x1E8574u, 0x1E857Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E857Cu;
label_1e857c:
    // 0x1e857c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e857cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e8580:
    // 0x1e8580: 0x600005f  bltz        $s0, . + 4 + (0x5F << 2)
label_1e8584:
    if (ctx->pc == 0x1E8584u) {
        ctx->pc = 0x1E8584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8580u;
        // 0x1e8584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8588u;
        goto label_1e8588;
    }
    ctx->pc = 0x1E8580u;
    {
        const bool branch_taken_0x1e8580 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1E8584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8580u;
        // 0x1e8584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8580) {
            ctx->pc = 0x1E8700u;
            goto label_1e8700;
        }
    }
    ctx->pc = 0x1E8588u;
label_1e8588:
    // 0x1e8588: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1e8588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1e858c:
    // 0x1e858c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e858cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e8590:
    // 0x1e8590: 0xc07ef24  jal         func_1FBC90
label_1e8594:
    if (ctx->pc == 0x1E8594u) {
        ctx->pc = 0x1E8594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8590u;
        // 0x1e8594: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8598u;
        goto label_1e8598;
    }
    ctx->pc = 0x1E8590u;
    SET_GPR_U32(ctx, 31, 0x1E8598u);
    ctx->pc = 0x1E8594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8590u;
    // 0x1e8594: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBC90u, 0x1E8590u, 0x1E8598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8598u;
label_1e8598:
    // 0x1e8598: 0x2121823  subu        $v1, $s0, $s2
    ctx->pc = 0x1e8598u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1e859c:
    // 0x1e859c: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x1e859cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_1e85a0:
    // 0x1e85a0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1e85a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e85a4:
    // 0x1e85a4: 0x460003c  bltz        $v1, . + 4 + (0x3C << 2)
label_1e85a8:
    if (ctx->pc == 0x1E85A8u) {
        ctx->pc = 0x1E85A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E85A4u;
        // 0x1e85a8: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E85ACu;
        goto label_1e85ac;
    }
    ctx->pc = 0x1E85A4u;
    {
        const bool branch_taken_0x1e85a4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1E85A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E85A4u;
        // 0x1e85a8: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e85a4) {
            ctx->pc = 0x1E8698u;
            goto label_1e8698;
        }
    }
    ctx->pc = 0x1E85ACu;
label_1e85ac:
    // 0x1e85ac: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1e85acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1e85b0:
    // 0x1e85b0: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x1e85b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1e85b4:
    // 0x1e85b4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1e85b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1e85b8:
    // 0x1e85b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e85b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e85bc:
    // 0x1e85bc: 0x28840  sll         $s1, $v0, 1
    ctx->pc = 0x1e85bcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1e85c0:
    // 0x1e85c0: 0x1a200022  blez        $s1, . + 4 + (0x22 << 2)
label_1e85c4:
    if (ctx->pc == 0x1E85C4u) {
        ctx->pc = 0x1E85C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E85C0u;
        // 0x1e85c4: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E85C8u;
        goto label_1e85c8;
    }
    ctx->pc = 0x1E85C0u;
    {
        const bool branch_taken_0x1e85c0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1E85C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E85C0u;
        // 0x1e85c4: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e85c0) {
            ctx->pc = 0x1E864Cu;
            goto label_1e864c;
        }
    }
    ctx->pc = 0x1E85C8u;
label_1e85c8:
    // 0x1e85c8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1e85c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1e85cc:
    // 0x1e85cc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1e85ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1e85d0:
    // 0x1e85d0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1e85d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1e85d4:
    // 0x1e85d4: 0x27a6000c  addiu       $a2, $sp, 0xC
    ctx->pc = 0x1e85d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_1e85d8:
    // 0x1e85d8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1e85d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1e85dc:
    // 0x1e85dc: 0x2a2001a  div         $zero, $s5, $v0
    ctx->pc = 0x1e85dcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 21);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e85e0:
    // 0x1e85e0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1e85e4:
    if (ctx->pc == 0x1E85E4u) {
        ctx->pc = 0x1E85E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E85E0u;
        // 0x1e85e4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E85E8u;
        goto label_1e85e8;
    }
    ctx->pc = 0x1E85E0u;
    {
        const bool branch_taken_0x1e85e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e85e0) {
            ctx->pc = 0x1E85E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E85E0u;
            // 0x1e85e4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E85E8u;
            goto label_1e85e8;
        }
    }
    ctx->pc = 0x1E85E8u;
label_1e85e8:
    // 0x1e85e8: 0x1812  mflo        $v1
    ctx->pc = 0x1e85e8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_1e85ec:
    // 0x1e85ec: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x1e85ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1e85f0:
    // 0x1e85f0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1e85f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1e85f4:
    // 0x1e85f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e85f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e85f8:
    // 0x1e85f8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1e85f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1e85fc:
    // 0x1e85fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e85fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e8600:
    // 0x1e8600: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x1e8600u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1e8604:
    // 0x1e8604: 0x222800a  movz        $s0, $s1, $v0
    ctx->pc = 0x1e8604u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
label_1e8608:
    // 0x1e8608: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e8608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e860c:
    // 0x1e860c: 0xc07a1cc  jal         func_1E8730
label_1e8610:
    if (ctx->pc == 0x1E8610u) {
        ctx->pc = 0x1E8610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E860Cu;
        // 0x1e8610: 0x2308023  subu        $s0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8614u;
        goto label_1e8614;
    }
    ctx->pc = 0x1E860Cu;
    SET_GPR_U32(ctx, 31, 0x1E8614u);
    ctx->pc = 0x1E8610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E860Cu;
    // 0x1e8610: 0x2308023  subu        $s0, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8730u, 0x1E860Cu, 0x1E8614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8614u;
label_1e8614:
    // 0x1e8614: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e8614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1e8618:
    // 0x1e8618: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1e8618u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e861c:
    // 0x1e861c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1e861cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1e8620:
    // 0x1e8620: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e8620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e8624:
    // 0x1e8624: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1e8624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1e8628:
    // 0x1e8628: 0x2c2001a  div         $zero, $s6, $v0
    ctx->pc = 0x1e8628u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 22);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e862c:
    // 0x1e862c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1e8630:
    if (ctx->pc == 0x1E8630u) {
        ctx->pc = 0x1E8630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E862Cu;
        // 0x1e8630: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8634u;
        goto label_1e8634;
    }
    ctx->pc = 0x1E862Cu;
    {
        const bool branch_taken_0x1e862c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e862c) {
            ctx->pc = 0x1E8630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E862Cu;
            // 0x1e8630: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8634u;
            goto label_1e8634;
        }
    }
    ctx->pc = 0x1E8634u;
label_1e8634:
    // 0x1e8634: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x1e8634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_1e8638:
    // 0x1e8638: 0x2012  mflo        $a0
    ctx->pc = 0x1e8638u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_1e863c:
    // 0x1e863c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1e863cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1e8640:
    // 0x1e8640: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e8640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e8644:
    // 0x1e8644: 0x1e00000b  bgtz        $s0, . + 4 + (0xB << 2)
label_1e8648:
    if (ctx->pc == 0x1E8648u) {
        ctx->pc = 0x1E8648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8644u;
        // 0x1e8648: 0xae630038  sw          $v1, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E864Cu;
        goto label_1e864c;
    }
    ctx->pc = 0x1E8644u;
    {
        const bool branch_taken_0x1e8644 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x1E8648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8644u;
        // 0x1e8648: 0xae630038  sw          $v1, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8644) {
            ctx->pc = 0x1E8674u;
            goto label_1e8674;
        }
    }
    ctx->pc = 0x1E864Cu;
label_1e864c:
    // 0x1e864c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e864cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1e8650:
    // 0x1e8650: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1e8654:
    if (ctx->pc == 0x1E8654u) {
        ctx->pc = 0x1E8654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8650u;
        // 0x1e8654: 0x3c02001f  lui         $v0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8658u;
        goto label_1e8658;
    }
    ctx->pc = 0x1E8650u;
    {
        const bool branch_taken_0x1e8650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8650u;
        // 0x1e8654: 0x3c02001f  lui         $v0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8650) {
            ctx->pc = 0x1E8674u;
            goto label_1e8674;
        }
    }
    ctx->pc = 0x1E8658u;
label_1e8658:
    // 0x1e8658: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1e8658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1e865c:
    // 0x1e865c: 0x24428410  addiu       $v0, $v0, -0x7BF0
    ctx->pc = 0x1e865cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935568));
label_1e8660:
    // 0x1e8660: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1e8660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e8664:
    // 0x1e8664: 0xae62003c  sw          $v0, 0x3C($s3)
    ctx->pc = 0x1e8664u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
label_1e8668:
    // 0x1e8668: 0xc06ee4c  jal         func_1BB930
label_1e866c:
    if (ctx->pc == 0x1E866Cu) {
        ctx->pc = 0x1E866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8668u;
        // 0x1e866c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8670u;
        goto label_1e8670;
    }
    ctx->pc = 0x1E8668u;
    SET_GPR_U32(ctx, 31, 0x1E8670u);
    ctx->pc = 0x1E866Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8668u;
    // 0x1e866c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB930u, 0x1E8668u, 0x1E8670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8670u;
label_1e8670:
    // 0x1e8670: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x1e8670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_1e8674:
    // 0x1e8674: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1e8674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1e8678:
    // 0x1e8678: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_1e867c:
    if (ctx->pc == 0x1E867Cu) {
        ctx->pc = 0x1E867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8678u;
        // 0x1e867c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8680u;
        goto label_1e8680;
    }
    ctx->pc = 0x1E8678u;
    {
        const bool branch_taken_0x1e8678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8678u;
        // 0x1e867c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8678) {
            ctx->pc = 0x1E86F0u;
            goto label_1e86f0;
        }
    }
    ctx->pc = 0x1E8680u;
label_1e8680:
    // 0x1e8680: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1e8680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1e8684:
    // 0x1e8684: 0xc07eb90  jal         func_1FAE40
label_1e8688:
    if (ctx->pc == 0x1E8688u) {
        ctx->pc = 0x1E8688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8684u;
        // 0x1e8688: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E868Cu;
        goto label_1e868c;
    }
    ctx->pc = 0x1E8684u;
    SET_GPR_U32(ctx, 31, 0x1E868Cu);
    ctx->pc = 0x1E8688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8684u;
    // 0x1e8688: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAE40u, 0x1E8684u, 0x1E868Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E868Cu;
label_1e868c:
    // 0x1e868c: 0x10000019  b           . + 4 + (0x19 << 2)
label_1e8690:
    if (ctx->pc == 0x1E8690u) {
        ctx->pc = 0x1E8690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E868Cu;
        // 0x1e8690: 0xde8209c8  ld          $v0, 0x9C8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 2504)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8694u;
        goto label_1e8694;
    }
    ctx->pc = 0x1E868Cu;
    {
        const bool branch_taken_0x1e868c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E868Cu;
        // 0x1e8690: 0xde8209c8  ld          $v0, 0x9C8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 2504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e868c) {
            ctx->pc = 0x1E86F4u;
            goto label_1e86f4;
        }
    }
    ctx->pc = 0x1E8694u;
label_1e8694:
    // 0x1e8694: 0x0  nop
    ctx->pc = 0x1e8694u;
    // NOP
label_1e8698:
    // 0x1e8698: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e8698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1e869c:
    // 0x1e869c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1e86a0:
    if (ctx->pc == 0x1E86A0u) {
        ctx->pc = 0x1E86A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E869Cu;
        // 0x1e86a0: 0x32023  negu        $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E86A4u;
        goto label_1e86a4;
    }
    ctx->pc = 0x1E869Cu;
    {
        const bool branch_taken_0x1e869c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E86A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E869Cu;
        // 0x1e86a0: 0x32023  negu        $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e869c) {
            ctx->pc = 0x1E86F0u;
            goto label_1e86f0;
        }
    }
    ctx->pc = 0x1E86A4u;
label_1e86a4:
    // 0x1e86a4: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x1e86a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
label_1e86a8:
    // 0x1e86a8: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x1e86a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
label_1e86ac:
    // 0x1e86ac: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x1e86acu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_1e86b0:
    // 0x1e86b0: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x1e86b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
label_1e86b4:
    // 0x1e86b4: 0x48140  sll         $s0, $a0, 5
    ctx->pc = 0x1e86b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1e86b8:
    // 0x1e86b8: 0x5a00000b  blezl       $s0, . + 4 + (0xB << 2)
label_1e86bc:
    if (ctx->pc == 0x1E86BCu) {
        ctx->pc = 0x1E86BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E86B8u;
        // 0x1e86bc: 0x3c02001f  lui         $v0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E86C0u;
        goto label_1e86c0;
    }
    ctx->pc = 0x1E86B8u;
    {
        const bool branch_taken_0x1e86b8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1e86b8) {
            ctx->pc = 0x1E86BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E86B8u;
            // 0x1e86bc: 0x3c02001f  lui         $v0, 0x1F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E86E8u;
            goto label_1e86e8;
        }
    }
    ctx->pc = 0x1E86C0u;
label_1e86c0:
    // 0x1e86c0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1e86c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1e86c4:
    // 0x1e86c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e86c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e86c8:
    // 0x1e86c8: 0xc07a1ee  jal         func_1E87B8
label_1e86cc:
    if (ctx->pc == 0x1E86CCu) {
        ctx->pc = 0x1E86CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E86C8u;
        // 0x1e86cc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E86D0u;
        goto label_1e86d0;
    }
    ctx->pc = 0x1E86C8u;
    SET_GPR_U32(ctx, 31, 0x1E86D0u);
    ctx->pc = 0x1E86CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E86C8u;
    // 0x1e86cc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E87B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E87B8u, 0x1E86C8u, 0x1E86D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E86D0u;
label_1e86d0:
    // 0x1e86d0: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x1e86d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_1e86d4:
    // 0x1e86d4: 0x2022023  subu        $a0, $s0, $v0
    ctx->pc = 0x1e86d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1e86d8:
    // 0x1e86d8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1e86d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e86dc:
    // 0x1e86dc: 0x1c800004  bgtz        $a0, . + 4 + (0x4 << 2)
label_1e86e0:
    if (ctx->pc == 0x1E86E0u) {
        ctx->pc = 0x1E86E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E86DCu;
        // 0x1e86e0: 0xae630038  sw          $v1, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E86E4u;
        goto label_1e86e4;
    }
    ctx->pc = 0x1E86DCu;
    {
        const bool branch_taken_0x1e86dc = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1E86E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E86DCu;
        // 0x1e86e0: 0xae630038  sw          $v1, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e86dc) {
            ctx->pc = 0x1E86F0u;
            goto label_1e86f0;
        }
    }
    ctx->pc = 0x1E86E4u;
label_1e86e4:
    // 0x1e86e4: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1e86e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_1e86e8:
    // 0x1e86e8: 0x24428410  addiu       $v0, $v0, -0x7BF0
    ctx->pc = 0x1e86e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935568));
label_1e86ec:
    // 0x1e86ec: 0xae62003c  sw          $v0, 0x3C($s3)
    ctx->pc = 0x1e86ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
label_1e86f0:
    // 0x1e86f0: 0xde8209c8  ld          $v0, 0x9C8($s4)
    ctx->pc = 0x1e86f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 2504)));
label_1e86f4:
    // 0x1e86f4: 0xafd60000  sw          $s6, 0x0($fp)
    ctx->pc = 0x1e86f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 22));
label_1e86f8:
    // 0x1e86f8: 0x2c2102d  daddu       $v0, $s6, $v0
    ctx->pc = 0x1e86f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 2));
label_1e86fc:
    // 0x1e86fc: 0xfe8209c8  sd          $v0, 0x9C8($s4)
    ctx->pc = 0x1e86fcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 2504), GPR_U64(ctx, 2));
label_1e8700:
    // 0x1e8700: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1e8700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e8704:
    // 0x1e8704: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1e8704u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1e8708:
    // 0x1e8708: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1e8708u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e870c:
    // 0x1e870c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1e870cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1e8710:
    // 0x1e8710: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1e8710u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e8714:
    // 0x1e8714: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1e8714u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1e8718:
    // 0x1e8718: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1e8718u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e871c:
    // 0x1e871c: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1e871cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1e8720:
    // 0x1e8720: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1e8720u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1e8724:
    // 0x1e8724: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1e8724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1e8728:
    // 0x1e8728: 0x3e00008  jr          $ra
label_1e872c:
    if (ctx->pc == 0x1E872Cu) {
        ctx->pc = 0x1E872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8728u;
        // 0x1e872c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8730u;
        goto label_fallthrough_0x1e8728;
    }
    ctx->pc = 0x1E8728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8728u;
        // 0x1e872c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e8728:
    ctx->pc = 0x1E8730u;
}
