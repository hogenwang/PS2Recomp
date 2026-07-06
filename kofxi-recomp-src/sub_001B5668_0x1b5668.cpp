#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B5668
// Address: 0x1b5668 - 0x1b59f8
void sub_001B5668_0x1b5668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5668_0x1b5668");
#endif

    switch (ctx->pc) {
        case 0x1b5668u: goto label_1b5668;
        case 0x1b566cu: goto label_1b566c;
        case 0x1b5670u: goto label_1b5670;
        case 0x1b5674u: goto label_1b5674;
        case 0x1b5678u: goto label_1b5678;
        case 0x1b567cu: goto label_1b567c;
        case 0x1b5680u: goto label_1b5680;
        case 0x1b5684u: goto label_1b5684;
        case 0x1b5688u: goto label_1b5688;
        case 0x1b568cu: goto label_1b568c;
        case 0x1b5690u: goto label_1b5690;
        case 0x1b5694u: goto label_1b5694;
        case 0x1b5698u: goto label_1b5698;
        case 0x1b569cu: goto label_1b569c;
        case 0x1b56a0u: goto label_1b56a0;
        case 0x1b56a4u: goto label_1b56a4;
        case 0x1b56a8u: goto label_1b56a8;
        case 0x1b56acu: goto label_1b56ac;
        case 0x1b56b0u: goto label_1b56b0;
        case 0x1b56b4u: goto label_1b56b4;
        case 0x1b56b8u: goto label_1b56b8;
        case 0x1b56bcu: goto label_1b56bc;
        case 0x1b56c0u: goto label_1b56c0;
        case 0x1b56c4u: goto label_1b56c4;
        case 0x1b56c8u: goto label_1b56c8;
        case 0x1b56ccu: goto label_1b56cc;
        case 0x1b56d0u: goto label_1b56d0;
        case 0x1b56d4u: goto label_1b56d4;
        case 0x1b56d8u: goto label_1b56d8;
        case 0x1b56dcu: goto label_1b56dc;
        case 0x1b56e0u: goto label_1b56e0;
        case 0x1b56e4u: goto label_1b56e4;
        case 0x1b56e8u: goto label_1b56e8;
        case 0x1b56ecu: goto label_1b56ec;
        case 0x1b56f0u: goto label_1b56f0;
        case 0x1b56f4u: goto label_1b56f4;
        case 0x1b56f8u: goto label_1b56f8;
        case 0x1b56fcu: goto label_1b56fc;
        case 0x1b5700u: goto label_1b5700;
        case 0x1b5704u: goto label_1b5704;
        case 0x1b5708u: goto label_1b5708;
        case 0x1b570cu: goto label_1b570c;
        case 0x1b5710u: goto label_1b5710;
        case 0x1b5714u: goto label_1b5714;
        case 0x1b5718u: goto label_1b5718;
        case 0x1b571cu: goto label_1b571c;
        case 0x1b5720u: goto label_1b5720;
        case 0x1b5724u: goto label_1b5724;
        case 0x1b5728u: goto label_1b5728;
        case 0x1b572cu: goto label_1b572c;
        case 0x1b5730u: goto label_1b5730;
        case 0x1b5734u: goto label_1b5734;
        case 0x1b5738u: goto label_1b5738;
        case 0x1b573cu: goto label_1b573c;
        case 0x1b5740u: goto label_1b5740;
        case 0x1b5744u: goto label_1b5744;
        case 0x1b5748u: goto label_1b5748;
        case 0x1b574cu: goto label_1b574c;
        case 0x1b5750u: goto label_1b5750;
        case 0x1b5754u: goto label_1b5754;
        case 0x1b5758u: goto label_1b5758;
        case 0x1b575cu: goto label_1b575c;
        case 0x1b5760u: goto label_1b5760;
        case 0x1b5764u: goto label_1b5764;
        case 0x1b5768u: goto label_1b5768;
        case 0x1b576cu: goto label_1b576c;
        case 0x1b5770u: goto label_1b5770;
        case 0x1b5774u: goto label_1b5774;
        case 0x1b5778u: goto label_1b5778;
        case 0x1b577cu: goto label_1b577c;
        case 0x1b5780u: goto label_1b5780;
        case 0x1b5784u: goto label_1b5784;
        case 0x1b5788u: goto label_1b5788;
        case 0x1b578cu: goto label_1b578c;
        case 0x1b5790u: goto label_1b5790;
        case 0x1b5794u: goto label_1b5794;
        case 0x1b5798u: goto label_1b5798;
        case 0x1b579cu: goto label_1b579c;
        case 0x1b57a0u: goto label_1b57a0;
        case 0x1b57a4u: goto label_1b57a4;
        case 0x1b57a8u: goto label_1b57a8;
        case 0x1b57acu: goto label_1b57ac;
        case 0x1b57b0u: goto label_1b57b0;
        case 0x1b57b4u: goto label_1b57b4;
        case 0x1b57b8u: goto label_1b57b8;
        case 0x1b57bcu: goto label_1b57bc;
        case 0x1b57c0u: goto label_1b57c0;
        case 0x1b57c4u: goto label_1b57c4;
        case 0x1b57c8u: goto label_1b57c8;
        case 0x1b57ccu: goto label_1b57cc;
        case 0x1b57d0u: goto label_1b57d0;
        case 0x1b57d4u: goto label_1b57d4;
        case 0x1b57d8u: goto label_1b57d8;
        case 0x1b57dcu: goto label_1b57dc;
        case 0x1b57e0u: goto label_1b57e0;
        case 0x1b57e4u: goto label_1b57e4;
        case 0x1b57e8u: goto label_1b57e8;
        case 0x1b57ecu: goto label_1b57ec;
        case 0x1b57f0u: goto label_1b57f0;
        case 0x1b57f4u: goto label_1b57f4;
        case 0x1b57f8u: goto label_1b57f8;
        case 0x1b57fcu: goto label_1b57fc;
        case 0x1b5800u: goto label_1b5800;
        case 0x1b5804u: goto label_1b5804;
        case 0x1b5808u: goto label_1b5808;
        case 0x1b580cu: goto label_1b580c;
        case 0x1b5810u: goto label_1b5810;
        case 0x1b5814u: goto label_1b5814;
        case 0x1b5818u: goto label_1b5818;
        case 0x1b581cu: goto label_1b581c;
        case 0x1b5820u: goto label_1b5820;
        case 0x1b5824u: goto label_1b5824;
        case 0x1b5828u: goto label_1b5828;
        case 0x1b582cu: goto label_1b582c;
        case 0x1b5830u: goto label_1b5830;
        case 0x1b5834u: goto label_1b5834;
        case 0x1b5838u: goto label_1b5838;
        case 0x1b583cu: goto label_1b583c;
        case 0x1b5840u: goto label_1b5840;
        case 0x1b5844u: goto label_1b5844;
        case 0x1b5848u: goto label_1b5848;
        case 0x1b584cu: goto label_1b584c;
        case 0x1b5850u: goto label_1b5850;
        case 0x1b5854u: goto label_1b5854;
        case 0x1b5858u: goto label_1b5858;
        case 0x1b585cu: goto label_1b585c;
        case 0x1b5860u: goto label_1b5860;
        case 0x1b5864u: goto label_1b5864;
        case 0x1b5868u: goto label_1b5868;
        case 0x1b586cu: goto label_1b586c;
        case 0x1b5870u: goto label_1b5870;
        case 0x1b5874u: goto label_1b5874;
        case 0x1b5878u: goto label_1b5878;
        case 0x1b587cu: goto label_1b587c;
        case 0x1b5880u: goto label_1b5880;
        case 0x1b5884u: goto label_1b5884;
        case 0x1b5888u: goto label_1b5888;
        case 0x1b588cu: goto label_1b588c;
        case 0x1b5890u: goto label_1b5890;
        case 0x1b5894u: goto label_1b5894;
        case 0x1b5898u: goto label_1b5898;
        case 0x1b589cu: goto label_1b589c;
        case 0x1b58a0u: goto label_1b58a0;
        case 0x1b58a4u: goto label_1b58a4;
        case 0x1b58a8u: goto label_1b58a8;
        case 0x1b58acu: goto label_1b58ac;
        case 0x1b58b0u: goto label_1b58b0;
        case 0x1b58b4u: goto label_1b58b4;
        case 0x1b58b8u: goto label_1b58b8;
        case 0x1b58bcu: goto label_1b58bc;
        case 0x1b58c0u: goto label_1b58c0;
        case 0x1b58c4u: goto label_1b58c4;
        case 0x1b58c8u: goto label_1b58c8;
        case 0x1b58ccu: goto label_1b58cc;
        case 0x1b58d0u: goto label_1b58d0;
        case 0x1b58d4u: goto label_1b58d4;
        case 0x1b58d8u: goto label_1b58d8;
        case 0x1b58dcu: goto label_1b58dc;
        case 0x1b58e0u: goto label_1b58e0;
        case 0x1b58e4u: goto label_1b58e4;
        case 0x1b58e8u: goto label_1b58e8;
        case 0x1b58ecu: goto label_1b58ec;
        case 0x1b58f0u: goto label_1b58f0;
        case 0x1b58f4u: goto label_1b58f4;
        case 0x1b58f8u: goto label_1b58f8;
        case 0x1b58fcu: goto label_1b58fc;
        case 0x1b5900u: goto label_1b5900;
        case 0x1b5904u: goto label_1b5904;
        case 0x1b5908u: goto label_1b5908;
        case 0x1b590cu: goto label_1b590c;
        case 0x1b5910u: goto label_1b5910;
        case 0x1b5914u: goto label_1b5914;
        case 0x1b5918u: goto label_1b5918;
        case 0x1b591cu: goto label_1b591c;
        case 0x1b5920u: goto label_1b5920;
        case 0x1b5924u: goto label_1b5924;
        case 0x1b5928u: goto label_1b5928;
        case 0x1b592cu: goto label_1b592c;
        case 0x1b5930u: goto label_1b5930;
        case 0x1b5934u: goto label_1b5934;
        case 0x1b5938u: goto label_1b5938;
        case 0x1b593cu: goto label_1b593c;
        case 0x1b5940u: goto label_1b5940;
        case 0x1b5944u: goto label_1b5944;
        case 0x1b5948u: goto label_1b5948;
        case 0x1b594cu: goto label_1b594c;
        case 0x1b5950u: goto label_1b5950;
        case 0x1b5954u: goto label_1b5954;
        case 0x1b5958u: goto label_1b5958;
        case 0x1b595cu: goto label_1b595c;
        case 0x1b5960u: goto label_1b5960;
        case 0x1b5964u: goto label_1b5964;
        case 0x1b5968u: goto label_1b5968;
        case 0x1b596cu: goto label_1b596c;
        case 0x1b5970u: goto label_1b5970;
        case 0x1b5974u: goto label_1b5974;
        case 0x1b5978u: goto label_1b5978;
        case 0x1b597cu: goto label_1b597c;
        case 0x1b5980u: goto label_1b5980;
        case 0x1b5984u: goto label_1b5984;
        case 0x1b5988u: goto label_1b5988;
        case 0x1b598cu: goto label_1b598c;
        case 0x1b5990u: goto label_1b5990;
        case 0x1b5994u: goto label_1b5994;
        case 0x1b5998u: goto label_1b5998;
        case 0x1b599cu: goto label_1b599c;
        case 0x1b59a0u: goto label_1b59a0;
        case 0x1b59a4u: goto label_1b59a4;
        case 0x1b59a8u: goto label_1b59a8;
        case 0x1b59acu: goto label_1b59ac;
        case 0x1b59b0u: goto label_1b59b0;
        case 0x1b59b4u: goto label_1b59b4;
        case 0x1b59b8u: goto label_1b59b8;
        case 0x1b59bcu: goto label_1b59bc;
        case 0x1b59c0u: goto label_1b59c0;
        case 0x1b59c4u: goto label_1b59c4;
        case 0x1b59c8u: goto label_1b59c8;
        case 0x1b59ccu: goto label_1b59cc;
        case 0x1b59d0u: goto label_1b59d0;
        case 0x1b59d4u: goto label_1b59d4;
        case 0x1b59d8u: goto label_1b59d8;
        case 0x1b59dcu: goto label_1b59dc;
        case 0x1b59e0u: goto label_1b59e0;
        case 0x1b59e4u: goto label_1b59e4;
        case 0x1b59e8u: goto label_1b59e8;
        case 0x1b59ecu: goto label_1b59ec;
        case 0x1b59f0u: goto label_1b59f0;
        case 0x1b59f4u: goto label_1b59f4;
        default: break;
    }

    ctx->pc = 0x1b5668u;

label_1b5668:
    // 0x1b5668: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b5668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1b566c:
    // 0x1b566c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b566cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b5670:
    // 0x1b5670: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b5670u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b5674:
    // 0x1b5674: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1b5674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1b5678:
    // 0x1b5678: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1b5678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1b567c:
    // 0x1b567c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1b567cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1b5680:
    // 0x1b5680: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1b5680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1b5684:
    // 0x1b5684: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1b5684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_1b5688:
    // 0x1b5688: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x1b5688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1b568c:
    // 0x1b568c: 0x8e540004  lw          $s4, 0x4($s2)
    ctx->pc = 0x1b568cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1b5690:
    // 0x1b5690: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
label_1b5694:
    if (ctx->pc == 0x1B5694u) {
        ctx->pc = 0x1B5694u;
            // 0x1b5694: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x1B5698u;
        goto label_1b5698;
    }
    ctx->pc = 0x1B5690u;
    {
        const bool branch_taken_0x1b5690 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1B5694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5690u;
            // 0x1b5694: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5690) {
            ctx->pc = 0x1B56BCu;
            goto label_1b56bc;
        }
    }
    ctx->pc = 0x1B5698u;
label_1b5698:
    // 0x1b5698: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x1b5698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1b569c:
    // 0x1b569c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b569cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b56a0:
    // 0x1b56a0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1b56a4:
    if (ctx->pc == 0x1B56A4u) {
        ctx->pc = 0x1B56A4u;
            // 0x1b56a4: 0x82430003  lb          $v1, 0x3($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
        ctx->pc = 0x1B56A8u;
        goto label_1b56a8;
    }
    ctx->pc = 0x1B56A0u;
    {
        const bool branch_taken_0x1b56a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b56a0) {
            ctx->pc = 0x1B56A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B56A0u;
            // 0x1b56a4: 0x82430003  lb          $v1, 0x3($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B56C0u;
            goto label_1b56c0;
        }
    }
    ctx->pc = 0x1B56A8u;
label_1b56a8:
    // 0x1b56a8: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x1b56a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_1b56ac:
    // 0x1b56ac: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1b56b0:
    if (ctx->pc == 0x1B56B0u) {
        ctx->pc = 0x1B56B0u;
            // 0x1b56b0: 0x82430003  lb          $v1, 0x3($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
        ctx->pc = 0x1B56B4u;
        goto label_1b56b4;
    }
    ctx->pc = 0x1B56ACu;
    {
        const bool branch_taken_0x1b56ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b56ac) {
            ctx->pc = 0x1B56B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B56ACu;
            // 0x1b56b0: 0x82430003  lb          $v1, 0x3($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B56C0u;
            goto label_1b56c0;
        }
    }
    ctx->pc = 0x1B56B4u;
label_1b56b4:
    // 0x1b56b4: 0x40f809  jalr        $v0
label_1b56b8:
    if (ctx->pc == 0x1B56B8u) {
        ctx->pc = 0x1B56B8u;
            // 0x1b56b8: 0x8e44004c  lw          $a0, 0x4C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
        ctx->pc = 0x1B56BCu;
        goto label_1b56bc;
    }
    ctx->pc = 0x1B56B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B56BCu);
        ctx->pc = 0x1B56B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B56B4u;
            // 0x1b56b8: 0x8e44004c  lw          $a0, 0x4C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B56BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B56BCu; }
            if (ctx->pc != 0x1B56BCu) { return; }
        }
        }
    }
    ctx->pc = 0x1B56BCu;
label_1b56bc:
    // 0x1b56bc: 0x82430003  lb          $v1, 0x3($s2)
    ctx->pc = 0x1b56bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_1b56c0:
    // 0x1b56c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b56c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b56c4:
    // 0x1b56c4: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
label_1b56c8:
    if (ctx->pc == 0x1B56C8u) {
        ctx->pc = 0x1B56C8u;
            // 0x1b56c8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1B56CCu;
        goto label_1b56cc;
    }
    ctx->pc = 0x1B56C4u;
    {
        const bool branch_taken_0x1b56c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b56c4) {
            ctx->pc = 0x1B56C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B56C4u;
            // 0x1b56c8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B56F8u;
            goto label_1b56f8;
        }
    }
    ctx->pc = 0x1B56CCu;
label_1b56cc:
    // 0x1b56cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1b56ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b56d0:
    // 0x1b56d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b56d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b56d4:
    // 0x1b56d4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1b56d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1b56d8:
    // 0x1b56d8: 0x40f809  jalr        $v0
label_1b56dc:
    if (ctx->pc == 0x1B56DCu) {
        ctx->pc = 0x1B56DCu;
            // 0x1b56dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B56E0u;
        goto label_1b56e0;
    }
    ctx->pc = 0x1B56D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B56E0u);
        ctx->pc = 0x1B56DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B56D8u;
            // 0x1b56dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B56E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B56E0u; }
            if (ctx->pc != 0x1B56E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1B56E0u;
label_1b56e0:
    // 0x1b56e0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1b56e4:
    if (ctx->pc == 0x1B56E4u) {
        ctx->pc = 0x1B56E4u;
            // 0x1b56e4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1B56E8u;
        goto label_1b56e8;
    }
    ctx->pc = 0x1B56E0u;
    {
        const bool branch_taken_0x1b56e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b56e0) {
            ctx->pc = 0x1B56E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B56E0u;
            // 0x1b56e4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B56F8u;
            goto label_1b56f8;
        }
    }
    ctx->pc = 0x1B56E8u;
label_1b56e8:
    // 0x1b56e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b56e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b56ec:
    // 0x1b56ec: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_1b56f0:
    if (ctx->pc == 0x1B56F0u) {
        ctx->pc = 0x1B56F0u;
            // 0x1b56f0: 0xa2420001  sb          $v0, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1B56F4u;
        goto label_1b56f4;
    }
    ctx->pc = 0x1B56ECu;
    {
        const bool branch_taken_0x1b56ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B56F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B56ECu;
            // 0x1b56f0: 0xa2420001  sb          $v0, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b56ec) {
            ctx->pc = 0x1B59D4u;
            goto label_1b59d4;
        }
    }
    ctx->pc = 0x1B56F4u;
label_1b56f4:
    // 0x1b56f4: 0x0  nop
    ctx->pc = 0x1b56f4u;
    // NOP
label_1b56f8:
    // 0x1b56f8: 0x26530014  addiu       $s3, $s2, 0x14
    ctx->pc = 0x1b56f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_1b56fc:
    // 0x1b56fc: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1b56fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1b5700:
    // 0x1b5700: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b5704:
    // 0x1b5704: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1b5704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1b5708:
    // 0x1b5708: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b5708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b570c:
    // 0x1b570c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1b570cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1b5710:
    // 0x1b5710: 0x60f809  jalr        $v1
label_1b5714:
    if (ctx->pc == 0x1B5714u) {
        ctx->pc = 0x1B5714u;
            // 0x1b5714: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B5718u;
        goto label_1b5718;
    }
    ctx->pc = 0x1B5710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B5718u);
        ctx->pc = 0x1B5714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5710u;
            // 0x1b5714: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B5718u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B5718u; }
            if (ctx->pc != 0x1B5718u) { return; }
        }
        }
    }
    ctx->pc = 0x1B5718u;
label_1b5718:
    // 0x1b5718: 0xc06ae4c  jal         func_1AB930
label_1b571c:
    if (ctx->pc == 0x1B571Cu) {
        ctx->pc = 0x1B571Cu;
            // 0x1b571c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B5720u;
        goto label_1b5720;
    }
    ctx->pc = 0x1B5718u;
    SET_GPR_U32(ctx, 31, 0x1B5720u);
    ctx->pc = 0x1B571Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5718u;
            // 0x1b571c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB930u;
    if (runtime->hasFunction(0x1AB930u)) {
        auto targetFn = runtime->lookupFunction(0x1AB930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5720u; }
        if (ctx->pc != 0x1B5720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB930_0x1ab930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5720u; }
        if (ctx->pc != 0x1B5720u) { return; }
    }
    ctx->pc = 0x1B5720u;
label_1b5720:
    // 0x1b5720: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
label_1b5724:
    if (ctx->pc == 0x1B5724u) {
        ctx->pc = 0x1B5728u;
        goto label_1b5728;
    }
    ctx->pc = 0x1B5720u;
    {
        const bool branch_taken_0x1b5720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5720) {
            ctx->pc = 0x1B58A8u;
            goto label_1b58a8;
        }
    }
    ctx->pc = 0x1B5728u;
label_1b5728:
    // 0x1b5728: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x1b5728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_1b572c:
    // 0x1b572c: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x1b572cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_1b5730:
    // 0x1b5730: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
label_1b5734:
    if (ctx->pc == 0x1B5734u) {
        ctx->pc = 0x1B5734u;
            // 0x1b5734: 0x34058001  ori         $a1, $zero, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
        ctx->pc = 0x1B5738u;
        goto label_1b5738;
    }
    ctx->pc = 0x1B5730u;
    {
        const bool branch_taken_0x1b5730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5730u;
            // 0x1b5734: 0x34058001  ori         $a1, $zero, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5730) {
            ctx->pc = 0x1B58A8u;
            goto label_1b58a8;
        }
    }
    ctx->pc = 0x1B5738u;
label_1b5738:
    // 0x1b5738: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1b5738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b573c:
    // 0x1b573c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x1b573cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1b5740:
    // 0x1b5740: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x1b5740u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_1b5744:
    // 0x1b5744: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1b5744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_1b5748:
    // 0x1b5748: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b5748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b574c:
    // 0x1b574c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1b574cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1b5750:
    // 0x1b5750: 0x14450055  bne         $v0, $a1, . + 4 + (0x55 << 2)
label_1b5754:
    if (ctx->pc == 0x1B5754u) {
        ctx->pc = 0x1B5754u;
            // 0x1b5754: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1B5758u;
        goto label_1b5758;
    }
    ctx->pc = 0x1B5750u;
    {
        const bool branch_taken_0x1b5750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B5754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5750u;
            // 0x1b5754: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5750) {
            ctx->pc = 0x1B58A8u;
            goto label_1b58a8;
        }
    }
    ctx->pc = 0x1B5758u;
label_1b5758:
    // 0x1b5758: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1b5758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b575c:
    // 0x1b575c: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x1b575cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
label_1b5760:
    // 0x1b5760: 0xc06b75e  jal         func_1ADD78
label_1b5764:
    if (ctx->pc == 0x1B5764u) {
        ctx->pc = 0x1B5764u;
            // 0x1b5764: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1B5768u;
        goto label_1b5768;
    }
    ctx->pc = 0x1B5760u;
    SET_GPR_U32(ctx, 31, 0x1B5768u);
    ctx->pc = 0x1B5764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5760u;
            // 0x1b5764: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ADD78u;
    if (runtime->hasFunction(0x1ADD78u)) {
        auto targetFn = runtime->lookupFunction(0x1ADD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5768u; }
        if (ctx->pc != 0x1B5768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADD78_0x1add78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5768u; }
        if (ctx->pc != 0x1B5768u) { return; }
    }
    ctx->pc = 0x1B5768u;
label_1b5768:
    // 0x1b5768: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_1b576c:
    if (ctx->pc == 0x1B576Cu) {
        ctx->pc = 0x1B576Cu;
            // 0x1b576c: 0x8e42009c  lw          $v0, 0x9C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
        ctx->pc = 0x1B5770u;
        goto label_1b5770;
    }
    ctx->pc = 0x1B5768u;
    {
        const bool branch_taken_0x1b5768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5768) {
            ctx->pc = 0x1B576Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5768u;
            // 0x1b576c: 0x8e42009c  lw          $v0, 0x9C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B57C8u;
            goto label_1b57c8;
        }
    }
    ctx->pc = 0x1B5770u;
label_1b5770:
    // 0x1b5770: 0x87a50010  lh          $a1, 0x10($sp)
    ctx->pc = 0x1b5770u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5774:
    // 0x1b5774: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1b5774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_1b5778:
    // 0x1b5778: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1b5778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1b577c:
    // 0x1b577c: 0x54400073  bnel        $v0, $zero, . + 4 + (0x73 << 2)
label_1b5780:
    if (ctx->pc == 0x1B5780u) {
        ctx->pc = 0x1B5780u;
            // 0x1b5780: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1B5784u;
        goto label_1b5784;
    }
    ctx->pc = 0x1B577Cu;
    {
        const bool branch_taken_0x1b577c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b577c) {
            ctx->pc = 0x1B5780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B577Cu;
            // 0x1b5780: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B594Cu;
            goto label_1b594c;
        }
    }
    ctx->pc = 0x1B5784u;
label_1b5784:
    // 0x1b5784: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b5784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b5788:
    // 0x1b5788: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1b5788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b578c:
    // 0x1b578c: 0xc07337e  jal         func_1CCDF8
label_1b5790:
    if (ctx->pc == 0x1B5790u) {
        ctx->pc = 0x1B5790u;
            // 0x1b5790: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B5794u;
        goto label_1b5794;
    }
    ctx->pc = 0x1B578Cu;
    SET_GPR_U32(ctx, 31, 0x1B5794u);
    ctx->pc = 0x1B5790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B578Cu;
            // 0x1b5790: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CCDF8u;
    if (runtime->hasFunction(0x1CCDF8u)) {
        auto targetFn = runtime->lookupFunction(0x1CCDF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5794u; }
        if (ctx->pc != 0x1B5794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCDF8_0x1ccdf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5794u; }
        if (ctx->pc != 0x1B5794u) { return; }
    }
    ctx->pc = 0x1B5794u;
label_1b5794:
    // 0x1b5794: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1b5794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b5798:
    // 0x1b5798: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b579c:
    // 0x1b579c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b579cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b57a0:
    // 0x1b57a0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1b57a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1b57a4:
    // 0x1b57a4: 0x40f809  jalr        $v0
label_1b57a8:
    if (ctx->pc == 0x1B57A8u) {
        ctx->pc = 0x1B57A8u;
            // 0x1b57a8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B57ACu;
        goto label_1b57ac;
    }
    ctx->pc = 0x1B57A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B57ACu);
        ctx->pc = 0x1B57A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B57A4u;
            // 0x1b57a8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B57ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B57ACu; }
            if (ctx->pc != 0x1B57ACu) { return; }
        }
        }
    }
    ctx->pc = 0x1B57ACu;
label_1b57ac:
    // 0x1b57ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1b57acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b57b0:
    // 0x1b57b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b57b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b57b4:
    // 0x1b57b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b57b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b57b8:
    // 0x1b57b8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1b57b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1b57bc:
    // 0x1b57bc: 0x40f809  jalr        $v0
label_1b57c0:
    if (ctx->pc == 0x1B57C0u) {
        ctx->pc = 0x1B57C0u;
            // 0x1b57c0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B57C4u;
        goto label_1b57c4;
    }
    ctx->pc = 0x1B57BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B57C4u);
        ctx->pc = 0x1B57C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B57BCu;
            // 0x1b57c0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B57C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B57C4u; }
            if (ctx->pc != 0x1B57C4u) { return; }
        }
        }
    }
    ctx->pc = 0x1B57C4u;
label_1b57c4:
    // 0x1b57c4: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x1b57c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_1b57c8:
    // 0x1b57c8: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
label_1b57cc:
    if (ctx->pc == 0x1B57CCu) {
        ctx->pc = 0x1B57CCu;
            // 0x1b57cc: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B57D0u;
        goto label_1b57d0;
    }
    ctx->pc = 0x1B57C8u;
    {
        const bool branch_taken_0x1b57c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B57CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B57C8u;
            // 0x1b57cc: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b57c8) {
            ctx->pc = 0x1B59D4u;
            goto label_1b59d4;
        }
    }
    ctx->pc = 0x1B57D0u;
label_1b57d0:
    // 0x1b57d0: 0x10000028  b           . + 4 + (0x28 << 2)
label_1b57d4:
    if (ctx->pc == 0x1B57D4u) {
        ctx->pc = 0x1B57D4u;
            // 0x1b57d4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1B57D8u;
        goto label_1b57d8;
    }
    ctx->pc = 0x1B57D0u;
    {
        const bool branch_taken_0x1b57d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B57D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B57D0u;
            // 0x1b57d4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b57d0) {
            ctx->pc = 0x1B5874u;
            goto label_1b5874;
        }
    }
    ctx->pc = 0x1B57D8u;
label_1b57d8:
    // 0x1b57d8: 0xa4802a  slt         $s0, $a1, $a0
    ctx->pc = 0x1b57d8u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1b57dc:
    // 0x1b57dc: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
label_1b57e0:
    if (ctx->pc == 0x1B57E0u) {
        ctx->pc = 0x1B57E0u;
            // 0x1b57e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B57E4u;
        goto label_1b57e4;
    }
    ctx->pc = 0x1B57DCu;
    {
        const bool branch_taken_0x1b57dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b57dc) {
            ctx->pc = 0x1B57E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B57DCu;
            // 0x1b57e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B582Cu;
            goto label_1b582c;
        }
    }
    ctx->pc = 0x1B57E4u;
label_1b57e4:
    // 0x1b57e4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1b57e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b57e8:
    // 0x1b57e8: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1b57e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1b57ec:
    // 0x1b57ec: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
label_1b57f0:
    if (ctx->pc == 0x1B57F0u) {
        ctx->pc = 0x1B57F0u;
            // 0x1b57f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B57F4u;
        goto label_1b57f4;
    }
    ctx->pc = 0x1B57ECu;
    {
        const bool branch_taken_0x1b57ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b57ec) {
            ctx->pc = 0x1B57F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B57ECu;
            // 0x1b57f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B582Cu;
            goto label_1b582c;
        }
    }
    ctx->pc = 0x1B57F4u;
label_1b57f4:
    // 0x1b57f4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1b57f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b57f8:
    // 0x1b57f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b57f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1b57fc:
    // 0x1b57fc: 0x0  nop
    ctx->pc = 0x1b57fcu;
    // NOP
label_1b5800:
    // 0x1b5800: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1b5800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1b5804:
    // 0x1b5804: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1b5808:
    if (ctx->pc == 0x1B5808u) {
        ctx->pc = 0x1B5808u;
            // 0x1b5808: 0xa4802a  slt         $s0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->pc = 0x1B580Cu;
        goto label_1b580c;
    }
    ctx->pc = 0x1B5804u;
    {
        const bool branch_taken_0x1b5804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5804) {
            ctx->pc = 0x1B5808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5804u;
            // 0x1b5808: 0xa4802a  slt         $s0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5828u;
            goto label_1b5828;
        }
    }
    ctx->pc = 0x1B580Cu;
label_1b580c:
    // 0x1b580c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1b580cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1b5810:
    // 0x1b5810: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b5810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1b5814:
    // 0x1b5814: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1b5814u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1b5818:
    // 0x1b5818: 0x0  nop
    ctx->pc = 0x1b5818u;
    // NOP
label_1b581c:
    // 0x1b581c: 0x5060fff8  beql        $v1, $zero, . + 4 + (-0x8 << 2)
label_1b5820:
    if (ctx->pc == 0x1B5820u) {
        ctx->pc = 0x1B5820u;
            // 0x1b5820: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x1B5824u;
        goto label_1b5824;
    }
    ctx->pc = 0x1B581Cu;
    {
        const bool branch_taken_0x1b581c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b581c) {
            ctx->pc = 0x1B5820u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B581Cu;
            // 0x1b5820: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5800u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b5800;
        }
    }
    ctx->pc = 0x1B5824u;
label_1b5824:
    // 0x1b5824: 0xa4802a  slt         $s0, $a1, $a0
    ctx->pc = 0x1b5824u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1b5828:
    // 0x1b5828: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b5828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b582c:
    // 0x1b582c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1b582cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b5830:
    // 0x1b5830: 0xc07337e  jal         func_1CCDF8
label_1b5834:
    if (ctx->pc == 0x1B5834u) {
        ctx->pc = 0x1B5834u;
            // 0x1b5834: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B5838u;
        goto label_1b5838;
    }
    ctx->pc = 0x1B5830u;
    SET_GPR_U32(ctx, 31, 0x1B5838u);
    ctx->pc = 0x1B5834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5830u;
            // 0x1b5834: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CCDF8u;
    if (runtime->hasFunction(0x1CCDF8u)) {
        auto targetFn = runtime->lookupFunction(0x1CCDF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5838u; }
        if (ctx->pc != 0x1B5838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCDF8_0x1ccdf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5838u; }
        if (ctx->pc != 0x1B5838u) { return; }
    }
    ctx->pc = 0x1B5838u;
label_1b5838:
    // 0x1b5838: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1b5838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b583c:
    // 0x1b583c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b583cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b5840:
    // 0x1b5840: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5844:
    // 0x1b5844: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1b5844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1b5848:
    // 0x1b5848: 0x40f809  jalr        $v0
label_1b584c:
    if (ctx->pc == 0x1B584Cu) {
        ctx->pc = 0x1B584Cu;
            // 0x1b584c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B5850u;
        goto label_1b5850;
    }
    ctx->pc = 0x1B5848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B5850u);
        ctx->pc = 0x1B584Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5848u;
            // 0x1b584c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B5850u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B5850u; }
            if (ctx->pc != 0x1B5850u) { return; }
        }
        }
    }
    ctx->pc = 0x1B5850u;
label_1b5850:
    // 0x1b5850: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1b5850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b5854:
    // 0x1b5854: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b5858:
    // 0x1b5858: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b5858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b585c:
    // 0x1b585c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1b585cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1b5860:
    // 0x1b5860: 0x40f809  jalr        $v0
label_1b5864:
    if (ctx->pc == 0x1B5864u) {
        ctx->pc = 0x1B5864u;
            // 0x1b5864: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B5868u;
        goto label_1b5868;
    }
    ctx->pc = 0x1B5860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B5868u);
        ctx->pc = 0x1B5864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5860u;
            // 0x1b5864: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B5868u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B5868u; }
            if (ctx->pc != 0x1B5868u) { return; }
        }
        }
    }
    ctx->pc = 0x1B5868u;
label_1b5868:
    // 0x1b5868: 0x1600005b  bnez        $s0, . + 4 + (0x5B << 2)
label_1b586c:
    if (ctx->pc == 0x1B586Cu) {
        ctx->pc = 0x1B586Cu;
            // 0x1b586c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1B5870u;
        goto label_1b5870;
    }
    ctx->pc = 0x1B5868u;
    {
        const bool branch_taken_0x1b5868 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B586Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5868u;
            // 0x1b586c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5868) {
            ctx->pc = 0x1B59D8u;
            goto label_1b59d8;
        }
    }
    ctx->pc = 0x1B5870u;
label_1b5870:
    // 0x1b5870: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1b5870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b5874:
    // 0x1b5874: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1b5874u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1b5878:
    // 0x1b5878: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b587c:
    // 0x1b587c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b587cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5880:
    // 0x1b5880: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1b5880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1b5884:
    // 0x1b5884: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1b5884u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1b5888:
    // 0x1b5888: 0x40f809  jalr        $v0
label_1b588c:
    if (ctx->pc == 0x1B588Cu) {
        ctx->pc = 0x1B588Cu;
            // 0x1b588c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B5890u;
        goto label_1b5890;
    }
    ctx->pc = 0x1B5888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B5890u);
        ctx->pc = 0x1B588Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5888u;
            // 0x1b588c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B5890u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B5890u; }
            if (ctx->pc != 0x1B5890u) { return; }
        }
        }
    }
    ctx->pc = 0x1B5890u;
label_1b5890:
    // 0x1b5890: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x1b5890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_1b5894:
    // 0x1b5894: 0x1480ffd0  bnez        $a0, . + 4 + (-0x30 << 2)
label_1b5898:
    if (ctx->pc == 0x1B5898u) {
        ctx->pc = 0x1B5898u;
            // 0x1b5898: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B589Cu;
        goto label_1b589c;
    }
    ctx->pc = 0x1B5894u;
    {
        const bool branch_taken_0x1b5894 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5894u;
            // 0x1b5898: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5894) {
            ctx->pc = 0x1B57D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b57d8;
        }
    }
    ctx->pc = 0x1B589Cu;
label_1b589c:
    // 0x1b589c: 0x1000004e  b           . + 4 + (0x4E << 2)
label_1b58a0:
    if (ctx->pc == 0x1B58A0u) {
        ctx->pc = 0x1B58A0u;
            // 0x1b58a0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1B58A4u;
        goto label_1b58a4;
    }
    ctx->pc = 0x1B589Cu;
    {
        const bool branch_taken_0x1b589c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B58A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B589Cu;
            // 0x1b58a0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b589c) {
            ctx->pc = 0x1B59D8u;
            goto label_1b59d8;
        }
    }
    ctx->pc = 0x1B58A4u;
label_1b58a4:
    // 0x1b58a4: 0x0  nop
    ctx->pc = 0x1b58a4u;
    // NOP
label_1b58a8:
    // 0x1b58a8: 0xc06d8b4  jal         func_1B62D0
label_1b58ac:
    if (ctx->pc == 0x1B58ACu) {
        ctx->pc = 0x1B58ACu;
            // 0x1b58ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B58B0u;
        goto label_1b58b0;
    }
    ctx->pc = 0x1B58A8u;
    SET_GPR_U32(ctx, 31, 0x1B58B0u);
    ctx->pc = 0x1B58ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B58A8u;
            // 0x1b58ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B62D0u;
    if (runtime->hasFunction(0x1B62D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B62D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B58B0u; }
        if (ctx->pc != 0x1B58B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B62D0_0x1b62d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B58B0u; }
        if (ctx->pc != 0x1B58B0u) { return; }
    }
    ctx->pc = 0x1B58B0u;
label_1b58b0:
    // 0x1b58b0: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x1b58b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_1b58b4:
    // 0x1b58b4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1b58b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b58b8:
    // 0x1b58b8: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
label_1b58bc:
    if (ctx->pc == 0x1B58BCu) {
        ctx->pc = 0x1B58C0u;
        goto label_1b58c0;
    }
    ctx->pc = 0x1B58B8u;
    {
        const bool branch_taken_0x1b58b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b58b8) {
            ctx->pc = 0x1B5910u;
            goto label_1b5910;
        }
    }
    ctx->pc = 0x1B58C0u;
label_1b58c0:
    // 0x1b58c0: 0xc06ae4c  jal         func_1AB930
label_1b58c4:
    if (ctx->pc == 0x1B58C4u) {
        ctx->pc = 0x1B58C4u;
            // 0x1b58c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B58C8u;
        goto label_1b58c8;
    }
    ctx->pc = 0x1B58C0u;
    SET_GPR_U32(ctx, 31, 0x1B58C8u);
    ctx->pc = 0x1B58C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B58C0u;
            // 0x1b58c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB930u;
    if (runtime->hasFunction(0x1AB930u)) {
        auto targetFn = runtime->lookupFunction(0x1AB930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B58C8u; }
        if (ctx->pc != 0x1B58C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB930_0x1ab930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B58C8u; }
        if (ctx->pc != 0x1B58C8u) { return; }
    }
    ctx->pc = 0x1B58C8u;
label_1b58c8:
    // 0x1b58c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b58c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b58cc:
    // 0x1b58cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b58ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b58d0:
    // 0x1b58d0: 0x56020005  bnel        $s0, $v0, . + 4 + (0x5 << 2)
label_1b58d4:
    if (ctx->pc == 0x1B58D4u) {
        ctx->pc = 0x1B58D4u;
            // 0x1b58d4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1B58D8u;
        goto label_1b58d8;
    }
    ctx->pc = 0x1B58D0u;
    {
        const bool branch_taken_0x1b58d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b58d0) {
            ctx->pc = 0x1B58D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B58D0u;
            // 0x1b58d4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B58E8u;
            goto label_1b58e8;
        }
    }
    ctx->pc = 0x1B58D8u;
label_1b58d8:
    // 0x1b58d8: 0xc06d94e  jal         func_1B6538
label_1b58dc:
    if (ctx->pc == 0x1B58DCu) {
        ctx->pc = 0x1B58DCu;
            // 0x1b58dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B58E0u;
        goto label_1b58e0;
    }
    ctx->pc = 0x1B58D8u;
    SET_GPR_U32(ctx, 31, 0x1B58E0u);
    ctx->pc = 0x1B58DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B58D8u;
            // 0x1b58dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6538u;
    if (runtime->hasFunction(0x1B6538u)) {
        auto targetFn = runtime->lookupFunction(0x1B6538u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B58E0u; }
        if (ctx->pc != 0x1B58E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6538_0x1b6538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B58E0u; }
        if (ctx->pc != 0x1B58E0u) { return; }
    }
    ctx->pc = 0x1B58E0u;
label_1b58e0:
    // 0x1b58e0: 0x1050000b  beq         $v0, $s0, . + 4 + (0xB << 2)
label_1b58e4:
    if (ctx->pc == 0x1B58E4u) {
        ctx->pc = 0x1B58E4u;
            // 0x1b58e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1B58E8u;
        goto label_1b58e8;
    }
    ctx->pc = 0x1B58E0u;
    {
        const bool branch_taken_0x1b58e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1B58E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B58E0u;
            // 0x1b58e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b58e0) {
            ctx->pc = 0x1B5910u;
            goto label_1b5910;
        }
    }
    ctx->pc = 0x1B58E8u;
label_1b58e8:
    // 0x1b58e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b58e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b58ec:
    // 0x1b58ec: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x1b58ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
label_1b58f0:
    // 0x1b58f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1b58f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b58f4:
    // 0x1b58f4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b58f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b58f8:
    // 0x1b58f8: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1b58f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1b58fc:
    // 0x1b58fc: 0x60f809  jalr        $v1
label_1b5900:
    if (ctx->pc == 0x1B5900u) {
        ctx->pc = 0x1B5900u;
            // 0x1b5900: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B5904u;
        goto label_1b5904;
    }
    ctx->pc = 0x1B58FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B5904u);
        ctx->pc = 0x1B5900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B58FCu;
            // 0x1b5900: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B5904u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B5904u; }
            if (ctx->pc != 0x1B5904u) { return; }
        }
        }
    }
    ctx->pc = 0x1B5904u;
label_1b5904:
    // 0x1b5904: 0x10000034  b           . + 4 + (0x34 << 2)
label_1b5908:
    if (ctx->pc == 0x1B5908u) {
        ctx->pc = 0x1B5908u;
            // 0x1b5908: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1B590Cu;
        goto label_1b590c;
    }
    ctx->pc = 0x1B5904u;
    {
        const bool branch_taken_0x1b5904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5904u;
            // 0x1b5908: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5904) {
            ctx->pc = 0x1B59D8u;
            goto label_1b59d8;
        }
    }
    ctx->pc = 0x1B590Cu;
label_1b590c:
    // 0x1b590c: 0x0  nop
    ctx->pc = 0x1b590cu;
    // NOP
label_1b5910:
    // 0x1b5910: 0xc06d8a8  jal         func_1B62A0
label_1b5914:
    if (ctx->pc == 0x1B5914u) {
        ctx->pc = 0x1B5914u;
            // 0x1b5914: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B5918u;
        goto label_1b5918;
    }
    ctx->pc = 0x1B5910u;
    SET_GPR_U32(ctx, 31, 0x1B5918u);
    ctx->pc = 0x1B5914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5910u;
            // 0x1b5914: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B62A0u;
    if (runtime->hasFunction(0x1B62A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B62A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5918u; }
        if (ctx->pc != 0x1B5918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B62A0_0x1b62a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5918u; }
        if (ctx->pc != 0x1B5918u) { return; }
    }
    ctx->pc = 0x1B5918u;
label_1b5918:
    // 0x1b5918: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1b5918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1b591c:
    // 0x1b591c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b591cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5920:
    // 0x1b5920: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b5920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b5924:
    // 0x1b5924: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1b5924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1b5928:
    // 0x1b5928: 0x40f809  jalr        $v0
label_1b592c:
    if (ctx->pc == 0x1B592Cu) {
        ctx->pc = 0x1B592Cu;
            // 0x1b592c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B5930u;
        goto label_1b5930;
    }
    ctx->pc = 0x1B5928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B5930u);
        ctx->pc = 0x1B592Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5928u;
            // 0x1b592c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B5930u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B5930u; }
            if (ctx->pc != 0x1B5930u) { return; }
        }
        }
    }
    ctx->pc = 0x1B5930u;
label_1b5930:
    // 0x1b5930: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1b5930u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1b5934:
    // 0x1b5934: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b5934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b5938:
    // 0x1b5938: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1b5938u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_1b593c:
    // 0x1b593c: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x1b593cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1b5940:
    // 0x1b5940: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1b5944:
    if (ctx->pc == 0x1B5944u) {
        ctx->pc = 0x1B5948u;
        goto label_1b5948;
    }
    ctx->pc = 0x1B5940u;
    {
        const bool branch_taken_0x1b5940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5940) {
            ctx->pc = 0x1B5968u;
            goto label_1b5968;
        }
    }
    ctx->pc = 0x1B5948u;
label_1b5948:
    // 0x1b5948: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1b5948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b594c:
    // 0x1b594c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b594cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b5950:
    // 0x1b5950: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1b5950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b5954:
    // 0x1b5954: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1b5954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1b5958:
    // 0x1b5958: 0x40f809  jalr        $v0
label_1b595c:
    if (ctx->pc == 0x1B595Cu) {
        ctx->pc = 0x1B595Cu;
            // 0x1b595c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B5960u;
        goto label_1b5960;
    }
    ctx->pc = 0x1B5958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B5960u);
        ctx->pc = 0x1B595Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5958u;
            // 0x1b595c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B5960u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B5960u; }
            if (ctx->pc != 0x1B5960u) { return; }
        }
        }
    }
    ctx->pc = 0x1B5960u;
label_1b5960:
    // 0x1b5960: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1b5964:
    if (ctx->pc == 0x1B5964u) {
        ctx->pc = 0x1B5964u;
            // 0x1b5964: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1B5968u;
        goto label_1b5968;
    }
    ctx->pc = 0x1B5960u;
    {
        const bool branch_taken_0x1b5960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5960u;
            // 0x1b5964: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5960) {
            ctx->pc = 0x1B59D8u;
            goto label_1b59d8;
        }
    }
    ctx->pc = 0x1B5968u;
label_1b5968:
    // 0x1b5968: 0xc06ae4c  jal         func_1AB930
label_1b596c:
    if (ctx->pc == 0x1B596Cu) {
        ctx->pc = 0x1B596Cu;
            // 0x1b596c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B5970u;
        goto label_1b5970;
    }
    ctx->pc = 0x1B5968u;
    SET_GPR_U32(ctx, 31, 0x1B5970u);
    ctx->pc = 0x1B596Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5968u;
            // 0x1b596c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB930u;
    if (runtime->hasFunction(0x1AB930u)) {
        auto targetFn = runtime->lookupFunction(0x1AB930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5970u; }
        if (ctx->pc != 0x1B5970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB930_0x1ab930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5970u; }
        if (ctx->pc != 0x1B5970u) { return; }
    }
    ctx->pc = 0x1B5970u;
label_1b5970:
    // 0x1b5970: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1b5970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b5974:
    // 0x1b5974: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_1b5978:
    if (ctx->pc == 0x1B5978u) {
        ctx->pc = 0x1B5978u;
            // 0x1b5978: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B597Cu;
        goto label_1b597c;
    }
    ctx->pc = 0x1B5974u;
    {
        const bool branch_taken_0x1b5974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B5978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5974u;
            // 0x1b5978: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5974) {
            ctx->pc = 0x1B5990u;
            goto label_1b5990;
        }
    }
    ctx->pc = 0x1B597Cu;
label_1b597c:
    // 0x1b597c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1b597cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b5980:
    // 0x1b5980: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b5984:
    // 0x1b5984: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1b5984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1b5988:
    // 0x1b5988: 0x40f809  jalr        $v0
label_1b598c:
    if (ctx->pc == 0x1B598Cu) {
        ctx->pc = 0x1B598Cu;
            // 0x1b598c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B5990u;
        goto label_1b5990;
    }
    ctx->pc = 0x1B5988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B5990u);
        ctx->pc = 0x1B598Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5988u;
            // 0x1b598c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B5990u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B5990u; }
            if (ctx->pc != 0x1B5990u) { return; }
        }
        }
    }
    ctx->pc = 0x1B5990u;
label_1b5990:
    // 0x1b5990: 0xc06ae4c  jal         func_1AB930
label_1b5994:
    if (ctx->pc == 0x1B5994u) {
        ctx->pc = 0x1B5994u;
            // 0x1b5994: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B5998u;
        goto label_1b5998;
    }
    ctx->pc = 0x1B5990u;
    SET_GPR_U32(ctx, 31, 0x1B5998u);
    ctx->pc = 0x1B5994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5990u;
            // 0x1b5994: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB930u;
    if (runtime->hasFunction(0x1AB930u)) {
        auto targetFn = runtime->lookupFunction(0x1AB930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5998u; }
        if (ctx->pc != 0x1B5998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB930_0x1ab930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5998u; }
        if (ctx->pc != 0x1B5998u) { return; }
    }
    ctx->pc = 0x1B5998u;
label_1b5998:
    // 0x1b5998: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1b5998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1b599c:
    // 0x1b599c: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
label_1b59a0:
    if (ctx->pc == 0x1B59A0u) {
        ctx->pc = 0x1B59A0u;
            // 0x1b59a0: 0x8e460018  lw          $a2, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->pc = 0x1B59A4u;
        goto label_1b59a4;
    }
    ctx->pc = 0x1B599Cu;
    {
        const bool branch_taken_0x1b599c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b599c) {
            ctx->pc = 0x1B59A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B599Cu;
            // 0x1b59a0: 0x8e460018  lw          $a2, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B59C0u;
            goto label_1b59c0;
        }
    }
    ctx->pc = 0x1B59A4u;
label_1b59a4:
    // 0x1b59a4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1b59a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b59a8:
    // 0x1b59a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b59a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b59ac:
    // 0x1b59ac: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1b59acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b59b0:
    // 0x1b59b0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1b59b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1b59b4:
    // 0x1b59b4: 0x40f809  jalr        $v0
label_1b59b8:
    if (ctx->pc == 0x1B59B8u) {
        ctx->pc = 0x1B59B8u;
            // 0x1b59b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B59BCu;
        goto label_1b59bc;
    }
    ctx->pc = 0x1B59B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B59BCu);
        ctx->pc = 0x1B59B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B59B4u;
            // 0x1b59b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B59BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B59BCu; }
            if (ctx->pc != 0x1B59BCu) { return; }
        }
        }
    }
    ctx->pc = 0x1B59BCu;
label_1b59bc:
    // 0x1b59bc: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x1b59bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_1b59c0:
    // 0x1b59c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b59c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b59c4:
    // 0x1b59c4: 0xc06af3a  jal         func_1ABCE8
label_1b59c8:
    if (ctx->pc == 0x1B59C8u) {
        ctx->pc = 0x1B59C8u;
            // 0x1b59c8: 0x8e450014  lw          $a1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->pc = 0x1B59CCu;
        goto label_1b59cc;
    }
    ctx->pc = 0x1B59C4u;
    SET_GPR_U32(ctx, 31, 0x1B59CCu);
    ctx->pc = 0x1B59C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B59C4u;
            // 0x1b59c8: 0x8e450014  lw          $a1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ABCE8u;
    if (runtime->hasFunction(0x1ABCE8u)) {
        auto targetFn = runtime->lookupFunction(0x1ABCE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B59CCu; }
        if (ctx->pc != 0x1B59CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ABCE8_0x1abce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B59CCu; }
        if (ctx->pc != 0x1B59CCu) { return; }
    }
    ctx->pc = 0x1B59CCu;
label_1b59cc:
    // 0x1b59cc: 0xc06af5a  jal         func_1ABD68
label_1b59d0:
    if (ctx->pc == 0x1B59D0u) {
        ctx->pc = 0x1B59D0u;
            // 0x1b59d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B59D4u;
        goto label_1b59d4;
    }
    ctx->pc = 0x1B59CCu;
    SET_GPR_U32(ctx, 31, 0x1B59D4u);
    ctx->pc = 0x1B59D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B59CCu;
            // 0x1b59d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ABD68u;
    if (runtime->hasFunction(0x1ABD68u)) {
        auto targetFn = runtime->lookupFunction(0x1ABD68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B59D4u; }
        if (ctx->pc != 0x1B59D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ABD68_0x1abd68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B59D4u; }
        if (ctx->pc != 0x1B59D4u) { return; }
    }
    ctx->pc = 0x1B59D4u;
label_1b59d4:
    // 0x1b59d4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1b59d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b59d8:
    // 0x1b59d8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1b59d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1b59dc:
    // 0x1b59dc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b59dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b59e0:
    // 0x1b59e0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1b59e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1b59e4:
    // 0x1b59e4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1b59e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b59e8:
    // 0x1b59e8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1b59e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1b59ec:
    // 0x1b59ec: 0x3e00008  jr          $ra
label_1b59f0:
    if (ctx->pc == 0x1B59F0u) {
        ctx->pc = 0x1B59F0u;
            // 0x1b59f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1B59F4u;
        goto label_1b59f4;
    }
    ctx->pc = 0x1B59ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B59F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B59ECu;
            // 0x1b59f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B59F4u;
label_1b59f4:
    // 0x1b59f4: 0x0  nop
    ctx->pc = 0x1b59f4u;
    // NOP
    ctx->pc = 0x1b59f8u;
}
