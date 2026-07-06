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

// Function: sub_003476E0
// Address: 0x3476e0 - 0x349f60
void sub_003476E0_0x3476e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003476E0_0x3476e0");
#endif

    switch (ctx->pc) {
        case 0x347718u: goto label_347718;
        case 0x347720u: goto label_347720;
        case 0x34773cu: goto label_34773c;
        case 0x347768u: goto label_347768;
        case 0x347770u: goto label_347770;
        case 0x34778cu: goto label_34778c;
        case 0x347800u: goto label_347800;
        case 0x347814u: goto label_347814;
        case 0x347850u: goto label_347850;
        case 0x347880u: goto label_347880;
        case 0x34795cu: goto label_34795c;
        case 0x34798cu: goto label_34798c;
        case 0x3479acu: goto label_3479ac;
        case 0x3479c4u: goto label_3479c4;
        case 0x3479d0u: goto label_3479d0;
        case 0x3479e8u: goto label_3479e8;
        case 0x3479f4u: goto label_3479f4;
        case 0x3479fcu: goto label_3479fc;
        case 0x347a10u: goto label_347a10;
        case 0x347a48u: goto label_347a48;
        case 0x347a58u: goto label_347a58;
        case 0x347a88u: goto label_347a88;
        case 0x347a94u: goto label_347a94;
        case 0x347ae0u: goto label_347ae0;
        case 0x347af8u: goto label_347af8;
        case 0x347b24u: goto label_347b24;
        case 0x347b34u: goto label_347b34;
        case 0x347bd4u: goto label_347bd4;
        case 0x347c38u: goto label_347c38;
        case 0x347c64u: goto label_347c64;
        case 0x347c78u: goto label_347c78;
        case 0x347c98u: goto label_347c98;
        case 0x347cc4u: goto label_347cc4;
        case 0x347d0cu: goto label_347d0c;
        case 0x347d18u: goto label_347d18;
        case 0x347d28u: goto label_347d28;
        case 0x347d44u: goto label_347d44;
        case 0x347d84u: goto label_347d84;
        case 0x347df4u: goto label_347df4;
        case 0x347e14u: goto label_347e14;
        case 0x347e5cu: goto label_347e5c;
        case 0x347e6cu: goto label_347e6c;
        case 0x347e7cu: goto label_347e7c;
        case 0x347e88u: goto label_347e88;
        case 0x347ebcu: goto label_347ebc;
        case 0x347ed8u: goto label_347ed8;
        case 0x347f18u: goto label_347f18;
        case 0x347f30u: goto label_347f30;
        case 0x347f58u: goto label_347f58;
        case 0x347f70u: goto label_347f70;
        case 0x347f7cu: goto label_347f7c;
        case 0x347f8cu: goto label_347f8c;
        case 0x347f98u: goto label_347f98;
        case 0x347fdcu: goto label_347fdc;
        case 0x347fecu: goto label_347fec;
        case 0x347ffcu: goto label_347ffc;
        case 0x348008u: goto label_348008;
        case 0x34803cu: goto label_34803c;
        case 0x348058u: goto label_348058;
        case 0x348098u: goto label_348098;
        case 0x3480acu: goto label_3480ac;
        case 0x3480bcu: goto label_3480bc;
        case 0x3480c8u: goto label_3480c8;
        case 0x3480fcu: goto label_3480fc;
        case 0x348118u: goto label_348118;
        case 0x34813cu: goto label_34813c;
        case 0x348148u: goto label_348148;
        case 0x348160u: goto label_348160;
        case 0x3481b8u: goto label_3481b8;
        case 0x3481d4u: goto label_3481d4;
        case 0x3481e8u: goto label_3481e8;
        case 0x34822cu: goto label_34822c;
        case 0x348240u: goto label_348240;
        case 0x348270u: goto label_348270;
        case 0x3482a0u: goto label_3482a0;
        case 0x3482d4u: goto label_3482d4;
        case 0x3482e8u: goto label_3482e8;
        case 0x348308u: goto label_348308;
        case 0x348320u: goto label_348320;
        case 0x34832cu: goto label_34832c;
        case 0x348358u: goto label_348358;
        case 0x34837cu: goto label_34837c;
        case 0x348394u: goto label_348394;
        case 0x3483a0u: goto label_3483a0;
        case 0x3483d4u: goto label_3483d4;
        case 0x348408u: goto label_348408;
        case 0x348424u: goto label_348424;
        case 0x348440u: goto label_348440;
        case 0x348454u: goto label_348454;
        case 0x348478u: goto label_348478;
        case 0x3484a4u: goto label_3484a4;
        case 0x3484b4u: goto label_3484b4;
        case 0x3484d0u: goto label_3484d0;
        case 0x3484ecu: goto label_3484ec;
        case 0x3484fcu: goto label_3484fc;
        case 0x348568u: goto label_348568;
        case 0x34857cu: goto label_34857c;
        case 0x3485f8u: goto label_3485f8;
        case 0x34860cu: goto label_34860c;
        case 0x34861cu: goto label_34861c;
        case 0x348634u: goto label_348634;
        case 0x348640u: goto label_348640;
        case 0x34869cu: goto label_34869c;
        case 0x3486b4u: goto label_3486b4;
        case 0x3486c0u: goto label_3486c0;
        case 0x348758u: goto label_348758;
        case 0x348778u: goto label_348778;
        case 0x3487a0u: goto label_3487a0;
        case 0x3487acu: goto label_3487ac;
        case 0x3487d8u: goto label_3487d8;
        case 0x348810u: goto label_348810;
        case 0x34881cu: goto label_34881c;
        case 0x34885cu: goto label_34885c;
        case 0x34886cu: goto label_34886c;
        case 0x348874u: goto label_348874;
        case 0x3488b4u: goto label_3488b4;
        case 0x34891cu: goto label_34891c;
        case 0x34893cu: goto label_34893c;
        case 0x34897cu: goto label_34897c;
        case 0x3489b8u: goto label_3489b8;
        case 0x3489e4u: goto label_3489e4;
        case 0x3489f0u: goto label_3489f0;
        case 0x348a18u: goto label_348a18;
        case 0x348a38u: goto label_348a38;
        case 0x348a58u: goto label_348a58;
        case 0x348a78u: goto label_348a78;
        case 0x348a98u: goto label_348a98;
        case 0x348ad0u: goto label_348ad0;
        case 0x348adcu: goto label_348adc;
        case 0x348b08u: goto label_348b08;
        case 0x348b4cu: goto label_348b4c;
        case 0x348b90u: goto label_348b90;
        case 0x348b9cu: goto label_348b9c;
        case 0x348bb0u: goto label_348bb0;
        case 0x348bc0u: goto label_348bc0;
        case 0x348bf4u: goto label_348bf4;
        case 0x348c08u: goto label_348c08;
        case 0x348c24u: goto label_348c24;
        case 0x348c40u: goto label_348c40;
        case 0x348c5cu: goto label_348c5c;
        case 0x348c78u: goto label_348c78;
        case 0x348c9cu: goto label_348c9c;
        case 0x348cb0u: goto label_348cb0;
        case 0x348cccu: goto label_348ccc;
        case 0x348ce8u: goto label_348ce8;
        case 0x348d14u: goto label_348d14;
        case 0x348d34u: goto label_348d34;
        case 0x348d58u: goto label_348d58;
        case 0x348d74u: goto label_348d74;
        case 0x348d90u: goto label_348d90;
        case 0x348d98u: goto label_348d98;
        case 0x348dbcu: goto label_348dbc;
        case 0x348dccu: goto label_348dcc;
        case 0x348de0u: goto label_348de0;
        case 0x348e0cu: goto label_348e0c;
        case 0x348e34u: goto label_348e34;
        case 0x348e58u: goto label_348e58;
        case 0x348eccu: goto label_348ecc;
        case 0x348ef8u: goto label_348ef8;
        case 0x348f24u: goto label_348f24;
        case 0x348f50u: goto label_348f50;
        case 0x348fc0u: goto label_348fc0;
        case 0x348fe8u: goto label_348fe8;
        case 0x349010u: goto label_349010;
        case 0x349038u: goto label_349038;
        case 0x34906cu: goto label_34906c;
        case 0x349078u: goto label_349078;
        case 0x3490c4u: goto label_3490c4;
        case 0x3490d0u: goto label_3490d0;
        case 0x3490e0u: goto label_3490e0;
        case 0x349100u: goto label_349100;
        case 0x34910cu: goto label_34910c;
        case 0x34911cu: goto label_34911c;
        case 0x34913cu: goto label_34913c;
        case 0x349148u: goto label_349148;
        case 0x349174u: goto label_349174;
        case 0x3491a0u: goto label_3491a0;
        case 0x3491c0u: goto label_3491c0;
        case 0x3491dcu: goto label_3491dc;
        case 0x3491f0u: goto label_3491f0;
        case 0x349220u: goto label_349220;
        case 0x34922cu: goto label_34922c;
        case 0x349268u: goto label_349268;
        case 0x349274u: goto label_349274;
        case 0x34929cu: goto label_34929c;
        case 0x3492b4u: goto label_3492b4;
        case 0x3492d8u: goto label_3492d8;
        case 0x3492e4u: goto label_3492e4;
        case 0x349304u: goto label_349304;
        case 0x349348u: goto label_349348;
        case 0x349364u: goto label_349364;
        case 0x349380u: goto label_349380;
        case 0x349408u: goto label_349408;
        case 0x34941cu: goto label_34941c;
        case 0x349434u: goto label_349434;
        case 0x349454u: goto label_349454;
        case 0x349468u: goto label_349468;
        case 0x34947cu: goto label_34947c;
        case 0x349484u: goto label_349484;
        case 0x349494u: goto label_349494;
        case 0x3494b4u: goto label_3494b4;
        case 0x3494d0u: goto label_3494d0;
        case 0x349500u: goto label_349500;
        case 0x34951cu: goto label_34951c;
        case 0x349538u: goto label_349538;
        case 0x349558u: goto label_349558;
        case 0x349574u: goto label_349574;
        case 0x3495dcu: goto label_3495dc;
        case 0x3495fcu: goto label_3495fc;
        case 0x34962cu: goto label_34962c;
        case 0x34964cu: goto label_34964c;
        case 0x3496d8u: goto label_3496d8;
        case 0x3496ecu: goto label_3496ec;
        case 0x349704u: goto label_349704;
        case 0x349724u: goto label_349724;
        case 0x349738u: goto label_349738;
        case 0x349754u: goto label_349754;
        case 0x349764u: goto label_349764;
        case 0x349784u: goto label_349784;
        case 0x3497a0u: goto label_3497a0;
        case 0x3497d0u: goto label_3497d0;
        case 0x3497ecu: goto label_3497ec;
        case 0x349808u: goto label_349808;
        case 0x349828u: goto label_349828;
        case 0x349844u: goto label_349844;
        case 0x3498acu: goto label_3498ac;
        case 0x3498ccu: goto label_3498cc;
        case 0x3498fcu: goto label_3498fc;
        case 0x34991cu: goto label_34991c;
        case 0x349970u: goto label_349970;
        case 0x349998u: goto label_349998;
        case 0x3499acu: goto label_3499ac;
        case 0x3499b8u: goto label_3499b8;
        case 0x3499f8u: goto label_3499f8;
        case 0x349a0cu: goto label_349a0c;
        case 0x349a18u: goto label_349a18;
        case 0x349a78u: goto label_349a78;
        case 0x349a94u: goto label_349a94;
        case 0x349ad8u: goto label_349ad8;
        case 0x349aecu: goto label_349aec;
        case 0x349b08u: goto label_349b08;
        case 0x349b18u: goto label_349b18;
        case 0x349b60u: goto label_349b60;
        case 0x349b80u: goto label_349b80;
        case 0x349b8cu: goto label_349b8c;
        case 0x349c20u: goto label_349c20;
        case 0x349c3cu: goto label_349c3c;
        case 0x349c64u: goto label_349c64;
        case 0x349ca0u: goto label_349ca0;
        case 0x349cb8u: goto label_349cb8;
        case 0x349cf8u: goto label_349cf8;
        case 0x349d48u: goto label_349d48;
        case 0x349d60u: goto label_349d60;
        case 0x349d6cu: goto label_349d6c;
        case 0x349da0u: goto label_349da0;
        case 0x349dbcu: goto label_349dbc;
        case 0x349decu: goto label_349dec;
        case 0x349e38u: goto label_349e38;
        case 0x349e54u: goto label_349e54;
        case 0x349e70u: goto label_349e70;
        case 0x349e78u: goto label_349e78;
        case 0x349e88u: goto label_349e88;
        case 0x349e98u: goto label_349e98;
        case 0x349ea4u: goto label_349ea4;
        case 0x349ec0u: goto label_349ec0;
        case 0x349edcu: goto label_349edc;
        case 0x349f08u: goto label_349f08;
        case 0x349f24u: goto label_349f24;
        case 0x349f38u: goto label_349f38;
        case 0x349f54u: goto label_349f54;
        default: break;
    }

    ctx->pc = 0x3476e0u;

label_3476e0:
    // 0x3476e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3476e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3476e4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3476e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3476e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3476e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3476ec: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3476ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3476f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3476f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3476f4: 0x24424c58  addiu       $v0, $v0, 0x4C58
    ctx->pc = 0x3476f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x3476f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3476f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3476fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3476fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x347700: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x347700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x347704: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x347704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x347708: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x347708u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34770c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34770cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x347710: 0x94510000  lhu         $s1, 0x0($v0)
    ctx->pc = 0x347710u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x347714: 0x24100080  addiu       $s0, $zero, 0x80
    ctx->pc = 0x347714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_347718:
    // 0x347718: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x347718u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34771c: 0x241300d0  addiu       $s3, $zero, 0xD0
    ctx->pc = 0x34771cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_347720:
    // 0x347720: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x347720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x347724: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x347724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347728: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x347728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34772c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x34772cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347730: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x347730u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347734: 0xc08369c  jal         func_20DA70
    ctx->pc = 0x347734u;
    SET_GPR_U32(ctx, 31, 0x34773Cu);
    ctx->pc = 0x347738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347734u;
    // 0x347738: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DA70u, 0x347734u, 0x34773Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34773Cu;
label_34773c:
    // 0x34773c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x34773cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x347740: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x347740u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x347744: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x347744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x347748: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x347748u;
    {
        const bool branch_taken_0x347748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347748u;
        // 0x34774c: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347748) {
            ctx->pc = 0x347720u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_347720;
        }
    }
    ctx->pc = 0x347750u;
    // 0x347750: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x347750u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x347754: 0x2a420009  slti        $v0, $s2, 0x9
    ctx->pc = 0x347754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x347758: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x347758u;
    {
        const bool branch_taken_0x347758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347758u;
        // 0x34775c: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347758) {
            ctx->pc = 0x347718u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_347718;
        }
    }
    ctx->pc = 0x347760u;
    // 0x347760: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x347760u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347764: 0x24100080  addiu       $s0, $zero, 0x80
    ctx->pc = 0x347764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_347768:
    // 0x347768: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x347768u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34776c: 0x24140190  addiu       $s4, $zero, 0x190
    ctx->pc = 0x34776cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_347770:
    // 0x347770: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x347770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x347774: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x347774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347778: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x347778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34777c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x34777cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347780: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x347780u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347784: 0xc08369c  jal         func_20DA70
    ctx->pc = 0x347784u;
    SET_GPR_U32(ctx, 31, 0x34778Cu);
    ctx->pc = 0x347788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347784u;
    // 0x347788: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DA70u, 0x347784u, 0x34778Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34778Cu;
label_34778c:
    // 0x34778c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x34778cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x347790: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x347790u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x347794: 0x2a430005  slti        $v1, $s2, 0x5
    ctx->pc = 0x347794u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x347798: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x347798u;
    {
        const bool branch_taken_0x347798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347798u;
        // 0x34779c: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347798) {
            ctx->pc = 0x347770u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_347770;
        }
    }
    ctx->pc = 0x3477A0u;
    // 0x3477a0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3477a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3477a4: 0x2a630009  slti        $v1, $s3, 0x9
    ctx->pc = 0x3477a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3477a8: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3477A8u;
    {
        const bool branch_taken_0x3477a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3477ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3477A8u;
        // 0x3477ac: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3477a8) {
            ctx->pc = 0x347768u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_347768;
        }
    }
    ctx->pc = 0x3477B0u;
    // 0x3477b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3477b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3477b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3477b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3477b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3477b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3477bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3477bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3477c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3477c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3477c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3477c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3477c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3477C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3477CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3477C8u;
        // 0x3477cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3477C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3477D0u;
    // 0x3477d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3477d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3477d4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3477d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3477d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3477d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3477dc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3477dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3477e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3477e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3477e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3477e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3477e8: 0x9451be90  lhu         $s1, -0x4170($v0)
    ctx->pc = 0x3477e8u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950544)));
    // 0x3477ec: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3477ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3477f0: 0x9450be92  lhu         $s0, -0x416E($v0)
    ctx->pc = 0x3477f0u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950546)));
    // 0x3477f4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3477f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3477f8: 0xc082918  jal         func_20A460
    ctx->pc = 0x3477F8u;
    SET_GPR_U32(ctx, 31, 0x347800u);
    ctx->pc = 0x3477FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3477F8u;
    // 0x3477fc: 0x9452be94  lhu         $s2, -0x416C($v0) (Delay Slot)
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A460u, 0x3477F8u, 0x347800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347800u;
label_347800:
    // 0x347800: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x347800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x347804: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x347804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x347808: 0x24844c60  addiu       $a0, $a0, 0x4C60
    ctx->pc = 0x347808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19552));
    // 0x34780c: 0xc0838c4  jal         func_20E310
    ctx->pc = 0x34780Cu;
    SET_GPR_U32(ctx, 31, 0x347814u);
    ctx->pc = 0x347810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34780Cu;
    // 0x347810: 0x24a54e10  addiu       $a1, $a1, 0x4E10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E310u, 0x34780Cu, 0x347814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347814u;
label_347814:
    // 0x347814: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x347814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x347818: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x347818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x34781c: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x34781cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x347820: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x347820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x347824: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x347824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x347828: 0x24844c60  addiu       $a0, $a0, 0x4C60
    ctx->pc = 0x347828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19552));
    // 0x34782c: 0x24520128  addiu       $s2, $v0, 0x128
    ctx->pc = 0x34782cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 296));
    // 0x347830: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x347830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x347834: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x347834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347838: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x347838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x34783c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34783cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347840: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x347840u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347844: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x347844u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x347848: 0xc08388c  jal         func_20E230
    ctx->pc = 0x347848u;
    SET_GPR_U32(ctx, 31, 0x347850u);
    ctx->pc = 0x34784Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347848u;
    // 0x34784c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E230u, 0x347848u, 0x347850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347850u;
label_347850:
    // 0x347850: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x347850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x347854: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x347854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x347858: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x347858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34785c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x34785cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x347860: 0x24844c60  addiu       $a0, $a0, 0x4C60
    ctx->pc = 0x347860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19552));
    // 0x347864: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x347864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x347868: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x347868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x34786c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34786cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347870: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x347870u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347874: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x347874u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x347878: 0xc08388c  jal         func_20E230
    ctx->pc = 0x347878u;
    SET_GPR_U32(ctx, 31, 0x347880u);
    ctx->pc = 0x34787Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347878u;
    // 0x34787c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E230u, 0x347878u, 0x347880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347880u;
label_347880:
    // 0x347880: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x347880u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x347884: 0x28a1005a  slti        $at, $a1, 0x5A
    ctx->pc = 0x347884u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x347888: 0x50200042  beql        $at, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x347888u;
    {
        const bool branch_taken_0x347888 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x347888) {
            ctx->pc = 0x34788Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347888u;
            // 0x34788c: 0x24b0ffa6  addiu       $s0, $a1, -0x5A (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967206));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347994u;
            goto label_347994;
        }
    }
    ctx->pc = 0x347890u;
    // 0x347890: 0x28a1002d  slti        $at, $a1, 0x2D
    ctx->pc = 0x347890u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)45) ? 1 : 0);
    // 0x347894: 0x50200013  beql        $at, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x347894u;
    {
        const bool branch_taken_0x347894 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x347894) {
            ctx->pc = 0x347898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347894u;
            // 0x347898: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3478E4u;
            goto label_3478e4;
        }
    }
    ctx->pc = 0x34789Cu;
    // 0x34789c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x34789cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3478a0: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3478a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x3478a4: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x3478a4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3478a8: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3478a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x3478ac: 0x0  nop
    ctx->pc = 0x3478acu;
    // NOP
    // 0x3478b0: 0x2010  mfhi        $a0
    ctx->pc = 0x3478b0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3478b4: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x3478b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x3478b8: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x3478b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3478bc: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x3478bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3478c0: 0x244200c8  addiu       $v0, $v0, 0xC8
    ctx->pc = 0x3478c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x3478c4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x3478c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3478c8: 0x1010  mfhi        $v0
    ctx->pc = 0x3478c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3478cc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3478ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3478d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3478d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3478d4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3478d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3478d8: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x3478d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x3478dc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3478DCu;
    {
        const bool branch_taken_0x3478dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3478E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3478DCu;
        // 0x3478e0: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3478dc) {
            ctx->pc = 0x347924u;
            goto label_347924;
        }
    }
    ctx->pc = 0x3478E4u;
label_3478e4:
    // 0x3478e4: 0x24a4ffd3  addiu       $a0, $a1, -0x2D
    ctx->pc = 0x3478e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967251));
    // 0x3478e8: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x3478e8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3478ec: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x3478ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x3478f0: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3478f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x3478f4: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3478f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x3478f8: 0x2810  mfhi        $a1
    ctx->pc = 0x3478f8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x3478fc: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x3478fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x347900: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x347900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x347904: 0x24420188  addiu       $v0, $v0, 0x188
    ctx->pc = 0x347904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 392));
    // 0x347908: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x347908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x34790c: 0x1010  mfhi        $v0
    ctx->pc = 0x34790cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x347910: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x347910u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x347914: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x347914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x347918: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x347918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x34791c: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x34791cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x347920: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x347920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_347924:
    // 0x347924: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x347924u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x347928: 0x3090ffff  andi        $s0, $a0, 0xFFFF
    ctx->pc = 0x347928u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x34792c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x34792cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x347930: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x347930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x347934: 0x24844c60  addiu       $a0, $a0, 0x4C60
    ctx->pc = 0x347934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19552));
    // 0x347938: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x347938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x34793c: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x34793cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x347940: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x347940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347944: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x347944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347948: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x347948u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34794c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34794cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347950: 0x240a0005  addiu       $t2, $zero, 0x5
    ctx->pc = 0x347950u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x347954: 0xc08388c  jal         func_20E230
    ctx->pc = 0x347954u;
    SET_GPR_U32(ctx, 31, 0x34795Cu);
    ctx->pc = 0x347958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347954u;
    // 0x347958: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E230u, 0x347954u, 0x34795Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34795Cu;
label_34795c:
    // 0x34795c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x34795cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x347960: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x347960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x347964: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x347964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347968: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x347968u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34796c: 0x24844c60  addiu       $a0, $a0, 0x4C60
    ctx->pc = 0x34796cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19552));
    // 0x347970: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x347970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x347974: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x347974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x347978: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x347978u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34797c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34797cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347980: 0x240a0005  addiu       $t2, $zero, 0x5
    ctx->pc = 0x347980u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x347984: 0xc08388c  jal         func_20E230
    ctx->pc = 0x347984u;
    SET_GPR_U32(ctx, 31, 0x34798Cu);
    ctx->pc = 0x347988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347984u;
    // 0x347988: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E230u, 0x347984u, 0x34798Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34798Cu;
label_34798c:
    // 0x34798c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x34798Cu;
    {
        const bool branch_taken_0x34798c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34798Cu;
        // 0x347990: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34798c) {
            ctx->pc = 0x3479C8u;
            goto label_3479c8;
        }
    }
    ctx->pc = 0x347994u;
label_347994:
    // 0x347994: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x347994u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x347998: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x347998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x34799c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34799cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3479a0: 0x24a54c60  addiu       $a1, $a1, 0x4C60
    ctx->pc = 0x3479a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19552));
    // 0x3479a4: 0xc083a44  jal         func_20E910
    ctx->pc = 0x3479A4u;
    SET_GPR_U32(ctx, 31, 0x3479ACu);
    ctx->pc = 0x3479A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3479A4u;
    // 0x3479a8: 0x24c65250  addiu       $a2, $a2, 0x5250 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E910u, 0x3479A4u, 0x3479ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3479ACu;
label_3479ac:
    // 0x3479ac: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3479acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x3479b0: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x3479b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x3479b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3479b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3479b8: 0x24a54c60  addiu       $a1, $a1, 0x4C60
    ctx->pc = 0x3479b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19552));
    // 0x3479bc: 0xc083a44  jal         func_20E910
    ctx->pc = 0x3479BCu;
    SET_GPR_U32(ctx, 31, 0x3479C4u);
    ctx->pc = 0x3479C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3479BCu;
    // 0x3479c0: 0x24c65310  addiu       $a2, $a2, 0x5310 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E910u, 0x3479BCu, 0x3479C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3479C4u;
label_3479c4:
    // 0x3479c4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3479c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3479c8:
    // 0x3479c8: 0xc082998  jal         func_20A660
    ctx->pc = 0x3479C8u;
    SET_GPR_U32(ctx, 31, 0x3479D0u);
    ctx->pc = 0x3479CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3479C8u;
    // 0x3479cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A660u, 0x3479C8u, 0x3479D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3479D0u;
label_3479d0:
    // 0x3479d0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3479d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3479d4: 0x24040130  addiu       $a0, $zero, 0x130
    ctx->pc = 0x3479d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x3479d8: 0x8c424060  lw          $v0, 0x4060($v0)
    ctx->pc = 0x3479d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16480)));
    // 0x3479dc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x3479dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3479e0: 0xc0836c0  jal         func_20DB00
    ctx->pc = 0x3479E0u;
    SET_GPR_U32(ctx, 31, 0x3479E8u);
    ctx->pc = 0x3479E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3479E0u;
    // 0x3479e4: 0x24460220  addiu       $a2, $v0, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB00u, 0x3479E0u, 0x3479E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3479E8u;
label_3479e8:
    // 0x3479e8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3479e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3479ec: 0xc082998  jal         func_20A660
    ctx->pc = 0x3479ECu;
    SET_GPR_U32(ctx, 31, 0x3479F4u);
    ctx->pc = 0x3479F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3479ECu;
    // 0x3479f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A660u, 0x3479ECu, 0x3479F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3479F4u;
label_3479f4:
    // 0x3479f4: 0xc0d1db8  jal         func_3476E0
    ctx->pc = 0x3479F4u;
    SET_GPR_U32(ctx, 31, 0x3479FCu);
    ctx->pc = 0x3479F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3479F4u;
    // 0x3479f8: 0x3224ffff  andi        $a0, $s1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3476E0u;
    goto label_3476e0;
    ctx->pc = 0x3479FCu;
label_3479fc:
    // 0x3479fc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3479fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x347a00: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x347a00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x347a04: 0x24844c60  addiu       $a0, $a0, 0x4C60
    ctx->pc = 0x347a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19552));
    // 0x347a08: 0xc0838c4  jal         func_20E310
    ctx->pc = 0x347A08u;
    SET_GPR_U32(ctx, 31, 0x347A10u);
    ctx->pc = 0x347A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347A08u;
    // 0x347a0c: 0x24a551c0  addiu       $a1, $a1, 0x51C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E310u, 0x347A08u, 0x347A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347A10u;
label_347a10:
    // 0x347a10: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x347a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x347a14: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x347a14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x347a18: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x347a18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x347a1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x347a1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347a20: 0x3e00008  jr          $ra
    ctx->pc = 0x347A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347A20u;
        // 0x347a24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347A28u;
    // 0x347a28: 0x0  nop
    ctx->pc = 0x347a28u;
    // NOP
    // 0x347a2c: 0x0  nop
    ctx->pc = 0x347a2cu;
    // NOP
    // 0x347a30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x347a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x347a34: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x347a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x347a38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x347a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x347a3c: 0x248433f0  addiu       $a0, $a0, 0x33F0
    ctx->pc = 0x347a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13296));
    // 0x347a40: 0xc082678  jal         func_2099E0
    ctx->pc = 0x347A40u;
    SET_GPR_U32(ctx, 31, 0x347A48u);
    ctx->pc = 0x347A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347A40u;
    // 0x347a44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x347A40u, 0x347A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347A48u;
label_347a48:
    // 0x347a48: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x347a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x347a4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x347a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347a50: 0xc082678  jal         func_2099E0
    ctx->pc = 0x347A50u;
    SET_GPR_U32(ctx, 31, 0x347A58u);
    ctx->pc = 0x347A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347A50u;
    // 0x347a54: 0x248477d0  addiu       $a0, $a0, 0x77D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x347A50u, 0x347A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347A58u;
label_347a58:
    // 0x347a58: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x347a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x347a5c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x347a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x347a60: 0xa440be92  sh          $zero, -0x416E($v0)
    ctx->pc = 0x347a60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950546), (uint16_t)GPR_U32(ctx, 0));
    // 0x347a64: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x347a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x347a68: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x347a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x347a6c: 0xa460be90  sh          $zero, -0x4170($v1)
    ctx->pc = 0x347a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294950544), (uint16_t)GPR_U32(ctx, 0));
    // 0x347a70: 0x8c424060  lw          $v0, 0x4060($v0)
    ctx->pc = 0x347a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16480)));
    // 0x347a74: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x347a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x347a78: 0xa460be94  sh          $zero, -0x416C($v1)
    ctx->pc = 0x347a78u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294950548), (uint16_t)GPR_U32(ctx, 0));
    // 0x347a7c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x347a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x347a80: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x347A80u;
    SET_GPR_U32(ctx, 31, 0x347A88u);
    ctx->pc = 0x347A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347A80u;
    // 0x347a84: 0x24440220  addiu       $a0, $v0, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x347A80u, 0x347A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347A88u;
label_347a88:
    // 0x347a88: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x347a88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x347a8c: 0xc0d0d18  jal         func_343460
    ctx->pc = 0x347A8Cu;
    SET_GPR_U32(ctx, 31, 0x347A94u);
    ctx->pc = 0x347A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347A8Cu;
    // 0x347a90: 0x24847aa0  addiu       $a0, $a0, 0x7AA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343460u, 0x347A8Cu, 0x347A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347A94u;
label_347a94:
    // 0x347a94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x347a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347a98: 0x3e00008  jr          $ra
    ctx->pc = 0x347A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347A98u;
        // 0x347a9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347AA0u;
    // 0x347aa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x347aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x347aa4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x347aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x347aa8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x347aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x347aac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x347aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x347ab0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x347ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x347ab4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x347ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x347ab8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x347ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x347abc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x347abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x347ac0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x347ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x347ac4: 0x9453be90  lhu         $s3, -0x4170($v0)
    ctx->pc = 0x347ac4u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950544)));
    // 0x347ac8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x347ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x347acc: 0x9450be92  lhu         $s0, -0x416E($v0)
    ctx->pc = 0x347accu;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950546)));
    // 0x347ad0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x347ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x347ad4: 0x9452be94  lhu         $s2, -0x416C($v0)
    ctx->pc = 0x347ad4u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950548)));
    // 0x347ad8: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x347AD8u;
    SET_GPR_U32(ctx, 31, 0x347AE0u);
    ctx->pc = 0x347ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347AD8u;
    // 0x347adc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x347AD8u, 0x347AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347AE0u;
label_347ae0:
    // 0x347ae0: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x347ae0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x347ae4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x347ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x347ae8: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x347ae8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x347aec: 0x24844ad0  addiu       $a0, $a0, 0x4AD0
    ctx->pc = 0x347aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19152));
    // 0x347af0: 0xc0d0a90  jal         func_342A40
    ctx->pc = 0x347AF0u;
    SET_GPR_U32(ctx, 31, 0x347AF8u);
    ctx->pc = 0x347AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347AF0u;
    // 0x347af4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342A40u, 0x347AF0u, 0x347AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347AF8u;
label_347af8:
    // 0x347af8: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x347af8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x347afc: 0x30832000  andi        $v1, $a0, 0x2000
    ctx->pc = 0x347afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x347b00: 0x1060005f  beqz        $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x347B00u;
    {
        const bool branch_taken_0x347b00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x347B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347B00u;
        // 0x347b04: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x347b00) {
            ctx->pc = 0x347C80u;
            goto label_347c80;
        }
    }
    ctx->pc = 0x347B08u;
    // 0x347b08: 0x3230ffff  andi        $s0, $s1, 0xFFFF
    ctx->pc = 0x347b08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x347b0c: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x347b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x347b10: 0x52020006  beql        $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x347B10u;
    {
        const bool branch_taken_0x347b10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x347b10) {
            ctx->pc = 0x347B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347B10u;
            // 0x347b14: 0x2404013e  addiu       $a0, $zero, 0x13E (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347B2Cu;
            goto label_347b2c;
        }
    }
    ctx->pc = 0x347B18u;
    // 0x347b18: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x347b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x347b1c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x347B1Cu;
    SET_GPR_U32(ctx, 31, 0x347B24u);
    ctx->pc = 0x347B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347B1Cu;
    // 0x347b20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x347B1Cu, 0x347B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347B24u;
label_347b24:
    // 0x347b24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x347B24u;
    {
        const bool branch_taken_0x347b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347B24u;
        // 0x347b28: 0x2a01005a  slti        $at, $s0, 0x5A (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)90) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x347b24) {
            ctx->pc = 0x347B38u;
            goto label_347b38;
        }
    }
    ctx->pc = 0x347B2Cu;
label_347b2c:
    // 0x347b2c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x347B2Cu;
    SET_GPR_U32(ctx, 31, 0x347B34u);
    ctx->pc = 0x347B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347B2Cu;
    // 0x347b30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x347B2Cu, 0x347B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347B34u;
label_347b34:
    // 0x347b34: 0x2a01005a  slti        $at, $s0, 0x5A
    ctx->pc = 0x347b34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)90) ? 1 : 0);
label_347b38:
    // 0x347b38: 0x50200013  beql        $at, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x347B38u;
    {
        const bool branch_taken_0x347b38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x347b38) {
            ctx->pc = 0x347B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347B38u;
            // 0x347b3c: 0x2603ffa6  addiu       $v1, $s0, -0x5A (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967206));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347B88u;
            goto label_347b88;
        }
    }
    ctx->pc = 0x347B40u;
    // 0x347b40: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x347b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x347b44: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x347b44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x347b48: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x347b48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x347b4c: 0x24844c58  addiu       $a0, $a0, 0x4C58
    ctx->pc = 0x347b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19544));
    // 0x347b50: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x347b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x347b54: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x347b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x347b58: 0x94860000  lhu         $a2, 0x0($a0)
    ctx->pc = 0x347b58u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x347b5c: 0x8c654060  lw          $a1, 0x4060($v1)
    ctx->pc = 0x347b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16480)));
    // 0x347b60: 0x3244ffff  andi        $a0, $s2, 0xFFFF
    ctx->pc = 0x347b60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x347b64: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x347b64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x347b68: 0x28810007  slti        $at, $a0, 0x7
    ctx->pc = 0x347b68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x347b6c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x347b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x347b70: 0x2062821  addu        $a1, $s0, $a2
    ctx->pc = 0x347b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x347b74: 0x10200089  beqz        $at, . + 4 + (0x89 << 2)
    ctx->pc = 0x347B74u;
    {
        const bool branch_taken_0x347b74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x347B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347B74u;
        // 0x347b78: 0xa4650220  sh          $a1, 0x220($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 544), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347b74) {
            ctx->pc = 0x347D9Cu;
            goto label_347d9c;
        }
    }
    ctx->pc = 0x347B7Cu;
    // 0x347b7c: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x347b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x347b80: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x347B80u;
    {
        const bool branch_taken_0x347b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347B80u;
        // 0x347b84: 0x3072ffff  andi        $s2, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x347b80) {
            ctx->pc = 0x347D9Cu;
            goto label_347d9c;
        }
    }
    ctx->pc = 0x347B88u;
label_347b88:
    // 0x347b88: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x347b88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x347b8c: 0x10200083  beqz        $at, . + 4 + (0x83 << 2)
    ctx->pc = 0x347B8Cu;
    {
        const bool branch_taken_0x347b8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x347b8c) {
            ctx->pc = 0x347D9Cu;
            goto label_347d9c;
        }
    }
    ctx->pc = 0x347B94u;
    // 0x347b94: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x347b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x347b98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x347b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x347b9c: 0x24845210  addiu       $a0, $a0, 0x5210
    ctx->pc = 0x347b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21008));
    // 0x347ba0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x347ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x347ba4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x347ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x347ba8: 0x600008  jr          $v1
    ctx->pc = 0x347BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x347BB0u: goto label_347bb0;
            case 0x347BBCu: goto label_347bbc;
            case 0x347BDCu: goto label_347bdc;
            case 0x347BF0u: goto label_347bf0;
            case 0x347C2Cu: goto label_347c2c;
            case 0x347C40u: goto label_347c40;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347BA8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x347BB0u;
label_347bb0:
    // 0x347bb0: 0x2603ffa6  addiu       $v1, $s0, -0x5A
    ctx->pc = 0x347bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967206));
    // 0x347bb4: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x347BB4u;
    {
        const bool branch_taken_0x347bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347BB4u;
        // 0x347bb8: 0x3073ffff  andi        $s3, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x347bb4) {
            ctx->pc = 0x347D9Cu;
            goto label_347d9c;
        }
    }
    ctx->pc = 0x347BBCu;
label_347bbc:
    // 0x347bbc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x347bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x347bc0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x347bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x347bc4: 0x8c424060  lw          $v0, 0x4060($v0)
    ctx->pc = 0x347bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16480)));
    // 0x347bc8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x347bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x347bcc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x347BCCu;
    SET_GPR_U32(ctx, 31, 0x347BD4u);
    ctx->pc = 0x347BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347BCCu;
    // 0x347bd0: 0x24440220  addiu       $a0, $v0, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x347BCCu, 0x347BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347BD4u;
label_347bd4:
    // 0x347bd4: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x347BD4u;
    {
        const bool branch_taken_0x347bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347BD4u;
        // 0x347bd8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347bd4) {
            ctx->pc = 0x347D9Cu;
            goto label_347d9c;
        }
    }
    ctx->pc = 0x347BDCu;
label_347bdc:
    // 0x347bdc: 0x1240006f  beqz        $s2, . + 4 + (0x6F << 2)
    ctx->pc = 0x347BDCu;
    {
        const bool branch_taken_0x347bdc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x347bdc) {
            ctx->pc = 0x347D9Cu;
            goto label_347d9c;
        }
    }
    ctx->pc = 0x347BE4u;
    // 0x347be4: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x347be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x347be8: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x347BE8u;
    {
        const bool branch_taken_0x347be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347BE8u;
        // 0x347bec: 0x3072ffff  andi        $s2, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x347be8) {
            ctx->pc = 0x347D9Cu;
            goto label_347d9c;
        }
    }
    ctx->pc = 0x347BF0u;
label_347bf0:
    // 0x347bf0: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x347bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x347bf4: 0x28610007  slti        $at, $v1, 0x7
    ctx->pc = 0x347bf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x347bf8: 0x10200068  beqz        $at, . + 4 + (0x68 << 2)
    ctx->pc = 0x347BF8u;
    {
        const bool branch_taken_0x347bf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x347bf8) {
            ctx->pc = 0x347D9Cu;
            goto label_347d9c;
        }
    }
    ctx->pc = 0x347C00u;
    // 0x347c00: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x347c00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x347c04: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x347c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x347c08: 0x8c654060  lw          $a1, 0x4060($v1)
    ctx->pc = 0x347c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16480)));
    // 0x347c0c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x347c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x347c10: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x347c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x347c14: 0x94840220  lhu         $a0, 0x220($a0)
    ctx->pc = 0x347c14u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x347c18: 0x10830060  beq         $a0, $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x347C18u;
    {
        const bool branch_taken_0x347c18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x347c18) {
            ctx->pc = 0x347D9Cu;
            goto label_347d9c;
        }
    }
    ctx->pc = 0x347C20u;
    // 0x347c20: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x347c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x347c24: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x347C24u;
    {
        const bool branch_taken_0x347c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347C24u;
        // 0x347c28: 0x3072ffff  andi        $s2, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x347c24) {
            ctx->pc = 0x347D9Cu;
            goto label_347d9c;
        }
    }
    ctx->pc = 0x347C2Cu;
label_347c2c:
    // 0x347c2c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x347c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x347c30: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x347C30u;
    SET_GPR_U32(ctx, 31, 0x347C38u);
    ctx->pc = 0x347C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347C30u;
    // 0x347c34: 0x8c44bea0  lw          $a0, -0x4160($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950560)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x347C30u, 0x347C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347C38u;
label_347c38:
    // 0x347c38: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x347C38u;
    {
        const bool branch_taken_0x347c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x347c38) {
            ctx->pc = 0x347D9Cu;
            goto label_347d9c;
        }
    }
    ctx->pc = 0x347C40u;
label_347c40:
    // 0x347c40: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x347c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x347c44: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x347c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x347c48: 0x8c424060  lw          $v0, 0x4060($v0)
    ctx->pc = 0x347c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16480)));
    // 0x347c4c: 0x94420220  lhu         $v0, 0x220($v0)
    ctx->pc = 0x347c4cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 544)));
    // 0x347c50: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x347C50u;
    {
        const bool branch_taken_0x347c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x347c50) {
            ctx->pc = 0x347C6Cu;
            goto label_347c6c;
        }
    }
    ctx->pc = 0x347C58u;
    // 0x347c58: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x347c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x347c5c: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x347C5Cu;
    SET_GPR_U32(ctx, 31, 0x347C64u);
    ctx->pc = 0x347C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347C5Cu;
    // 0x347c60: 0x8c44bea0  lw          $a0, -0x4160($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950560)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x347C5Cu, 0x347C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347C64u;
label_347c64:
    // 0x347c64: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x347C64u;
    {
        const bool branch_taken_0x347c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x347c64) {
            ctx->pc = 0x347D9Cu;
            goto label_347d9c;
        }
    }
    ctx->pc = 0x347C6Cu;
label_347c6c:
    // 0x347c6c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x347c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x347c70: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x347C70u;
    SET_GPR_U32(ctx, 31, 0x347C78u);
    ctx->pc = 0x347C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347C70u;
    // 0x347c74: 0x8c44be9c  lw          $a0, -0x4164($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950556)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x347C70u, 0x347C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347C78u;
label_347c78:
    // 0x347c78: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x347C78u;
    {
        const bool branch_taken_0x347c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x347c78) {
            ctx->pc = 0x347D9Cu;
            goto label_347d9c;
        }
    }
    ctx->pc = 0x347C80u;
label_347c80:
    // 0x347c80: 0x30830400  andi        $v1, $a0, 0x400
    ctx->pc = 0x347c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
    // 0x347c84: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x347C84u;
    {
        const bool branch_taken_0x347c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x347c84) {
            ctx->pc = 0x347C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347C84u;
            // 0x347c88: 0x30830800  andi        $v1, $a0, 0x800 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
            ctx->in_delay_slot = false;
            ctx->pc = 0x347CB0u;
            goto label_347cb0;
        }
    }
    ctx->pc = 0x347C8Cu;
    // 0x347c8c: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x347c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x347c90: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x347C90u;
    SET_GPR_U32(ctx, 31, 0x347C98u);
    ctx->pc = 0x347C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347C90u;
    // 0x347c94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x347C90u, 0x347C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347C98u;
label_347c98:
    // 0x347c98: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x347c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x347c9c: 0x54600002  bnel        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x347C9Cu;
    {
        const bool branch_taken_0x347c9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x347c9c) {
            ctx->pc = 0x347CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347C9Cu;
            // 0x347ca0: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347CA8u;
            goto label_347ca8;
        }
    }
    ctx->pc = 0x347CA4u;
    // 0x347ca4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x347ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_347ca8:
    // 0x347ca8: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x347CA8u;
    {
        const bool branch_taken_0x347ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347CA8u;
        // 0x347cac: 0x3073ffff  andi        $s3, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x347ca8) {
            ctx->pc = 0x347D9Cu;
            goto label_347d9c;
        }
    }
    ctx->pc = 0x347CB0u;
label_347cb0:
    // 0x347cb0: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x347CB0u;
    {
        const bool branch_taken_0x347cb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x347cb0) {
            ctx->pc = 0x347CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347CB0u;
            // 0x347cb4: 0x30830008  andi        $v1, $a0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x347CE0u;
            goto label_347ce0;
        }
    }
    ctx->pc = 0x347CB8u;
    // 0x347cb8: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x347cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x347cbc: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x347CBCu;
    SET_GPR_U32(ctx, 31, 0x347CC4u);
    ctx->pc = 0x347CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347CBCu;
    // 0x347cc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x347CBCu, 0x347CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347CC4u;
label_347cc4:
    // 0x347cc4: 0x3264ffff  andi        $a0, $s3, 0xFFFF
    ctx->pc = 0x347cc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x347cc8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x347cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x347ccc: 0x54830002  bnel        $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x347CCCu;
    {
        const bool branch_taken_0x347ccc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x347ccc) {
            ctx->pc = 0x347CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347CCCu;
            // 0x347cd0: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347CD8u;
            goto label_347cd8;
        }
    }
    ctx->pc = 0x347CD4u;
    // 0x347cd4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x347cd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_347cd8:
    // 0x347cd8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x347CD8u;
    {
        const bool branch_taken_0x347cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347CD8u;
        // 0x347cdc: 0x3073ffff  andi        $s3, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x347cd8) {
            ctx->pc = 0x347D9Cu;
            goto label_347d9c;
        }
    }
    ctx->pc = 0x347CE0u;
label_347ce0:
    // 0x347ce0: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x347CE0u;
    {
        const bool branch_taken_0x347ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x347ce0) {
            ctx->pc = 0x347CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347CE0u;
            // 0x347ce4: 0x30834000  andi        $v1, $a0, 0x4000 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
            ctx->in_delay_slot = false;
            ctx->pc = 0x347D30u;
            goto label_347d30;
        }
    }
    ctx->pc = 0x347CE8u;
    // 0x347ce8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x347ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x347cec: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x347cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x347cf0: 0x8c424060  lw          $v0, 0x4060($v0)
    ctx->pc = 0x347cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16480)));
    // 0x347cf4: 0x94420220  lhu         $v0, 0x220($v0)
    ctx->pc = 0x347cf4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 544)));
    // 0x347cf8: 0x50430009  beql        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x347CF8u;
    {
        const bool branch_taken_0x347cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x347cf8) {
            ctx->pc = 0x347CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347CF8u;
            // 0x347cfc: 0x2404013e  addiu       $a0, $zero, 0x13E (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347D20u;
            goto label_347d20;
        }
    }
    ctx->pc = 0x347D00u;
    // 0x347d00: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x347d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x347d04: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x347D04u;
    SET_GPR_U32(ctx, 31, 0x347D0Cu);
    ctx->pc = 0x347D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347D04u;
    // 0x347d08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x347D04u, 0x347D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347D0Cu;
label_347d0c:
    // 0x347d0c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x347d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x347d10: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x347D10u;
    SET_GPR_U32(ctx, 31, 0x347D18u);
    ctx->pc = 0x347D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347D10u;
    // 0x347d14: 0x8c44be9c  lw          $a0, -0x4164($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950556)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x347D10u, 0x347D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347D18u;
label_347d18:
    // 0x347d18: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x347D18u;
    {
        const bool branch_taken_0x347d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347D18u;
        // 0x347d1c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347d18) {
            ctx->pc = 0x347DB8u;
            goto label_347db8;
        }
    }
    ctx->pc = 0x347D20u;
label_347d20:
    // 0x347d20: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x347D20u;
    SET_GPR_U32(ctx, 31, 0x347D28u);
    ctx->pc = 0x347D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347D20u;
    // 0x347d24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x347D20u, 0x347D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347D28u;
label_347d28:
    // 0x347d28: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x347D28u;
    {
        const bool branch_taken_0x347d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x347d28) {
            ctx->pc = 0x347D9Cu;
            goto label_347d9c;
        }
    }
    ctx->pc = 0x347D30u;
label_347d30:
    // 0x347d30: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x347D30u;
    {
        const bool branch_taken_0x347d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x347d30) {
            ctx->pc = 0x347D9Cu;
            goto label_347d9c;
        }
    }
    ctx->pc = 0x347D38u;
    // 0x347d38: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x347d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x347d3c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x347D3Cu;
    SET_GPR_U32(ctx, 31, 0x347D44u);
    ctx->pc = 0x347D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347D3Cu;
    // 0x347d40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x347D3Cu, 0x347D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347D44u;
label_347d44:
    // 0x347d44: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x347d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x347d48: 0x3246ffff  andi        $a2, $s2, 0xFFFF
    ctx->pc = 0x347d48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x347d4c: 0x8c674060  lw          $a3, 0x4060($v1)
    ctx->pc = 0x347d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16480)));
    // 0x347d50: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x347d50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x347d54: 0x872821  addu        $a1, $a0, $a3
    ctx->pc = 0x347d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x347d58: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x347d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x347d5c: 0x94a40220  lhu         $a0, 0x220($a1)
    ctx->pc = 0x347d5cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 544)));
    // 0x347d60: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x347D60u;
    {
        const bool branch_taken_0x347d60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x347d60) {
            ctx->pc = 0x347D8Cu;
            goto label_347d8c;
        }
    }
    ctx->pc = 0x347D68u;
    // 0x347d68: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x347d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x347d6c: 0x24a40220  addiu       $a0, $a1, 0x220
    ctx->pc = 0x347d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 544));
    // 0x347d70: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x347d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x347d74: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x347d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x347d78: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x347d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x347d7c: 0xc049c48  jal         func_127120
    ctx->pc = 0x347D7Cu;
    SET_GPR_U32(ctx, 31, 0x347D84u);
    ctx->pc = 0x347D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347D7Cu;
    // 0x347d80: 0x24450220  addiu       $a1, $v0, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x347D7Cu, 0x347D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347D84u;
label_347d84:
    // 0x347d84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x347D84u;
    {
        const bool branch_taken_0x347d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x347d84) {
            ctx->pc = 0x347D9Cu;
            goto label_347d9c;
        }
    }
    ctx->pc = 0x347D8Cu;
label_347d8c:
    // 0x347d8c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x347D8Cu;
    {
        const bool branch_taken_0x347d8c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x347d8c) {
            ctx->pc = 0x347D9Cu;
            goto label_347d9c;
        }
    }
    ctx->pc = 0x347D94u;
    // 0x347d94: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x347d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x347d98: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x347d98u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_347d9c:
    // 0x347d9c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x347d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x347da0: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x347da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x347da4: 0xa473be90  sh          $s3, -0x4170($v1)
    ctx->pc = 0x347da4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294950544), (uint16_t)GPR_U32(ctx, 19));
    // 0x347da8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x347da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x347dac: 0xa491be92  sh          $s1, -0x416E($a0)
    ctx->pc = 0x347dacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294950546), (uint16_t)GPR_U32(ctx, 17));
    // 0x347db0: 0xa472be94  sh          $s2, -0x416C($v1)
    ctx->pc = 0x347db0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294950548), (uint16_t)GPR_U32(ctx, 18));
    // 0x347db4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x347db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_347db8:
    // 0x347db8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x347db8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x347dbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x347dbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x347dc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x347dc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347dc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x347dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x347DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347DC8u;
        // 0x347dcc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347DD0u;
    // 0x347dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x347dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x347dd4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x347dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x347dd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x347dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x347ddc: 0x24844310  addiu       $a0, $a0, 0x4310
    ctx->pc = 0x347ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17168));
    // 0x347de0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x347de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x347de4: 0x3c1001df  lui         $s0, 0x1DF
    ctx->pc = 0x347de4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)479 << 16));
    // 0x347de8: 0x2610ddc0  addiu       $s0, $s0, -0x2240
    ctx->pc = 0x347de8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958528));
    // 0x347dec: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x347DECu;
    SET_GPR_U32(ctx, 31, 0x347DF4u);
    ctx->pc = 0x347DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347DECu;
    // 0x347df0: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x347DECu, 0x347DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347DF4u;
label_347df4:
    // 0x347df4: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x347df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x347df8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x347df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x347dfc: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x347dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x347e00: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x347e00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x347e04: 0x24847010  addiu       $a0, $a0, 0x7010
    ctx->pc = 0x347e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28688));
    // 0x347e08: 0x24a58550  addiu       $a1, $a1, -0x7AB0
    ctx->pc = 0x347e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935888));
    // 0x347e0c: 0xc0558d4  jal         func_156350
    ctx->pc = 0x347E0Cu;
    SET_GPR_U32(ctx, 31, 0x347E14u);
    ctx->pc = 0x347E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347E0Cu;
    // 0x347e10: 0xac434410  sw          $v1, 0x4410($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17424), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x347E0Cu, 0x347E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347E14u;
label_347e14:
    // 0x347e14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x347e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347e18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x347e18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x347E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347E1Cu;
        // 0x347e20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347E24u;
    // 0x347e24: 0x0  nop
    ctx->pc = 0x347e24u;
    // NOP
    // 0x347e28: 0x0  nop
    ctx->pc = 0x347e28u;
    // NOP
    // 0x347e2c: 0x0  nop
    ctx->pc = 0x347e2cu;
    // NOP
    // 0x347e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x347e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x347e34: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x347e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x347e38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x347e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x347e3c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x347e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x347e40: 0x8c464378  lw          $a2, 0x4378($v0)
    ctx->pc = 0x347e40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x347e44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x347e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347e48: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x347e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x347e4c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x347e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x347e50: 0xac66be80  sw          $a2, -0x4180($v1)
    ctx->pc = 0x347e50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950528), GPR_U32(ctx, 6));
    // 0x347e54: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x347E54u;
    SET_GPR_U32(ctx, 31, 0x347E5Cu);
    ctx->pc = 0x347E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347E54u;
    // 0x347e58: 0xac454378  sw          $a1, 0x4378($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x347E54u, 0x347E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347E5Cu;
label_347e5c:
    // 0x347e5c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x347e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x347e60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x347e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347e64: 0xc082678  jal         func_2099E0
    ctx->pc = 0x347E64u;
    SET_GPR_U32(ctx, 31, 0x347E6Cu);
    ctx->pc = 0x347E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347E64u;
    // 0x347e68: 0x248433f0  addiu       $a0, $a0, 0x33F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x347E64u, 0x347E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347E6Cu;
label_347e6c:
    // 0x347e6c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x347e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x347e70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x347e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347e74: 0xc082678  jal         func_2099E0
    ctx->pc = 0x347E74u;
    SET_GPR_U32(ctx, 31, 0x347E7Cu);
    ctx->pc = 0x347E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347E74u;
    // 0x347e78: 0x24844000  addiu       $a0, $a0, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x347E74u, 0x347E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347E7Cu;
label_347e7c:
    // 0x347e7c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x347e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x347e80: 0xc082674  jal         func_2099D0
    ctx->pc = 0x347E80u;
    SET_GPR_U32(ctx, 31, 0x347E88u);
    ctx->pc = 0x347E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347E80u;
    // 0x347e84: 0x24847ea0  addiu       $a0, $a0, 0x7EA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x347E80u, 0x347E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347E88u;
label_347e88:
    // 0x347e88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x347e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x347E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347E8Cu;
        // 0x347e90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347E94u;
    // 0x347e94: 0x0  nop
    ctx->pc = 0x347e94u;
    // NOP
    // 0x347e98: 0x0  nop
    ctx->pc = 0x347e98u;
    // NOP
    // 0x347e9c: 0x0  nop
    ctx->pc = 0x347e9cu;
    // NOP
    // 0x347ea0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x347ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x347ea4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x347ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x347ea8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x347ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x347eac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x347eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347eb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x347eb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347eb4: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x347EB4u;
    SET_GPR_U32(ctx, 31, 0x347EBCu);
    ctx->pc = 0x347EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347EB4u;
    // 0x347eb8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x347EB4u, 0x347EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347EBCu;
label_347ebc:
    // 0x347ebc: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x347ebcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x347ec0: 0x320300a0  andi        $v1, $s0, 0xA0
    ctx->pc = 0x347ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)160);
    // 0x347ec4: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x347EC4u;
    {
        const bool branch_taken_0x347ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x347ec4) {
            ctx->pc = 0x347EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347EC4u;
            // 0x347ec8: 0x32032000  andi        $v1, $s0, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x347EF4u;
            goto label_347ef4;
        }
    }
    ctx->pc = 0x347ECCu;
    // 0x347ecc: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x347eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x347ed0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x347ED0u;
    SET_GPR_U32(ctx, 31, 0x347ED8u);
    ctx->pc = 0x347ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347ED0u;
    // 0x347ed4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x347ED0u, 0x347ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347ED8u;
label_347ed8:
    // 0x347ed8: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x347ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x347edc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x347edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x347ee0: 0x8c844378  lw          $a0, 0x4378($a0)
    ctx->pc = 0x347ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17272)));
    // 0x347ee4: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x347ee4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x347ee8: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x347ee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x347eec: 0xac644378  sw          $a0, 0x4378($v1)
    ctx->pc = 0x347eecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17272), GPR_U32(ctx, 4));
    // 0x347ef0: 0x32032000  andi        $v1, $s0, 0x2000
    ctx->pc = 0x347ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
label_347ef4:
    // 0x347ef4: 0x50600029  beql        $v1, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x347EF4u;
    {
        const bool branch_taken_0x347ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x347ef4) {
            ctx->pc = 0x347EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347EF4u;
            // 0x347ef8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347F9Cu;
            goto label_347f9c;
        }
    }
    ctx->pc = 0x347EFCu;
    // 0x347efc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x347efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x347f00: 0x8c424378  lw          $v0, 0x4378($v0)
    ctx->pc = 0x347f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x347f04: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x347F04u;
    {
        const bool branch_taken_0x347f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x347f04) {
            ctx->pc = 0x347F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347F04u;
            // 0x347f08: 0x2404013e  addiu       $a0, $zero, 0x13E (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347F84u;
            goto label_347f84;
        }
    }
    ctx->pc = 0x347F0Cu;
    // 0x347f0c: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x347f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x347f10: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x347F10u;
    SET_GPR_U32(ctx, 31, 0x347F18u);
    ctx->pc = 0x347F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347F10u;
    // 0x347f14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x347F10u, 0x347F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347F18u;
label_347f18:
    // 0x347f18: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x347f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x347f1c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x347f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x347f20: 0x8c50be80  lw          $s0, -0x4180($v0)
    ctx->pc = 0x347f20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950528)));
    // 0x347f24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x347f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347f28: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x347F28u;
    SET_GPR_U32(ctx, 31, 0x347F30u);
    ctx->pc = 0x347F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347F28u;
    // 0x347f2c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x347F28u, 0x347F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347F30u;
label_347f30:
    // 0x347f30: 0x2604fffb  addiu       $a0, $s0, -0x5
    ctx->pc = 0x347f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967291));
    // 0x347f34: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x347f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x347f38: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x347f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x347f3c: 0x8c424060  lw          $v0, 0x4060($v0)
    ctx->pc = 0x347f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16480)));
    // 0x347f40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x347f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x347f44: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x347f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x347f48: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x347f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x347f4c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x347f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x347f50: 0xc049c48  jal         func_127120
    ctx->pc = 0x347F50u;
    SET_GPR_U32(ctx, 31, 0x347F58u);
    ctx->pc = 0x347F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347F50u;
    // 0x347f54: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x347F50u, 0x347F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347F58u;
label_347f58:
    // 0x347f58: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x347f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x347f5c: 0x24054230  addiu       $a1, $zero, 0x4230
    ctx->pc = 0x347f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16944));
    // 0x347f60: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x347f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x347f64: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x347f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x347f68: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x347F68u;
    SET_GPR_U32(ctx, 31, 0x347F70u);
    ctx->pc = 0x347F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347F68u;
    // 0x347f6c: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FE58u, 0x347F68u, 0x347F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347F70u;
label_347f70:
    // 0x347f70: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x347f70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x347f74: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x347F74u;
    SET_GPR_U32(ctx, 31, 0x347F7Cu);
    ctx->pc = 0x347F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347F74u;
    // 0x347f78: 0x248473d0  addiu       $a0, $a0, 0x73D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347260u, 0x347F74u, 0x347F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347F7Cu;
label_347f7c:
    // 0x347f7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x347F7Cu;
    {
        const bool branch_taken_0x347f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x347f7c) {
            ctx->pc = 0x347F98u;
            goto label_347f98;
        }
    }
    ctx->pc = 0x347F84u;
label_347f84:
    // 0x347f84: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x347F84u;
    SET_GPR_U32(ctx, 31, 0x347F8Cu);
    ctx->pc = 0x347F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347F84u;
    // 0x347f88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x347F84u, 0x347F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347F8Cu;
label_347f8c:
    // 0x347f8c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x347f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x347f90: 0xc082674  jal         func_2099D0
    ctx->pc = 0x347F90u;
    SET_GPR_U32(ctx, 31, 0x347F98u);
    ctx->pc = 0x347F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347F90u;
    // 0x347f94: 0x248474f0  addiu       $a0, $a0, 0x74F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x347F90u, 0x347F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347F98u;
label_347f98:
    // 0x347f98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x347f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_347f9c:
    // 0x347f9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x347f9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x347FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347FA0u;
        // 0x347fa4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347FA8u;
    // 0x347fa8: 0x0  nop
    ctx->pc = 0x347fa8u;
    // NOP
    // 0x347fac: 0x0  nop
    ctx->pc = 0x347facu;
    // NOP
    // 0x347fb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x347fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x347fb4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x347fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x347fb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x347fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x347fbc: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x347fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x347fc0: 0x8c464378  lw          $a2, 0x4378($v0)
    ctx->pc = 0x347fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x347fc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x347fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347fc8: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x347fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x347fcc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x347fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x347fd0: 0xac66be80  sw          $a2, -0x4180($v1)
    ctx->pc = 0x347fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950528), GPR_U32(ctx, 6));
    // 0x347fd4: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x347FD4u;
    SET_GPR_U32(ctx, 31, 0x347FDCu);
    ctx->pc = 0x347FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347FD4u;
    // 0x347fd8: 0xac454378  sw          $a1, 0x4378($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x347FD4u, 0x347FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347FDCu;
label_347fdc:
    // 0x347fdc: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x347fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x347fe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x347fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347fe4: 0xc082678  jal         func_2099E0
    ctx->pc = 0x347FE4u;
    SET_GPR_U32(ctx, 31, 0x347FECu);
    ctx->pc = 0x347FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347FE4u;
    // 0x347fe8: 0x248433f0  addiu       $a0, $a0, 0x33F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x347FE4u, 0x347FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347FECu;
label_347fec:
    // 0x347fec: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x347fecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x347ff0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x347ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347ff4: 0xc082678  jal         func_2099E0
    ctx->pc = 0x347FF4u;
    SET_GPR_U32(ctx, 31, 0x347FFCu);
    ctx->pc = 0x347FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347FF4u;
    // 0x347ff8: 0x24844000  addiu       $a0, $a0, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x347FF4u, 0x347FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347FFCu;
label_347ffc:
    // 0x347ffc: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x347ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x348000: 0xc082674  jal         func_2099D0
    ctx->pc = 0x348000u;
    SET_GPR_U32(ctx, 31, 0x348008u);
    ctx->pc = 0x348004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348000u;
    // 0x348004: 0x24848020  addiu       $a0, $a0, -0x7FE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x348000u, 0x348008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348008u;
label_348008:
    // 0x348008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x348008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34800c: 0x3e00008  jr          $ra
    ctx->pc = 0x34800Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34800Cu;
        // 0x348010: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34800Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348014u;
    // 0x348014: 0x0  nop
    ctx->pc = 0x348014u;
    // NOP
    // 0x348018: 0x0  nop
    ctx->pc = 0x348018u;
    // NOP
    // 0x34801c: 0x0  nop
    ctx->pc = 0x34801cu;
    // NOP
    // 0x348020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x348020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x348024: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x348024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x348028: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x348028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34802c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34802cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348030: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x348030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348034: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x348034u;
    SET_GPR_U32(ctx, 31, 0x34803Cu);
    ctx->pc = 0x348038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348034u;
    // 0x348038: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x348034u, 0x34803Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34803Cu;
label_34803c:
    // 0x34803c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x34803cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x348040: 0x320300a0  andi        $v1, $s0, 0xA0
    ctx->pc = 0x348040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)160);
    // 0x348044: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x348044u;
    {
        const bool branch_taken_0x348044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x348044) {
            ctx->pc = 0x348048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348044u;
            // 0x348048: 0x32032000  andi        $v1, $s0, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x348074u;
            goto label_348074;
        }
    }
    ctx->pc = 0x34804Cu;
    // 0x34804c: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x34804cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x348050: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x348050u;
    SET_GPR_U32(ctx, 31, 0x348058u);
    ctx->pc = 0x348054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348050u;
    // 0x348054: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x348050u, 0x348058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348058u;
label_348058:
    // 0x348058: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x348058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x34805c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34805cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x348060: 0x8c844378  lw          $a0, 0x4378($a0)
    ctx->pc = 0x348060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17272)));
    // 0x348064: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x348064u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x348068: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x348068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x34806c: 0xac644378  sw          $a0, 0x4378($v1)
    ctx->pc = 0x34806cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17272), GPR_U32(ctx, 4));
    // 0x348070: 0x32032000  andi        $v1, $s0, 0x2000
    ctx->pc = 0x348070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
label_348074:
    // 0x348074: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x348074u;
    {
        const bool branch_taken_0x348074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x348074) {
            ctx->pc = 0x348078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348074u;
            // 0x348078: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3480CCu;
            goto label_3480cc;
        }
    }
    ctx->pc = 0x34807Cu;
    // 0x34807c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34807cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x348080: 0x8c424378  lw          $v0, 0x4378($v0)
    ctx->pc = 0x348080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x348084: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x348084u;
    {
        const bool branch_taken_0x348084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x348084) {
            ctx->pc = 0x348088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348084u;
            // 0x348088: 0x2404013e  addiu       $a0, $zero, 0x13E (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3480B4u;
            goto label_3480b4;
        }
    }
    ctx->pc = 0x34808Cu;
    // 0x34808c: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x34808cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x348090: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x348090u;
    SET_GPR_U32(ctx, 31, 0x348098u);
    ctx->pc = 0x348094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348090u;
    // 0x348094: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x348090u, 0x348098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348098u;
label_348098:
    // 0x348098: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x348098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x34809c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x34809cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x3480a0: 0x24847010  addiu       $a0, $a0, 0x7010
    ctx->pc = 0x3480a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28688));
    // 0x3480a4: 0xc0558d4  jal         func_156350
    ctx->pc = 0x3480A4u;
    SET_GPR_U32(ctx, 31, 0x3480ACu);
    ctx->pc = 0x3480A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3480A4u;
    // 0x3480a8: 0x24a56490  addiu       $a1, $a1, 0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x3480A4u, 0x3480ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3480ACu;
label_3480ac:
    // 0x3480ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3480ACu;
    {
        const bool branch_taken_0x3480ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3480ac) {
            ctx->pc = 0x3480C8u;
            goto label_3480c8;
        }
    }
    ctx->pc = 0x3480B4u;
label_3480b4:
    // 0x3480b4: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x3480B4u;
    SET_GPR_U32(ctx, 31, 0x3480BCu);
    ctx->pc = 0x3480B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3480B4u;
    // 0x3480b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x3480B4u, 0x3480BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3480BCu;
label_3480bc:
    // 0x3480bc: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3480bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3480c0: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3480C0u;
    SET_GPR_U32(ctx, 31, 0x3480C8u);
    ctx->pc = 0x3480C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3480C0u;
    // 0x3480c4: 0x248474f0  addiu       $a0, $a0, 0x74F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x3480C0u, 0x3480C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3480C8u;
label_3480c8:
    // 0x3480c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3480c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3480cc:
    // 0x3480cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3480ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3480d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3480D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3480D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3480D0u;
        // 0x3480d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3480D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3480D8u;
    // 0x3480d8: 0x0  nop
    ctx->pc = 0x3480d8u;
    // NOP
    // 0x3480dc: 0x0  nop
    ctx->pc = 0x3480dcu;
    // NOP
    // 0x3480e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3480e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3480e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3480e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3480e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3480e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3480ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3480ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3480f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3480f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3480f4: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x3480F4u;
    SET_GPR_U32(ctx, 31, 0x3480FCu);
    ctx->pc = 0x3480F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3480F4u;
    // 0x3480f8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x3480F4u, 0x3480FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3480FCu;
label_3480fc:
    // 0x3480fc: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x3480fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x348100: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x348100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x348104: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x348104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x348108: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x348108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x34810c: 0x90454378  lbu         $a1, 0x4378($v0)
    ctx->pc = 0x34810cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x348110: 0xc0d0a90  jal         func_342A40
    ctx->pc = 0x348110u;
    SET_GPR_U32(ctx, 31, 0x348118u);
    ctx->pc = 0x348114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348110u;
    // 0x348114: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342A40u, 0x348110u, 0x348118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348118u;
label_348118:
    // 0x348118: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x348118u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x34811c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x34811cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x348120: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x348120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x348124: 0x32044000  andi        $a0, $s0, 0x4000
    ctx->pc = 0x348124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16384);
    // 0x348128: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x348128u;
    {
        const bool branch_taken_0x348128 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x34812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348128u;
        // 0x34812c: 0xac654378  sw          $a1, 0x4378($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 17272), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348128) {
            ctx->pc = 0x348148u;
            goto label_348148;
        }
    }
    ctx->pc = 0x348130u;
    // 0x348130: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x348130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x348134: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x348134u;
    SET_GPR_U32(ctx, 31, 0x34813Cu);
    ctx->pc = 0x348138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348134u;
    // 0x348138: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x348134u, 0x34813Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34813Cu;
label_34813c:
    // 0x34813c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34813cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x348140: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x348140u;
    SET_GPR_U32(ctx, 31, 0x348148u);
    ctx->pc = 0x348144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348140u;
    // 0x348144: 0x24847fb0  addiu       $a0, $a0, 0x7FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x348140u, 0x348148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348148u;
label_348148:
    // 0x348148: 0x32032000  andi        $v1, $s0, 0x2000
    ctx->pc = 0x348148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
    // 0x34814c: 0x5060003d  beql        $v1, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x34814Cu;
    {
        const bool branch_taken_0x34814c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34814c) {
            ctx->pc = 0x348150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34814Cu;
            // 0x348150: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348244u;
            goto label_348244;
        }
    }
    ctx->pc = 0x348154u;
    // 0x348154: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x348154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x348158: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x348158u;
    SET_GPR_U32(ctx, 31, 0x348160u);
    ctx->pc = 0x34815Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348158u;
    // 0x34815c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x348158u, 0x348160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348160u;
label_348160:
    // 0x348160: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x348160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x348164: 0x8c654378  lw          $a1, 0x4378($v1)
    ctx->pc = 0x348164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17272)));
    // 0x348168: 0x28a10005  slti        $at, $a1, 0x5
    ctx->pc = 0x348168u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x34816c: 0x50200020  beql        $at, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x34816Cu;
    {
        const bool branch_taken_0x34816c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34816c) {
            ctx->pc = 0x348170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34816Cu;
            // 0x348170: 0x28a1000a  slti        $at, $a1, 0xA (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3481F0u;
            goto label_3481f0;
        }
    }
    ctx->pc = 0x348174u;
    // 0x348174: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x348174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x348178: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x348178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34817c: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x34817cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x348180: 0x8c434060  lw          $v1, 0x4060($v0)
    ctx->pc = 0x348180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16480)));
    // 0x348184: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x348184u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x348188: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x348188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34818c: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x34818cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x348190: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x348190u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x348194: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x348194u;
    {
        const bool branch_taken_0x348194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x348194) {
            ctx->pc = 0x3481DCu;
            goto label_3481dc;
        }
    }
    ctx->pc = 0x34819Cu;
    // 0x34819c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34819cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3481a0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3481a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x3481a4: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x3481a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x3481a8: 0x24848340  addiu       $a0, $a0, -0x7CC0
    ctx->pc = 0x3481a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935360));
    // 0x3481ac: 0xac40be84  sw          $zero, -0x417C($v0)
    ctx->pc = 0x3481acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950532), GPR_U32(ctx, 0));
    // 0x3481b0: 0xc0d0dc0  jal         func_343700
    ctx->pc = 0x3481B0u;
    SET_GPR_U32(ctx, 31, 0x3481B8u);
    ctx->pc = 0x3481B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3481B0u;
    // 0x3481b4: 0x24a574f0  addiu       $a1, $a1, 0x74F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343700u, 0x3481B0u, 0x3481B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3481B8u;
label_3481b8:
    // 0x3481b8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3481b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3481bc: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3481bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3481c0: 0x8c634378  lw          $v1, 0x4378($v1)
    ctx->pc = 0x3481c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17272)));
    // 0x3481c4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3481c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3481c8: 0x24847a30  addiu       $a0, $a0, 0x7A30
    ctx->pc = 0x3481c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31280));
    // 0x3481cc: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x3481CCu;
    SET_GPR_U32(ctx, 31, 0x3481D4u);
    ctx->pc = 0x3481D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3481CCu;
    // 0x3481d0: 0xac43be80  sw          $v1, -0x4180($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x3481CCu, 0x3481D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3481D4u;
label_3481d4:
    // 0x3481d4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3481D4u;
    {
        const bool branch_taken_0x3481d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3481d4) {
            ctx->pc = 0x348240u;
            goto label_348240;
        }
    }
    ctx->pc = 0x3481DCu;
label_3481dc:
    // 0x3481dc: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3481dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x3481e0: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x3481E0u;
    SET_GPR_U32(ctx, 31, 0x3481E8u);
    ctx->pc = 0x3481E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3481E0u;
    // 0x3481e4: 0x24848250  addiu       $a0, $a0, -0x7DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x3481E0u, 0x3481E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3481E8u;
label_3481e8:
    // 0x3481e8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3481E8u;
    {
        const bool branch_taken_0x3481e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3481e8) {
            ctx->pc = 0x348240u;
            goto label_348240;
        }
    }
    ctx->pc = 0x3481F0u;
label_3481f0:
    // 0x3481f0: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x3481F0u;
    {
        const bool branch_taken_0x3481f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3481f0) {
            ctx->pc = 0x348234u;
            goto label_348234;
        }
    }
    ctx->pc = 0x3481F8u;
    // 0x3481f8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x3481f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3481fc: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x3481fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x348200: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x348200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x348204: 0x8c654060  lw          $a1, 0x4060($v1)
    ctx->pc = 0x348204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16480)));
    // 0x348208: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x348208u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x34820c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x34820cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x348210: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x348210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x348214: 0x8084fe20  lb          $a0, -0x1E0($a0)
    ctx->pc = 0x348214u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294966816)));
    // 0x348218: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x348218u;
    {
        const bool branch_taken_0x348218 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x348218) {
            ctx->pc = 0x348240u;
            goto label_348240;
        }
    }
    ctx->pc = 0x348220u;
    // 0x348220: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x348220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x348224: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x348224u;
    SET_GPR_U32(ctx, 31, 0x34822Cu);
    ctx->pc = 0x348228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348224u;
    // 0x348228: 0x24847e30  addiu       $a0, $a0, 0x7E30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x348224u, 0x34822Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34822Cu;
label_34822c:
    // 0x34822c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34822Cu;
    {
        const bool branch_taken_0x34822c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34822c) {
            ctx->pc = 0x348240u;
            goto label_348240;
        }
    }
    ctx->pc = 0x348234u;
label_348234:
    // 0x348234: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x348234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x348238: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x348238u;
    SET_GPR_U32(ctx, 31, 0x348240u);
    ctx->pc = 0x34823Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348238u;
    // 0x34823c: 0x24847fb0  addiu       $a0, $a0, 0x7FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x348238u, 0x348240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348240u;
label_348240:
    // 0x348240: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x348240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_348244:
    // 0x348244: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x348244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348248: 0x3e00008  jr          $ra
    ctx->pc = 0x348248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348248u;
        // 0x34824c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348250u;
    // 0x348250: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x348250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x348254: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x348254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x348258: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x348258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34825c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x34825cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x348260: 0xa04094a0  sb          $zero, -0x6B60($v0)
    ctx->pc = 0x348260u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294939808), (uint8_t)GPR_U32(ctx, 0));
    // 0x348264: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x348264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348268: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x348268u;
    SET_GPR_U32(ctx, 31, 0x348270u);
    ctx->pc = 0x34826Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348268u;
    // 0x34826c: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x348268u, 0x348270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348270u;
label_348270:
    // 0x348270: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x348270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x348274: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x348274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x348278: 0x8c654378  lw          $a1, 0x4378($v1)
    ctx->pc = 0x348278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17272)));
    // 0x34827c: 0x3c0401df  lui         $a0, 0x1DF
    ctx->pc = 0x34827cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)479 << 16));
    // 0x348280: 0x8c424060  lw          $v0, 0x4060($v0)
    ctx->pc = 0x348280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16480)));
    // 0x348284: 0x2484dda0  addiu       $a0, $a0, -0x2260
    ctx->pc = 0x348284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958496));
    // 0x348288: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x348288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34828c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x34828cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x348290: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x348290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x348294: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x348294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x348298: 0xc049c48  jal         func_127120
    ctx->pc = 0x348298u;
    SET_GPR_U32(ctx, 31, 0x3482A0u);
    ctx->pc = 0x34829Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348298u;
    // 0x34829c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x348298u, 0x3482A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3482A0u;
label_3482a0:
    // 0x3482a0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3482a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3482a4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3482a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3482a8: 0x8c654378  lw          $a1, 0x4378($v1)
    ctx->pc = 0x3482a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17272)));
    // 0x3482ac: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x3482acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x3482b0: 0x8c424060  lw          $v0, 0x4060($v0)
    ctx->pc = 0x3482b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16480)));
    // 0x3482b4: 0x24849550  addiu       $a0, $a0, -0x6AB0
    ctx->pc = 0x3482b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939984));
    // 0x3482b8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3482b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3482bc: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x3482bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3482c0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3482c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3482c4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3482c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3482c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3482c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3482cc: 0xc049c48  jal         func_127120
    ctx->pc = 0x3482CCu;
    SET_GPR_U32(ctx, 31, 0x3482D4u);
    ctx->pc = 0x3482D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3482CCu;
    // 0x3482d0: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x3482CCu, 0x3482D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3482D4u;
label_3482d4:
    // 0x3482d4: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x3482d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x3482d8: 0x3c05009f  lui         $a1, 0x9F
    ctx->pc = 0x3482d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)159 << 16));
    // 0x3482dc: 0x24849510  addiu       $a0, $a0, -0x6AF0
    ctx->pc = 0x3482dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939920));
    // 0x3482e0: 0xc0835b0  jal         func_20D6C0
    ctx->pc = 0x3482E0u;
    SET_GPR_U32(ctx, 31, 0x3482E8u);
    ctx->pc = 0x3482E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3482E0u;
    // 0x3482e4: 0x24a59550  addiu       $a1, $a1, -0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D6C0u, 0x3482E0u, 0x3482E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3482E8u;
label_3482e8:
    // 0x3482e8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3482e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3482ec: 0x3c05009f  lui         $a1, 0x9F
    ctx->pc = 0x3482ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)159 << 16));
    // 0x3482f0: 0x8c424378  lw          $v0, 0x4378($v0)
    ctx->pc = 0x3482f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x3482f4: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x3482f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x3482f8: 0x24a59550  addiu       $a1, $a1, -0x6AB0
    ctx->pc = 0x3482f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939984));
    // 0x3482fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3482fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x348300: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x348300u;
    SET_GPR_U32(ctx, 31, 0x348308u);
    ctx->pc = 0x348304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348300u;
    // 0x348304: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x348300u, 0x348308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348308u;
label_348308:
    // 0x348308: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x348308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34830c: 0x24054220  addiu       $a1, $zero, 0x4220
    ctx->pc = 0x34830cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16928));
    // 0x348310: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x348310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x348314: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x348314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x348318: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x348318u;
    SET_GPR_U32(ctx, 31, 0x348320u);
    ctx->pc = 0x34831Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348318u;
    // 0x34831c: 0x24070024  addiu       $a3, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FE58u, 0x348318u, 0x348320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348320u;
label_348320:
    // 0x348320: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x348320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x348324: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x348324u;
    SET_GPR_U32(ctx, 31, 0x34832Cu);
    ctx->pc = 0x348328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348324u;
    // 0x348328: 0x24847dd0  addiu       $a0, $a0, 0x7DD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347260u, 0x348324u, 0x34832Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34832Cu;
label_34832c:
    // 0x34832c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34832cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348330: 0x3e00008  jr          $ra
    ctx->pc = 0x348330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348330u;
        // 0x348334: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348338u;
    // 0x348338: 0x0  nop
    ctx->pc = 0x348338u;
    // NOP
    // 0x34833c: 0x0  nop
    ctx->pc = 0x34833cu;
    // NOP
    // 0x348340: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x348340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x348344: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x348344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348348: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x348348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34834c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x34834cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x348350: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x348350u;
    SET_GPR_U32(ctx, 31, 0x348358u);
    ctx->pc = 0x348354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348350u;
    // 0x348354: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x348350u, 0x348358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348358u;
label_348358:
    // 0x348358: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x348358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34835c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34835cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x348360: 0x8c634378  lw          $v1, 0x4378($v1)
    ctx->pc = 0x348360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17272)));
    // 0x348364: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x348364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x348368: 0x8c424060  lw          $v0, 0x4060($v0)
    ctx->pc = 0x348368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16480)));
    // 0x34836c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34836cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x348370: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x348370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x348374: 0xc083644  jal         func_20D910
    ctx->pc = 0x348374u;
    SET_GPR_U32(ctx, 31, 0x34837Cu);
    ctx->pc = 0x348378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348374u;
    // 0x348378: 0x24450220  addiu       $a1, $v0, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D910u, 0x348374u, 0x34837Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34837Cu;
label_34837c:
    // 0x34837c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34837cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x348380: 0x24054220  addiu       $a1, $zero, 0x4220
    ctx->pc = 0x348380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16928));
    // 0x348384: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x348384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x348388: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x348388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34838c: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34838Cu;
    SET_GPR_U32(ctx, 31, 0x348394u);
    ctx->pc = 0x348390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34838Cu;
    // 0x348390: 0x24070024  addiu       $a3, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FE58u, 0x34838Cu, 0x348394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348394u;
label_348394:
    // 0x348394: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x348394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x348398: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x348398u;
    SET_GPR_U32(ctx, 31, 0x3483A0u);
    ctx->pc = 0x34839Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348398u;
    // 0x34839c: 0x248473d0  addiu       $a0, $a0, 0x73D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347260u, 0x348398u, 0x3483A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3483A0u;
label_3483a0:
    // 0x3483a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3483a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3483a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3483A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3483A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3483A4u;
        // 0x3483a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3483A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3483ACu;
    // 0x3483ac: 0x0  nop
    ctx->pc = 0x3483acu;
    // NOP
    // 0x3483b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3483b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3483b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3483b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3483b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3483b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3483bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3483bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3483c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3483c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3483c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3483c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3483c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3483c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3483cc: 0xc082918  jal         func_20A460
    ctx->pc = 0x3483CCu;
    SET_GPR_U32(ctx, 31, 0x3483D4u);
    ctx->pc = 0x3483D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3483CCu;
    // 0x3483d0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A460u, 0x3483CCu, 0x3483D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3483D4u;
label_3483d4:
    // 0x3483d4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3483d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3483d8: 0x8c444378  lw          $a0, 0x4378($v0)
    ctx->pc = 0x3483d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x3483dc: 0x2881000a  slti        $at, $a0, 0xA
    ctx->pc = 0x3483dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x3483e0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x3483E0u;
    {
        const bool branch_taken_0x3483e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3483e0) {
            ctx->pc = 0x348410u;
            goto label_348410;
        }
    }
    ctx->pc = 0x3483E8u;
    // 0x3483e8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3483e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3483ec: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3483ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x3483f0: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x3483f0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3483f4: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x3483f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x3483f8: 0x24a553d0  addiu       $a1, $a1, 0x53D0
    ctx->pc = 0x3483f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21456));
    // 0x3483fc: 0x2010  mfhi        $a0
    ctx->pc = 0x3483fcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x348400: 0xc083a44  jal         func_20E910
    ctx->pc = 0x348400u;
    SET_GPR_U32(ctx, 31, 0x348408u);
    ctx->pc = 0x348404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348400u;
    // 0x348404: 0x24c65670  addiu       $a2, $a2, 0x5670 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E910u, 0x348400u, 0x348408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348408u;
label_348408:
    // 0x348408: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x348408u;
    {
        const bool branch_taken_0x348408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x348408) {
            ctx->pc = 0x348424u;
            goto label_348424;
        }
    }
    ctx->pc = 0x348410u;
label_348410:
    // 0x348410: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x348410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x348414: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x348414u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x348418: 0x24a553d0  addiu       $a1, $a1, 0x53D0
    ctx->pc = 0x348418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21456));
    // 0x34841c: 0xc083a44  jal         func_20E910
    ctx->pc = 0x34841Cu;
    SET_GPR_U32(ctx, 31, 0x348424u);
    ctx->pc = 0x348420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34841Cu;
    // 0x348420: 0x24c65670  addiu       $a2, $a2, 0x5670 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E910u, 0x34841Cu, 0x348424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348424u;
label_348424:
    // 0x348424: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x348424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x348428: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x348428u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x34842c: 0x8c444378  lw          $a0, 0x4378($v0)
    ctx->pc = 0x34842cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x348430: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x348430u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x348434: 0x24a553d0  addiu       $a1, $a1, 0x53D0
    ctx->pc = 0x348434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21456));
    // 0x348438: 0xc083a44  jal         func_20E910
    ctx->pc = 0x348438u;
    SET_GPR_U32(ctx, 31, 0x348440u);
    ctx->pc = 0x34843Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348438u;
    // 0x34843c: 0x24c656f0  addiu       $a2, $a2, 0x56F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E910u, 0x348438u, 0x348440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348440u;
label_348440:
    // 0x348440: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x348440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x348444: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x348444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x348448: 0x248453d0  addiu       $a0, $a0, 0x53D0
    ctx->pc = 0x348448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21456));
    // 0x34844c: 0xc0838c4  jal         func_20E310
    ctx->pc = 0x34844Cu;
    SET_GPR_U32(ctx, 31, 0x348454u);
    ctx->pc = 0x348450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34844Cu;
    // 0x348450: 0x24a55580  addiu       $a1, $a1, 0x5580 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E310u, 0x34844Cu, 0x348454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348454u;
label_348454:
    // 0x348454: 0x3c13003d  lui         $s3, 0x3D
    ctx->pc = 0x348454u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)61 << 16));
    // 0x348458: 0x3c12003d  lui         $s2, 0x3D
    ctx->pc = 0x348458u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)61 << 16));
    // 0x34845c: 0x3c10003d  lui         $s0, 0x3D
    ctx->pc = 0x34845cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)61 << 16));
    // 0x348460: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x348460u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348464: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x348464u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348468: 0x267357e0  addiu       $s3, $s3, 0x57E0
    ctx->pc = 0x348468u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 22496));
    // 0x34846c: 0x26525830  addiu       $s2, $s2, 0x5830
    ctx->pc = 0x34846cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 22576));
    // 0x348470: 0x24110060  addiu       $s1, $zero, 0x60
    ctx->pc = 0x348470u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x348474: 0x26105880  addiu       $s0, $s0, 0x5880
    ctx->pc = 0x348474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22656));
label_348478:
    // 0x348478: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x348478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34847c: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x34847cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x348480: 0x8c424060  lw          $v0, 0x4060($v0)
    ctx->pc = 0x348480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16480)));
    // 0x348484: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x348484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x348488: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x348488u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34848c: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x34848Cu;
    {
        const bool branch_taken_0x34848c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x34848c) {
            ctx->pc = 0x3484C0u;
            goto label_3484c0;
        }
    }
    ctx->pc = 0x348494u;
    // 0x348494: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x348494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x348498: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x348498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34849c: 0xc0837e0  jal         func_20DF80
    ctx->pc = 0x34849Cu;
    SET_GPR_U32(ctx, 31, 0x3484A4u);
    ctx->pc = 0x3484A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34849Cu;
    // 0x3484a0: 0x248453d0  addiu       $a0, $a0, 0x53D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DF80u, 0x34849Cu, 0x3484A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3484A4u;
label_3484a4:
    // 0x3484a4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3484a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3484a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3484a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3484ac: 0xc0837e0  jal         func_20DF80
    ctx->pc = 0x3484ACu;
    SET_GPR_U32(ctx, 31, 0x3484B4u);
    ctx->pc = 0x3484B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3484ACu;
    // 0x3484b0: 0x248453d0  addiu       $a0, $a0, 0x53D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DF80u, 0x3484ACu, 0x3484B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3484B4u;
label_3484b4:
    // 0x3484b4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3484B4u;
    {
        const bool branch_taken_0x3484b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3484b4) {
            ctx->pc = 0x348500u;
            goto label_348500;
        }
    }
    ctx->pc = 0x3484BCu;
    // 0x3484bc: 0x0  nop
    ctx->pc = 0x3484bcu;
    // NOP
label_3484c0:
    // 0x3484c0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3484c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3484c4: 0x552823  subu        $a1, $v0, $s5
    ctx->pc = 0x3484c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x3484c8: 0xc082998  jal         func_20A660
    ctx->pc = 0x3484C8u;
    SET_GPR_U32(ctx, 31, 0x3484D0u);
    ctx->pc = 0x3484CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3484C8u;
    // 0x3484cc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A660u, 0x3484C8u, 0x3484D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3484D0u;
label_3484d0:
    // 0x3484d0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3484d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3484d4: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x3484d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x3484d8: 0x8c424060  lw          $v0, 0x4060($v0)
    ctx->pc = 0x3484d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16480)));
    // 0x3484dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3484dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3484e0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x3484e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3484e4: 0xc0836c0  jal         func_20DB00
    ctx->pc = 0x3484E4u;
    SET_GPR_U32(ctx, 31, 0x3484ECu);
    ctx->pc = 0x3484E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3484E4u;
    // 0x3484e8: 0x24460040  addiu       $a2, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB00u, 0x3484E4u, 0x3484ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3484ECu;
label_3484ec:
    // 0x3484ec: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3484ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3484f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3484f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3484f4: 0xc0837e0  jal         func_20DF80
    ctx->pc = 0x3484F4u;
    SET_GPR_U32(ctx, 31, 0x3484FCu);
    ctx->pc = 0x3484F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3484F4u;
    // 0x3484f8: 0x248453d0  addiu       $a0, $a0, 0x53D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DF80u, 0x3484F4u, 0x3484FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3484FCu;
label_3484fc:
    // 0x3484fc: 0x0  nop
    ctx->pc = 0x3484fcu;
    // NOP
label_348500:
    // 0x348500: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x348500u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x348504: 0x2aa30005  slti        $v1, $s5, 0x5
    ctx->pc = 0x348504u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x348508: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x348508u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x34850c: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x34850cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x348510: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x348510u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x348514: 0x26310038  addiu       $s1, $s1, 0x38
    ctx->pc = 0x348514u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x348518: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x348518u;
    {
        const bool branch_taken_0x348518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348518u;
        // 0x34851c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348518) {
            ctx->pc = 0x348478u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_348478;
        }
    }
    ctx->pc = 0x348520u;
    // 0x348520: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x348520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x348524: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x348524u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x348528: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x348528u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34852c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34852cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x348530: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x348530u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x348534: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x348534u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x348538: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x348538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34853c: 0x3e00008  jr          $ra
    ctx->pc = 0x34853Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34853Cu;
        // 0x348540: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34853Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348544u;
    // 0x348544: 0x0  nop
    ctx->pc = 0x348544u;
    // NOP
    // 0x348548: 0x0  nop
    ctx->pc = 0x348548u;
    // NOP
    // 0x34854c: 0x0  nop
    ctx->pc = 0x34854cu;
    // NOP
    // 0x348550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x348550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x348554: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x348554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x348558: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x348558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34855c: 0x248433f0  addiu       $a0, $a0, 0x33F0
    ctx->pc = 0x34855cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13296));
    // 0x348560: 0xc082678  jal         func_2099E0
    ctx->pc = 0x348560u;
    SET_GPR_U32(ctx, 31, 0x348568u);
    ctx->pc = 0x348564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348560u;
    // 0x348564: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x348560u, 0x348568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348568u;
label_348568:
    // 0x348568: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x348568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x34856c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x34856cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x348570: 0x24849ab0  addiu       $a0, $a0, -0x6550
    ctx->pc = 0x348570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941360));
    // 0x348574: 0xc0558d4  jal         func_156350
    ctx->pc = 0x348574u;
    SET_GPR_U32(ctx, 31, 0x34857Cu);
    ctx->pc = 0x348578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348574u;
    // 0x348578: 0x24a58590  addiu       $a1, $a1, -0x7A70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x348574u, 0x34857Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34857Cu;
label_34857c:
    // 0x34857c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34857cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348580: 0x3e00008  jr          $ra
    ctx->pc = 0x348580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348580u;
        // 0x348584: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348588u;
    // 0x348588: 0x0  nop
    ctx->pc = 0x348588u;
    // NOP
    // 0x34858c: 0x0  nop
    ctx->pc = 0x34858cu;
    // NOP
    // 0x348590: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x348590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x348594: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x348594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x348598: 0x2484ff04  addiu       $a0, $a0, -0xFC
    ctx->pc = 0x348598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967044));
    // 0x34859c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34859cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3485a0: 0xac44eab8  sw          $a0, -0x1548($v0)
    ctx->pc = 0x3485a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961848), GPR_U32(ctx, 4));
    // 0x3485a4: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x3485a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x3485a8: 0x24634310  addiu       $v1, $v1, 0x4310
    ctx->pc = 0x3485a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17168));
    // 0x3485ac: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3485acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3485b0: 0xac43ead0  sw          $v1, -0x1530($v0)
    ctx->pc = 0x3485b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961872), GPR_U32(ctx, 3));
    // 0x3485b4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3485b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3485b8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3485b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3485bc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3485bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3485c0: 0x24631158  addiu       $v1, $v1, 0x1158
    ctx->pc = 0x3485c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4440));
    // 0x3485c4: 0x24846f30  addiu       $a0, $a0, 0x6F30
    ctx->pc = 0x3485c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28464));
    // 0x3485c8: 0xac4340a0  sw          $v1, 0x40A0($v0)
    ctx->pc = 0x3485c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16544), GPR_U32(ctx, 3));
    // 0x3485cc: 0x80558d4  j           func_156350
    ctx->pc = 0x3485CCu;
    ctx->pc = 0x3485D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3485CCu;
    // 0x3485d0: 0x24a585e0  addiu       $a1, $a1, -0x7A20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    sub_00156350_0x156350(rdram, ctx, runtime); return;
    ctx->pc = 0x3485D4u;
    // 0x3485d4: 0x0  nop
    ctx->pc = 0x3485d4u;
    // NOP
    // 0x3485d8: 0x0  nop
    ctx->pc = 0x3485d8u;
    // NOP
    // 0x3485dc: 0x0  nop
    ctx->pc = 0x3485dcu;
    // NOP
    // 0x3485e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3485e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3485e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3485e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3485e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3485e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3485ec: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3485ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3485f0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x3485F0u;
    SET_GPR_U32(ctx, 31, 0x3485F8u);
    ctx->pc = 0x3485F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3485F0u;
    // 0x3485f4: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x3485F0u, 0x3485F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3485F8u;
label_3485f8:
    // 0x3485f8: 0x3c0501df  lui         $a1, 0x1DF
    ctx->pc = 0x3485f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)479 << 16));
    // 0x3485fc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3485fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x348600: 0x24a5dda0  addiu       $a1, $a1, -0x2260
    ctx->pc = 0x348600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958496));
    // 0x348604: 0xc049c48  jal         func_127120
    ctx->pc = 0x348604u;
    SET_GPR_U32(ctx, 31, 0x34860Cu);
    ctx->pc = 0x348608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348604u;
    // 0x348608: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x348604u, 0x34860Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34860Cu;
label_34860c:
    // 0x34860c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x34860cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x348610: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x348610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x348614: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x348614u;
    SET_GPR_U32(ctx, 31, 0x34861Cu);
    ctx->pc = 0x348618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348614u;
    // 0x348618: 0x24a55200  addiu       $a1, $a1, 0x5200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x348614u, 0x34861Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34861Cu;
label_34861c:
    // 0x34861c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34861cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x348620: 0x24053010  addiu       $a1, $zero, 0x3010
    ctx->pc = 0x348620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12304));
    // 0x348624: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x348624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x348628: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x348628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34862c: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34862Cu;
    SET_GPR_U32(ctx, 31, 0x348634u);
    ctx->pc = 0x348630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34862Cu;
    // 0x348630: 0x24070028  addiu       $a3, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FE58u, 0x34862Cu, 0x348634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348634u;
label_348634:
    // 0x348634: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x348634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x348638: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x348638u;
    SET_GPR_U32(ctx, 31, 0x348640u);
    ctx->pc = 0x34863Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348638u;
    // 0x34863c: 0x24848650  addiu       $a0, $a0, -0x79B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347260u, 0x348638u, 0x348640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348640u;
label_348640:
    // 0x348640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x348640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348644: 0x3e00008  jr          $ra
    ctx->pc = 0x348644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348644u;
        // 0x348648: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34864Cu;
    // 0x34864c: 0x0  nop
    ctx->pc = 0x34864cu;
    // NOP
    // 0x348650: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x348650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x348654: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x348654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x348658: 0x8c45ddc0  lw          $a1, -0x2240($v0)
    ctx->pc = 0x348658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958528)));
    // 0x34865c: 0x3c0301df  lui         $v1, 0x1DF
    ctx->pc = 0x34865cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)479 << 16));
    // 0x348660: 0x24848680  addiu       $a0, $a0, -0x7980
    ctx->pc = 0x348660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936192));
    // 0x348664: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x348664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x348668: 0xac65dd88  sw          $a1, -0x2278($v1)
    ctx->pc = 0x348668u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294958472), GPR_U32(ctx, 5));
    // 0x34866c: 0x8082674  j           func_2099D0
    ctx->pc = 0x34866Cu;
    ctx->pc = 0x348670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34866Cu;
    // 0x348670: 0xac40dd90  sw          $zero, -0x2270($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958480), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    sub_002099D0_0x2099d0(rdram, ctx, runtime); return;
    ctx->pc = 0x348674u;
    // 0x348674: 0x0  nop
    ctx->pc = 0x348674u;
    // NOP
    // 0x348678: 0x0  nop
    ctx->pc = 0x348678u;
    // NOP
    // 0x34867c: 0x0  nop
    ctx->pc = 0x34867cu;
    // NOP
    // 0x348680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x348680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x348684: 0x3c0501df  lui         $a1, 0x1DF
    ctx->pc = 0x348684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)479 << 16));
    // 0x348688: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x348688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34868c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x34868cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x348690: 0x24a5dda0  addiu       $a1, $a1, -0x2260
    ctx->pc = 0x348690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958496));
    // 0x348694: 0xc049c48  jal         func_127120
    ctx->pc = 0x348694u;
    SET_GPR_U32(ctx, 31, 0x34869Cu);
    ctx->pc = 0x348698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348694u;
    // 0x348698: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x348694u, 0x34869Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34869Cu;
label_34869c:
    // 0x34869c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34869cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3486a0: 0x24053520  addiu       $a1, $zero, 0x3520
    ctx->pc = 0x3486a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13600));
    // 0x3486a4: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x3486a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x3486a8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3486a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3486ac: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x3486ACu;
    SET_GPR_U32(ctx, 31, 0x3486B4u);
    ctx->pc = 0x3486B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3486ACu;
    // 0x3486b0: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FE58u, 0x3486ACu, 0x3486B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3486B4u;
label_3486b4:
    // 0x3486b4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3486b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x3486b8: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x3486B8u;
    SET_GPR_U32(ctx, 31, 0x3486C0u);
    ctx->pc = 0x3486BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3486B8u;
    // 0x3486bc: 0x248486d0  addiu       $a0, $a0, -0x7930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347260u, 0x3486B8u, 0x3486C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3486C0u;
label_3486c0:
    // 0x3486c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3486c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3486c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3486C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3486C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3486C4u;
        // 0x3486c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3486C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3486CCu;
    // 0x3486cc: 0x0  nop
    ctx->pc = 0x3486ccu;
    // NOP
    // 0x3486d0: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x3486d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x3486d4: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x3486d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x3486d8: 0x2442ddc0  addiu       $v0, $v0, -0x2240
    ctx->pc = 0x3486d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958528));
    // 0x3486dc: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3486dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3486e0: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x3486e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x3486e4: 0x8c47005c  lw          $a3, 0x5C($v0)
    ctx->pc = 0x3486e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x3486e8: 0x8c460058  lw          $a2, 0x58($v0)
    ctx->pc = 0x3486e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x3486ec: 0xa06594f8  sb          $a1, -0x6B08($v1)
    ctx->pc = 0x3486ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294939896), (uint8_t)GPR_U32(ctx, 5));
    // 0x3486f0: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x3486f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3486f4: 0xac87eab0  sw          $a3, -0x1550($a0)
    ctx->pc = 0x3486f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961840), GPR_U32(ctx, 7));
    // 0x3486f8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3486f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3486fc: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3486FCu;
    {
        const bool branch_taken_0x3486fc = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x348700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3486FCu;
        // 0x348700: 0xa04694f0  sb          $a2, -0x6B10($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294939888), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3486fc) {
            ctx->pc = 0x348710u;
            goto label_348710;
        }
    }
    ctx->pc = 0x348704u;
    // 0x348704: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x348704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348708: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x348708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x34870c: 0xa04594f8  sb          $a1, -0x6B08($v0)
    ctx->pc = 0x34870cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294939896), (uint8_t)GPR_U32(ctx, 5));
label_348710:
    // 0x348710: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x348710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x348714: 0x28420064  slti        $v0, $v0, 0x64
    ctx->pc = 0x348714u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x348718: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x348718u;
    {
        const bool branch_taken_0x348718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x348718) {
            ctx->pc = 0x34872Cu;
            goto label_34872c;
        }
    }
    ctx->pc = 0x348720u;
    // 0x348720: 0x24050063  addiu       $a1, $zero, 0x63
    ctx->pc = 0x348720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x348724: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x348724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x348728: 0xa04594f8  sb          $a1, -0x6B08($v0)
    ctx->pc = 0x348728u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294939896), (uint8_t)GPR_U32(ctx, 5));
label_34872c:
    // 0x34872c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34872cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x348730: 0x8082674  j           func_2099D0
    ctx->pc = 0x348730u;
    ctx->pc = 0x348734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348730u;
    // 0x348734: 0x24848740  addiu       $a0, $a0, -0x78C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    sub_002099D0_0x2099d0(rdram, ctx, runtime); return;
    ctx->pc = 0x348738u;
    // 0x348738: 0x0  nop
    ctx->pc = 0x348738u;
    // NOP
    // 0x34873c: 0x0  nop
    ctx->pc = 0x34873cu;
    // NOP
    // 0x348740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x348740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x348744: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x348744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348748: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x348748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34874c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x34874cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x348750: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x348750u;
    SET_GPR_U32(ctx, 31, 0x348758u);
    ctx->pc = 0x348754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348750u;
    // 0x348754: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x348750u, 0x348758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348758u;
label_348758:
    // 0x348758: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x348758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34875c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x34875cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x348760: 0x8c42dd88  lw          $v0, -0x2278($v0)
    ctx->pc = 0x348760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958472)));
    // 0x348764: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x348764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x348768: 0x24a550c0  addiu       $a1, $a1, 0x50C0
    ctx->pc = 0x348768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20672));
    // 0x34876c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x34876cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x348770: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x348770u;
    SET_GPR_U32(ctx, 31, 0x348778u);
    ctx->pc = 0x348774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348770u;
    // 0x348774: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x348770u, 0x348778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348778u;
label_348778:
    // 0x348778: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x348778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34877c: 0x3c0301df  lui         $v1, 0x1DF
    ctx->pc = 0x34877cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)479 << 16));
    // 0x348780: 0x8c48dd88  lw          $t0, -0x2278($v0)
    ctx->pc = 0x348780u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958472)));
    // 0x348784: 0x24053130  addiu       $a1, $zero, 0x3130
    ctx->pc = 0x348784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12592));
    // 0x348788: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x348788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34878c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x34878cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x348790: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x348790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x348794: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x348794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x348798: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x348798u;
    SET_GPR_U32(ctx, 31, 0x3487A0u);
    ctx->pc = 0x34879Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348798u;
    // 0x34879c: 0xac68dd80  sw          $t0, -0x2280($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294958464), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FE58u, 0x348798u, 0x3487A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3487A0u;
label_3487a0:
    // 0x3487a0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3487a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x3487a4: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x3487A4u;
    SET_GPR_U32(ctx, 31, 0x3487ACu);
    ctx->pc = 0x3487A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3487A4u;
    // 0x3487a8: 0x248487c0  addiu       $a0, $a0, -0x7840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347260u, 0x3487A4u, 0x3487ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3487ACu;
label_3487ac:
    // 0x3487ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3487acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3487b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3487B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3487B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3487B0u;
        // 0x3487b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3487B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3487B8u;
    // 0x3487b8: 0x0  nop
    ctx->pc = 0x3487b8u;
    // NOP
    // 0x3487bc: 0x0  nop
    ctx->pc = 0x3487bcu;
    // NOP
    // 0x3487c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3487c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3487c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3487c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3487c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3487c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3487cc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3487ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3487d0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x3487D0u;
    SET_GPR_U32(ctx, 31, 0x3487D8u);
    ctx->pc = 0x3487D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3487D0u;
    // 0x3487d4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x3487D0u, 0x3487D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3487D8u;
label_3487d8:
    // 0x3487d8: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x3487d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x3487dc: 0x24053120  addiu       $a1, $zero, 0x3120
    ctx->pc = 0x3487dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12576));
    // 0x3487e0: 0x8c43dd80  lw          $v1, -0x2280($v0)
    ctx->pc = 0x3487e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x3487e4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3487e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3487e8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x3487e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3487ec: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x3487ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x3487f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3487f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3487f4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3487f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x3487f8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3487f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3487fc: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x3487fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x348800: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x348800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x348804: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x348804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x348808: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x348808u;
    SET_GPR_U32(ctx, 31, 0x348810u);
    ctx->pc = 0x34880Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348808u;
    // 0x34880c: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FE58u, 0x348808u, 0x348810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348810u;
label_348810:
    // 0x348810: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x348810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x348814: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x348814u;
    SET_GPR_U32(ctx, 31, 0x34881Cu);
    ctx->pc = 0x348818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348814u;
    // 0x348818: 0x24848830  addiu       $a0, $a0, -0x77D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347260u, 0x348814u, 0x34881Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34881Cu;
label_34881c:
    // 0x34881c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34881cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348820: 0x3e00008  jr          $ra
    ctx->pc = 0x348820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348820u;
        // 0x348824: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348828u;
    // 0x348828: 0x0  nop
    ctx->pc = 0x348828u;
    // NOP
    // 0x34882c: 0x0  nop
    ctx->pc = 0x34882cu;
    // NOP
    // 0x348830: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x348830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x348834: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x348834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x348838: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x348838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x34883c: 0x248433f0  addiu       $a0, $a0, 0x33F0
    ctx->pc = 0x34883cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13296));
    // 0x348840: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x348840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x348844: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x348844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348848: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x348848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34884c: 0x3c1101df  lui         $s1, 0x1DF
    ctx->pc = 0x34884cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)479 << 16));
    // 0x348850: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x348850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x348854: 0xc082678  jal         func_2099E0
    ctx->pc = 0x348854u;
    SET_GPR_U32(ctx, 31, 0x34885Cu);
    ctx->pc = 0x348858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348854u;
    // 0x348858: 0x2631ddc0  addiu       $s1, $s1, -0x2240 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x348854u, 0x34885Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34885Cu;
label_34885c:
    // 0x34885c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34885cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x348860: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x348860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348864: 0xc082678  jal         func_2099E0
    ctx->pc = 0x348864u;
    SET_GPR_U32(ctx, 31, 0x34886Cu);
    ctx->pc = 0x348868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348864u;
    // 0x348868: 0x2484b230  addiu       $a0, $a0, -0x4DD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x348864u, 0x34886Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34886Cu;
label_34886c:
    // 0x34886c: 0xc0d0c20  jal         func_343080
    ctx->pc = 0x34886Cu;
    SET_GPR_U32(ctx, 31, 0x348874u);
    ctx->pc = 0x343080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343080u, 0x34886Cu, 0x348874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348874u;
label_348874:
    // 0x348874: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x348874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x348878: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x348878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34887c: 0xac4342c0  sw          $v1, 0x42C0($v0)
    ctx->pc = 0x34887cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17088), GPR_U32(ctx, 3));
    // 0x348880: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x348880u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348884: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x348884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x348888: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x348888u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x34888c: 0xac4342c4  sw          $v1, 0x42C4($v0)
    ctx->pc = 0x34888cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17092), GPR_U32(ctx, 3));
    // 0x348890: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x348890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x348894: 0xac4342c8  sw          $v1, 0x42C8($v0)
    ctx->pc = 0x348894u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17096), GPR_U32(ctx, 3));
    // 0x348898: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x348898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34889c: 0xac4342cc  sw          $v1, 0x42CC($v0)
    ctx->pc = 0x34889cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17100), GPR_U32(ctx, 3));
    // 0x3488a0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3488a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3488a4: 0xac4342d0  sw          $v1, 0x42D0($v0)
    ctx->pc = 0x3488a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17104), GPR_U32(ctx, 3));
    // 0x3488a8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3488a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3488ac: 0x1a000020  blez        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3488ACu;
    {
        const bool branch_taken_0x3488ac = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3488B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3488ACu;
        // 0x3488b0: 0xac4342d4  sw          $v1, 0x42D4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3488ac) {
            ctx->pc = 0x348930u;
            goto label_348930;
        }
    }
    ctx->pc = 0x3488B4u;
label_3488b4:
    // 0x3488b4: 0x8225000c  lb          $a1, 0xC($s1)
    ctx->pc = 0x3488b4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3488b8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3488b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3488bc: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3488bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3488c0: 0x8c474068  lw          $a3, 0x4068($v0)
    ctx->pc = 0x3488c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16488)));
    // 0x3488c4: 0x248442c0  addiu       $a0, $a0, 0x42C0
    ctx->pc = 0x3488c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17088));
    // 0x3488c8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3488c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3488cc: 0x24a9ffcf  addiu       $t1, $a1, -0x31
    ctx->pc = 0x3488ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967247));
    // 0x3488d0: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x3488d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x3488d4: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x3488d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x3488d8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3488d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3488dc: 0xc94821  addu        $t1, $a2, $t1
    ctx->pc = 0x3488dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x3488e0: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x3488e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x3488e4: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x3488e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3488e8: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x3488e8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x3488ec: 0xe92021  addu        $a0, $a3, $t1
    ctx->pc = 0x3488ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3488f0: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x3488f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x3488f4: 0x8c634068  lw          $v1, 0x4068($v1)
    ctx->pc = 0x3488f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16488)));
    // 0x3488f8: 0x8e270040  lw          $a3, 0x40($s1)
    ctx->pc = 0x3488f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x3488fc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3488fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x348900: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x348900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x348904: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x348904u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x348908: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x348908u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x34890c: 0x8c424068  lw          $v0, 0x4068($v0)
    ctx->pc = 0x34890cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16488)));
    // 0x348910: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x348910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x348914: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x348914u;
    SET_GPR_U32(ctx, 31, 0x34891Cu);
    ctx->pc = 0x348918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348914u;
    // 0x348918: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x348914u, 0x34891Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34891Cu;
label_34891c:
    // 0x34891c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x34891cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x348920: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x348920u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x348924: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x348924u;
    {
        const bool branch_taken_0x348924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x348928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348924u;
        // 0x348928: 0x26310184  addiu       $s1, $s1, 0x184 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 388));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348924) {
            ctx->pc = 0x3488B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3488b4;
        }
    }
    ctx->pc = 0x34892Cu;
    // 0x34892c: 0x0  nop
    ctx->pc = 0x34892cu;
    // NOP
label_348930:
    // 0x348930: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x348930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x348934: 0xc0d0d18  jal         func_343460
    ctx->pc = 0x348934u;
    SET_GPR_U32(ctx, 31, 0x34893Cu);
    ctx->pc = 0x348938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348934u;
    // 0x348938: 0x24848960  addiu       $a0, $a0, -0x76A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343460u, 0x348934u, 0x34893Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34893Cu;
label_34893c:
    // 0x34893c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x34893cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x348940: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x348940u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x348944: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x348944u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x348948: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x348948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34894c: 0x3e00008  jr          $ra
    ctx->pc = 0x34894Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34894Cu;
        // 0x348950: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34894Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348954u;
    // 0x348954: 0x0  nop
    ctx->pc = 0x348954u;
    // NOP
    // 0x348958: 0x0  nop
    ctx->pc = 0x348958u;
    // NOP
    // 0x34895c: 0x0  nop
    ctx->pc = 0x34895cu;
    // NOP
    // 0x348960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x348960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x348964: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x348964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x348968: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x348968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34896c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34896cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x348970: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x348970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348974: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x348974u;
    SET_GPR_U32(ctx, 31, 0x34897Cu);
    ctx->pc = 0x348978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348974u;
    // 0x348978: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x348974u, 0x34897Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34897Cu;
label_34897c:
    // 0x34897c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x34897cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x348980: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x348980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x348984: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x348984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x348988: 0x248458d0  addiu       $a0, $a0, 0x58D0
    ctx->pc = 0x348988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22736));
    // 0x34898c: 0x8c43dd90  lw          $v1, -0x2270($v0)
    ctx->pc = 0x34898cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958480)));
    // 0x348990: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x348990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x348994: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x348994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x348998: 0x8c424068  lw          $v0, 0x4068($v0)
    ctx->pc = 0x348998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16488)));
    // 0x34899c: 0x8c4200c8  lw          $v0, 0xC8($v0)
    ctx->pc = 0x34899cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x3489a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3489A0u;
    {
        const bool branch_taken_0x3489a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3489A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3489A0u;
        // 0x3489a4: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3489a0) {
            ctx->pc = 0x3489B0u;
            goto label_3489b0;
        }
    }
    ctx->pc = 0x3489A8u;
    // 0x3489a8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3489a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3489ac: 0x24845900  addiu       $a0, $a0, 0x5900
    ctx->pc = 0x3489acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22784));
label_3489b0:
    // 0x3489b0: 0xc0d0a90  jal         func_342A40
    ctx->pc = 0x3489B0u;
    SET_GPR_U32(ctx, 31, 0x3489B8u);
    ctx->pc = 0x3489B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3489B0u;
    // 0x3489b4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342A40u, 0x3489B0u, 0x3489B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3489B8u;
label_3489b8:
    // 0x3489b8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3489b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3489bc: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x3489bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3489c0: 0x2465fffc  addiu       $a1, $v1, -0x4
    ctx->pc = 0x3489c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x3489c4: 0x3c0301df  lui         $v1, 0x1DF
    ctx->pc = 0x3489c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)479 << 16));
    // 0x3489c8: 0xac65dd90  sw          $a1, -0x2270($v1)
    ctx->pc = 0x3489c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294958480), GPR_U32(ctx, 5));
    // 0x3489cc: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x3489ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x3489d0: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3489D0u;
    {
        const bool branch_taken_0x3489d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3489d0) {
            ctx->pc = 0x3489D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3489D0u;
            // 0x3489d4: 0x30832000  andi        $v1, $a0, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3489FCu;
            goto label_3489fc;
        }
    }
    ctx->pc = 0x3489D8u;
    // 0x3489d8: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x3489d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x3489dc: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x3489DCu;
    SET_GPR_U32(ctx, 31, 0x3489E4u);
    ctx->pc = 0x3489E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3489DCu;
    // 0x3489e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x3489DCu, 0x3489E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3489E4u;
label_3489e4:
    // 0x3489e4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3489e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x3489e8: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x3489E8u;
    SET_GPR_U32(ctx, 31, 0x3489F0u);
    ctx->pc = 0x3489ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3489E8u;
    // 0x3489ec: 0x2484b120  addiu       $a0, $a0, -0x4EE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x3489E8u, 0x3489F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3489F0u;
label_3489f0:
    // 0x3489f0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3489F0u;
    {
        const bool branch_taken_0x3489f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3489F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3489F0u;
        // 0x3489f4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3489f0) {
            ctx->pc = 0x348AE0u;
            goto label_348ae0;
        }
    }
    ctx->pc = 0x3489F8u;
    // 0x3489f8: 0x30832000  andi        $v1, $a0, 0x2000
    ctx->pc = 0x3489f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
label_3489fc:
    // 0x3489fc: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x3489FCu;
    {
        const bool branch_taken_0x3489fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3489fc) {
            ctx->pc = 0x348ADCu;
            goto label_348adc;
        }
    }
    ctx->pc = 0x348A04u;
    // 0x348a04: 0x4a10026  bgez        $a1, . + 4 + (0x26 << 2)
    ctx->pc = 0x348A04u;
    {
        const bool branch_taken_0x348a04 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x348a04) {
            ctx->pc = 0x348AA0u;
            goto label_348aa0;
        }
    }
    ctx->pc = 0x348A0Cu;
    // 0x348a0c: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x348a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x348a10: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x348A10u;
    SET_GPR_U32(ctx, 31, 0x348A18u);
    ctx->pc = 0x348A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348A10u;
    // 0x348a14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x348A10u, 0x348A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348A18u;
label_348a18:
    // 0x348a18: 0x3c0301df  lui         $v1, 0x1DF
    ctx->pc = 0x348a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)479 << 16));
    // 0x348a1c: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x348a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x348a20: 0x8c63dd90  lw          $v1, -0x2270($v1)
    ctx->pc = 0x348a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958480)));
    // 0x348a24: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x348A24u;
    {
        const bool branch_taken_0x348a24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x348a24) {
            ctx->pc = 0x348A38u;
            goto label_348a38;
        }
    }
    ctx->pc = 0x348A2Cu;
    // 0x348a2c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x348a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x348a30: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x348A30u;
    SET_GPR_U32(ctx, 31, 0x348A38u);
    ctx->pc = 0x348A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348A30u;
    // 0x348a34: 0x24848d40  addiu       $a0, $a0, -0x72C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x348A30u, 0x348A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348A38u;
label_348a38:
    // 0x348a38: 0x3c0301df  lui         $v1, 0x1DF
    ctx->pc = 0x348a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)479 << 16));
    // 0x348a3c: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x348a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x348a40: 0x8c63dd90  lw          $v1, -0x2270($v1)
    ctx->pc = 0x348a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958480)));
    // 0x348a44: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x348A44u;
    {
        const bool branch_taken_0x348a44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x348a44) {
            ctx->pc = 0x348A58u;
            goto label_348a58;
        }
    }
    ctx->pc = 0x348A4Cu;
    // 0x348a4c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x348a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x348a50: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x348A50u;
    SET_GPR_U32(ctx, 31, 0x348A58u);
    ctx->pc = 0x348A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348A50u;
    // 0x348a54: 0x2484b3e0  addiu       $a0, $a0, -0x4C20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x348A50u, 0x348A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348A58u;
label_348a58:
    // 0x348a58: 0x3c0301df  lui         $v1, 0x1DF
    ctx->pc = 0x348a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)479 << 16));
    // 0x348a5c: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x348a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x348a60: 0x8c63dd90  lw          $v1, -0x2270($v1)
    ctx->pc = 0x348a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958480)));
    // 0x348a64: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x348A64u;
    {
        const bool branch_taken_0x348a64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x348a64) {
            ctx->pc = 0x348A78u;
            goto label_348a78;
        }
    }
    ctx->pc = 0x348A6Cu;
    // 0x348a6c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x348a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x348a70: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x348A70u;
    SET_GPR_U32(ctx, 31, 0x348A78u);
    ctx->pc = 0x348A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348A70u;
    // 0x348a74: 0x2484cd10  addiu       $a0, $a0, -0x32F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x348A70u, 0x348A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348A78u;
label_348a78:
    // 0x348a78: 0x3c0301df  lui         $v1, 0x1DF
    ctx->pc = 0x348a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)479 << 16));
    // 0x348a7c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x348a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x348a80: 0x8c63dd90  lw          $v1, -0x2270($v1)
    ctx->pc = 0x348a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958480)));
    // 0x348a84: 0x14640015  bne         $v1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x348A84u;
    {
        const bool branch_taken_0x348a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x348a84) {
            ctx->pc = 0x348ADCu;
            goto label_348adc;
        }
    }
    ctx->pc = 0x348A8Cu;
    // 0x348a8c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x348a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x348a90: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x348A90u;
    SET_GPR_U32(ctx, 31, 0x348A98u);
    ctx->pc = 0x348A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348A90u;
    // 0x348a94: 0x2484b120  addiu       $a0, $a0, -0x4EE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x348A90u, 0x348A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348A98u;
label_348a98:
    // 0x348a98: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x348A98u;
    {
        const bool branch_taken_0x348a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x348a98) {
            ctx->pc = 0x348ADCu;
            goto label_348adc;
        }
    }
    ctx->pc = 0x348AA0u;
label_348aa0:
    // 0x348aa0: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x348aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x348aa4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x348aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x348aa8: 0x8c634068  lw          $v1, 0x4068($v1)
    ctx->pc = 0x348aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16488)));
    // 0x348aac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x348aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x348ab0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x348ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x348ab4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x348ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x348ab8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x348ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x348abc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x348ABCu;
    {
        const bool branch_taken_0x348abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x348abc) {
            ctx->pc = 0x348ADCu;
            goto label_348adc;
        }
    }
    ctx->pc = 0x348AC4u;
    // 0x348ac4: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x348ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x348ac8: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x348AC8u;
    SET_GPR_U32(ctx, 31, 0x348AD0u);
    ctx->pc = 0x348ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348AC8u;
    // 0x348acc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x348AC8u, 0x348AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348AD0u;
label_348ad0:
    // 0x348ad0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x348ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x348ad4: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x348AD4u;
    SET_GPR_U32(ctx, 31, 0x348ADCu);
    ctx->pc = 0x348AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348AD4u;
    // 0x348ad8: 0x24848af0  addiu       $a0, $a0, -0x7510 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x348AD4u, 0x348ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348ADCu;
label_348adc:
    // 0x348adc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x348adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_348ae0:
    // 0x348ae0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x348ae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x348AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348AE4u;
        // 0x348ae8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348AECu;
    // 0x348aec: 0x0  nop
    ctx->pc = 0x348aecu;
    // NOP
    // 0x348af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x348af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x348af4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x348af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348af8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x348af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x348afc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x348afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x348b00: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x348B00u;
    SET_GPR_U32(ctx, 31, 0x348B08u);
    ctx->pc = 0x348B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348B00u;
    // 0x348b04: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x348B00u, 0x348B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348B08u;
label_348b08:
    // 0x348b08: 0x3c0301df  lui         $v1, 0x1DF
    ctx->pc = 0x348b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)479 << 16));
    // 0x348b0c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x348b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x348b10: 0x8c66dd90  lw          $a2, -0x2270($v1)
    ctx->pc = 0x348b10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958480)));
    // 0x348b14: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x348b14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x348b18: 0x8c474068  lw          $a3, 0x4068($v0)
    ctx->pc = 0x348b18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16488)));
    // 0x348b1c: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x348b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x348b20: 0x24a550c0  addiu       $a1, $a1, 0x50C0
    ctx->pc = 0x348b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20672));
    // 0x348b24: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x348b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x348b28: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x348b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x348b2c: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x348b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x348b30: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x348b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x348b34: 0x8c42dd80  lw          $v0, -0x2280($v0)
    ctx->pc = 0x348b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x348b38: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x348b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x348b3c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x348b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x348b40: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x348b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x348b44: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x348B44u;
    SET_GPR_U32(ctx, 31, 0x348B4Cu);
    ctx->pc = 0x348B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348B44u;
    // 0x348b48: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x348B44u, 0x348B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348B4Cu;
label_348b4c:
    // 0x348b4c: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x348b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x348b50: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x348b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x348b54: 0x8c48dd90  lw          $t0, -0x2270($v0)
    ctx->pc = 0x348b54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958480)));
    // 0x348b58: 0x24053130  addiu       $a1, $zero, 0x3130
    ctx->pc = 0x348b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12592));
    // 0x348b5c: 0x8c694068  lw          $t1, 0x4068($v1)
    ctx->pc = 0x348b5cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16488)));
    // 0x348b60: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x348b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x348b64: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x348b64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x348b68: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x348b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x348b6c: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x348b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x348b70: 0x3c0301df  lui         $v1, 0x1DF
    ctx->pc = 0x348b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)479 << 16));
    // 0x348b74: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x348b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x348b78: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x348b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x348b7c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x348b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x348b80: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x348b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x348b84: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x348b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x348b88: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x348B88u;
    SET_GPR_U32(ctx, 31, 0x348B90u);
    ctx->pc = 0x348B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348B88u;
    // 0x348b8c: 0xac62dd80  sw          $v0, -0x2280($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294958464), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FE58u, 0x348B88u, 0x348B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348B90u;
label_348b90:
    // 0x348b90: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x348b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x348b94: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x348B94u;
    SET_GPR_U32(ctx, 31, 0x348B9Cu);
    ctx->pc = 0x348B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348B94u;
    // 0x348b98: 0x2484b300  addiu       $a0, $a0, -0x4D00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347260u, 0x348B94u, 0x348B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348B9Cu;
label_348b9c:
    // 0x348b9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x348b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x348BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348BA0u;
        // 0x348ba4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348BA8u;
    // 0x348ba8: 0x0  nop
    ctx->pc = 0x348ba8u;
    // NOP
    // 0x348bac: 0x0  nop
    ctx->pc = 0x348bacu;
    // NOP
label_348bb0:
    // 0x348bb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x348bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x348bb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x348bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x348bb8: 0xc082918  jal         func_20A460
    ctx->pc = 0x348BB8u;
    SET_GPR_U32(ctx, 31, 0x348BC0u);
    ctx->pc = 0x20A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A460u, 0x348BB8u, 0x348BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348BC0u;
label_348bc0:
    // 0x348bc0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x348bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x348bc4: 0x9042bea9  lbu         $v0, -0x4157($v0)
    ctx->pc = 0x348bc4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950569)));
    // 0x348bc8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x348bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x348bcc: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x348bccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x348bd0: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x348BD0u;
    {
        const bool branch_taken_0x348bd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x348bd0) {
            ctx->pc = 0x348C80u;
            goto label_348c80;
        }
    }
    ctx->pc = 0x348BD8u;
    // 0x348bd8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x348bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x348bdc: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x348bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x348be0: 0x8c444378  lw          $a0, 0x4378($v0)
    ctx->pc = 0x348be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x348be4: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x348be4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x348be8: 0x24a55930  addiu       $a1, $a1, 0x5930
    ctx->pc = 0x348be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22832));
    // 0x348bec: 0xc083a44  jal         func_20E910
    ctx->pc = 0x348BECu;
    SET_GPR_U32(ctx, 31, 0x348BF4u);
    ctx->pc = 0x348BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348BECu;
    // 0x348bf0: 0x24c661f0  addiu       $a2, $a2, 0x61F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E910u, 0x348BECu, 0x348BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348BF4u;
label_348bf4:
    // 0x348bf4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x348bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x348bf8: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x348bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x348bfc: 0x24845930  addiu       $a0, $a0, 0x5930
    ctx->pc = 0x348bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22832));
    // 0x348c00: 0xc0838c4  jal         func_20E310
    ctx->pc = 0x348C00u;
    SET_GPR_U32(ctx, 31, 0x348C08u);
    ctx->pc = 0x348C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348C00u;
    // 0x348c04: 0x24a55bf0  addiu       $a1, $a1, 0x5BF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E310u, 0x348C00u, 0x348C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348C08u;
label_348c08:
    // 0x348c08: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x348c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x348c0c: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x348c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x348c10: 0x9044bea8  lbu         $a0, -0x4158($v0)
    ctx->pc = 0x348c10u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950568)));
    // 0x348c14: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x348c14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x348c18: 0x24a55930  addiu       $a1, $a1, 0x5930
    ctx->pc = 0x348c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22832));
    // 0x348c1c: 0xc083930  jal         func_20E4C0
    ctx->pc = 0x348C1Cu;
    SET_GPR_U32(ctx, 31, 0x348C24u);
    ctx->pc = 0x348C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348C1Cu;
    // 0x348c20: 0x24c66330  addiu       $a2, $a2, 0x6330 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E4C0u, 0x348C1Cu, 0x348C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348C24u;
label_348c24:
    // 0x348c24: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x348c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x348c28: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x348c28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x348c2c: 0x9044bea9  lbu         $a0, -0x4157($v0)
    ctx->pc = 0x348c2cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950569)));
    // 0x348c30: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x348c30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x348c34: 0x24a55930  addiu       $a1, $a1, 0x5930
    ctx->pc = 0x348c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22832));
    // 0x348c38: 0xc083930  jal         func_20E4C0
    ctx->pc = 0x348C38u;
    SET_GPR_U32(ctx, 31, 0x348C40u);
    ctx->pc = 0x348C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348C38u;
    // 0x348c3c: 0x24c66380  addiu       $a2, $a2, 0x6380 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E4C0u, 0x348C38u, 0x348C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348C40u;
label_348c40:
    // 0x348c40: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x348c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x348c44: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x348c44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x348c48: 0x9044beaa  lbu         $a0, -0x4156($v0)
    ctx->pc = 0x348c48u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950570)));
    // 0x348c4c: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x348c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x348c50: 0x24a55930  addiu       $a1, $a1, 0x5930
    ctx->pc = 0x348c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22832));
    // 0x348c54: 0xc083930  jal         func_20E4C0
    ctx->pc = 0x348C54u;
    SET_GPR_U32(ctx, 31, 0x348C5Cu);
    ctx->pc = 0x348C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348C54u;
    // 0x348c58: 0x24c663b0  addiu       $a2, $a2, 0x63B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E4C0u, 0x348C54u, 0x348C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348C5Cu;
label_348c5c:
    // 0x348c5c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x348c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x348c60: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x348c60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x348c64: 0x9044beab  lbu         $a0, -0x4155($v0)
    ctx->pc = 0x348c64u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950571)));
    // 0x348c68: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x348c68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x348c6c: 0x24a55930  addiu       $a1, $a1, 0x5930
    ctx->pc = 0x348c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22832));
    // 0x348c70: 0xc083930  jal         func_20E4C0
    ctx->pc = 0x348C70u;
    SET_GPR_U32(ctx, 31, 0x348C78u);
    ctx->pc = 0x348C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348C70u;
    // 0x348c74: 0x24c663e0  addiu       $a2, $a2, 0x63E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E4C0u, 0x348C70u, 0x348C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348C78u;
label_348c78:
    // 0x348c78: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x348C78u;
    {
        const bool branch_taken_0x348c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x348c78) {
            ctx->pc = 0x348CE8u;
            goto label_348ce8;
        }
    }
    ctx->pc = 0x348C80u;
label_348c80:
    // 0x348c80: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x348c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x348c84: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x348c84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x348c88: 0x8c444378  lw          $a0, 0x4378($v0)
    ctx->pc = 0x348c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x348c8c: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x348c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x348c90: 0x24a55930  addiu       $a1, $a1, 0x5930
    ctx->pc = 0x348c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22832));
    // 0x348c94: 0xc083a44  jal         func_20E910
    ctx->pc = 0x348C94u;
    SET_GPR_U32(ctx, 31, 0x348C9Cu);
    ctx->pc = 0x348C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348C94u;
    // 0x348c98: 0x24c66290  addiu       $a2, $a2, 0x6290 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E910u, 0x348C94u, 0x348C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348C9Cu;
label_348c9c:
    // 0x348c9c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x348c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x348ca0: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x348ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x348ca4: 0x24845930  addiu       $a0, $a0, 0x5930
    ctx->pc = 0x348ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22832));
    // 0x348ca8: 0xc0838c4  jal         func_20E310
    ctx->pc = 0x348CA8u;
    SET_GPR_U32(ctx, 31, 0x348CB0u);
    ctx->pc = 0x348CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348CA8u;
    // 0x348cac: 0x24a55f60  addiu       $a1, $a1, 0x5F60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E310u, 0x348CA8u, 0x348CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348CB0u;
label_348cb0:
    // 0x348cb0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x348cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x348cb4: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x348cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x348cb8: 0x9044bea8  lbu         $a0, -0x4158($v0)
    ctx->pc = 0x348cb8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950568)));
    // 0x348cbc: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x348cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x348cc0: 0x24a55930  addiu       $a1, $a1, 0x5930
    ctx->pc = 0x348cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22832));
    // 0x348cc4: 0xc083930  jal         func_20E4C0
    ctx->pc = 0x348CC4u;
    SET_GPR_U32(ctx, 31, 0x348CCCu);
    ctx->pc = 0x348CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348CC4u;
    // 0x348cc8: 0x24c66330  addiu       $a2, $a2, 0x6330 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E4C0u, 0x348CC4u, 0x348CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348CCCu;
label_348ccc:
    // 0x348ccc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x348cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x348cd0: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x348cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x348cd4: 0x9044bea9  lbu         $a0, -0x4157($v0)
    ctx->pc = 0x348cd4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950569)));
    // 0x348cd8: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x348cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x348cdc: 0x24a55930  addiu       $a1, $a1, 0x5930
    ctx->pc = 0x348cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22832));
    // 0x348ce0: 0xc083930  jal         func_20E4C0
    ctx->pc = 0x348CE0u;
    SET_GPR_U32(ctx, 31, 0x348CE8u);
    ctx->pc = 0x348CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348CE0u;
    // 0x348ce4: 0x24c66380  addiu       $a2, $a2, 0x6380 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E4C0u, 0x348CE0u, 0x348CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348CE8u;
label_348ce8:
    // 0x348ce8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x348ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x348cec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x348cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348cf0: 0x8c634378  lw          $v1, 0x4378($v1)
    ctx->pc = 0x348cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17272)));
    // 0x348cf4: 0x54640010  bnel        $v1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x348CF4u;
    {
        const bool branch_taken_0x348cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x348cf4) {
            ctx->pc = 0x348CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348CF4u;
            // 0x348cf8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348D38u;
            goto label_348d38;
        }
    }
    ctx->pc = 0x348CFCu;
    // 0x348cfc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x348cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x348d00: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x348d00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x348d04: 0x24845930  addiu       $a0, $a0, 0x5930
    ctx->pc = 0x348d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22832));
    // 0x348d08: 0x24a56420  addiu       $a1, $a1, 0x6420
    ctx->pc = 0x348d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25632));
    // 0x348d0c: 0xc0839e4  jal         func_20E790
    ctx->pc = 0x348D0Cu;
    SET_GPR_U32(ctx, 31, 0x348D14u);
    ctx->pc = 0x348D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348D0Cu;
    // 0x348d10: 0x2406005a  addiu       $a2, $zero, 0x5A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E790u, 0x348D0Cu, 0x348D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348D14u;
label_348d14:
    // 0x348d14: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x348d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x348d18: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x348d18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x348d1c: 0x9044bea8  lbu         $a0, -0x4158($v0)
    ctx->pc = 0x348d1cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950568)));
    // 0x348d20: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x348d20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x348d24: 0x24a55930  addiu       $a1, $a1, 0x5930
    ctx->pc = 0x348d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22832));
    // 0x348d28: 0x24c66440  addiu       $a2, $a2, 0x6440
    ctx->pc = 0x348d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25664));
    // 0x348d2c: 0xc083a00  jal         func_20E800
    ctx->pc = 0x348D2Cu;
    SET_GPR_U32(ctx, 31, 0x348D34u);
    ctx->pc = 0x348D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348D2Cu;
    // 0x348d30: 0x2407005a  addiu       $a3, $zero, 0x5A (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E800u, 0x348D2Cu, 0x348D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348D34u;
label_348d34:
    // 0x348d34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x348d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_348d38:
    // 0x348d38: 0x3e00008  jr          $ra
    ctx->pc = 0x348D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348D38u;
        // 0x348d3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348D40u;
    // 0x348d40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x348d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x348d44: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x348d44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x348d48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x348d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x348d4c: 0x24848bb0  addiu       $a0, $a0, -0x7450
    ctx->pc = 0x348d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937520));
    // 0x348d50: 0xc082678  jal         func_2099E0
    ctx->pc = 0x348D50u;
    SET_GPR_U32(ctx, 31, 0x348D58u);
    ctx->pc = 0x348D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348D50u;
    // 0x348d54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x348D50u, 0x348D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348D58u;
label_348d58:
    // 0x348d58: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x348d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x348d5c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x348d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x348d60: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x348d60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x348d64: 0xa460be90  sh          $zero, -0x4170($v1)
    ctx->pc = 0x348d64u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294950544), (uint16_t)GPR_U32(ctx, 0));
    // 0x348d68: 0x24848df0  addiu       $a0, $a0, -0x7210
    ctx->pc = 0x348d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938096));
    // 0x348d6c: 0xc0d0d18  jal         func_343460
    ctx->pc = 0x348D6Cu;
    SET_GPR_U32(ctx, 31, 0x348D74u);
    ctx->pc = 0x348D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348D6Cu;
    // 0x348d70: 0xac404378  sw          $zero, 0x4378($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343460u, 0x348D6Cu, 0x348D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348D74u;
label_348d74:
    // 0x348d74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x348d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348d78: 0x3e00008  jr          $ra
    ctx->pc = 0x348D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348D78u;
        // 0x348d7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348D80u;
    // 0x348d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x348d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x348d84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x348d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x348d88: 0xc069184  jal         func_1A4610
    ctx->pc = 0x348D88u;
    SET_GPR_U32(ctx, 31, 0x348D90u);
    ctx->pc = 0x348D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348D88u;
    // 0x348d8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4610u, 0x348D88u, 0x348D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348D90u;
label_348d90:
    // 0x348d90: 0xc069244  jal         func_1A4910
    ctx->pc = 0x348D90u;
    SET_GPR_U32(ctx, 31, 0x348D98u);
    ctx->pc = 0x1A4910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4910u, 0x348D90u, 0x348D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348D98u;
label_348d98:
    // 0x348d98: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x348d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x348d9c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x348d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x348da0: 0xac40d9c0  sw          $zero, -0x2640($v0)
    ctx->pc = 0x348da0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957504), GPR_U32(ctx, 0));
    // 0x348da4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x348da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x348da8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x348da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x348dac: 0x248433f0  addiu       $a0, $a0, 0x33F0
    ctx->pc = 0x348dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13296));
    // 0x348db0: 0xa0439780  sb          $v1, -0x6880($v0)
    ctx->pc = 0x348db0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940544), (uint8_t)GPR_U32(ctx, 3));
    // 0x348db4: 0xc082678  jal         func_2099E0
    ctx->pc = 0x348DB4u;
    SET_GPR_U32(ctx, 31, 0x348DBCu);
    ctx->pc = 0x348DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348DB4u;
    // 0x348db8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x348DB4u, 0x348DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348DBCu;
label_348dbc:
    // 0x348dbc: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x348dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x348dc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x348dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348dc4: 0xc082678  jal         func_2099E0
    ctx->pc = 0x348DC4u;
    SET_GPR_U32(ctx, 31, 0x348DCCu);
    ctx->pc = 0x348DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348DC4u;
    // 0x348dc8: 0x24848bb0  addiu       $a0, $a0, -0x7450 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x348DC4u, 0x348DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348DCCu;
label_348dcc:
    // 0x348dcc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x348dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x348dd0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x348dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x348dd4: 0x24848df0  addiu       $a0, $a0, -0x7210
    ctx->pc = 0x348dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938096));
    // 0x348dd8: 0xc0d0d18  jal         func_343460
    ctx->pc = 0x348DD8u;
    SET_GPR_U32(ctx, 31, 0x348DE0u);
    ctx->pc = 0x348DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348DD8u;
    // 0x348ddc: 0xa440be90  sh          $zero, -0x4170($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343460u, 0x348DD8u, 0x348DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348DE0u;
label_348de0:
    // 0x348de0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x348de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348de4: 0x3e00008  jr          $ra
    ctx->pc = 0x348DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348DE4u;
        // 0x348de8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348DECu;
    // 0x348dec: 0x0  nop
    ctx->pc = 0x348decu;
    // NOP
    // 0x348df0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x348df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x348df4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x348df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x348df8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x348df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x348dfc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x348dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x348e00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x348e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348e04: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x348E04u;
    SET_GPR_U32(ctx, 31, 0x348E0Cu);
    ctx->pc = 0x348E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348E04u;
    // 0x348e08: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x348E04u, 0x348E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348E0Cu;
label_348e0c:
    // 0x348e0c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x348e0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x348e10: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x348e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x348e14: 0x9042bea9  lbu         $v0, -0x4157($v0)
    ctx->pc = 0x348e14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950569)));
    // 0x348e18: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x348E18u;
    {
        const bool branch_taken_0x348e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x348e18) {
            ctx->pc = 0x348E44u;
            goto label_348e44;
        }
    }
    ctx->pc = 0x348E20u;
    // 0x348e20: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x348e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x348e24: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x348e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x348e28: 0x90454378  lbu         $a1, 0x4378($v0)
    ctx->pc = 0x348e28u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x348e2c: 0xc0d0abc  jal         func_342AF0
    ctx->pc = 0x348E2Cu;
    SET_GPR_U32(ctx, 31, 0x348E34u);
    ctx->pc = 0x348E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348E2Cu;
    // 0x348e30: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342AF0u, 0x348E2Cu, 0x348E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348E34u;
label_348e34:
    // 0x348e34: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x348e34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x348e38: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x348e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x348e3c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x348E3Cu;
    {
        const bool branch_taken_0x348e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E3Cu;
        // 0x348e40: 0xac644378  sw          $a0, 0x4378($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 17272), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348e3c) {
            ctx->pc = 0x348E78u;
            goto label_348e78;
        }
    }
    ctx->pc = 0x348E44u;
label_348e44:
    // 0x348e44: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x348e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x348e48: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x348e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x348e4c: 0x90454378  lbu         $a1, 0x4378($v0)
    ctx->pc = 0x348e4cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x348e50: 0xc0d0abc  jal         func_342AF0
    ctx->pc = 0x348E50u;
    SET_GPR_U32(ctx, 31, 0x348E58u);
    ctx->pc = 0x348E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348E50u;
    // 0x348e54: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342AF0u, 0x348E50u, 0x348E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348E58u;
label_348e58:
    // 0x348e58: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x348e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x348e5c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x348e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x348e60: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x348e60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x348e64: 0x248464a0  addiu       $a0, $a0, 0x64A0
    ctx->pc = 0x348e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25760));
    // 0x348e68: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x348e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x348e6c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x348e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x348e70: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x348e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x348e74: 0xac644378  sw          $a0, 0x4378($v1)
    ctx->pc = 0x348e74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17272), GPR_U32(ctx, 4));
label_348e78:
    // 0x348e78: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x348e78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x348e7c: 0x32030020  andi        $v1, $s0, 0x20
    ctx->pc = 0x348e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
    // 0x348e80: 0x5060003c  beql        $v1, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x348E80u;
    {
        const bool branch_taken_0x348e80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x348e80) {
            ctx->pc = 0x348E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348E80u;
            // 0x348e84: 0x32030080  andi        $v1, $s0, 0x80 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x348F74u;
            goto label_348f74;
        }
    }
    ctx->pc = 0x348E88u;
    // 0x348e88: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x348e88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x348e8c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x348e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x348e90: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x348e90u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x348e94: 0x5083002c  beql        $a0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x348E94u;
    {
        const bool branch_taken_0x348e94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x348e94) {
            ctx->pc = 0x348E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348E94u;
            // 0x348e98: 0x24040125  addiu       $a0, $zero, 0x125 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348F48u;
            goto label_348f48;
        }
    }
    ctx->pc = 0x348E9Cu;
    // 0x348e9c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x348e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x348ea0: 0x5083001e  beql        $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x348EA0u;
    {
        const bool branch_taken_0x348ea0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x348ea0) {
            ctx->pc = 0x348EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348EA0u;
            // 0x348ea4: 0x24040125  addiu       $a0, $zero, 0x125 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348F1Cu;
            goto label_348f1c;
        }
    }
    ctx->pc = 0x348EA8u;
    // 0x348ea8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x348ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348eac: 0x50830010  beql        $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x348EACu;
    {
        const bool branch_taken_0x348eac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x348eac) {
            ctx->pc = 0x348EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348EACu;
            // 0x348eb0: 0x24040125  addiu       $a0, $zero, 0x125 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348EF0u;
            goto label_348ef0;
        }
    }
    ctx->pc = 0x348EB4u;
    // 0x348eb4: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x348EB4u;
    {
        const bool branch_taken_0x348eb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x348eb4) {
            ctx->pc = 0x348EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348EB4u;
            // 0x348eb8: 0x24040125  addiu       $a0, $zero, 0x125 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348EC4u;
            goto label_348ec4;
        }
    }
    ctx->pc = 0x348EBCu;
    // 0x348ebc: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x348EBCu;
    {
        const bool branch_taken_0x348ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348EBCu;
        // 0x348ec0: 0x32034000  andi        $v1, $s0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x348ebc) {
            ctx->pc = 0x349058u;
            goto label_349058;
        }
    }
    ctx->pc = 0x348EC4u;
label_348ec4:
    // 0x348ec4: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x348EC4u;
    SET_GPR_U32(ctx, 31, 0x348ECCu);
    ctx->pc = 0x348EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348EC4u;
    // 0x348ec8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x348EC4u, 0x348ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348ECCu;
label_348ecc:
    // 0x348ecc: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x348eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x348ed0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x348ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x348ed4: 0x9063bea9  lbu         $v1, -0x4157($v1)
    ctx->pc = 0x348ed4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950569)));
    // 0x348ed8: 0x54640002  bnel        $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x348ED8u;
    {
        const bool branch_taken_0x348ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x348ed8) {
            ctx->pc = 0x348EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348ED8u;
            // 0x348edc: 0x24640001  addiu       $a0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348EE4u;
            goto label_348ee4;
        }
    }
    ctx->pc = 0x348EE0u;
    // 0x348ee0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x348ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_348ee4:
    // 0x348ee4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x348ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x348ee8: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x348EE8u;
    {
        const bool branch_taken_0x348ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348EE8u;
        // 0x348eec: 0xa064bea9  sb          $a0, -0x4157($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294950569), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348ee8) {
            ctx->pc = 0x349054u;
            goto label_349054;
        }
    }
    ctx->pc = 0x348EF0u;
label_348ef0:
    // 0x348ef0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x348EF0u;
    SET_GPR_U32(ctx, 31, 0x348EF8u);
    ctx->pc = 0x348EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348EF0u;
    // 0x348ef4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x348EF0u, 0x348EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348EF8u;
label_348ef8:
    // 0x348ef8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x348ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x348efc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x348efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x348f00: 0x9063bea8  lbu         $v1, -0x4158($v1)
    ctx->pc = 0x348f00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950568)));
    // 0x348f04: 0x54640002  bnel        $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x348F04u;
    {
        const bool branch_taken_0x348f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x348f04) {
            ctx->pc = 0x348F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348F04u;
            // 0x348f08: 0x24640001  addiu       $a0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348F10u;
            goto label_348f10;
        }
    }
    ctx->pc = 0x348F0Cu;
    // 0x348f0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x348f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_348f10:
    // 0x348f10: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x348f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x348f14: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x348F14u;
    {
        const bool branch_taken_0x348f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F14u;
        // 0x348f18: 0xa064bea8  sb          $a0, -0x4158($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294950568), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348f14) {
            ctx->pc = 0x349054u;
            goto label_349054;
        }
    }
    ctx->pc = 0x348F1Cu;
label_348f1c:
    // 0x348f1c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x348F1Cu;
    SET_GPR_U32(ctx, 31, 0x348F24u);
    ctx->pc = 0x348F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348F1Cu;
    // 0x348f20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x348F1Cu, 0x348F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348F24u;
label_348f24:
    // 0x348f24: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x348f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x348f28: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x348f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x348f2c: 0x9063beaa  lbu         $v1, -0x4156($v1)
    ctx->pc = 0x348f2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950570)));
    // 0x348f30: 0x54640002  bnel        $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x348F30u;
    {
        const bool branch_taken_0x348f30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x348f30) {
            ctx->pc = 0x348F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348F30u;
            // 0x348f34: 0x24640001  addiu       $a0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348F3Cu;
            goto label_348f3c;
        }
    }
    ctx->pc = 0x348F38u;
    // 0x348f38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x348f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_348f3c:
    // 0x348f3c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x348f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x348f40: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x348F40u;
    {
        const bool branch_taken_0x348f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F40u;
        // 0x348f44: 0xa064beaa  sb          $a0, -0x4156($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294950570), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348f40) {
            ctx->pc = 0x349054u;
            goto label_349054;
        }
    }
    ctx->pc = 0x348F48u;
label_348f48:
    // 0x348f48: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x348F48u;
    SET_GPR_U32(ctx, 31, 0x348F50u);
    ctx->pc = 0x348F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348F48u;
    // 0x348f4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x348F48u, 0x348F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348F50u;
label_348f50:
    // 0x348f50: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x348f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x348f54: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x348f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x348f58: 0x9063beab  lbu         $v1, -0x4155($v1)
    ctx->pc = 0x348f58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950571)));
    // 0x348f5c: 0x54640002  bnel        $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x348F5Cu;
    {
        const bool branch_taken_0x348f5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x348f5c) {
            ctx->pc = 0x348F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348F5Cu;
            // 0x348f60: 0x24640001  addiu       $a0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348F68u;
            goto label_348f68;
        }
    }
    ctx->pc = 0x348F64u;
    // 0x348f64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x348f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_348f68:
    // 0x348f68: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x348f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x348f6c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x348F6Cu;
    {
        const bool branch_taken_0x348f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F6Cu;
        // 0x348f70: 0xa064beab  sb          $a0, -0x4155($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294950571), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348f6c) {
            ctx->pc = 0x349054u;
            goto label_349054;
        }
    }
    ctx->pc = 0x348F74u;
label_348f74:
    // 0x348f74: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x348F74u;
    {
        const bool branch_taken_0x348f74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x348f74) {
            ctx->pc = 0x349054u;
            goto label_349054;
        }
    }
    ctx->pc = 0x348F7Cu;
    // 0x348f7c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x348f7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x348f80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x348f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x348f84: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x348f84u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x348f88: 0x50830029  beql        $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x348F88u;
    {
        const bool branch_taken_0x348f88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x348f88) {
            ctx->pc = 0x348F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348F88u;
            // 0x348f8c: 0x24040125  addiu       $a0, $zero, 0x125 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349030u;
            goto label_349030;
        }
    }
    ctx->pc = 0x348F90u;
    // 0x348f90: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x348f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x348f94: 0x5083001c  beql        $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x348F94u;
    {
        const bool branch_taken_0x348f94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x348f94) {
            ctx->pc = 0x348F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348F94u;
            // 0x348f98: 0x24040125  addiu       $a0, $zero, 0x125 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349008u;
            goto label_349008;
        }
    }
    ctx->pc = 0x348F9Cu;
    // 0x348f9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x348f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348fa0: 0x5083000f  beql        $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x348FA0u;
    {
        const bool branch_taken_0x348fa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x348fa0) {
            ctx->pc = 0x348FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348FA0u;
            // 0x348fa4: 0x24040125  addiu       $a0, $zero, 0x125 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348FE0u;
            goto label_348fe0;
        }
    }
    ctx->pc = 0x348FA8u;
    // 0x348fa8: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x348FA8u;
    {
        const bool branch_taken_0x348fa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x348fa8) {
            ctx->pc = 0x348FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348FA8u;
            // 0x348fac: 0x24040125  addiu       $a0, $zero, 0x125 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348FB8u;
            goto label_348fb8;
        }
    }
    ctx->pc = 0x348FB0u;
    // 0x348fb0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x348FB0u;
    {
        const bool branch_taken_0x348fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x348fb0) {
            ctx->pc = 0x349054u;
            goto label_349054;
        }
    }
    ctx->pc = 0x348FB8u;
label_348fb8:
    // 0x348fb8: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x348FB8u;
    SET_GPR_U32(ctx, 31, 0x348FC0u);
    ctx->pc = 0x348FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348FB8u;
    // 0x348fbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x348FB8u, 0x348FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348FC0u;
label_348fc0:
    // 0x348fc0: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x348fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x348fc4: 0x9063bea9  lbu         $v1, -0x4157($v1)
    ctx->pc = 0x348fc4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950569)));
    // 0x348fc8: 0x54600002  bnel        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x348FC8u;
    {
        const bool branch_taken_0x348fc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x348fc8) {
            ctx->pc = 0x348FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348FC8u;
            // 0x348fcc: 0x2464ffff  addiu       $a0, $v1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348FD4u;
            goto label_348fd4;
        }
    }
    ctx->pc = 0x348FD0u;
    // 0x348fd0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x348fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_348fd4:
    // 0x348fd4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x348fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x348fd8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x348FD8u;
    {
        const bool branch_taken_0x348fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348FD8u;
        // 0x348fdc: 0xa064bea9  sb          $a0, -0x4157($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294950569), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348fd8) {
            ctx->pc = 0x349054u;
            goto label_349054;
        }
    }
    ctx->pc = 0x348FE0u;
label_348fe0:
    // 0x348fe0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x348FE0u;
    SET_GPR_U32(ctx, 31, 0x348FE8u);
    ctx->pc = 0x348FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348FE0u;
    // 0x348fe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x348FE0u, 0x348FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348FE8u;
label_348fe8:
    // 0x348fe8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x348fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x348fec: 0x9063bea8  lbu         $v1, -0x4158($v1)
    ctx->pc = 0x348fecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950568)));
    // 0x348ff0: 0x54600002  bnel        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x348FF0u;
    {
        const bool branch_taken_0x348ff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x348ff0) {
            ctx->pc = 0x348FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348FF0u;
            // 0x348ff4: 0x2464ffff  addiu       $a0, $v1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348FFCu;
            goto label_348ffc;
        }
    }
    ctx->pc = 0x348FF8u;
    // 0x348ff8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x348ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_348ffc:
    // 0x348ffc: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x348ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x349000: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x349000u;
    {
        const bool branch_taken_0x349000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349000u;
        // 0x349004: 0xa064bea8  sb          $a0, -0x4158($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294950568), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349000) {
            ctx->pc = 0x349054u;
            goto label_349054;
        }
    }
    ctx->pc = 0x349008u;
label_349008:
    // 0x349008: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x349008u;
    SET_GPR_U32(ctx, 31, 0x349010u);
    ctx->pc = 0x34900Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349008u;
    // 0x34900c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x349008u, 0x349010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349010u;
label_349010:
    // 0x349010: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x349010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x349014: 0x9063beaa  lbu         $v1, -0x4156($v1)
    ctx->pc = 0x349014u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950570)));
    // 0x349018: 0x54600002  bnel        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x349018u;
    {
        const bool branch_taken_0x349018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x349018) {
            ctx->pc = 0x34901Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349018u;
            // 0x34901c: 0x2464ffff  addiu       $a0, $v1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349024u;
            goto label_349024;
        }
    }
    ctx->pc = 0x349020u;
    // 0x349020: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x349020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_349024:
    // 0x349024: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x349024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x349028: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x349028u;
    {
        const bool branch_taken_0x349028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349028u;
        // 0x34902c: 0xa064beaa  sb          $a0, -0x4156($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294950570), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349028) {
            ctx->pc = 0x349054u;
            goto label_349054;
        }
    }
    ctx->pc = 0x349030u;
label_349030:
    // 0x349030: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x349030u;
    SET_GPR_U32(ctx, 31, 0x349038u);
    ctx->pc = 0x349034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349030u;
    // 0x349034: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x349030u, 0x349038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349038u;
label_349038:
    // 0x349038: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x349038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34903c: 0x9063beab  lbu         $v1, -0x4155($v1)
    ctx->pc = 0x34903cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950571)));
    // 0x349040: 0x54600002  bnel        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x349040u;
    {
        const bool branch_taken_0x349040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x349040) {
            ctx->pc = 0x349044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349040u;
            // 0x349044: 0x2464ffff  addiu       $a0, $v1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34904Cu;
            goto label_34904c;
        }
    }
    ctx->pc = 0x349048u;
    // 0x349048: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x349048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_34904c:
    // 0x34904c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34904cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x349050: 0xa064beab  sb          $a0, -0x4155($v1)
    ctx->pc = 0x349050u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950571), (uint8_t)GPR_U32(ctx, 4));
label_349054:
    // 0x349054: 0x32034000  andi        $v1, $s0, 0x4000
    ctx->pc = 0x349054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16384);
label_349058:
    // 0x349058: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x349058u;
    {
        const bool branch_taken_0x349058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x349058) {
            ctx->pc = 0x34905Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349058u;
            // 0x34905c: 0x32032000  andi        $v1, $s0, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x349080u;
            goto label_349080;
        }
    }
    ctx->pc = 0x349060u;
    // 0x349060: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x349060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x349064: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x349064u;
    SET_GPR_U32(ctx, 31, 0x34906Cu);
    ctx->pc = 0x349068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349064u;
    // 0x349068: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x349064u, 0x34906Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34906Cu;
label_34906c:
    // 0x34906c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34906cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x349070: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x349070u;
    SET_GPR_U32(ctx, 31, 0x349078u);
    ctx->pc = 0x349074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349070u;
    // 0x349074: 0x248487c0  addiu       $a0, $a0, -0x7840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x349070u, 0x349078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349078u;
label_349078:
    // 0x349078: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x349078u;
    {
        const bool branch_taken_0x349078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349078u;
        // 0x34907c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349078) {
            ctx->pc = 0x34914Cu;
            goto label_34914c;
        }
    }
    ctx->pc = 0x349080u;
label_349080:
    // 0x349080: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x349080u;
    {
        const bool branch_taken_0x349080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x349080) {
            ctx->pc = 0x349148u;
            goto label_349148;
        }
    }
    ctx->pc = 0x349088u;
    // 0x349088: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x349088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34908c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x34908cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x349090: 0x8c654378  lw          $a1, 0x4378($v1)
    ctx->pc = 0x349090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17272)));
    // 0x349094: 0x50a4001f  beql        $a1, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x349094u;
    {
        const bool branch_taken_0x349094 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x349094) {
            ctx->pc = 0x349098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349094u;
            // 0x349098: 0x24040126  addiu       $a0, $zero, 0x126 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349114u;
            goto label_349114;
        }
    }
    ctx->pc = 0x34909Cu;
    // 0x34909c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x34909cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3490a0: 0x50a3000d  beql        $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3490A0u;
    {
        const bool branch_taken_0x3490a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3490a0) {
            ctx->pc = 0x3490A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3490A0u;
            // 0x3490a4: 0x24040126  addiu       $a0, $zero, 0x126 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3490D8u;
            goto label_3490d8;
        }
    }
    ctx->pc = 0x3490A8u;
    // 0x3490a8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3490a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3490ac: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3490ACu;
    {
        const bool branch_taken_0x3490ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3490ac) {
            ctx->pc = 0x3490B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3490ACu;
            // 0x3490b0: 0x24040126  addiu       $a0, $zero, 0x126 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3490BCu;
            goto label_3490bc;
        }
    }
    ctx->pc = 0x3490B4u;
    // 0x3490b4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x3490B4u;
    {
        const bool branch_taken_0x3490b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3490b4) {
            ctx->pc = 0x349148u;
            goto label_349148;
        }
    }
    ctx->pc = 0x3490BCu;
label_3490bc:
    // 0x3490bc: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x3490BCu;
    SET_GPR_U32(ctx, 31, 0x3490C4u);
    ctx->pc = 0x3490C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3490BCu;
    // 0x3490c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x3490BCu, 0x3490C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3490C4u;
label_3490c4:
    // 0x3490c4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3490c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x3490c8: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x3490C8u;
    SET_GPR_U32(ctx, 31, 0x3490D0u);
    ctx->pc = 0x3490CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3490C8u;
    // 0x3490cc: 0x24849200  addiu       $a0, $a0, -0x6E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x3490C8u, 0x3490D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3490D0u;
label_3490d0:
    // 0x3490d0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3490D0u;
    {
        const bool branch_taken_0x3490d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3490d0) {
            ctx->pc = 0x349148u;
            goto label_349148;
        }
    }
    ctx->pc = 0x3490D8u;
label_3490d8:
    // 0x3490d8: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x3490D8u;
    SET_GPR_U32(ctx, 31, 0x3490E0u);
    ctx->pc = 0x3490DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3490D8u;
    // 0x3490dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x3490D8u, 0x3490E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3490E0u;
label_3490e0:
    // 0x3490e0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x3490e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x3490e4: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x3490e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x3490e8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3490e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3490ec: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3490ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3490f0: 0xa0439780  sb          $v1, -0x6880($v0)
    ctx->pc = 0x3490f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940544), (uint8_t)GPR_U32(ctx, 3));
    // 0x3490f4: 0x2484ec10  addiu       $a0, $a0, -0x13F0
    ctx->pc = 0x3490f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962192));
    // 0x3490f8: 0xc0d0dc0  jal         func_343700
    ctx->pc = 0x3490F8u;
    SET_GPR_U32(ctx, 31, 0x349100u);
    ctx->pc = 0x3490FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3490F8u;
    // 0x3490fc: 0x24a58d80  addiu       $a1, $a1, -0x7280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343700u, 0x3490F8u, 0x349100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349100u;
label_349100:
    // 0x349100: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x349100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x349104: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x349104u;
    SET_GPR_U32(ctx, 31, 0x34910Cu);
    ctx->pc = 0x349108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349104u;
    // 0x349108: 0x24849160  addiu       $a0, $a0, -0x6EA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x349104u, 0x34910Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34910Cu;
label_34910c:
    // 0x34910c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x34910Cu;
    {
        const bool branch_taken_0x34910c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34910c) {
            ctx->pc = 0x349148u;
            goto label_349148;
        }
    }
    ctx->pc = 0x349114u;
label_349114:
    // 0x349114: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x349114u;
    SET_GPR_U32(ctx, 31, 0x34911Cu);
    ctx->pc = 0x349118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349114u;
    // 0x349118: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x349114u, 0x34911Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34911Cu;
label_34911c:
    // 0x34911c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x34911cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x349120: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x349120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x349124: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x349124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x349128: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x349128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x34912c: 0xa0439780  sb          $v1, -0x6880($v0)
    ctx->pc = 0x34912cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940544), (uint8_t)GPR_U32(ctx, 3));
    // 0x349130: 0x2484f1f0  addiu       $a0, $a0, -0xE10
    ctx->pc = 0x349130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963696));
    // 0x349134: 0xc0d0dc0  jal         func_343700
    ctx->pc = 0x349134u;
    SET_GPR_U32(ctx, 31, 0x34913Cu);
    ctx->pc = 0x349138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349134u;
    // 0x349138: 0x24a58d80  addiu       $a1, $a1, -0x7280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343700u, 0x349134u, 0x34913Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34913Cu;
label_34913c:
    // 0x34913c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34913cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x349140: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x349140u;
    SET_GPR_U32(ctx, 31, 0x349148u);
    ctx->pc = 0x349144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349140u;
    // 0x349144: 0x24849160  addiu       $a0, $a0, -0x6EA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x349140u, 0x349148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349148u;
label_349148:
    // 0x349148: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x349148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34914c:
    // 0x34914c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34914cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349150: 0x3e00008  jr          $ra
    ctx->pc = 0x349150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349150u;
        // 0x349154: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349158u;
    // 0x349158: 0x0  nop
    ctx->pc = 0x349158u;
    // NOP
    // 0x34915c: 0x0  nop
    ctx->pc = 0x34915cu;
    // NOP
    // 0x349160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x349164: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x349164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x349168: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x349168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34916c: 0xc055684  jal         func_155A10
    ctx->pc = 0x34916Cu;
    SET_GPR_U32(ctx, 31, 0x349174u);
    ctx->pc = 0x349170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34916Cu;
    // 0x349170: 0xa0409738  sb          $zero, -0x68C8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940472), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x34916Cu, 0x349174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349174u;
label_349174:
    // 0x349174: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x349174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x349178: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x349178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34917c: 0xac40beb0  sw          $zero, -0x4150($v0)
    ctx->pc = 0x34917cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950576), GPR_U32(ctx, 0));
    // 0x349180: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x349180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x349184: 0xac60beb4  sw          $zero, -0x414C($v1)
    ctx->pc = 0x349184u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950580), GPR_U32(ctx, 0));
    // 0x349188: 0xac40beb8  sw          $zero, -0x4148($v0)
    ctx->pc = 0x349188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950584), GPR_U32(ctx, 0));
    // 0x34918c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34918cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x349190: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x349190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x349194: 0x8c45bea0  lw          $a1, -0x4160($v0)
    ctx->pc = 0x349194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950560)));
    // 0x349198: 0xc0558d4  jal         func_156350
    ctx->pc = 0x349198u;
    SET_GPR_U32(ctx, 31, 0x3491A0u);
    ctx->pc = 0x34919Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349198u;
    // 0x34919c: 0x8c64be9c  lw          $a0, -0x4164($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950556)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x349198u, 0x3491A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3491A0u;
label_3491a0:
    // 0x3491a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3491a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3491a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3491A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3491A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3491A4u;
        // 0x3491a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3491A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3491ACu;
    // 0x3491ac: 0x0  nop
    ctx->pc = 0x3491acu;
    // NOP
    // 0x3491b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3491b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3491b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3491b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3491b8: 0xc082918  jal         func_20A460
    ctx->pc = 0x3491B8u;
    SET_GPR_U32(ctx, 31, 0x3491C0u);
    ctx->pc = 0x20A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A460u, 0x3491B8u, 0x3491C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3491C0u;
label_3491c0:
    // 0x3491c0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3491c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3491c4: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3491c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x3491c8: 0x8c444378  lw          $a0, 0x4378($v0)
    ctx->pc = 0x3491c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x3491cc: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x3491ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x3491d0: 0x24a564c0  addiu       $a1, $a1, 0x64C0
    ctx->pc = 0x3491d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25792));
    // 0x3491d4: 0xc083a44  jal         func_20E910
    ctx->pc = 0x3491D4u;
    SET_GPR_U32(ctx, 31, 0x3491DCu);
    ctx->pc = 0x3491D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3491D4u;
    // 0x3491d8: 0x24c66700  addiu       $a2, $a2, 0x6700 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E910u, 0x3491D4u, 0x3491DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3491DCu;
label_3491dc:
    // 0x3491dc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3491dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3491e0: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3491e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x3491e4: 0x248464c0  addiu       $a0, $a0, 0x64C0
    ctx->pc = 0x3491e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25792));
    // 0x3491e8: 0xc0838c4  jal         func_20E310
    ctx->pc = 0x3491E8u;
    SET_GPR_U32(ctx, 31, 0x3491F0u);
    ctx->pc = 0x3491ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3491E8u;
    // 0x3491ec: 0x24a56610  addiu       $a1, $a1, 0x6610 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E310u, 0x3491E8u, 0x3491F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3491F0u;
label_3491f0:
    // 0x3491f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3491f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3491f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3491F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3491F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3491F4u;
        // 0x3491f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3491F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3491FCu;
    // 0x3491fc: 0x0  nop
    ctx->pc = 0x3491fcu;
    // NOP
    // 0x349200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x349204: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x349204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x349208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x349208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34920c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34920cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x349210: 0xac404378  sw          $zero, 0x4378($v0)
    ctx->pc = 0x349210u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 0));
    // 0x349214: 0x248491b0  addiu       $a0, $a0, -0x6E50
    ctx->pc = 0x349214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939056));
    // 0x349218: 0xc082678  jal         func_2099E0
    ctx->pc = 0x349218u;
    SET_GPR_U32(ctx, 31, 0x349220u);
    ctx->pc = 0x34921Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349218u;
    // 0x34921c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x349218u, 0x349220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349220u;
label_349220:
    // 0x349220: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x349220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x349224: 0xc0d0d18  jal         func_343460
    ctx->pc = 0x349224u;
    SET_GPR_U32(ctx, 31, 0x34922Cu);
    ctx->pc = 0x349228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349224u;
    // 0x349228: 0x24849280  addiu       $a0, $a0, -0x6D80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343460u, 0x349224u, 0x34922Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34922Cu;
label_34922c:
    // 0x34922c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34922cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349230: 0x3e00008  jr          $ra
    ctx->pc = 0x349230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349230u;
        // 0x349234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349238u;
    // 0x349238: 0x0  nop
    ctx->pc = 0x349238u;
    // NOP
    // 0x34923c: 0x0  nop
    ctx->pc = 0x34923cu;
    // NOP
    // 0x349240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x349244: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x349244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x349248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x349248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34924c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34924cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x349250: 0x8c43be88  lw          $v1, -0x4178($v0)
    ctx->pc = 0x349250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950536)));
    // 0x349254: 0x248491b0  addiu       $a0, $a0, -0x6E50
    ctx->pc = 0x349254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939056));
    // 0x349258: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x349258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34925c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34925cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x349260: 0xc082678  jal         func_2099E0
    ctx->pc = 0x349260u;
    SET_GPR_U32(ctx, 31, 0x349268u);
    ctx->pc = 0x349264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349260u;
    // 0x349264: 0xac434378  sw          $v1, 0x4378($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x349260u, 0x349268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349268u;
label_349268:
    // 0x349268: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x349268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34926c: 0xc0d0d18  jal         func_343460
    ctx->pc = 0x34926Cu;
    SET_GPR_U32(ctx, 31, 0x349274u);
    ctx->pc = 0x349270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34926Cu;
    // 0x349270: 0x24849280  addiu       $a0, $a0, -0x6D80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343460u, 0x34926Cu, 0x349274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349274u;
label_349274:
    // 0x349274: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x349274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349278: 0x3e00008  jr          $ra
    ctx->pc = 0x349278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349278u;
        // 0x34927c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349280u;
    // 0x349280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x349280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x349284: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x349284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x349288: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x349288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34928c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34928cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x349290: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x349290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349294: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x349294u;
    SET_GPR_U32(ctx, 31, 0x34929Cu);
    ctx->pc = 0x349298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349294u;
    // 0x349298: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x349294u, 0x34929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34929Cu;
label_34929c:
    // 0x34929c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x34929cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3492a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3492a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3492a4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3492a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3492a8: 0x90454378  lbu         $a1, 0x4378($v0)
    ctx->pc = 0x3492a8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x3492ac: 0xc0d0abc  jal         func_342AF0
    ctx->pc = 0x3492ACu;
    SET_GPR_U32(ctx, 31, 0x3492B4u);
    ctx->pc = 0x3492B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3492ACu;
    // 0x3492b0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342AF0u, 0x3492ACu, 0x3492B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3492B4u;
label_3492b4:
    // 0x3492b4: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x3492b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3492b8: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x3492b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3492bc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3492bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3492c0: 0x30a44000  andi        $a0, $a1, 0x4000
    ctx->pc = 0x3492c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
    // 0x3492c4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3492C4u;
    {
        const bool branch_taken_0x3492c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3492C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3492C4u;
        // 0x3492c8: 0xac664378  sw          $a2, 0x4378($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 17272), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3492c4) {
            ctx->pc = 0x3492ECu;
            goto label_3492ec;
        }
    }
    ctx->pc = 0x3492CCu;
    // 0x3492cc: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x3492ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x3492d0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x3492D0u;
    SET_GPR_U32(ctx, 31, 0x3492D8u);
    ctx->pc = 0x3492D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3492D0u;
    // 0x3492d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x3492D0u, 0x3492D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3492D8u;
label_3492d8:
    // 0x3492d8: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3492d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x3492dc: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x3492DCu;
    SET_GPR_U32(ctx, 31, 0x3492E4u);
    ctx->pc = 0x3492E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3492DCu;
    // 0x3492e0: 0x24849390  addiu       $a0, $a0, -0x6C70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x3492DCu, 0x3492E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3492E4u;
label_3492e4:
    // 0x3492e4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x3492E4u;
    {
        const bool branch_taken_0x3492e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3492E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3492E4u;
        // 0x3492e8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3492e4) {
            ctx->pc = 0x349384u;
            goto label_349384;
        }
    }
    ctx->pc = 0x3492ECu;
label_3492ec:
    // 0x3492ec: 0x30a32000  andi        $v1, $a1, 0x2000
    ctx->pc = 0x3492ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8192);
    // 0x3492f0: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x3492F0u;
    {
        const bool branch_taken_0x3492f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3492f0) {
            ctx->pc = 0x349380u;
            goto label_349380;
        }
    }
    ctx->pc = 0x3492F8u;
    // 0x3492f8: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x3492f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x3492fc: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x3492FCu;
    SET_GPR_U32(ctx, 31, 0x349304u);
    ctx->pc = 0x349300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3492FCu;
    // 0x349300: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x3492FCu, 0x349304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349304u;
label_349304:
    // 0x349304: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x349304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x349308: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x349308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34930c: 0x8c644378  lw          $a0, 0x4378($v1)
    ctx->pc = 0x34930cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17272)));
    // 0x349310: 0x10850016  beq         $a0, $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x349310u;
    {
        const bool branch_taken_0x349310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x349310) {
            ctx->pc = 0x34936Cu;
            goto label_34936c;
        }
    }
    ctx->pc = 0x349318u;
    // 0x349318: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x349318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34931c: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x34931Cu;
    {
        const bool branch_taken_0x34931c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34931c) {
            ctx->pc = 0x349350u;
            goto label_349350;
        }
    }
    ctx->pc = 0x349324u;
    // 0x349324: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x349324u;
    {
        const bool branch_taken_0x349324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x349324) {
            ctx->pc = 0x349334u;
            goto label_349334;
        }
    }
    ctx->pc = 0x34932Cu;
    // 0x34932c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x34932Cu;
    {
        const bool branch_taken_0x34932c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34932c) {
            ctx->pc = 0x349380u;
            goto label_349380;
        }
    }
    ctx->pc = 0x349334u;
label_349334:
    // 0x349334: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x349334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x349338: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x349338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34933c: 0x2484a940  addiu       $a0, $a0, -0x56C0
    ctx->pc = 0x34933cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945088));
    // 0x349340: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x349340u;
    SET_GPR_U32(ctx, 31, 0x349348u);
    ctx->pc = 0x349344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349340u;
    // 0x349344: 0xac40be88  sw          $zero, -0x4178($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950536), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x349340u, 0x349348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349348u;
label_349348:
    // 0x349348: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x349348u;
    {
        const bool branch_taken_0x349348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x349348) {
            ctx->pc = 0x349380u;
            goto label_349380;
        }
    }
    ctx->pc = 0x349350u;
label_349350:
    // 0x349350: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x349350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x349354: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x349354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x349358: 0x24849950  addiu       $a0, $a0, -0x66B0
    ctx->pc = 0x349358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941008));
    // 0x34935c: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x34935Cu;
    SET_GPR_U32(ctx, 31, 0x349364u);
    ctx->pc = 0x349360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34935Cu;
    // 0x349360: 0xac43be88  sw          $v1, -0x4178($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950536), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x34935Cu, 0x349364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349364u;
label_349364:
    // 0x349364: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x349364u;
    {
        const bool branch_taken_0x349364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x349364) {
            ctx->pc = 0x349380u;
            goto label_349380;
        }
    }
    ctx->pc = 0x34936Cu;
label_34936c:
    // 0x34936c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34936cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x349370: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x349370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x349374: 0x24849950  addiu       $a0, $a0, -0x66B0
    ctx->pc = 0x349374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941008));
    // 0x349378: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x349378u;
    SET_GPR_U32(ctx, 31, 0x349380u);
    ctx->pc = 0x34937Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349378u;
    // 0x34937c: 0xac45be88  sw          $a1, -0x4178($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950536), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x349378u, 0x349380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349380u;
label_349380:
    // 0x349380: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x349380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_349384:
    // 0x349384: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x349384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349388: 0x3e00008  jr          $ra
    ctx->pc = 0x349388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349388u;
        // 0x34938c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349390u;
    // 0x349390: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x349390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x349394: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x349394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x349398: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x349398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34939c: 0x24848d80  addiu       $a0, $a0, -0x7280
    ctx->pc = 0x34939cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937984));
    // 0x3493a0: 0x8082674  j           func_2099D0
    ctx->pc = 0x3493A0u;
    ctx->pc = 0x3493A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3493A0u;
    // 0x3493a4: 0xac434378  sw          $v1, 0x4378($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    sub_002099D0_0x2099d0(rdram, ctx, runtime); return;
    ctx->pc = 0x3493A8u;
    // 0x3493a8: 0x0  nop
    ctx->pc = 0x3493a8u;
    // NOP
    // 0x3493ac: 0x0  nop
    ctx->pc = 0x3493acu;
    // NOP
    // 0x3493b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3493b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3493b4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3493b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3493b8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3493b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3493bc: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x3493bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3493c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3493c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3493c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3493c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3493c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3493c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3493cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3493ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3493d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3493d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3493d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3493d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3493d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3493d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3493dc: 0x8c444378  lw          $a0, 0x4378($v0)
    ctx->pc = 0x3493dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x3493e0: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x3493e0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3493e4: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3493e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x3493e8: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3493e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x3493ec: 0xa810  mfhi        $s5
    ctx->pc = 0x3493ecu;
    SET_GPR_U64(ctx, 21, ctx->hi);
    // 0x3493f0: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x3493f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x3493f4: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x3493f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3493f8: 0x1010  mfhi        $v0
    ctx->pc = 0x3493f8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3493fc: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x3493fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x349400: 0xc082918  jal         func_20A460
    ctx->pc = 0x349400u;
    SET_GPR_U32(ctx, 31, 0x349408u);
    ctx->pc = 0x349404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349400u;
    // 0x349404: 0x43b021  addu        $s6, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A460u, 0x349400u, 0x349408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349408u;
label_349408:
    // 0x349408: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x349408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x34940c: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x34940cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x349410: 0x24846750  addiu       $a0, $a0, 0x6750
    ctx->pc = 0x349410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26448));
    // 0x349414: 0xc0838c4  jal         func_20E310
    ctx->pc = 0x349414u;
    SET_GPR_U32(ctx, 31, 0x34941Cu);
    ctx->pc = 0x349418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349414u;
    // 0x349418: 0x24a569b0  addiu       $a1, $a1, 0x69B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E310u, 0x349414u, 0x34941Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34941Cu;
label_34941c:
    // 0x34941c: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x34941cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x349420: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x349420u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x349424: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x349424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349428: 0x24a56750  addiu       $a1, $a1, 0x6750
    ctx->pc = 0x349428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26448));
    // 0x34942c: 0xc083a44  jal         func_20E910
    ctx->pc = 0x34942Cu;
    SET_GPR_U32(ctx, 31, 0x349434u);
    ctx->pc = 0x349430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34942Cu;
    // 0x349430: 0x24c66bc0  addiu       $a2, $a2, 0x6BC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E910u, 0x34942Cu, 0x349434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349434u;
label_349434:
    // 0x349434: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x349434u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x349438: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x349438u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
    // 0x34943c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x34943cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x349440: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x349440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349444: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x349444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x349448: 0x24e76750  addiu       $a3, $a3, 0x6750
    ctx->pc = 0x349448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26448));
    // 0x34944c: 0xc0838dc  jal         func_20E370
    ctx->pc = 0x34944Cu;
    SET_GPR_U32(ctx, 31, 0x349454u);
    ctx->pc = 0x349450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34944Cu;
    // 0x349450: 0x25086af0  addiu       $t0, $t0, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E370u, 0x34944Cu, 0x349454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349454u;
label_349454:
    // 0x349454: 0x3c12009c  lui         $s2, 0x9C
    ctx->pc = 0x349454u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)156 << 16));
    // 0x349458: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x349458u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34945c: 0x2652ef90  addiu       $s2, $s2, -0x1070
    ctx->pc = 0x34945cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294963088));
    // 0x349460: 0x24110078  addiu       $s1, $zero, 0x78
    ctx->pc = 0x349460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x349464: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x349464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_349468:
    // 0x349468: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x349468u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34946c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x34946cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x349470: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x349470u;
    {
        const bool branch_taken_0x349470 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x349470) {
            ctx->pc = 0x3494D0u;
            goto label_3494d0;
        }
    }
    ctx->pc = 0x349478u;
    // 0x349478: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x349478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_34947c:
    // 0x34947c: 0xc082998  jal         func_20A660
    ctx->pc = 0x34947Cu;
    SET_GPR_U32(ctx, 31, 0x349484u);
    ctx->pc = 0x349480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34947Cu;
    // 0x349480: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A660u, 0x34947Cu, 0x349484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349484u;
label_349484:
    // 0x349484: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x349484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x349488: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x349488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34948c: 0xc083768  jal         func_20DDA0
    ctx->pc = 0x34948Cu;
    SET_GPR_U32(ctx, 31, 0x349494u);
    ctx->pc = 0x349490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34948Cu;
    // 0x349490: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DDA0u, 0x34948Cu, 0x349494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349494u;
label_349494:
    // 0x349494: 0x92440020  lbu         $a0, 0x20($s2)
    ctx->pc = 0x349494u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x349498: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x349498u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x34949c: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x34949cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
    // 0x3494a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3494a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3494a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3494a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3494a8: 0x24e76750  addiu       $a3, $a3, 0x6750
    ctx->pc = 0x3494a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26448));
    // 0x3494ac: 0xc083938  jal         func_20E4E0
    ctx->pc = 0x3494ACu;
    SET_GPR_U32(ctx, 31, 0x3494B4u);
    ctx->pc = 0x3494B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3494ACu;
    // 0x3494b0: 0x25086d70  addiu       $t0, $t0, 0x6D70 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E4E0u, 0x3494ACu, 0x3494B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3494B4u;
label_3494b4:
    // 0x3494b4: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x3494b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x3494b8: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x3494b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x3494bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3494bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3494c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3494c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3494c4: 0x24c66750  addiu       $a2, $a2, 0x6750
    ctx->pc = 0x3494c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26448));
    // 0x3494c8: 0xc083910  jal         func_20E440
    ctx->pc = 0x3494C8u;
    SET_GPR_U32(ctx, 31, 0x3494D0u);
    ctx->pc = 0x3494CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3494C8u;
    // 0x3494cc: 0x24e76da0  addiu       $a3, $a3, 0x6DA0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E440u, 0x3494C8u, 0x3494D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3494D0u;
label_3494d0:
    // 0x3494d0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3494d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3494d4: 0x2a63000a  slti        $v1, $s3, 0xA
    ctx->pc = 0x3494d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x3494d8: 0x26520022  addiu       $s2, $s2, 0x22
    ctx->pc = 0x3494d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 34));
    // 0x3494dc: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x3494dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x3494e0: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x3494E0u;
    {
        const bool branch_taken_0x3494e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3494E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3494E0u;
        // 0x3494e4: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3494e0) {
            ctx->pc = 0x349468u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_349468;
        }
    }
    ctx->pc = 0x3494E8u;
    // 0x3494e8: 0x3c14009c  lui         $s4, 0x9C
    ctx->pc = 0x3494e8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)156 << 16));
    // 0x3494ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3494ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3494f0: 0x2694ef90  addiu       $s4, $s4, -0x1070
    ctx->pc = 0x3494f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294963088));
    // 0x3494f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3494f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3494f8: 0x24120078  addiu       $s2, $zero, 0x78
    ctx->pc = 0x3494f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3494fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3494fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_349500:
    // 0x349500: 0x96840154  lhu         $a0, 0x154($s4)
    ctx->pc = 0x349500u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 340)));
    // 0x349504: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x349504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x349508: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x349508u;
    {
        const bool branch_taken_0x349508 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x349508) {
            ctx->pc = 0x349578u;
            goto label_349578;
        }
    }
    ctx->pc = 0x349510u;
    // 0x349510: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x349510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x349514: 0xc082998  jal         func_20A660
    ctx->pc = 0x349514u;
    SET_GPR_U32(ctx, 31, 0x34951Cu);
    ctx->pc = 0x349518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349514u;
    // 0x349518: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A660u, 0x349514u, 0x34951Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34951Cu;
label_34951c:
    // 0x34951c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x34951cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x349520: 0x26630154  addiu       $v1, $s3, 0x154
    ctx->pc = 0x349520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 340));
    // 0x349524: 0x2442ef90  addiu       $v0, $v0, -0x1070
    ctx->pc = 0x349524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963088));
    // 0x349528: 0x24040150  addiu       $a0, $zero, 0x150
    ctx->pc = 0x349528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x34952c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x34952cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x349530: 0xc083768  jal         func_20DDA0
    ctx->pc = 0x349530u;
    SET_GPR_U32(ctx, 31, 0x349538u);
    ctx->pc = 0x349534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349530u;
    // 0x349534: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DDA0u, 0x349530u, 0x349538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349538u;
label_349538:
    // 0x349538: 0x92840174  lbu         $a0, 0x174($s4)
    ctx->pc = 0x349538u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 372)));
    // 0x34953c: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x34953cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x349540: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x349540u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
    // 0x349544: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x349544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349548: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x349548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34954c: 0x24e76750  addiu       $a3, $a3, 0x6750
    ctx->pc = 0x34954cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26448));
    // 0x349550: 0xc083938  jal         func_20E4E0
    ctx->pc = 0x349550u;
    SET_GPR_U32(ctx, 31, 0x349558u);
    ctx->pc = 0x349554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349550u;
    // 0x349554: 0x25086dc0  addiu       $t0, $t0, 0x6DC0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E4E0u, 0x349550u, 0x349558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349558u;
label_349558:
    // 0x349558: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x349558u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x34955c: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x34955cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x349560: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x349560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349564: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x349564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349568: 0x24c66750  addiu       $a2, $a2, 0x6750
    ctx->pc = 0x349568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26448));
    // 0x34956c: 0xc083910  jal         func_20E440
    ctx->pc = 0x34956Cu;
    SET_GPR_U32(ctx, 31, 0x349574u);
    ctx->pc = 0x349570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34956Cu;
    // 0x349570: 0x24e76df0  addiu       $a3, $a3, 0x6DF0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E440u, 0x34956Cu, 0x349574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349574u;
label_349574:
    // 0x349574: 0x0  nop
    ctx->pc = 0x349574u;
    // NOP
label_349578:
    // 0x349578: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x349578u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x34957c: 0x2a03000a  slti        $v1, $s0, 0xA
    ctx->pc = 0x34957cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x349580: 0x26940022  addiu       $s4, $s4, 0x22
    ctx->pc = 0x349580u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 34));
    // 0x349584: 0x26730022  addiu       $s3, $s3, 0x22
    ctx->pc = 0x349584u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 34));
    // 0x349588: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x349588u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x34958c: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x34958Cu;
    {
        const bool branch_taken_0x34958c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x349590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34958Cu;
        // 0x349590: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34958c) {
            ctx->pc = 0x349500u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_349500;
        }
    }
    ctx->pc = 0x349594u;
    // 0x349594: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x349594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x349598: 0x8c634378  lw          $v1, 0x4378($v1)
    ctx->pc = 0x349598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17272)));
    // 0x34959c: 0x28630014  slti        $v1, $v1, 0x14
    ctx->pc = 0x34959cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x3495a0: 0x5460002b  bnel        $v1, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x3495A0u;
    {
        const bool branch_taken_0x3495a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3495a0) {
            ctx->pc = 0x3495A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3495A0u;
            // 0x3495a4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349650u;
            goto label_349650;
        }
    }
    ctx->pc = 0x3495A8u;
    // 0x3495a8: 0x2aa1000a  slti        $at, $s5, 0xA
    ctx->pc = 0x3495a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x3495ac: 0x50200015  beql        $at, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x3495ACu;
    {
        const bool branch_taken_0x3495ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3495ac) {
            ctx->pc = 0x3495B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3495ACu;
            // 0x3495b0: 0x26a3fff6  addiu       $v1, $s5, -0xA (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967286));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349604u;
            goto label_349604;
        }
    }
    ctx->pc = 0x3495B4u;
    // 0x3495b4: 0x151040  sll         $v0, $s5, 1
    ctx->pc = 0x3495b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x3495b8: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x3495b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x3495bc: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x3495bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x3495c0: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x3495c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x3495c4: 0x280c0  sll         $s0, $v0, 3
    ctx->pc = 0x3495c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3495c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3495c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3495cc: 0x24c66750  addiu       $a2, $a2, 0x6750
    ctx->pc = 0x3495ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26448));
    // 0x3495d0: 0x24e76e10  addiu       $a3, $a3, 0x6E10
    ctx->pc = 0x3495d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28176));
    // 0x3495d4: 0xc083910  jal         func_20E440
    ctx->pc = 0x3495D4u;
    SET_GPR_U32(ctx, 31, 0x3495DCu);
    ctx->pc = 0x3495D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3495D4u;
    // 0x3495d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E440u, 0x3495D4u, 0x3495DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3495DCu;
label_3495dc:
    // 0x3495dc: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x3495dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x3495e0: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x3495e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
    // 0x3495e4: 0x26c4ffff  addiu       $a0, $s6, -0x1
    ctx->pc = 0x3495e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x3495e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3495e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3495ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3495ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3495f0: 0x24e76750  addiu       $a3, $a3, 0x6750
    ctx->pc = 0x3495f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26448));
    // 0x3495f4: 0xc083938  jal         func_20E4E0
    ctx->pc = 0x3495F4u;
    SET_GPR_U32(ctx, 31, 0x3495FCu);
    ctx->pc = 0x3495F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3495F4u;
    // 0x3495f8: 0x25086e90  addiu       $t0, $t0, 0x6E90 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E4E0u, 0x3495F4u, 0x3495FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3495FCu;
label_3495fc:
    // 0x3495fc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3495FCu;
    {
        const bool branch_taken_0x3495fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3495fc) {
            ctx->pc = 0x34964Cu;
            goto label_34964c;
        }
    }
    ctx->pc = 0x349604u;
label_349604:
    // 0x349604: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x349604u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x349608: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x349608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x34960c: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x34960cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x349610: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x349610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x349614: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x349614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349618: 0x280c0  sll         $s0, $v0, 3
    ctx->pc = 0x349618u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x34961c: 0x24c66750  addiu       $a2, $a2, 0x6750
    ctx->pc = 0x34961cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26448));
    // 0x349620: 0x24e76e50  addiu       $a3, $a3, 0x6E50
    ctx->pc = 0x349620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28240));
    // 0x349624: 0xc083910  jal         func_20E440
    ctx->pc = 0x349624u;
    SET_GPR_U32(ctx, 31, 0x34962Cu);
    ctx->pc = 0x349628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349624u;
    // 0x349628: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E440u, 0x349624u, 0x34962Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34962Cu;
label_34962c:
    // 0x34962c: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x34962cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x349630: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x349630u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
    // 0x349634: 0x26c4ffff  addiu       $a0, $s6, -0x1
    ctx->pc = 0x349634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x349638: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x349638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34963c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34963cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349640: 0x24e76750  addiu       $a3, $a3, 0x6750
    ctx->pc = 0x349640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26448));
    // 0x349644: 0xc083938  jal         func_20E4E0
    ctx->pc = 0x349644u;
    SET_GPR_U32(ctx, 31, 0x34964Cu);
    ctx->pc = 0x349648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349644u;
    // 0x349648: 0x25086ed0  addiu       $t0, $t0, 0x6ED0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E4E0u, 0x349644u, 0x34964Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34964Cu;
label_34964c:
    // 0x34964c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x34964cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_349650:
    // 0x349650: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x349650u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x349654: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x349654u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x349658: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x349658u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34965c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34965cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x349660: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x349660u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x349664: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x349664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349668: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x349668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34966c: 0x3e00008  jr          $ra
    ctx->pc = 0x34966Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34966Cu;
        // 0x349670: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34966Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349674u;
    // 0x349674: 0x0  nop
    ctx->pc = 0x349674u;
    // NOP
    // 0x349678: 0x0  nop
    ctx->pc = 0x349678u;
    // NOP
    // 0x34967c: 0x0  nop
    ctx->pc = 0x34967cu;
    // NOP
    // 0x349680: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x349680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x349684: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x349684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x349688: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x349688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x34968c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x34968cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x349690: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x349690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x349694: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x349694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x349698: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x349698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x34969c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34969cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3496a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3496a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3496a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3496a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3496a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3496a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3496ac: 0x8c444378  lw          $a0, 0x4378($v0)
    ctx->pc = 0x3496acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x3496b0: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x3496b0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3496b4: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3496b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x3496b8: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3496b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x3496bc: 0xa810  mfhi        $s5
    ctx->pc = 0x3496bcu;
    SET_GPR_U64(ctx, 21, ctx->hi);
    // 0x3496c0: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x3496c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x3496c4: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x3496c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3496c8: 0x1010  mfhi        $v0
    ctx->pc = 0x3496c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3496cc: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x3496ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x3496d0: 0xc082918  jal         func_20A460
    ctx->pc = 0x3496D0u;
    SET_GPR_U32(ctx, 31, 0x3496D8u);
    ctx->pc = 0x3496D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3496D0u;
    // 0x3496d4: 0x43b021  addu        $s6, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A460u, 0x3496D0u, 0x3496D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3496D8u;
label_3496d8:
    // 0x3496d8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3496d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3496dc: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3496dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x3496e0: 0x24846750  addiu       $a0, $a0, 0x6750
    ctx->pc = 0x3496e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26448));
    // 0x3496e4: 0xc0838c4  jal         func_20E310
    ctx->pc = 0x3496E4u;
    SET_GPR_U32(ctx, 31, 0x3496ECu);
    ctx->pc = 0x3496E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3496E4u;
    // 0x3496e8: 0x24a56a50  addiu       $a1, $a1, 0x6A50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E310u, 0x3496E4u, 0x3496ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3496ECu;
label_3496ec:
    // 0x3496ec: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3496ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x3496f0: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x3496f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x3496f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3496f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3496f8: 0x24a56750  addiu       $a1, $a1, 0x6750
    ctx->pc = 0x3496f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26448));
    // 0x3496fc: 0xc083a44  jal         func_20E910
    ctx->pc = 0x3496FCu;
    SET_GPR_U32(ctx, 31, 0x349704u);
    ctx->pc = 0x349700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3496FCu;
    // 0x349700: 0x24c66bc0  addiu       $a2, $a2, 0x6BC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E910u, 0x3496FCu, 0x349704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349704u;
label_349704:
    // 0x349704: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x349704u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x349708: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x349708u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
    // 0x34970c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x34970cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x349710: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x349710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349714: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x349714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x349718: 0x24e76750  addiu       $a3, $a3, 0x6750
    ctx->pc = 0x349718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26448));
    // 0x34971c: 0xc0838dc  jal         func_20E370
    ctx->pc = 0x34971Cu;
    SET_GPR_U32(ctx, 31, 0x349724u);
    ctx->pc = 0x349720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34971Cu;
    // 0x349720: 0x25086af0  addiu       $t0, $t0, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E370u, 0x34971Cu, 0x349724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349724u;
label_349724:
    // 0x349724: 0x3c12009c  lui         $s2, 0x9C
    ctx->pc = 0x349724u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)156 << 16));
    // 0x349728: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x349728u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34972c: 0x2652ece0  addiu       $s2, $s2, -0x1320
    ctx->pc = 0x34972cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962400));
    // 0x349730: 0x24110078  addiu       $s1, $zero, 0x78
    ctx->pc = 0x349730u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x349734: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x349734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_349738:
    // 0x349738: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x349738u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34973c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x34973cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x349740: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x349740u;
    {
        const bool branch_taken_0x349740 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x349740) {
            ctx->pc = 0x3497A0u;
            goto label_3497a0;
        }
    }
    ctx->pc = 0x349748u;
    // 0x349748: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x349748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34974c: 0xc082998  jal         func_20A660
    ctx->pc = 0x34974Cu;
    SET_GPR_U32(ctx, 31, 0x349754u);
    ctx->pc = 0x349750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34974Cu;
    // 0x349750: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A660u, 0x34974Cu, 0x349754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349754u;
label_349754:
    // 0x349754: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x349754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x349758: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x349758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34975c: 0xc083768  jal         func_20DDA0
    ctx->pc = 0x34975Cu;
    SET_GPR_U32(ctx, 31, 0x349764u);
    ctx->pc = 0x349760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34975Cu;
    // 0x349760: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DDA0u, 0x34975Cu, 0x349764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349764u;
label_349764:
    // 0x349764: 0x92440020  lbu         $a0, 0x20($s2)
    ctx->pc = 0x349764u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x349768: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x349768u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x34976c: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x34976cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
    // 0x349770: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x349770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349774: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x349774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349778: 0x24e76750  addiu       $a3, $a3, 0x6750
    ctx->pc = 0x349778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26448));
    // 0x34977c: 0xc083938  jal         func_20E4E0
    ctx->pc = 0x34977Cu;
    SET_GPR_U32(ctx, 31, 0x349784u);
    ctx->pc = 0x349780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34977Cu;
    // 0x349780: 0x25086d70  addiu       $t0, $t0, 0x6D70 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E4E0u, 0x34977Cu, 0x349784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349784u;
label_349784:
    // 0x349784: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x349784u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x349788: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x349788u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x34978c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x34978cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349790: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x349790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349794: 0x24c66750  addiu       $a2, $a2, 0x6750
    ctx->pc = 0x349794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26448));
    // 0x349798: 0xc083910  jal         func_20E440
    ctx->pc = 0x349798u;
    SET_GPR_U32(ctx, 31, 0x3497A0u);
    ctx->pc = 0x34979Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349798u;
    // 0x34979c: 0x24e76da0  addiu       $a3, $a3, 0x6DA0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E440u, 0x349798u, 0x3497A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3497A0u;
label_3497a0:
    // 0x3497a0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3497a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3497a4: 0x2a63000a  slti        $v1, $s3, 0xA
    ctx->pc = 0x3497a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x3497a8: 0x26520022  addiu       $s2, $s2, 0x22
    ctx->pc = 0x3497a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 34));
    // 0x3497ac: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x3497acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x3497b0: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x3497B0u;
    {
        const bool branch_taken_0x3497b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3497B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3497B0u;
        // 0x3497b4: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3497b0) {
            ctx->pc = 0x349738u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_349738;
        }
    }
    ctx->pc = 0x3497B8u;
    // 0x3497b8: 0x3c14009c  lui         $s4, 0x9C
    ctx->pc = 0x3497b8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)156 << 16));
    // 0x3497bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3497bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3497c0: 0x2694ece0  addiu       $s4, $s4, -0x1320
    ctx->pc = 0x3497c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962400));
    // 0x3497c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3497c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3497c8: 0x24120078  addiu       $s2, $zero, 0x78
    ctx->pc = 0x3497c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3497cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3497ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3497d0:
    // 0x3497d0: 0x96840154  lhu         $a0, 0x154($s4)
    ctx->pc = 0x3497d0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 340)));
    // 0x3497d4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3497d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3497d8: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3497D8u;
    {
        const bool branch_taken_0x3497d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3497d8) {
            ctx->pc = 0x349848u;
            goto label_349848;
        }
    }
    ctx->pc = 0x3497E0u;
    // 0x3497e0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3497e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3497e4: 0xc082998  jal         func_20A660
    ctx->pc = 0x3497E4u;
    SET_GPR_U32(ctx, 31, 0x3497ECu);
    ctx->pc = 0x3497E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3497E4u;
    // 0x3497e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A660u, 0x3497E4u, 0x3497ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3497ECu;
label_3497ec:
    // 0x3497ec: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3497ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3497f0: 0x26630154  addiu       $v1, $s3, 0x154
    ctx->pc = 0x3497f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 340));
    // 0x3497f4: 0x2442ece0  addiu       $v0, $v0, -0x1320
    ctx->pc = 0x3497f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962400));
    // 0x3497f8: 0x24040150  addiu       $a0, $zero, 0x150
    ctx->pc = 0x3497f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x3497fc: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x3497fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x349800: 0xc083768  jal         func_20DDA0
    ctx->pc = 0x349800u;
    SET_GPR_U32(ctx, 31, 0x349808u);
    ctx->pc = 0x349804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349800u;
    // 0x349804: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DDA0u, 0x349800u, 0x349808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349808u;
label_349808:
    // 0x349808: 0x92840174  lbu         $a0, 0x174($s4)
    ctx->pc = 0x349808u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 372)));
    // 0x34980c: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x34980cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x349810: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x349810u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
    // 0x349814: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x349814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349818: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x349818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34981c: 0x24e76750  addiu       $a3, $a3, 0x6750
    ctx->pc = 0x34981cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26448));
    // 0x349820: 0xc083938  jal         func_20E4E0
    ctx->pc = 0x349820u;
    SET_GPR_U32(ctx, 31, 0x349828u);
    ctx->pc = 0x349824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349820u;
    // 0x349824: 0x25086dc0  addiu       $t0, $t0, 0x6DC0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E4E0u, 0x349820u, 0x349828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349828u;
label_349828:
    // 0x349828: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x349828u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x34982c: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x34982cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x349830: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x349830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349834: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x349834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349838: 0x24c66750  addiu       $a2, $a2, 0x6750
    ctx->pc = 0x349838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26448));
    // 0x34983c: 0xc083910  jal         func_20E440
    ctx->pc = 0x34983Cu;
    SET_GPR_U32(ctx, 31, 0x349844u);
    ctx->pc = 0x349840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34983Cu;
    // 0x349840: 0x24e76df0  addiu       $a3, $a3, 0x6DF0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E440u, 0x34983Cu, 0x349844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349844u;
label_349844:
    // 0x349844: 0x0  nop
    ctx->pc = 0x349844u;
    // NOP
label_349848:
    // 0x349848: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x349848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x34984c: 0x2a03000a  slti        $v1, $s0, 0xA
    ctx->pc = 0x34984cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x349850: 0x26940022  addiu       $s4, $s4, 0x22
    ctx->pc = 0x349850u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 34));
    // 0x349854: 0x26730022  addiu       $s3, $s3, 0x22
    ctx->pc = 0x349854u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 34));
    // 0x349858: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x349858u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x34985c: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x34985Cu;
    {
        const bool branch_taken_0x34985c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x349860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34985Cu;
        // 0x349860: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34985c) {
            ctx->pc = 0x3497D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3497d0;
        }
    }
    ctx->pc = 0x349864u;
    // 0x349864: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x349864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x349868: 0x8c634378  lw          $v1, 0x4378($v1)
    ctx->pc = 0x349868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17272)));
    // 0x34986c: 0x28630014  slti        $v1, $v1, 0x14
    ctx->pc = 0x34986cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x349870: 0x5460002b  bnel        $v1, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x349870u;
    {
        const bool branch_taken_0x349870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x349870) {
            ctx->pc = 0x349874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349870u;
            // 0x349874: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349920u;
            goto label_349920;
        }
    }
    ctx->pc = 0x349878u;
    // 0x349878: 0x2aa1000a  slti        $at, $s5, 0xA
    ctx->pc = 0x349878u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x34987c: 0x50200015  beql        $at, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x34987Cu;
    {
        const bool branch_taken_0x34987c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34987c) {
            ctx->pc = 0x349880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34987Cu;
            // 0x349880: 0x26a3fff6  addiu       $v1, $s5, -0xA (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967286));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3498D4u;
            goto label_3498d4;
        }
    }
    ctx->pc = 0x349884u;
    // 0x349884: 0x151040  sll         $v0, $s5, 1
    ctx->pc = 0x349884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x349888: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x349888u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x34988c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x34988cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x349890: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x349890u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x349894: 0x280c0  sll         $s0, $v0, 3
    ctx->pc = 0x349894u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x349898: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x349898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34989c: 0x24c66750  addiu       $a2, $a2, 0x6750
    ctx->pc = 0x34989cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26448));
    // 0x3498a0: 0x24e76e10  addiu       $a3, $a3, 0x6E10
    ctx->pc = 0x3498a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28176));
    // 0x3498a4: 0xc083910  jal         func_20E440
    ctx->pc = 0x3498A4u;
    SET_GPR_U32(ctx, 31, 0x3498ACu);
    ctx->pc = 0x3498A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3498A4u;
    // 0x3498a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E440u, 0x3498A4u, 0x3498ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3498ACu;
label_3498ac:
    // 0x3498ac: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x3498acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x3498b0: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x3498b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
    // 0x3498b4: 0x26c4ffff  addiu       $a0, $s6, -0x1
    ctx->pc = 0x3498b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x3498b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3498b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3498bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3498bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3498c0: 0x24e76750  addiu       $a3, $a3, 0x6750
    ctx->pc = 0x3498c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26448));
    // 0x3498c4: 0xc083938  jal         func_20E4E0
    ctx->pc = 0x3498C4u;
    SET_GPR_U32(ctx, 31, 0x3498CCu);
    ctx->pc = 0x3498C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3498C4u;
    // 0x3498c8: 0x25086e90  addiu       $t0, $t0, 0x6E90 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E4E0u, 0x3498C4u, 0x3498CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3498CCu;
label_3498cc:
    // 0x3498cc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3498CCu;
    {
        const bool branch_taken_0x3498cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3498cc) {
            ctx->pc = 0x34991Cu;
            goto label_34991c;
        }
    }
    ctx->pc = 0x3498D4u;
label_3498d4:
    // 0x3498d4: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x3498d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x3498d8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3498d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3498dc: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x3498dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x3498e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3498e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3498e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3498e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3498e8: 0x280c0  sll         $s0, $v0, 3
    ctx->pc = 0x3498e8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3498ec: 0x24c66750  addiu       $a2, $a2, 0x6750
    ctx->pc = 0x3498ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26448));
    // 0x3498f0: 0x24e76e50  addiu       $a3, $a3, 0x6E50
    ctx->pc = 0x3498f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28240));
    // 0x3498f4: 0xc083910  jal         func_20E440
    ctx->pc = 0x3498F4u;
    SET_GPR_U32(ctx, 31, 0x3498FCu);
    ctx->pc = 0x3498F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3498F4u;
    // 0x3498f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E440u, 0x3498F4u, 0x3498FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3498FCu;
label_3498fc:
    // 0x3498fc: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x3498fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x349900: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x349900u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
    // 0x349904: 0x26c4ffff  addiu       $a0, $s6, -0x1
    ctx->pc = 0x349904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x349908: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x349908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34990c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34990cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349910: 0x24e76750  addiu       $a3, $a3, 0x6750
    ctx->pc = 0x349910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26448));
    // 0x349914: 0xc083938  jal         func_20E4E0
    ctx->pc = 0x349914u;
    SET_GPR_U32(ctx, 31, 0x34991Cu);
    ctx->pc = 0x349918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349914u;
    // 0x349918: 0x25086ed0  addiu       $t0, $t0, 0x6ED0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E4E0u, 0x349914u, 0x34991Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34991Cu;
label_34991c:
    // 0x34991c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x34991cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_349920:
    // 0x349920: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x349920u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x349924: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x349924u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x349928: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x349928u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34992c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34992cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x349930: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x349930u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x349934: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x349934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349938: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x349938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34993c: 0x3e00008  jr          $ra
    ctx->pc = 0x34993Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34993Cu;
        // 0x349940: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34993Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349944u;
    // 0x349944: 0x0  nop
    ctx->pc = 0x349944u;
    // NOP
    // 0x349948: 0x0  nop
    ctx->pc = 0x349948u;
    // NOP
    // 0x34994c: 0x0  nop
    ctx->pc = 0x34994cu;
    // NOP
    // 0x349950: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x349950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x349954: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x349954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x349958: 0xac404378  sw          $zero, 0x4378($v0)
    ctx->pc = 0x349958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 0));
    // 0x34995c: 0x8082674  j           func_2099D0
    ctx->pc = 0x34995Cu;
    ctx->pc = 0x349960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34995Cu;
    // 0x349960: 0x24849970  addiu       $a0, $a0, -0x6690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    sub_002099D0_0x2099d0(rdram, ctx, runtime); return;
    ctx->pc = 0x349964u;
    // 0x349964: 0x0  nop
    ctx->pc = 0x349964u;
    // NOP
    // 0x349968: 0x0  nop
    ctx->pc = 0x349968u;
    // NOP
    // 0x34996c: 0x0  nop
    ctx->pc = 0x34996cu;
    // NOP
label_349970:
    // 0x349970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x349974: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x349974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x349978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x349978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34997c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34997cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349980: 0x8c42be88  lw          $v0, -0x4178($v0)
    ctx->pc = 0x349980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950536)));
    // 0x349984: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x349984u;
    {
        const bool branch_taken_0x349984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x349984) {
            ctx->pc = 0x3499A0u;
            goto label_3499a0;
        }
    }
    ctx->pc = 0x34998Cu;
    // 0x34998c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34998cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x349990: 0xc082678  jal         func_2099E0
    ctx->pc = 0x349990u;
    SET_GPR_U32(ctx, 31, 0x349998u);
    ctx->pc = 0x349994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349990u;
    // 0x349994: 0x248493b0  addiu       $a0, $a0, -0x6C50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x349990u, 0x349998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349998u;
label_349998:
    // 0x349998: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x349998u;
    {
        const bool branch_taken_0x349998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x349998) {
            ctx->pc = 0x3499ACu;
            goto label_3499ac;
        }
    }
    ctx->pc = 0x3499A0u;
label_3499a0:
    // 0x3499a0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3499a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x3499a4: 0xc082678  jal         func_2099E0
    ctx->pc = 0x3499A4u;
    SET_GPR_U32(ctx, 31, 0x3499ACu);
    ctx->pc = 0x3499A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3499A4u;
    // 0x3499a8: 0x24849680  addiu       $a0, $a0, -0x6980 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x3499A4u, 0x3499ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3499ACu;
label_3499ac:
    // 0x3499ac: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3499acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x3499b0: 0xc0d0d18  jal         func_343460
    ctx->pc = 0x3499B0u;
    SET_GPR_U32(ctx, 31, 0x3499B8u);
    ctx->pc = 0x3499B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3499B0u;
    // 0x3499b4: 0x24849a30  addiu       $a0, $a0, -0x65D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343460u, 0x3499B0u, 0x3499B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3499B8u;
label_3499b8:
    // 0x3499b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3499b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3499bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3499BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3499C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3499BCu;
        // 0x3499c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3499BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3499C4u;
    // 0x3499c4: 0x0  nop
    ctx->pc = 0x3499c4u;
    // NOP
    // 0x3499c8: 0x0  nop
    ctx->pc = 0x3499c8u;
    // NOP
    // 0x3499cc: 0x0  nop
    ctx->pc = 0x3499ccu;
    // NOP
    // 0x3499d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3499d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3499d4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3499d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3499d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3499d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3499dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3499dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3499e0: 0x8c42be88  lw          $v0, -0x4178($v0)
    ctx->pc = 0x3499e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950536)));
    // 0x3499e4: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3499E4u;
    {
        const bool branch_taken_0x3499e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x3499e4) {
            ctx->pc = 0x349A00u;
            goto label_349a00;
        }
    }
    ctx->pc = 0x3499ECu;
    // 0x3499ec: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3499ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x3499f0: 0xc082678  jal         func_2099E0
    ctx->pc = 0x3499F0u;
    SET_GPR_U32(ctx, 31, 0x3499F8u);
    ctx->pc = 0x3499F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3499F0u;
    // 0x3499f4: 0x248493b0  addiu       $a0, $a0, -0x6C50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x3499F0u, 0x3499F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3499F8u;
label_3499f8:
    // 0x3499f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3499F8u;
    {
        const bool branch_taken_0x3499f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3499f8) {
            ctx->pc = 0x349A0Cu;
            goto label_349a0c;
        }
    }
    ctx->pc = 0x349A00u;
label_349a00:
    // 0x349a00: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x349a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x349a04: 0xc082678  jal         func_2099E0
    ctx->pc = 0x349A04u;
    SET_GPR_U32(ctx, 31, 0x349A0Cu);
    ctx->pc = 0x349A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349A04u;
    // 0x349a08: 0x24849680  addiu       $a0, $a0, -0x6980 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x349A04u, 0x349A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349A0Cu;
label_349a0c:
    // 0x349a0c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x349a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x349a10: 0xc0d0d18  jal         func_343460
    ctx->pc = 0x349A10u;
    SET_GPR_U32(ctx, 31, 0x349A18u);
    ctx->pc = 0x349A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349A10u;
    // 0x349a14: 0x24849ba0  addiu       $a0, $a0, -0x6460 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343460u, 0x349A10u, 0x349A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349A18u;
label_349a18:
    // 0x349a18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x349a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x349A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349A1Cu;
        // 0x349a20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349A24u;
    // 0x349a24: 0x0  nop
    ctx->pc = 0x349a24u;
    // NOP
    // 0x349a28: 0x0  nop
    ctx->pc = 0x349a28u;
    // NOP
    // 0x349a2c: 0x0  nop
    ctx->pc = 0x349a2cu;
    // NOP
    // 0x349a30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x349a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x349a34: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x349a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x349a38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x349a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x349a3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x349a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x349a40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x349a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x349a44: 0x8c43be88  lw          $v1, -0x4178($v0)
    ctx->pc = 0x349a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950536)));
    // 0x349a48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x349a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349a4c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x349A4Cu;
    {
        const bool branch_taken_0x349a4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x349a4c) {
            ctx->pc = 0x349A60u;
            goto label_349a60;
        }
    }
    ctx->pc = 0x349A54u;
    // 0x349a54: 0x3c10009c  lui         $s0, 0x9C
    ctx->pc = 0x349a54u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)156 << 16));
    // 0x349a58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x349A58u;
    {
        const bool branch_taken_0x349a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349A58u;
        // 0x349a5c: 0x2610ef90  addiu       $s0, $s0, -0x1070 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349a58) {
            ctx->pc = 0x349A68u;
            goto label_349a68;
        }
    }
    ctx->pc = 0x349A60u;
label_349a60:
    // 0x349a60: 0x3c10009c  lui         $s0, 0x9C
    ctx->pc = 0x349a60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)156 << 16));
    // 0x349a64: 0x2610ece0  addiu       $s0, $s0, -0x1320
    ctx->pc = 0x349a64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962400));
label_349a68:
    // 0x349a68: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x349a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x349a6c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x349a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x349a70: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x349A70u;
    SET_GPR_U32(ctx, 31, 0x349A78u);
    ctx->pc = 0x349A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349A70u;
    // 0x349a74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x349A70u, 0x349A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349A78u;
label_349a78:
    // 0x349a78: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x349a78u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x349a7c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x349a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x349a80: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x349a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x349a84: 0x24846f10  addiu       $a0, $a0, 0x6F10
    ctx->pc = 0x349a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28432));
    // 0x349a88: 0x90454378  lbu         $a1, 0x4378($v0)
    ctx->pc = 0x349a88u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x349a8c: 0xc0d0a90  jal         func_342A40
    ctx->pc = 0x349A8Cu;
    SET_GPR_U32(ctx, 31, 0x349A94u);
    ctx->pc = 0x349A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349A8Cu;
    // 0x349a90: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342A40u, 0x349A8Cu, 0x349A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349A94u;
label_349a94:
    // 0x349a94: 0x3225ffff  andi        $a1, $s1, 0xFFFF
    ctx->pc = 0x349a94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x349a98: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x349a98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x349a9c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x349a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x349aa0: 0x30a42000  andi        $a0, $a1, 0x2000
    ctx->pc = 0x349aa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8192);
    // 0x349aa4: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x349AA4u;
    {
        const bool branch_taken_0x349aa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x349AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349AA4u;
        // 0x349aa8: 0xac664378  sw          $a2, 0x4378($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 17272), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349aa4) {
            ctx->pc = 0x349B68u;
            goto label_349b68;
        }
    }
    ctx->pc = 0x349AACu;
    // 0x349aac: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x349aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x349ab0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x349ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x349ab4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x349ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x349ab8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x349ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x349abc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x349abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x349ac0: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x349ac0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x349ac4: 0x54620012  bnel        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x349AC4u;
    {
        const bool branch_taken_0x349ac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x349ac4) {
            ctx->pc = 0x349AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349AC4u;
            // 0x349ac8: 0x24040126  addiu       $a0, $zero, 0x126 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349B10u;
            goto label_349b10;
        }
    }
    ctx->pc = 0x349ACCu;
    // 0x349acc: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x349accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x349ad0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x349AD0u;
    SET_GPR_U32(ctx, 31, 0x349AD8u);
    ctx->pc = 0x349AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349AD0u;
    // 0x349ad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x349AD0u, 0x349AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349AD8u;
label_349ad8:
    // 0x349ad8: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x349ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x349adc: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x349adcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x349ae0: 0x24849d20  addiu       $a0, $a0, -0x62E0
    ctx->pc = 0x349ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941984));
    // 0x349ae4: 0xc0d0dc0  jal         func_343700
    ctx->pc = 0x349AE4u;
    SET_GPR_U32(ctx, 31, 0x349AECu);
    ctx->pc = 0x349AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349AE4u;
    // 0x349ae8: 0x24a5a090  addiu       $a1, $a1, -0x5F70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343700u, 0x349AE4u, 0x349AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349AECu;
label_349aec:
    // 0x349aec: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x349aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x349af0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x349af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x349af4: 0x8c634378  lw          $v1, 0x4378($v1)
    ctx->pc = 0x349af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17272)));
    // 0x349af8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x349af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x349afc: 0x24847a30  addiu       $a0, $a0, 0x7A30
    ctx->pc = 0x349afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31280));
    // 0x349b00: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x349B00u;
    SET_GPR_U32(ctx, 31, 0x349B08u);
    ctx->pc = 0x349B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349B00u;
    // 0x349b04: 0xac43be80  sw          $v1, -0x4180($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x349B00u, 0x349B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349B08u;
label_349b08:
    // 0x349b08: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x349B08u;
    {
        const bool branch_taken_0x349b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349B08u;
        // 0x349b0c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349b08) {
            ctx->pc = 0x349B90u;
            goto label_349b90;
        }
    }
    ctx->pc = 0x349B10u;
label_349b10:
    // 0x349b10: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x349B10u;
    SET_GPR_U32(ctx, 31, 0x349B18u);
    ctx->pc = 0x349B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349B10u;
    // 0x349b14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x349B10u, 0x349B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349B18u;
label_349b18:
    // 0x349b18: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x349b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x349b1c: 0x8c434378  lw          $v1, 0x4378($v0)
    ctx->pc = 0x349b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x349b20: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x349b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x349b24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x349b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x349b28: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x349b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x349b2c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x349b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x349b30: 0x90420020  lbu         $v0, 0x20($v0)
    ctx->pc = 0x349b30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x349b34: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x349B34u;
    {
        const bool branch_taken_0x349b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x349b34) {
            ctx->pc = 0x349B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349B34u;
            // 0x349b38: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349B4Cu;
            goto label_349b4c;
        }
    }
    ctx->pc = 0x349B3Cu;
    // 0x349b3c: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x349b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x349b40: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x349b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x349b44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x349B44u;
    {
        const bool branch_taken_0x349b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349B44u;
        // 0x349b48: 0xac434378  sw          $v1, 0x4378($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349b44) {
            ctx->pc = 0x349B54u;
            goto label_349b54;
        }
    }
    ctx->pc = 0x349B4Cu;
label_349b4c:
    // 0x349b4c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x349b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x349b50: 0xac434378  sw          $v1, 0x4378($v0)
    ctx->pc = 0x349b50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 3));
label_349b54:
    // 0x349b54: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x349b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x349b58: 0xc082674  jal         func_2099D0
    ctx->pc = 0x349B58u;
    SET_GPR_U32(ctx, 31, 0x349B60u);
    ctx->pc = 0x349B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349B58u;
    // 0x349b5c: 0x24849ba0  addiu       $a0, $a0, -0x6460 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x349B58u, 0x349B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349B60u;
label_349b60:
    // 0x349b60: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x349B60u;
    {
        const bool branch_taken_0x349b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x349b60) {
            ctx->pc = 0x349B8Cu;
            goto label_349b8c;
        }
    }
    ctx->pc = 0x349B68u;
label_349b68:
    // 0x349b68: 0x30a34000  andi        $v1, $a1, 0x4000
    ctx->pc = 0x349b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
    // 0x349b6c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x349B6Cu;
    {
        const bool branch_taken_0x349b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x349b6c) {
            ctx->pc = 0x349B8Cu;
            goto label_349b8c;
        }
    }
    ctx->pc = 0x349B74u;
    // 0x349b74: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x349b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x349b78: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x349B78u;
    SET_GPR_U32(ctx, 31, 0x349B80u);
    ctx->pc = 0x349B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349B78u;
    // 0x349b7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x349B78u, 0x349B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349B80u;
label_349b80:
    // 0x349b80: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x349b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x349b84: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x349B84u;
    SET_GPR_U32(ctx, 31, 0x349B8Cu);
    ctx->pc = 0x349B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349B84u;
    // 0x349b88: 0x24849240  addiu       $a0, $a0, -0x6DC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x349B84u, 0x349B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349B8Cu;
label_349b8c:
    // 0x349b8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x349b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_349b90:
    // 0x349b90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x349b90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349b94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x349b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349b98: 0x3e00008  jr          $ra
    ctx->pc = 0x349B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349B98u;
        // 0x349b9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349BA0u;
    // 0x349ba0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x349ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x349ba4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x349ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x349ba8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x349ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x349bac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x349bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x349bb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x349bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x349bb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x349bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x349bb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x349bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x349bbc: 0x8c43be88  lw          $v1, -0x4178($v0)
    ctx->pc = 0x349bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950536)));
    // 0x349bc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x349bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349bc4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x349BC4u;
    {
        const bool branch_taken_0x349bc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x349bc4) {
            ctx->pc = 0x349BD8u;
            goto label_349bd8;
        }
    }
    ctx->pc = 0x349BCCu;
    // 0x349bcc: 0x3c12009c  lui         $s2, 0x9C
    ctx->pc = 0x349bccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)156 << 16));
    // 0x349bd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x349BD0u;
    {
        const bool branch_taken_0x349bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349BD0u;
        // 0x349bd4: 0x2652ef90  addiu       $s2, $s2, -0x1070 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294963088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349bd0) {
            ctx->pc = 0x349BE0u;
            goto label_349be0;
        }
    }
    ctx->pc = 0x349BD8u;
label_349bd8:
    // 0x349bd8: 0x3c12009c  lui         $s2, 0x9C
    ctx->pc = 0x349bd8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)156 << 16));
    // 0x349bdc: 0x2652ece0  addiu       $s2, $s2, -0x1320
    ctx->pc = 0x349bdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962400));
label_349be0:
    // 0x349be0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x349be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x349be4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x349be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x349be8: 0x8c474378  lw          $a3, 0x4378($v0)
    ctx->pc = 0x349be8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x349bec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x349becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x349bf0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x349bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x349bf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x349bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349bf8: 0xe3001a  div         $zero, $a3, $v1
    ctx->pc = 0x349bf8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x349bfc: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x349bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x349c00: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x349c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x349c04: 0x8810  mfhi        $s1
    ctx->pc = 0x349c04u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x349c08: 0x71fc2  srl         $v1, $a3, 31
    ctx->pc = 0x349c08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x349c0c: 0x470018  mult        $zero, $v0, $a3
    ctx->pc = 0x349c0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x349c10: 0x1010  mfhi        $v0
    ctx->pc = 0x349c10u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x349c14: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x349c14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x349c18: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x349C18u;
    SET_GPR_U32(ctx, 31, 0x349C20u);
    ctx->pc = 0x349C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349C18u;
    // 0x349c1c: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x349C18u, 0x349C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349C20u;
label_349c20:
    // 0x349c20: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x349c20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x349c24: 0x32030080  andi        $v1, $s0, 0x80
    ctx->pc = 0x349c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
    // 0x349c28: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x349C28u;
    {
        const bool branch_taken_0x349c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x349c28) {
            ctx->pc = 0x349C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349C28u;
            // 0x349c2c: 0x32030020  andi        $v1, $s0, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x349C50u;
            goto label_349c50;
        }
    }
    ctx->pc = 0x349C30u;
    // 0x349c30: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x349c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x349c34: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x349C34u;
    SET_GPR_U32(ctx, 31, 0x349C3Cu);
    ctx->pc = 0x349C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349C34u;
    // 0x349c38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x349C34u, 0x349C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349C3Cu;
label_349c3c:
    // 0x349c3c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x349c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x349c40: 0x24636f60  addiu       $v1, $v1, 0x6F60
    ctx->pc = 0x349c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28512));
    // 0x349c44: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x349c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x349c48: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x349C48u;
    {
        const bool branch_taken_0x349c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349C48u;
        // 0x349c4c: 0x90730000  lbu         $s3, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349c48) {
            ctx->pc = 0x349C74u;
            goto label_349c74;
        }
    }
    ctx->pc = 0x349C50u;
label_349c50:
    // 0x349c50: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x349C50u;
    {
        const bool branch_taken_0x349c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x349c50) {
            ctx->pc = 0x349C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349C50u;
            // 0x349c54: 0x132080  sll         $a0, $s3, 2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349C78u;
            goto label_349c78;
        }
    }
    ctx->pc = 0x349C58u;
    // 0x349c58: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x349c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x349c5c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x349C5Cu;
    SET_GPR_U32(ctx, 31, 0x349C64u);
    ctx->pc = 0x349C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349C5Cu;
    // 0x349c60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x349C5Cu, 0x349C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349C64u;
label_349c64:
    // 0x349c64: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x349c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x349c68: 0x24636f68  addiu       $v1, $v1, 0x6F68
    ctx->pc = 0x349c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28520));
    // 0x349c6c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x349c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x349c70: 0x90730000  lbu         $s3, 0x0($v1)
    ctx->pc = 0x349c70u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_349c74:
    // 0x349c74: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x349c74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_349c78:
    // 0x349c78: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x349c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x349c7c: 0x932821  addu        $a1, $a0, $s3
    ctx->pc = 0x349c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x349c80: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x349c80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x349c84: 0x32042000  andi        $a0, $s0, 0x2000
    ctx->pc = 0x349c84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
    // 0x349c88: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x349c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x349c8c: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x349C8Cu;
    {
        const bool branch_taken_0x349c8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x349C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349C8Cu;
        // 0x349c90: 0xac654378  sw          $a1, 0x4378($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 17272), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349c8c) {
            ctx->pc = 0x349CD8u;
            goto label_349cd8;
        }
    }
    ctx->pc = 0x349C94u;
    // 0x349c94: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x349c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x349c98: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x349C98u;
    SET_GPR_U32(ctx, 31, 0x349CA0u);
    ctx->pc = 0x349C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349C98u;
    // 0x349c9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x349C98u, 0x349CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349CA0u;
label_349ca0:
    // 0x349ca0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x349ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x349ca4: 0x56630006  bnel        $s3, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x349CA4u;
    {
        const bool branch_taken_0x349ca4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x349ca4) {
            ctx->pc = 0x349CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349CA4u;
            // 0x349ca8: 0x111900  sll         $v1, $s1, 4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349CC0u;
            goto label_349cc0;
        }
    }
    ctx->pc = 0x349CACu;
    // 0x349cac: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x349cacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x349cb0: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x349CB0u;
    SET_GPR_U32(ctx, 31, 0x349CB8u);
    ctx->pc = 0x349CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349CB0u;
    // 0x349cb4: 0x2484a160  addiu       $a0, $a0, -0x5EA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x349CB0u, 0x349CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349CB8u;
label_349cb8:
    // 0x349cb8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x349CB8u;
    {
        const bool branch_taken_0x349cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349CB8u;
        // 0x349cbc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349cb8) {
            ctx->pc = 0x349CFCu;
            goto label_349cfc;
        }
    }
    ctx->pc = 0x349CC0u;
label_349cc0:
    // 0x349cc0: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x349cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x349cc4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x349cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x349cc8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x349cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x349ccc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x349cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x349cd0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x349CD0u;
    {
        const bool branch_taken_0x349cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349CD0u;
        // 0x349cd4: 0xa0640020  sb          $a0, 0x20($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349cd0) {
            ctx->pc = 0x349CF8u;
            goto label_349cf8;
        }
    }
    ctx->pc = 0x349CD8u;
label_349cd8:
    // 0x349cd8: 0x32034000  andi        $v1, $s0, 0x4000
    ctx->pc = 0x349cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16384);
    // 0x349cdc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x349CDCu;
    {
        const bool branch_taken_0x349cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x349cdc) {
            ctx->pc = 0x349CF8u;
            goto label_349cf8;
        }
    }
    ctx->pc = 0x349CE4u;
    // 0x349ce4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x349ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x349ce8: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x349ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x349cec: 0x24849a30  addiu       $a0, $a0, -0x65D0
    ctx->pc = 0x349cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941232));
    // 0x349cf0: 0xc082674  jal         func_2099D0
    ctx->pc = 0x349CF0u;
    SET_GPR_U32(ctx, 31, 0x349CF8u);
    ctx->pc = 0x349CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349CF0u;
    // 0x349cf4: 0xac514378  sw          $s1, 0x4378($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x349CF0u, 0x349CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349CF8u;
label_349cf8:
    // 0x349cf8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x349cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_349cfc:
    // 0x349cfc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x349cfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x349d00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x349d00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x349d04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x349d04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349d08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x349d08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x349D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349D0Cu;
        // 0x349d10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349D14u;
    // 0x349d14: 0x0  nop
    ctx->pc = 0x349d14u;
    // NOP
    // 0x349d18: 0x0  nop
    ctx->pc = 0x349d18u;
    // NOP
    // 0x349d1c: 0x0  nop
    ctx->pc = 0x349d1cu;
    // NOP
    // 0x349d20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x349d24: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x349d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x349d28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x349d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x349d2c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x349d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x349d30: 0x8c45be80  lw          $a1, -0x4180($v0)
    ctx->pc = 0x349d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950528)));
    // 0x349d34: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x349d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x349d38: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x349d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x349d3c: 0xac654378  sw          $a1, 0x4378($v1)
    ctx->pc = 0x349d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17272), GPR_U32(ctx, 5));
    // 0x349d40: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x349D40u;
    SET_GPR_U32(ctx, 31, 0x349D48u);
    ctx->pc = 0x349D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349D40u;
    // 0x349d44: 0xa445be96  sh          $a1, -0x416A($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950550), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x349D40u, 0x349D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349D48u;
label_349d48:
    // 0x349d48: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x349d48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x349d4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x349d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349d50: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x349d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x349d54: 0x24844000  addiu       $a0, $a0, 0x4000
    ctx->pc = 0x349d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16384));
    // 0x349d58: 0xc082678  jal         func_2099E0
    ctx->pc = 0x349D58u;
    SET_GPR_U32(ctx, 31, 0x349D60u);
    ctx->pc = 0x349D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349D58u;
    // 0x349d5c: 0xac454378  sw          $a1, 0x4378($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x349D58u, 0x349D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349D60u;
label_349d60:
    // 0x349d60: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x349d60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x349d64: 0xc082674  jal         func_2099D0
    ctx->pc = 0x349D64u;
    SET_GPR_U32(ctx, 31, 0x349D6Cu);
    ctx->pc = 0x349D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349D64u;
    // 0x349d68: 0x24849d80  addiu       $a0, $a0, -0x6280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x349D64u, 0x349D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349D6Cu;
label_349d6c:
    // 0x349d6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x349d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349d70: 0x3e00008  jr          $ra
    ctx->pc = 0x349D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349D70u;
        // 0x349d74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349D78u;
    // 0x349d78: 0x0  nop
    ctx->pc = 0x349d78u;
    // NOP
    // 0x349d7c: 0x0  nop
    ctx->pc = 0x349d7cu;
    // NOP
    // 0x349d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x349d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x349d84: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x349d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x349d88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x349d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x349d8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x349d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349d90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x349d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x349d94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x349d94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349d98: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x349D98u;
    SET_GPR_U32(ctx, 31, 0x349DA0u);
    ctx->pc = 0x349D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349D98u;
    // 0x349d9c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x349D98u, 0x349DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349DA0u;
label_349da0:
    // 0x349da0: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x349da0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x349da4: 0x320300a0  andi        $v1, $s0, 0xA0
    ctx->pc = 0x349da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)160);
    // 0x349da8: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x349DA8u;
    {
        const bool branch_taken_0x349da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x349da8) {
            ctx->pc = 0x349DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349DA8u;
            // 0x349dac: 0x32032000  andi        $v1, $s0, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x349DD8u;
            goto label_349dd8;
        }
    }
    ctx->pc = 0x349DB0u;
    // 0x349db0: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x349db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x349db4: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x349DB4u;
    SET_GPR_U32(ctx, 31, 0x349DBCu);
    ctx->pc = 0x349DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349DB4u;
    // 0x349db8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x349DB4u, 0x349DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349DBCu;
label_349dbc:
    // 0x349dbc: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x349dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x349dc0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x349dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x349dc4: 0x8c844378  lw          $a0, 0x4378($a0)
    ctx->pc = 0x349dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17272)));
    // 0x349dc8: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x349dc8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x349dcc: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x349dccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x349dd0: 0xac644378  sw          $a0, 0x4378($v1)
    ctx->pc = 0x349dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17272), GPR_U32(ctx, 4));
    // 0x349dd4: 0x32032000  andi        $v1, $s0, 0x2000
    ctx->pc = 0x349dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
label_349dd8:
    // 0x349dd8: 0x50600041  beql        $v1, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x349DD8u;
    {
        const bool branch_taken_0x349dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x349dd8) {
            ctx->pc = 0x349DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349DD8u;
            // 0x349ddc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349EE0u;
            goto label_349ee0;
        }
    }
    ctx->pc = 0x349DE0u;
    // 0x349de0: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x349de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x349de4: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x349DE4u;
    SET_GPR_U32(ctx, 31, 0x349DECu);
    ctx->pc = 0x349DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349DE4u;
    // 0x349de8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x349DE4u, 0x349DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349DECu;
label_349dec:
    // 0x349dec: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x349decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x349df0: 0x8c424378  lw          $v0, 0x4378($v0)
    ctx->pc = 0x349df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x349df4: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x349DF4u;
    {
        const bool branch_taken_0x349df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x349df4) {
            ctx->pc = 0x349EACu;
            goto label_349eac;
        }
    }
    ctx->pc = 0x349DFCu;
    // 0x349dfc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x349dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x349e00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x349e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x349e04: 0x8c44be88  lw          $a0, -0x4178($v0)
    ctx->pc = 0x349e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950536)));
    // 0x349e08: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x349E08u;
    {
        const bool branch_taken_0x349e08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x349e08) {
            ctx->pc = 0x349E40u;
            goto label_349e40;
        }
    }
    ctx->pc = 0x349E10u;
    // 0x349e10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x349e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349e14: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x349E14u;
    {
        const bool branch_taken_0x349e14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x349e14) {
            ctx->pc = 0x349E24u;
            goto label_349e24;
        }
    }
    ctx->pc = 0x349E1Cu;
    // 0x349e1c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x349E1Cu;
    {
        const bool branch_taken_0x349e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349E1Cu;
        // 0x349e20: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349e1c) {
            ctx->pc = 0x349E5Cu;
            goto label_349e5c;
        }
    }
    ctx->pc = 0x349E24u;
label_349e24:
    // 0x349e24: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x349e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x349e28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x349e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349e2c: 0x8c424060  lw          $v0, 0x4060($v0)
    ctx->pc = 0x349e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16480)));
    // 0x349e30: 0xc0d29c4  jal         func_34A710
    ctx->pc = 0x349E30u;
    SET_GPR_U32(ctx, 31, 0x349E38u);
    ctx->pc = 0x349E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349E30u;
    // 0x349e34: 0x24450220  addiu       $a1, $v0, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A710u, 0x349E30u, 0x349E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349E38u;
label_349e38:
    // 0x349e38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x349E38u;
    {
        const bool branch_taken_0x349e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349E38u;
        // 0x349e3c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349e38) {
            ctx->pc = 0x349E58u;
            goto label_349e58;
        }
    }
    ctx->pc = 0x349E40u;
label_349e40:
    // 0x349e40: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x349e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x349e44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x349e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349e48: 0x8c424060  lw          $v0, 0x4060($v0)
    ctx->pc = 0x349e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16480)));
    // 0x349e4c: 0xc0d29c4  jal         func_34A710
    ctx->pc = 0x349E4Cu;
    SET_GPR_U32(ctx, 31, 0x349E54u);
    ctx->pc = 0x349E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349E4Cu;
    // 0x349e50: 0x24450220  addiu       $a1, $v0, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A710u, 0x349E4Cu, 0x349E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349E54u;
label_349e54:
    // 0x349e54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x349e54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_349e58:
    // 0x349e58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x349e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_349e5c:
    // 0x349e5c: 0x56220008  bnel        $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x349E5Cu;
    {
        const bool branch_taken_0x349e5c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x349e5c) {
            ctx->pc = 0x349E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349E5Cu;
            // 0x349e60: 0x24040045  addiu       $a0, $zero, 0x45 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349E80u;
            goto label_349e80;
        }
    }
    ctx->pc = 0x349E64u;
    // 0x349e64: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x349e64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x349e68: 0xc082674  jal         func_2099D0
    ctx->pc = 0x349E68u;
    SET_GPR_U32(ctx, 31, 0x349E70u);
    ctx->pc = 0x349E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349E68u;
    // 0x349e6c: 0x24849f60  addiu       $a0, $a0, -0x60A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x349E68u, 0x349E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349E70u;
label_349e70:
    // 0x349e70: 0xc0d27d8  jal         func_349F60
    ctx->pc = 0x349E70u;
    SET_GPR_U32(ctx, 31, 0x349E78u);
    ctx->pc = 0x349F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349F60u, 0x349E70u, 0x349E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349E78u;
label_349e78:
    // 0x349e78: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x349E78u;
    {
        const bool branch_taken_0x349e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x349e78) {
            ctx->pc = 0x349EDCu;
            goto label_349edc;
        }
    }
    ctx->pc = 0x349E80u;
label_349e80:
    // 0x349e80: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x349E80u;
    SET_GPR_U32(ctx, 31, 0x349E88u);
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x349E80u, 0x349E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349E88u;
label_349e88:
    // 0x349e88: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x349e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x349e8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x349e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349e90: 0xc082678  jal         func_2099E0
    ctx->pc = 0x349E90u;
    SET_GPR_U32(ctx, 31, 0x349E98u);
    ctx->pc = 0x349E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349E90u;
    // 0x349e94: 0x24843ff0  addiu       $a0, $a0, 0x3FF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x349E90u, 0x349E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349E98u;
label_349e98:
    // 0x349e98: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x349e98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x349e9c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x349E9Cu;
    SET_GPR_U32(ctx, 31, 0x349EA4u);
    ctx->pc = 0x349EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349E9Cu;
    // 0x349ea0: 0x24849ef0  addiu       $a0, $a0, -0x6110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x349E9Cu, 0x349EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349EA4u;
label_349ea4:
    // 0x349ea4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x349EA4u;
    {
        const bool branch_taken_0x349ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x349ea4) {
            ctx->pc = 0x349EDCu;
            goto label_349edc;
        }
    }
    ctx->pc = 0x349EACu;
label_349eac:
    // 0x349eac: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x349eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x349eb0: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x349eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x349eb4: 0x24849d20  addiu       $a0, $a0, -0x62E0
    ctx->pc = 0x349eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941984));
    // 0x349eb8: 0xc0d0dc0  jal         func_343700
    ctx->pc = 0x349EB8u;
    SET_GPR_U32(ctx, 31, 0x349EC0u);
    ctx->pc = 0x349EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349EB8u;
    // 0x349ebc: 0x24a5a090  addiu       $a1, $a1, -0x5F70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343700u, 0x349EB8u, 0x349EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349EC0u;
label_349ec0:
    // 0x349ec0: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x349ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x349ec4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x349ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x349ec8: 0x9463be96  lhu         $v1, -0x416A($v1)
    ctx->pc = 0x349ec8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950550)));
    // 0x349ecc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x349eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x349ed0: 0x24847a30  addiu       $a0, $a0, 0x7A30
    ctx->pc = 0x349ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31280));
    // 0x349ed4: 0xc082674  jal         func_2099D0
    ctx->pc = 0x349ED4u;
    SET_GPR_U32(ctx, 31, 0x349EDCu);
    ctx->pc = 0x349ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349ED4u;
    // 0x349ed8: 0xac43be80  sw          $v1, -0x4180($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x349ED4u, 0x349EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349EDCu;
label_349edc:
    // 0x349edc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x349edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_349ee0:
    // 0x349ee0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x349ee0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349ee4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x349ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x349EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349EE8u;
        // 0x349eec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349EF0u;
    // 0x349ef0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x349ef4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x349ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x349ef8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x349ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x349efc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x349efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349f00: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x349F00u;
    SET_GPR_U32(ctx, 31, 0x349F08u);
    ctx->pc = 0x349F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349F00u;
    // 0x349f04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x349F00u, 0x349F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349F08u;
label_349f08:
    // 0x349f08: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x349f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x349f0c: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x349f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x349f10: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x349F10u;
    {
        const bool branch_taken_0x349f10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x349f10) {
            ctx->pc = 0x349F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349F10u;
            // 0x349f14: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349F58u;
            goto label_349f58;
        }
    }
    ctx->pc = 0x349F18u;
    // 0x349f18: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x349f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x349f1c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x349F1Cu;
    SET_GPR_U32(ctx, 31, 0x349F24u);
    ctx->pc = 0x349F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349F1Cu;
    // 0x349f20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x349F1Cu, 0x349F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349F24u;
label_349f24:
    // 0x349f24: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x349f24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x349f28: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x349f28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x349f2c: 0x24849d20  addiu       $a0, $a0, -0x62E0
    ctx->pc = 0x349f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941984));
    // 0x349f30: 0xc0d0dc0  jal         func_343700
    ctx->pc = 0x349F30u;
    SET_GPR_U32(ctx, 31, 0x349F38u);
    ctx->pc = 0x349F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349F30u;
    // 0x349f34: 0x24a5a090  addiu       $a1, $a1, -0x5F70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343700u, 0x349F30u, 0x349F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349F38u;
label_349f38:
    // 0x349f38: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x349f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x349f3c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x349f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x349f40: 0x9463be96  lhu         $v1, -0x416A($v1)
    ctx->pc = 0x349f40u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950550)));
    // 0x349f44: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x349f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x349f48: 0x24847a30  addiu       $a0, $a0, 0x7A30
    ctx->pc = 0x349f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31280));
    // 0x349f4c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x349F4Cu;
    SET_GPR_U32(ctx, 31, 0x349F54u);
    ctx->pc = 0x349F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349F4Cu;
    // 0x349f50: 0xac43be80  sw          $v1, -0x4180($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x349F4Cu, 0x349F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349F54u;
label_349f54:
    // 0x349f54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x349f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_349f58:
    // 0x349f58: 0x3e00008  jr          $ra
    ctx->pc = 0x349F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349F58u;
        // 0x349f5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349F60u;
}
