#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AA7E8
// Address: 0x2aa7e8 - 0x2aad28
void sub_002AA7E8_0x2aa7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA7E8_0x2aa7e8");
#endif

    switch (ctx->pc) {
        case 0x2aa7e8u: goto label_2aa7e8;
        case 0x2aa7ecu: goto label_2aa7ec;
        case 0x2aa7f0u: goto label_2aa7f0;
        case 0x2aa7f4u: goto label_2aa7f4;
        case 0x2aa7f8u: goto label_2aa7f8;
        case 0x2aa7fcu: goto label_2aa7fc;
        case 0x2aa800u: goto label_2aa800;
        case 0x2aa804u: goto label_2aa804;
        case 0x2aa808u: goto label_2aa808;
        case 0x2aa80cu: goto label_2aa80c;
        case 0x2aa810u: goto label_2aa810;
        case 0x2aa814u: goto label_2aa814;
        case 0x2aa818u: goto label_2aa818;
        case 0x2aa81cu: goto label_2aa81c;
        case 0x2aa820u: goto label_2aa820;
        case 0x2aa824u: goto label_2aa824;
        case 0x2aa828u: goto label_2aa828;
        case 0x2aa82cu: goto label_2aa82c;
        case 0x2aa830u: goto label_2aa830;
        case 0x2aa834u: goto label_2aa834;
        case 0x2aa838u: goto label_2aa838;
        case 0x2aa83cu: goto label_2aa83c;
        case 0x2aa840u: goto label_2aa840;
        case 0x2aa844u: goto label_2aa844;
        case 0x2aa848u: goto label_2aa848;
        case 0x2aa84cu: goto label_2aa84c;
        case 0x2aa850u: goto label_2aa850;
        case 0x2aa854u: goto label_2aa854;
        case 0x2aa858u: goto label_2aa858;
        case 0x2aa85cu: goto label_2aa85c;
        case 0x2aa860u: goto label_2aa860;
        case 0x2aa864u: goto label_2aa864;
        case 0x2aa868u: goto label_2aa868;
        case 0x2aa86cu: goto label_2aa86c;
        case 0x2aa870u: goto label_2aa870;
        case 0x2aa874u: goto label_2aa874;
        case 0x2aa878u: goto label_2aa878;
        case 0x2aa87cu: goto label_2aa87c;
        case 0x2aa880u: goto label_2aa880;
        case 0x2aa884u: goto label_2aa884;
        case 0x2aa888u: goto label_2aa888;
        case 0x2aa88cu: goto label_2aa88c;
        case 0x2aa890u: goto label_2aa890;
        case 0x2aa894u: goto label_2aa894;
        case 0x2aa898u: goto label_2aa898;
        case 0x2aa89cu: goto label_2aa89c;
        case 0x2aa8a0u: goto label_2aa8a0;
        case 0x2aa8a4u: goto label_2aa8a4;
        case 0x2aa8a8u: goto label_2aa8a8;
        case 0x2aa8acu: goto label_2aa8ac;
        case 0x2aa8b0u: goto label_2aa8b0;
        case 0x2aa8b4u: goto label_2aa8b4;
        case 0x2aa8b8u: goto label_2aa8b8;
        case 0x2aa8bcu: goto label_2aa8bc;
        case 0x2aa8c0u: goto label_2aa8c0;
        case 0x2aa8c4u: goto label_2aa8c4;
        case 0x2aa8c8u: goto label_2aa8c8;
        case 0x2aa8ccu: goto label_2aa8cc;
        case 0x2aa8d0u: goto label_2aa8d0;
        case 0x2aa8d4u: goto label_2aa8d4;
        case 0x2aa8d8u: goto label_2aa8d8;
        case 0x2aa8dcu: goto label_2aa8dc;
        case 0x2aa8e0u: goto label_2aa8e0;
        case 0x2aa8e4u: goto label_2aa8e4;
        case 0x2aa8e8u: goto label_2aa8e8;
        case 0x2aa8ecu: goto label_2aa8ec;
        case 0x2aa8f0u: goto label_2aa8f0;
        case 0x2aa8f4u: goto label_2aa8f4;
        case 0x2aa8f8u: goto label_2aa8f8;
        case 0x2aa8fcu: goto label_2aa8fc;
        case 0x2aa900u: goto label_2aa900;
        case 0x2aa904u: goto label_2aa904;
        case 0x2aa908u: goto label_2aa908;
        case 0x2aa90cu: goto label_2aa90c;
        case 0x2aa910u: goto label_2aa910;
        case 0x2aa914u: goto label_2aa914;
        case 0x2aa918u: goto label_2aa918;
        case 0x2aa91cu: goto label_2aa91c;
        case 0x2aa920u: goto label_2aa920;
        case 0x2aa924u: goto label_2aa924;
        case 0x2aa928u: goto label_2aa928;
        case 0x2aa92cu: goto label_2aa92c;
        case 0x2aa930u: goto label_2aa930;
        case 0x2aa934u: goto label_2aa934;
        case 0x2aa938u: goto label_2aa938;
        case 0x2aa93cu: goto label_2aa93c;
        case 0x2aa940u: goto label_2aa940;
        case 0x2aa944u: goto label_2aa944;
        case 0x2aa948u: goto label_2aa948;
        case 0x2aa94cu: goto label_2aa94c;
        case 0x2aa950u: goto label_2aa950;
        case 0x2aa954u: goto label_2aa954;
        case 0x2aa958u: goto label_2aa958;
        case 0x2aa95cu: goto label_2aa95c;
        case 0x2aa960u: goto label_2aa960;
        case 0x2aa964u: goto label_2aa964;
        case 0x2aa968u: goto label_2aa968;
        case 0x2aa96cu: goto label_2aa96c;
        case 0x2aa970u: goto label_2aa970;
        case 0x2aa974u: goto label_2aa974;
        case 0x2aa978u: goto label_2aa978;
        case 0x2aa97cu: goto label_2aa97c;
        case 0x2aa980u: goto label_2aa980;
        case 0x2aa984u: goto label_2aa984;
        case 0x2aa988u: goto label_2aa988;
        case 0x2aa98cu: goto label_2aa98c;
        case 0x2aa990u: goto label_2aa990;
        case 0x2aa994u: goto label_2aa994;
        case 0x2aa998u: goto label_2aa998;
        case 0x2aa99cu: goto label_2aa99c;
        case 0x2aa9a0u: goto label_2aa9a0;
        case 0x2aa9a4u: goto label_2aa9a4;
        case 0x2aa9a8u: goto label_2aa9a8;
        case 0x2aa9acu: goto label_2aa9ac;
        case 0x2aa9b0u: goto label_2aa9b0;
        case 0x2aa9b4u: goto label_2aa9b4;
        case 0x2aa9b8u: goto label_2aa9b8;
        case 0x2aa9bcu: goto label_2aa9bc;
        case 0x2aa9c0u: goto label_2aa9c0;
        case 0x2aa9c4u: goto label_2aa9c4;
        case 0x2aa9c8u: goto label_2aa9c8;
        case 0x2aa9ccu: goto label_2aa9cc;
        case 0x2aa9d0u: goto label_2aa9d0;
        case 0x2aa9d4u: goto label_2aa9d4;
        case 0x2aa9d8u: goto label_2aa9d8;
        case 0x2aa9dcu: goto label_2aa9dc;
        case 0x2aa9e0u: goto label_2aa9e0;
        case 0x2aa9e4u: goto label_2aa9e4;
        case 0x2aa9e8u: goto label_2aa9e8;
        case 0x2aa9ecu: goto label_2aa9ec;
        case 0x2aa9f0u: goto label_2aa9f0;
        case 0x2aa9f4u: goto label_2aa9f4;
        case 0x2aa9f8u: goto label_2aa9f8;
        case 0x2aa9fcu: goto label_2aa9fc;
        case 0x2aaa00u: goto label_2aaa00;
        case 0x2aaa04u: goto label_2aaa04;
        case 0x2aaa08u: goto label_2aaa08;
        case 0x2aaa0cu: goto label_2aaa0c;
        case 0x2aaa10u: goto label_2aaa10;
        case 0x2aaa14u: goto label_2aaa14;
        case 0x2aaa18u: goto label_2aaa18;
        case 0x2aaa1cu: goto label_2aaa1c;
        case 0x2aaa20u: goto label_2aaa20;
        case 0x2aaa24u: goto label_2aaa24;
        case 0x2aaa28u: goto label_2aaa28;
        case 0x2aaa2cu: goto label_2aaa2c;
        case 0x2aaa30u: goto label_2aaa30;
        case 0x2aaa34u: goto label_2aaa34;
        case 0x2aaa38u: goto label_2aaa38;
        case 0x2aaa3cu: goto label_2aaa3c;
        case 0x2aaa40u: goto label_2aaa40;
        case 0x2aaa44u: goto label_2aaa44;
        case 0x2aaa48u: goto label_2aaa48;
        case 0x2aaa4cu: goto label_2aaa4c;
        case 0x2aaa50u: goto label_2aaa50;
        case 0x2aaa54u: goto label_2aaa54;
        case 0x2aaa58u: goto label_2aaa58;
        case 0x2aaa5cu: goto label_2aaa5c;
        case 0x2aaa60u: goto label_2aaa60;
        case 0x2aaa64u: goto label_2aaa64;
        case 0x2aaa68u: goto label_2aaa68;
        case 0x2aaa6cu: goto label_2aaa6c;
        case 0x2aaa70u: goto label_2aaa70;
        case 0x2aaa74u: goto label_2aaa74;
        case 0x2aaa78u: goto label_2aaa78;
        case 0x2aaa7cu: goto label_2aaa7c;
        case 0x2aaa80u: goto label_2aaa80;
        case 0x2aaa84u: goto label_2aaa84;
        case 0x2aaa88u: goto label_2aaa88;
        case 0x2aaa8cu: goto label_2aaa8c;
        case 0x2aaa90u: goto label_2aaa90;
        case 0x2aaa94u: goto label_2aaa94;
        case 0x2aaa98u: goto label_2aaa98;
        case 0x2aaa9cu: goto label_2aaa9c;
        case 0x2aaaa0u: goto label_2aaaa0;
        case 0x2aaaa4u: goto label_2aaaa4;
        case 0x2aaaa8u: goto label_2aaaa8;
        case 0x2aaaacu: goto label_2aaaac;
        case 0x2aaab0u: goto label_2aaab0;
        case 0x2aaab4u: goto label_2aaab4;
        case 0x2aaab8u: goto label_2aaab8;
        case 0x2aaabcu: goto label_2aaabc;
        case 0x2aaac0u: goto label_2aaac0;
        case 0x2aaac4u: goto label_2aaac4;
        case 0x2aaac8u: goto label_2aaac8;
        case 0x2aaaccu: goto label_2aaacc;
        case 0x2aaad0u: goto label_2aaad0;
        case 0x2aaad4u: goto label_2aaad4;
        case 0x2aaad8u: goto label_2aaad8;
        case 0x2aaadcu: goto label_2aaadc;
        case 0x2aaae0u: goto label_2aaae0;
        case 0x2aaae4u: goto label_2aaae4;
        case 0x2aaae8u: goto label_2aaae8;
        case 0x2aaaecu: goto label_2aaaec;
        case 0x2aaaf0u: goto label_2aaaf0;
        case 0x2aaaf4u: goto label_2aaaf4;
        case 0x2aaaf8u: goto label_2aaaf8;
        case 0x2aaafcu: goto label_2aaafc;
        case 0x2aab00u: goto label_2aab00;
        case 0x2aab04u: goto label_2aab04;
        case 0x2aab08u: goto label_2aab08;
        case 0x2aab0cu: goto label_2aab0c;
        case 0x2aab10u: goto label_2aab10;
        case 0x2aab14u: goto label_2aab14;
        case 0x2aab18u: goto label_2aab18;
        case 0x2aab1cu: goto label_2aab1c;
        case 0x2aab20u: goto label_2aab20;
        case 0x2aab24u: goto label_2aab24;
        case 0x2aab28u: goto label_2aab28;
        case 0x2aab2cu: goto label_2aab2c;
        case 0x2aab30u: goto label_2aab30;
        case 0x2aab34u: goto label_2aab34;
        case 0x2aab38u: goto label_2aab38;
        case 0x2aab3cu: goto label_2aab3c;
        case 0x2aab40u: goto label_2aab40;
        case 0x2aab44u: goto label_2aab44;
        case 0x2aab48u: goto label_2aab48;
        case 0x2aab4cu: goto label_2aab4c;
        case 0x2aab50u: goto label_2aab50;
        case 0x2aab54u: goto label_2aab54;
        case 0x2aab58u: goto label_2aab58;
        case 0x2aab5cu: goto label_2aab5c;
        case 0x2aab60u: goto label_2aab60;
        case 0x2aab64u: goto label_2aab64;
        case 0x2aab68u: goto label_2aab68;
        case 0x2aab6cu: goto label_2aab6c;
        case 0x2aab70u: goto label_2aab70;
        case 0x2aab74u: goto label_2aab74;
        case 0x2aab78u: goto label_2aab78;
        case 0x2aab7cu: goto label_2aab7c;
        case 0x2aab80u: goto label_2aab80;
        case 0x2aab84u: goto label_2aab84;
        case 0x2aab88u: goto label_2aab88;
        case 0x2aab8cu: goto label_2aab8c;
        case 0x2aab90u: goto label_2aab90;
        case 0x2aab94u: goto label_2aab94;
        case 0x2aab98u: goto label_2aab98;
        case 0x2aab9cu: goto label_2aab9c;
        case 0x2aaba0u: goto label_2aaba0;
        case 0x2aaba4u: goto label_2aaba4;
        case 0x2aaba8u: goto label_2aaba8;
        case 0x2aabacu: goto label_2aabac;
        case 0x2aabb0u: goto label_2aabb0;
        case 0x2aabb4u: goto label_2aabb4;
        case 0x2aabb8u: goto label_2aabb8;
        case 0x2aabbcu: goto label_2aabbc;
        case 0x2aabc0u: goto label_2aabc0;
        case 0x2aabc4u: goto label_2aabc4;
        case 0x2aabc8u: goto label_2aabc8;
        case 0x2aabccu: goto label_2aabcc;
        case 0x2aabd0u: goto label_2aabd0;
        case 0x2aabd4u: goto label_2aabd4;
        case 0x2aabd8u: goto label_2aabd8;
        case 0x2aabdcu: goto label_2aabdc;
        case 0x2aabe0u: goto label_2aabe0;
        case 0x2aabe4u: goto label_2aabe4;
        case 0x2aabe8u: goto label_2aabe8;
        case 0x2aabecu: goto label_2aabec;
        case 0x2aabf0u: goto label_2aabf0;
        case 0x2aabf4u: goto label_2aabf4;
        case 0x2aabf8u: goto label_2aabf8;
        case 0x2aabfcu: goto label_2aabfc;
        case 0x2aac00u: goto label_2aac00;
        case 0x2aac04u: goto label_2aac04;
        case 0x2aac08u: goto label_2aac08;
        case 0x2aac0cu: goto label_2aac0c;
        case 0x2aac10u: goto label_2aac10;
        case 0x2aac14u: goto label_2aac14;
        case 0x2aac18u: goto label_2aac18;
        case 0x2aac1cu: goto label_2aac1c;
        case 0x2aac20u: goto label_2aac20;
        case 0x2aac24u: goto label_2aac24;
        case 0x2aac28u: goto label_2aac28;
        case 0x2aac2cu: goto label_2aac2c;
        case 0x2aac30u: goto label_2aac30;
        case 0x2aac34u: goto label_2aac34;
        case 0x2aac38u: goto label_2aac38;
        case 0x2aac3cu: goto label_2aac3c;
        case 0x2aac40u: goto label_2aac40;
        case 0x2aac44u: goto label_2aac44;
        case 0x2aac48u: goto label_2aac48;
        case 0x2aac4cu: goto label_2aac4c;
        case 0x2aac50u: goto label_2aac50;
        case 0x2aac54u: goto label_2aac54;
        case 0x2aac58u: goto label_2aac58;
        case 0x2aac5cu: goto label_2aac5c;
        case 0x2aac60u: goto label_2aac60;
        case 0x2aac64u: goto label_2aac64;
        case 0x2aac68u: goto label_2aac68;
        case 0x2aac6cu: goto label_2aac6c;
        case 0x2aac70u: goto label_2aac70;
        case 0x2aac74u: goto label_2aac74;
        case 0x2aac78u: goto label_2aac78;
        case 0x2aac7cu: goto label_2aac7c;
        case 0x2aac80u: goto label_2aac80;
        case 0x2aac84u: goto label_2aac84;
        case 0x2aac88u: goto label_2aac88;
        case 0x2aac8cu: goto label_2aac8c;
        case 0x2aac90u: goto label_2aac90;
        case 0x2aac94u: goto label_2aac94;
        case 0x2aac98u: goto label_2aac98;
        case 0x2aac9cu: goto label_2aac9c;
        case 0x2aaca0u: goto label_2aaca0;
        case 0x2aaca4u: goto label_2aaca4;
        case 0x2aaca8u: goto label_2aaca8;
        case 0x2aacacu: goto label_2aacac;
        case 0x2aacb0u: goto label_2aacb0;
        case 0x2aacb4u: goto label_2aacb4;
        case 0x2aacb8u: goto label_2aacb8;
        case 0x2aacbcu: goto label_2aacbc;
        case 0x2aacc0u: goto label_2aacc0;
        case 0x2aacc4u: goto label_2aacc4;
        case 0x2aacc8u: goto label_2aacc8;
        case 0x2aacccu: goto label_2aaccc;
        case 0x2aacd0u: goto label_2aacd0;
        case 0x2aacd4u: goto label_2aacd4;
        case 0x2aacd8u: goto label_2aacd8;
        case 0x2aacdcu: goto label_2aacdc;
        case 0x2aace0u: goto label_2aace0;
        case 0x2aace4u: goto label_2aace4;
        case 0x2aace8u: goto label_2aace8;
        case 0x2aacecu: goto label_2aacec;
        case 0x2aacf0u: goto label_2aacf0;
        case 0x2aacf4u: goto label_2aacf4;
        case 0x2aacf8u: goto label_2aacf8;
        case 0x2aacfcu: goto label_2aacfc;
        case 0x2aad00u: goto label_2aad00;
        case 0x2aad04u: goto label_2aad04;
        case 0x2aad08u: goto label_2aad08;
        case 0x2aad0cu: goto label_2aad0c;
        case 0x2aad10u: goto label_2aad10;
        case 0x2aad14u: goto label_2aad14;
        case 0x2aad18u: goto label_2aad18;
        case 0x2aad1cu: goto label_2aad1c;
        case 0x2aad20u: goto label_2aad20;
        case 0x2aad24u: goto label_2aad24;
        default: break;
    }

    ctx->pc = 0x2aa7e8u;

label_2aa7e8:
    // 0x2aa7e8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2aa7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2aa7ec:
    // 0x2aa7ec: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2aa7ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2aa7f0:
    // 0x2aa7f0: 0x8c626d98  lw          $v0, 0x6D98($v1)
    ctx->pc = 0x2aa7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28056)));
label_2aa7f4:
    // 0x2aa7f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2aa7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2aa7f8:
    // 0x2aa7f8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2aa7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2aa7fc:
    // 0x2aa7fc: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_2aa800:
    if (ctx->pc == 0x2AA800u) {
        ctx->pc = 0x2AA800u;
            // 0x2aa800: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x2AA804u;
        goto label_2aa804;
    }
    ctx->pc = 0x2AA7FCu;
    {
        const bool branch_taken_0x2aa7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA7FCu;
            // 0x2aa800: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa7fc) {
            ctx->pc = 0x2AA924u;
            goto label_2aa924;
        }
    }
    ctx->pc = 0x2AA804u;
label_2aa804:
    // 0x2aa804: 0x0  nop
    ctx->pc = 0x2aa804u;
    // NOP
label_2aa808:
    // 0x2aa808: 0xc0ab180  jal         func_2AC600
label_2aa80c:
    if (ctx->pc == 0x2AA80Cu) {
        ctx->pc = 0x2AA80Cu;
            // 0x2aa80c: 0x3c1001c9  lui         $s0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)457 << 16));
        ctx->pc = 0x2AA810u;
        goto label_2aa810;
    }
    ctx->pc = 0x2AA808u;
    SET_GPR_U32(ctx, 31, 0x2AA810u);
    ctx->pc = 0x2AA80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA808u;
            // 0x2aa80c: 0x3c1001c9  lui         $s0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AC600u;
    if (runtime->hasFunction(0x2AC600u)) {
        auto targetFn = runtime->lookupFunction(0x2AC600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA810u; }
        if (ctx->pc != 0x2AA810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AC600_0x2ac600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA810u; }
        if (ctx->pc != 0x2AA810u) { return; }
    }
    ctx->pc = 0x2AA810u;
label_2aa810:
    // 0x2aa810: 0x26034928  addiu       $v1, $s0, 0x4928
    ctx->pc = 0x2aa810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 18728));
label_2aa814:
    // 0x2aa814: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2aa814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aa818:
    // 0x2aa818: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2aa818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2aa81c:
    // 0x2aa81c: 0xa61025  or          $v0, $a1, $a2
    ctx->pc = 0x2aa81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_2aa820:
    // 0x2aa820: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2aa820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_2aa824:
    // 0x2aa824: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2aa828:
    if (ctx->pc == 0x2AA828u) {
        ctx->pc = 0x2AA828u;
            // 0x2aa828: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA82Cu;
        goto label_2aa82c;
    }
    ctx->pc = 0x2AA824u;
    {
        const bool branch_taken_0x2aa824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA824u;
            // 0x2aa828: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa824) {
            ctx->pc = 0x2AA894u;
            goto label_2aa894;
        }
    }
    ctx->pc = 0x2AA82Cu;
label_2aa82c:
    // 0x2aa82c: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x2aa82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_2aa830:
    // 0x2aa830: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x2aa830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
label_2aa834:
    // 0x2aa834: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x2aa834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
label_2aa838:
    // 0x2aa838: 0x68a70007  ldl         $a3, 0x7($a1)
    ctx->pc = 0x2aa838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2aa83c:
    // 0x2aa83c: 0x6ca70000  ldr         $a3, 0x0($a1)
    ctx->pc = 0x2aa83cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_2aa840:
    // 0x2aa840: 0x68a8000f  ldl         $t0, 0xF($a1)
    ctx->pc = 0x2aa840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_2aa844:
    // 0x2aa844: 0x6ca80008  ldr         $t0, 0x8($a1)
    ctx->pc = 0x2aa844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_2aa848:
    // 0x2aa848: 0x68a90017  ldl         $t1, 0x17($a1)
    ctx->pc = 0x2aa848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_2aa84c:
    // 0x2aa84c: 0x6ca90010  ldr         $t1, 0x10($a1)
    ctx->pc = 0x2aa84cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2aa850:
    // 0x2aa850: 0x68aa001f  ldl         $t2, 0x1F($a1)
    ctx->pc = 0x2aa850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_2aa854:
    // 0x2aa854: 0x6caa0018  ldr         $t2, 0x18($a1)
    ctx->pc = 0x2aa854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_2aa858:
    // 0x2aa858: 0xb0c70007  sdl         $a3, 0x7($a2)
    ctx->pc = 0x2aa858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2aa85c:
    // 0x2aa85c: 0xb4c70000  sdr         $a3, 0x0($a2)
    ctx->pc = 0x2aa85cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2aa860:
    // 0x2aa860: 0xb0c8000f  sdl         $t0, 0xF($a2)
    ctx->pc = 0x2aa860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2aa864:
    // 0x2aa864: 0xb4c80008  sdr         $t0, 0x8($a2)
    ctx->pc = 0x2aa864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2aa868:
    // 0x2aa868: 0xb0c90017  sdl         $t1, 0x17($a2)
    ctx->pc = 0x2aa868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2aa86c:
    // 0x2aa86c: 0xb4c90010  sdr         $t1, 0x10($a2)
    ctx->pc = 0x2aa86cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2aa870:
    // 0x2aa870: 0xb0ca001f  sdl         $t2, 0x1F($a2)
    ctx->pc = 0x2aa870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2aa874:
    // 0x2aa874: 0xb4ca0018  sdr         $t2, 0x18($a2)
    ctx->pc = 0x2aa874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2aa878:
    // 0x2aa878: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2aa878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_2aa87c:
    // 0x2aa87c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2aa87cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_2aa880:
    // 0x2aa880: 0x0  nop
    ctx->pc = 0x2aa880u;
    // NOP
label_2aa884:
    // 0x2aa884: 0x14a2ffec  bne         $a1, $v0, . + 4 + (-0x14 << 2)
label_2aa888:
    if (ctx->pc == 0x2AA888u) {
        ctx->pc = 0x2AA88Cu;
        goto label_2aa88c;
    }
    ctx->pc = 0x2AA884u;
    {
        const bool branch_taken_0x2aa884 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2aa884) {
            ctx->pc = 0x2AA838u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2aa838;
        }
    }
    ctx->pc = 0x2AA88Cu;
label_2aa88c:
    // 0x2aa88c: 0x10000011  b           . + 4 + (0x11 << 2)
label_2aa890:
    if (ctx->pc == 0x2AA890u) {
        ctx->pc = 0x2AA894u;
        goto label_2aa894;
    }
    ctx->pc = 0x2AA88Cu;
    {
        const bool branch_taken_0x2aa88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa88c) {
            ctx->pc = 0x2AA8D4u;
            goto label_2aa8d4;
        }
    }
    ctx->pc = 0x2AA894u;
label_2aa894:
    // 0x2aa894: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x2aa894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_2aa898:
    // 0x2aa898: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x2aa898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
label_2aa89c:
    // 0x2aa89c: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x2aa89cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
label_2aa8a0:
    // 0x2aa8a0: 0xdca70000  ld          $a3, 0x0($a1)
    ctx->pc = 0x2aa8a0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_2aa8a4:
    // 0x2aa8a4: 0xdca80008  ld          $t0, 0x8($a1)
    ctx->pc = 0x2aa8a4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 8)));
label_2aa8a8:
    // 0x2aa8a8: 0xdca90010  ld          $t1, 0x10($a1)
    ctx->pc = 0x2aa8a8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 5), 16)));
label_2aa8ac:
    // 0x2aa8ac: 0xdcaa0018  ld          $t2, 0x18($a1)
    ctx->pc = 0x2aa8acu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 24)));
label_2aa8b0:
    // 0x2aa8b0: 0xfcc70000  sd          $a3, 0x0($a2)
    ctx->pc = 0x2aa8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 7));
label_2aa8b4:
    // 0x2aa8b4: 0xfcc80008  sd          $t0, 0x8($a2)
    ctx->pc = 0x2aa8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 8));
label_2aa8b8:
    // 0x2aa8b8: 0xfcc90010  sd          $t1, 0x10($a2)
    ctx->pc = 0x2aa8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 9));
label_2aa8bc:
    // 0x2aa8bc: 0xfcca0018  sd          $t2, 0x18($a2)
    ctx->pc = 0x2aa8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 10));
label_2aa8c0:
    // 0x2aa8c0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2aa8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_2aa8c4:
    // 0x2aa8c4: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2aa8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_2aa8c8:
    // 0x2aa8c8: 0x0  nop
    ctx->pc = 0x2aa8c8u;
    // NOP
label_2aa8cc:
    // 0x2aa8cc: 0x14a2fff4  bne         $a1, $v0, . + 4 + (-0xC << 2)
label_2aa8d0:
    if (ctx->pc == 0x2AA8D0u) {
        ctx->pc = 0x2AA8D4u;
        goto label_2aa8d4;
    }
    ctx->pc = 0x2AA8CCu;
    {
        const bool branch_taken_0x2aa8cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2aa8cc) {
            ctx->pc = 0x2AA8A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2aa8a0;
        }
    }
    ctx->pc = 0x2AA8D4u;
label_2aa8d4:
    // 0x2aa8d4: 0x68a70007  ldl         $a3, 0x7($a1)
    ctx->pc = 0x2aa8d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2aa8d8:
    // 0x2aa8d8: 0x6ca70000  ldr         $a3, 0x0($a1)
    ctx->pc = 0x2aa8d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_2aa8dc:
    // 0x2aa8dc: 0x68a8000f  ldl         $t0, 0xF($a1)
    ctx->pc = 0x2aa8dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_2aa8e0:
    // 0x2aa8e0: 0x6ca80008  ldr         $t0, 0x8($a1)
    ctx->pc = 0x2aa8e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_2aa8e4:
    // 0x2aa8e4: 0x68a90017  ldl         $t1, 0x17($a1)
    ctx->pc = 0x2aa8e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_2aa8e8:
    // 0x2aa8e8: 0x6ca90010  ldr         $t1, 0x10($a1)
    ctx->pc = 0x2aa8e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2aa8ec:
    // 0x2aa8ec: 0x8caa0018  lw          $t2, 0x18($a1)
    ctx->pc = 0x2aa8ecu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_2aa8f0:
    // 0x2aa8f0: 0xb0c70007  sdl         $a3, 0x7($a2)
    ctx->pc = 0x2aa8f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2aa8f4:
    // 0x2aa8f4: 0xb4c70000  sdr         $a3, 0x0($a2)
    ctx->pc = 0x2aa8f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2aa8f8:
    // 0x2aa8f8: 0xb0c8000f  sdl         $t0, 0xF($a2)
    ctx->pc = 0x2aa8f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2aa8fc:
    // 0x2aa8fc: 0xb4c80008  sdr         $t0, 0x8($a2)
    ctx->pc = 0x2aa8fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2aa900:
    // 0x2aa900: 0xb0c90017  sdl         $t1, 0x17($a2)
    ctx->pc = 0x2aa900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2aa904:
    // 0x2aa904: 0xb4c90010  sdr         $t1, 0x10($a2)
    ctx->pc = 0x2aa904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2aa908:
    // 0x2aa908: 0x26224928  addiu       $v0, $s1, 0x4928
    ctx->pc = 0x2aa908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 18728));
label_2aa90c:
    // 0x2aa90c: 0xacca0018  sw          $t2, 0x18($a2)
    ctx->pc = 0x2aa90cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 10));
label_2aa910:
    // 0x2aa910: 0x2484a940  addiu       $a0, $a0, -0x56C0
    ctx->pc = 0x2aa910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945088));
label_2aa914:
    // 0x2aa914: 0x2463a7b8  addiu       $v1, $v1, -0x5848
    ctx->pc = 0x2aa914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944696));
label_2aa918:
    // 0x2aa918: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x2aa918u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
label_2aa91c:
    // 0x2aa91c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2aa920:
    if (ctx->pc == 0x2AA920u) {
        ctx->pc = 0x2AA920u;
            // 0x2aa920: 0xac43004c  sw          $v1, 0x4C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
        ctx->pc = 0x2AA924u;
        goto label_2aa924;
    }
    ctx->pc = 0x2AA91Cu;
    {
        const bool branch_taken_0x2aa91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA91Cu;
            // 0x2aa920: 0xac43004c  sw          $v1, 0x4C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa91c) {
            ctx->pc = 0x2AA928u;
            goto label_2aa928;
        }
    }
    ctx->pc = 0x2AA924u;
label_2aa924:
    // 0x2aa924: 0x3c1001c9  lui         $s0, 0x1C9
    ctx->pc = 0x2aa924u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)457 << 16));
label_2aa928:
    // 0x2aa928: 0x26024928  addiu       $v0, $s0, 0x4928
    ctx->pc = 0x2aa928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 18728));
label_2aa92c:
    // 0x2aa92c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2aa92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2aa930:
    // 0x2aa930: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2aa930u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2aa934:
    // 0x2aa934: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2aa934u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2aa938:
    // 0x2aa938: 0x3e00008  jr          $ra
label_2aa93c:
    if (ctx->pc == 0x2AA93Cu) {
        ctx->pc = 0x2AA93Cu;
            // 0x2aa93c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2AA940u;
        goto label_2aa940;
    }
    ctx->pc = 0x2AA938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA938u;
            // 0x2aa93c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AA940u;
label_2aa940:
    // 0x2aa940: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2aa940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2aa944:
    // 0x2aa944: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2aa944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2aa948:
    // 0x2aa948: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aa948u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2aa94c:
    // 0x2aa94c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2aa94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2aa950:
    // 0x2aa950: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2aa950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2aa954:
    // 0x2aa954: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2aa954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2aa958:
    // 0x2aa958: 0xc0a8d8a  jal         func_2A3628
label_2aa95c:
    if (ctx->pc == 0x2AA95Cu) {
        ctx->pc = 0x2AA95Cu;
            // 0x2aa95c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x2AA960u;
        goto label_2aa960;
    }
    ctx->pc = 0x2AA958u;
    SET_GPR_U32(ctx, 31, 0x2AA960u);
    ctx->pc = 0x2AA95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA958u;
            // 0x2aa95c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3628u;
    if (runtime->hasFunction(0x2A3628u)) {
        auto targetFn = runtime->lookupFunction(0x2A3628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA960u; }
        if (ctx->pc != 0x2AA960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3628_0x2a3628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA960u; }
        if (ctx->pc != 0x2AA960u) { return; }
    }
    ctx->pc = 0x2AA960u;
label_2aa960:
    // 0x2aa960: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aa960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aa964:
    // 0x2aa964: 0xc0a8d66  jal         func_2A3598
label_2aa968:
    if (ctx->pc == 0x2AA968u) {
        ctx->pc = 0x2AA968u;
            // 0x2aa968: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2AA96Cu;
        goto label_2aa96c;
    }
    ctx->pc = 0x2AA964u;
    SET_GPR_U32(ctx, 31, 0x2AA96Cu);
    ctx->pc = 0x2AA968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA964u;
            // 0x2aa968: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3598u;
    if (runtime->hasFunction(0x2A3598u)) {
        auto targetFn = runtime->lookupFunction(0x2A3598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA96Cu; }
        if (ctx->pc != 0x2AA96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3598_0x2a3598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA96Cu; }
        if (ctx->pc != 0x2AA96Cu) { return; }
    }
    ctx->pc = 0x2AA96Cu;
label_2aa96c:
    // 0x2aa96c: 0xc0a56b6  jal         func_295AD8
label_2aa970:
    if (ctx->pc == 0x2AA970u) {
        ctx->pc = 0x2AA974u;
        goto label_2aa974;
    }
    ctx->pc = 0x2AA96Cu;
    SET_GPR_U32(ctx, 31, 0x2AA974u);
    ctx->pc = 0x295AD8u;
    if (runtime->hasFunction(0x295AD8u)) {
        auto targetFn = runtime->lookupFunction(0x295AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA974u; }
        if (ctx->pc != 0x2AA974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295AD8_0x295ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA974u; }
        if (ctx->pc != 0x2AA974u) { return; }
    }
    ctx->pc = 0x2AA974u;
label_2aa974:
    // 0x2aa974: 0xc0491f2  jal         func_1247C8
label_2aa978:
    if (ctx->pc == 0x2AA978u) {
        ctx->pc = 0x2AA97Cu;
        goto label_2aa97c;
    }
    ctx->pc = 0x2AA974u;
    SET_GPR_U32(ctx, 31, 0x2AA97Cu);
    ctx->pc = 0x1247C8u;
    if (runtime->hasFunction(0x1247C8u)) {
        auto targetFn = runtime->lookupFunction(0x1247C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA97Cu; }
        if (ctx->pc != 0x2AA97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001247C8_0x1247c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA97Cu; }
        if (ctx->pc != 0x2AA97Cu) { return; }
    }
    ctx->pc = 0x2AA97Cu;
label_2aa97c:
    // 0x2aa97c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2aa97cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2aa980:
    // 0x2aa980: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x2aa980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_2aa984:
    // 0x2aa984: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2aa988:
    if (ctx->pc == 0x2AA988u) {
        ctx->pc = 0x2AA988u;
            // 0x2aa988: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA98Cu;
        goto label_2aa98c;
    }
    ctx->pc = 0x2AA984u;
    {
        const bool branch_taken_0x2aa984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA984u;
            // 0x2aa988: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa984) {
            ctx->pc = 0x2AA994u;
            goto label_2aa994;
        }
    }
    ctx->pc = 0x2AA98Cu;
label_2aa98c:
    // 0x2aa98c: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x2aa98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_2aa990:
    // 0x2aa990: 0x8c52007c  lw          $s2, 0x7C($v0)
    ctx->pc = 0x2aa990u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_2aa994:
    // 0x2aa994: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2aa994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2aa998:
    // 0x2aa998: 0x8e300030  lw          $s0, 0x30($s1)
    ctx->pc = 0x2aa998u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2aa99c:
    // 0x2aa99c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2aa99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2aa9a0:
    // 0x2aa9a0: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x2aa9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_2aa9a4:
    // 0x2aa9a4: 0x0  nop
    ctx->pc = 0x2aa9a4u;
    // NOP
label_2aa9a8:
    // 0x2aa9a8: 0x2a021042  slti        $v0, $s0, 0x1042
    ctx->pc = 0x2aa9a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4162) ? 1 : 0);
label_2aa9ac:
    // 0x2aa9ac: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_2aa9b0:
    if (ctx->pc == 0x2AA9B0u) {
        ctx->pc = 0x2AA9B0u;
            // 0x2aa9b0: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA9B4u;
        goto label_2aa9b4;
    }
    ctx->pc = 0x2AA9ACu;
    {
        const bool branch_taken_0x2aa9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA9ACu;
            // 0x2aa9b0: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa9ac) {
            ctx->pc = 0x2AAA48u;
            goto label_2aaa48;
        }
    }
    ctx->pc = 0x2AA9B4u;
label_2aa9b4:
    // 0x2aa9b4: 0x2a021040  slti        $v0, $s0, 0x1040
    ctx->pc = 0x2aa9b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4160) ? 1 : 0);
label_2aa9b8:
    // 0x2aa9b8: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
label_2aa9bc:
    if (ctx->pc == 0x2AA9BCu) {
        ctx->pc = 0x2AA9BCu;
            // 0x2aa9bc: 0x2a021012  slti        $v0, $s0, 0x1012 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4114) ? 1 : 0);
        ctx->pc = 0x2AA9C0u;
        goto label_2aa9c0;
    }
    ctx->pc = 0x2AA9B8u;
    {
        const bool branch_taken_0x2aa9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA9B8u;
            // 0x2aa9bc: 0x2a021012  slti        $v0, $s0, 0x1012 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4114) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa9b8) {
            ctx->pc = 0x2AABDCu;
            goto label_2aabdc;
        }
    }
    ctx->pc = 0x2AA9C0u;
label_2aa9c0:
    // 0x2aa9c0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2aa9c4:
    if (ctx->pc == 0x2AA9C4u) {
        ctx->pc = 0x2AA9C4u;
            // 0x2aa9c4: 0x2a021010  slti        $v0, $s0, 0x1010 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4112) ? 1 : 0);
        ctx->pc = 0x2AA9C8u;
        goto label_2aa9c8;
    }
    ctx->pc = 0x2AA9C0u;
    {
        const bool branch_taken_0x2aa9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA9C0u;
            // 0x2aa9c4: 0x2a021010  slti        $v0, $s0, 0x1010 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4112) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa9c0) {
            ctx->pc = 0x2AAA04u;
            goto label_2aaa04;
        }
    }
    ctx->pc = 0x2AA9C8u;
label_2aa9c8:
    // 0x2aa9c8: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
label_2aa9cc:
    if (ctx->pc == 0x2AA9CCu) {
        ctx->pc = 0x2AA9CCu;
            // 0x2aa9cc: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->pc = 0x2AA9D0u;
        goto label_2aa9d0;
    }
    ctx->pc = 0x2AA9C8u;
    {
        const bool branch_taken_0x2aa9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA9C8u;
            // 0x2aa9cc: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa9c8) {
            ctx->pc = 0x2AAB60u;
            goto label_2aab60;
        }
    }
    ctx->pc = 0x2AA9D0u;
label_2aa9d0:
    // 0x2aa9d0: 0x1202003d  beq         $s0, $v0, . + 4 + (0x3D << 2)
label_2aa9d4:
    if (ctx->pc == 0x2AA9D4u) {
        ctx->pc = 0x2AA9D4u;
            // 0x2aa9d4: 0x2a021001  slti        $v0, $s0, 0x1001 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4097) ? 1 : 0);
        ctx->pc = 0x2AA9D8u;
        goto label_2aa9d8;
    }
    ctx->pc = 0x2AA9D0u;
    {
        const bool branch_taken_0x2aa9d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AA9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA9D0u;
            // 0x2aa9d4: 0x2a021001  slti        $v0, $s0, 0x1001 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4097) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa9d0) {
            ctx->pc = 0x2AAAC8u;
            goto label_2aaac8;
        }
    }
    ctx->pc = 0x2AA9D8u;
label_2aa9d8:
    // 0x2aa9d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2aa9dc:
    if (ctx->pc == 0x2AA9DCu) {
        ctx->pc = 0x2AA9DCu;
            // 0x2aa9dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2AA9E0u;
        goto label_2aa9e0;
    }
    ctx->pc = 0x2AA9D8u;
    {
        const bool branch_taken_0x2aa9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA9D8u;
            // 0x2aa9dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa9d8) {
            ctx->pc = 0x2AA9F0u;
            goto label_2aa9f0;
        }
    }
    ctx->pc = 0x2AA9E0u;
label_2aa9e0:
    // 0x2aa9e0: 0x12020094  beq         $s0, $v0, . + 4 + (0x94 << 2)
label_2aa9e4:
    if (ctx->pc == 0x2AA9E4u) {
        ctx->pc = 0x2AA9E4u;
            // 0x2aa9e4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2AA9E8u;
        goto label_2aa9e8;
    }
    ctx->pc = 0x2AA9E0u;
    {
        const bool branch_taken_0x2aa9e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AA9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA9E0u;
            // 0x2aa9e4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa9e0) {
            ctx->pc = 0x2AAC34u;
            goto label_2aac34;
        }
    }
    ctx->pc = 0x2AA9E8u;
label_2aa9e8:
    // 0x2aa9e8: 0x100000af  b           . + 4 + (0xAF << 2)
label_2aa9ec:
    if (ctx->pc == 0x2AA9ECu) {
        ctx->pc = 0x2AA9ECu;
            // 0x2aa9ec: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->pc = 0x2AA9F0u;
        goto label_2aa9f0;
    }
    ctx->pc = 0x2AA9E8u;
    {
        const bool branch_taken_0x2aa9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA9E8u;
            // 0x2aa9ec: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa9e8) {
            ctx->pc = 0x2AACA8u;
            goto label_2aaca8;
        }
    }
    ctx->pc = 0x2AA9F0u;
label_2aa9f0:
    // 0x2aa9f0: 0x24021003  addiu       $v0, $zero, 0x1003
    ctx->pc = 0x2aa9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
label_2aa9f4:
    // 0x2aa9f4: 0x12020034  beq         $s0, $v0, . + 4 + (0x34 << 2)
label_2aa9f8:
    if (ctx->pc == 0x2AA9F8u) {
        ctx->pc = 0x2AA9F8u;
            // 0x2aa9f8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2AA9FCu;
        goto label_2aa9fc;
    }
    ctx->pc = 0x2AA9F4u;
    {
        const bool branch_taken_0x2aa9f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AA9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA9F4u;
            // 0x2aa9f8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa9f4) {
            ctx->pc = 0x2AAAC8u;
            goto label_2aaac8;
        }
    }
    ctx->pc = 0x2AA9FCu;
label_2aa9fc:
    // 0x2aa9fc: 0x100000aa  b           . + 4 + (0xAA << 2)
label_2aaa00:
    if (ctx->pc == 0x2AAA00u) {
        ctx->pc = 0x2AAA00u;
            // 0x2aaa00: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->pc = 0x2AAA04u;
        goto label_2aaa04;
    }
    ctx->pc = 0x2AA9FCu;
    {
        const bool branch_taken_0x2aa9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA9FCu;
            // 0x2aaa00: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa9fc) {
            ctx->pc = 0x2AACA8u;
            goto label_2aaca8;
        }
    }
    ctx->pc = 0x2AAA04u;
label_2aaa04:
    // 0x2aaa04: 0x2a021020  slti        $v0, $s0, 0x1020
    ctx->pc = 0x2aaa04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4128) ? 1 : 0);
label_2aaa08:
    // 0x2aaa08: 0x144000a6  bnez        $v0, . + 4 + (0xA6 << 2)
label_2aaa0c:
    if (ctx->pc == 0x2AAA0Cu) {
        ctx->pc = 0x2AAA0Cu;
            // 0x2aaa0c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2AAA10u;
        goto label_2aaa10;
    }
    ctx->pc = 0x2AAA08u;
    {
        const bool branch_taken_0x2aaa08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AAA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAA08u;
            // 0x2aaa0c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa08) {
            ctx->pc = 0x2AACA4u;
            goto label_2aaca4;
        }
    }
    ctx->pc = 0x2AAA10u;
label_2aaa10:
    // 0x2aaa10: 0x2a021022  slti        $v0, $s0, 0x1022
    ctx->pc = 0x2aaa10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4130) ? 1 : 0);
label_2aaa14:
    // 0x2aaa14: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
label_2aaa18:
    if (ctx->pc == 0x2AAA18u) {
        ctx->pc = 0x2AAA18u;
            // 0x2aaa18: 0x2a021032  slti        $v0, $s0, 0x1032 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4146) ? 1 : 0);
        ctx->pc = 0x2AAA1Cu;
        goto label_2aaa1c;
    }
    ctx->pc = 0x2AAA14u;
    {
        const bool branch_taken_0x2aaa14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AAA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAA14u;
            // 0x2aaa18: 0x2a021032  slti        $v0, $s0, 0x1032 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4146) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa14) {
            ctx->pc = 0x2AAB80u;
            goto label_2aab80;
        }
    }
    ctx->pc = 0x2AAA1Cu;
label_2aaa1c:
    // 0x2aaa1c: 0x104000a1  beqz        $v0, . + 4 + (0xA1 << 2)
label_2aaa20:
    if (ctx->pc == 0x2AAA20u) {
        ctx->pc = 0x2AAA20u;
            // 0x2aaa20: 0x2a021030  slti        $v0, $s0, 0x1030 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4144) ? 1 : 0);
        ctx->pc = 0x2AAA24u;
        goto label_2aaa24;
    }
    ctx->pc = 0x2AAA1Cu;
    {
        const bool branch_taken_0x2aaa1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAA1Cu;
            // 0x2aaa20: 0x2a021030  slti        $v0, $s0, 0x1030 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4144) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa1c) {
            ctx->pc = 0x2AACA4u;
            goto label_2aaca4;
        }
    }
    ctx->pc = 0x2AAA24u;
label_2aaa24:
    // 0x2aaa24: 0x144000a0  bnez        $v0, . + 4 + (0xA0 << 2)
label_2aaa28:
    if (ctx->pc == 0x2AAA28u) {
        ctx->pc = 0x2AAA28u;
            // 0x2aaa28: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->pc = 0x2AAA2Cu;
        goto label_2aaa2c;
    }
    ctx->pc = 0x2AAA24u;
    {
        const bool branch_taken_0x2aaa24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AAA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAA24u;
            // 0x2aaa28: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa24) {
            ctx->pc = 0x2AACA8u;
            goto label_2aaca8;
        }
    }
    ctx->pc = 0x2AAA2Cu;
label_2aaa2c:
    // 0x2aaa2c: 0xc0aad0c  jal         func_2AB430
label_2aaa30:
    if (ctx->pc == 0x2AAA30u) {
        ctx->pc = 0x2AAA30u;
            // 0x2aaa30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AAA34u;
        goto label_2aaa34;
    }
    ctx->pc = 0x2AAA2Cu;
    SET_GPR_U32(ctx, 31, 0x2AAA34u);
    ctx->pc = 0x2AAA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAA2Cu;
            // 0x2aaa30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB430u;
    if (runtime->hasFunction(0x2AB430u)) {
        auto targetFn = runtime->lookupFunction(0x2AB430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAA34u; }
        if (ctx->pc != 0x2AAA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB430_0x2ab430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAA34u; }
        if (ctx->pc != 0x2AAA34u) { return; }
    }
    ctx->pc = 0x2AAA34u;
label_2aaa34:
    // 0x2aaa34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aaa34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aaa38:
    // 0x2aaa38: 0x1a0000ab  blez        $s0, . + 4 + (0xAB << 2)
label_2aaa3c:
    if (ctx->pc == 0x2AAA3Cu) {
        ctx->pc = 0x2AAA3Cu;
            // 0x2aaa3c: 0x24021080  addiu       $v0, $zero, 0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4224));
        ctx->pc = 0x2AAA40u;
        goto label_2aaa40;
    }
    ctx->pc = 0x2AAA38u;
    {
        const bool branch_taken_0x2aaa38 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2AAA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAA38u;
            // 0x2aaa3c: 0x24021080  addiu       $v0, $zero, 0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa38) {
            ctx->pc = 0x2AACE8u;
            goto label_2aace8;
        }
    }
    ctx->pc = 0x2AAA40u;
label_2aaa40:
    // 0x2aaa40: 0x1000007a  b           . + 4 + (0x7A << 2)
label_2aaa44:
    if (ctx->pc == 0x2AAA44u) {
        ctx->pc = 0x2AAA44u;
            // 0x2aaa44: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->pc = 0x2AAA48u;
        goto label_2aaa48;
    }
    ctx->pc = 0x2AAA40u;
    {
        const bool branch_taken_0x2aaa40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAA40u;
            // 0x2aaa44: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa40) {
            ctx->pc = 0x2AAC2Cu;
            goto label_2aac2c;
        }
    }
    ctx->pc = 0x2AAA48u;
label_2aaa48:
    // 0x2aaa48: 0x2a021072  slti        $v0, $s0, 0x1072
    ctx->pc = 0x2aaa48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4210) ? 1 : 0);
label_2aaa4c:
    // 0x2aaa4c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2aaa50:
    if (ctx->pc == 0x2AAA50u) {
        ctx->pc = 0x2AAA50u;
            // 0x2aaa50: 0x2a021070  slti        $v0, $s0, 0x1070 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4208) ? 1 : 0);
        ctx->pc = 0x2AAA54u;
        goto label_2aaa54;
    }
    ctx->pc = 0x2AAA4Cu;
    {
        const bool branch_taken_0x2aaa4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAA4Cu;
            // 0x2aaa50: 0x2a021070  slti        $v0, $s0, 0x1070 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4208) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa4c) {
            ctx->pc = 0x2AAA90u;
            goto label_2aaa90;
        }
    }
    ctx->pc = 0x2AAA54u;
label_2aaa54:
    // 0x2aaa54: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
label_2aaa58:
    if (ctx->pc == 0x2AAA58u) {
        ctx->pc = 0x2AAA58u;
            // 0x2aaa58: 0x2a021050  slti        $v0, $s0, 0x1050 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4176) ? 1 : 0);
        ctx->pc = 0x2AAA5Cu;
        goto label_2aaa5c;
    }
    ctx->pc = 0x2AAA54u;
    {
        const bool branch_taken_0x2aaa54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAA54u;
            // 0x2aaa58: 0x2a021050  slti        $v0, $s0, 0x1050 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4176) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa54) {
            ctx->pc = 0x2AABF8u;
            goto label_2aabf8;
        }
    }
    ctx->pc = 0x2AAA5Cu;
label_2aaa5c:
    // 0x2aaa5c: 0x14400091  bnez        $v0, . + 4 + (0x91 << 2)
label_2aaa60:
    if (ctx->pc == 0x2AAA60u) {
        ctx->pc = 0x2AAA60u;
            // 0x2aaa60: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2AAA64u;
        goto label_2aaa64;
    }
    ctx->pc = 0x2AAA5Cu;
    {
        const bool branch_taken_0x2aaa5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AAA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAA5Cu;
            // 0x2aaa60: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa5c) {
            ctx->pc = 0x2AACA4u;
            goto label_2aaca4;
        }
    }
    ctx->pc = 0x2AAA64u;
label_2aaa64:
    // 0x2aaa64: 0x2a021054  slti        $v0, $s0, 0x1054
    ctx->pc = 0x2aaa64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4180) ? 1 : 0);
label_2aaa68:
    // 0x2aaa68: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
label_2aaa6c:
    if (ctx->pc == 0x2AAA6Cu) {
        ctx->pc = 0x2AAA6Cu;
            // 0x2aaa6c: 0x2a021062  slti        $v0, $s0, 0x1062 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4194) ? 1 : 0);
        ctx->pc = 0x2AAA70u;
        goto label_2aaa70;
    }
    ctx->pc = 0x2AAA68u;
    {
        const bool branch_taken_0x2aaa68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AAA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAA68u;
            // 0x2aaa6c: 0x2a021062  slti        $v0, $s0, 0x1062 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4194) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa68) {
            ctx->pc = 0x2AAC14u;
            goto label_2aac14;
        }
    }
    ctx->pc = 0x2AAA70u;
label_2aaa70:
    // 0x2aaa70: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
label_2aaa74:
    if (ctx->pc == 0x2AAA74u) {
        ctx->pc = 0x2AAA74u;
            // 0x2aaa74: 0x2a021060  slti        $v0, $s0, 0x1060 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4192) ? 1 : 0);
        ctx->pc = 0x2AAA78u;
        goto label_2aaa78;
    }
    ctx->pc = 0x2AAA70u;
    {
        const bool branch_taken_0x2aaa70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAA70u;
            // 0x2aaa74: 0x2a021060  slti        $v0, $s0, 0x1060 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4192) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa70) {
            ctx->pc = 0x2AACA4u;
            goto label_2aaca4;
        }
    }
    ctx->pc = 0x2AAA78u;
label_2aaa78:
    // 0x2aaa78: 0x1440008b  bnez        $v0, . + 4 + (0x8B << 2)
label_2aaa7c:
    if (ctx->pc == 0x2AAA7Cu) {
        ctx->pc = 0x2AAA7Cu;
            // 0x2aaa7c: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->pc = 0x2AAA80u;
        goto label_2aaa80;
    }
    ctx->pc = 0x2AAA78u;
    {
        const bool branch_taken_0x2aaa78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AAA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAA78u;
            // 0x2aaa7c: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa78) {
            ctx->pc = 0x2AACA8u;
            goto label_2aaca8;
        }
    }
    ctx->pc = 0x2AAA80u;
label_2aaa80:
    // 0x2aaa80: 0xc0aaedc  jal         func_2ABB70
label_2aaa84:
    if (ctx->pc == 0x2AAA84u) {
        ctx->pc = 0x2AAA84u;
            // 0x2aaa84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AAA88u;
        goto label_2aaa88;
    }
    ctx->pc = 0x2AAA80u;
    SET_GPR_U32(ctx, 31, 0x2AAA88u);
    ctx->pc = 0x2AAA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAA80u;
            // 0x2aaa84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ABB70u;
    if (runtime->hasFunction(0x2ABB70u)) {
        auto targetFn = runtime->lookupFunction(0x2ABB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAA88u; }
        if (ctx->pc != 0x2AAA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ABB70_0x2abb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAA88u; }
        if (ctx->pc != 0x2AAA88u) { return; }
    }
    ctx->pc = 0x2AAA88u;
label_2aaa88:
    // 0x2aaa88: 0x10000065  b           . + 4 + (0x65 << 2)
label_2aaa8c:
    if (ctx->pc == 0x2AAA8Cu) {
        ctx->pc = 0x2AAA8Cu;
            // 0x2aaa8c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AAA90u;
        goto label_2aaa90;
    }
    ctx->pc = 0x2AAA88u;
    {
        const bool branch_taken_0x2aaa88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAA88u;
            // 0x2aaa8c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa88) {
            ctx->pc = 0x2AAC20u;
            goto label_2aac20;
        }
    }
    ctx->pc = 0x2AAA90u;
label_2aaa90:
    // 0x2aaa90: 0x24021090  addiu       $v0, $zero, 0x1090
    ctx->pc = 0x2aaa90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4240));
label_2aaa94:
    // 0x2aaa94: 0x1202005f  beq         $s0, $v0, . + 4 + (0x5F << 2)
label_2aaa98:
    if (ctx->pc == 0x2AAA98u) {
        ctx->pc = 0x2AAA98u;
            // 0x2aaa98: 0x2a021091  slti        $v0, $s0, 0x1091 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4241) ? 1 : 0);
        ctx->pc = 0x2AAA9Cu;
        goto label_2aaa9c;
    }
    ctx->pc = 0x2AAA94u;
    {
        const bool branch_taken_0x2aaa94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AAA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAA94u;
            // 0x2aaa98: 0x2a021091  slti        $v0, $s0, 0x1091 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4241) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa94) {
            ctx->pc = 0x2AAC14u;
            goto label_2aac14;
        }
    }
    ctx->pc = 0x2AAA9Cu;
label_2aaa9c:
    // 0x2aaa9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2aaaa0:
    if (ctx->pc == 0x2AAAA0u) {
        ctx->pc = 0x2AAAA0u;
            // 0x2aaaa0: 0x24021080  addiu       $v0, $zero, 0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4224));
        ctx->pc = 0x2AAAA4u;
        goto label_2aaaa4;
    }
    ctx->pc = 0x2AAA9Cu;
    {
        const bool branch_taken_0x2aaa9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAA9Cu;
            // 0x2aaaa0: 0x24021080  addiu       $v0, $zero, 0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa9c) {
            ctx->pc = 0x2AAAB4u;
            goto label_2aaab4;
        }
    }
    ctx->pc = 0x2AAAA4u;
label_2aaaa4:
    // 0x2aaaa4: 0x12020044  beq         $s0, $v0, . + 4 + (0x44 << 2)
label_2aaaa8:
    if (ctx->pc == 0x2AAAA8u) {
        ctx->pc = 0x2AAAA8u;
            // 0x2aaaa8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2AAAACu;
        goto label_2aaaac;
    }
    ctx->pc = 0x2AAAA4u;
    {
        const bool branch_taken_0x2aaaa4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AAAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAAA4u;
            // 0x2aaaa8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaaa4) {
            ctx->pc = 0x2AABB8u;
            goto label_2aabb8;
        }
    }
    ctx->pc = 0x2AAAACu;
label_2aaaac:
    // 0x2aaaac: 0x1000007e  b           . + 4 + (0x7E << 2)
label_2aaab0:
    if (ctx->pc == 0x2AAAB0u) {
        ctx->pc = 0x2AAAB0u;
            // 0x2aaab0: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->pc = 0x2AAAB4u;
        goto label_2aaab4;
    }
    ctx->pc = 0x2AAAACu;
    {
        const bool branch_taken_0x2aaaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAAACu;
            // 0x2aaab0: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaaac) {
            ctx->pc = 0x2AACA8u;
            goto label_2aaca8;
        }
    }
    ctx->pc = 0x2AAAB4u;
label_2aaab4:
    // 0x2aaab4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2aaab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_2aaab8:
    // 0x2aaab8: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_2aaabc:
    if (ctx->pc == 0x2AAABCu) {
        ctx->pc = 0x2AAABCu;
            // 0x2aaabc: 0x24025000  addiu       $v0, $zero, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
        ctx->pc = 0x2AAAC0u;
        goto label_2aaac0;
    }
    ctx->pc = 0x2AAAB8u;
    {
        const bool branch_taken_0x2aaab8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AAABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAAB8u;
            // 0x2aaabc: 0x24025000  addiu       $v0, $zero, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaab8) {
            ctx->pc = 0x2AAAC8u;
            goto label_2aaac8;
        }
    }
    ctx->pc = 0x2AAAC0u;
label_2aaac0:
    // 0x2aaac0: 0x16020078  bne         $s0, $v0, . + 4 + (0x78 << 2)
label_2aaac4:
    if (ctx->pc == 0x2AAAC4u) {
        ctx->pc = 0x2AAAC4u;
            // 0x2aaac4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2AAAC8u;
        goto label_2aaac8;
    }
    ctx->pc = 0x2AAAC0u;
    {
        const bool branch_taken_0x2aaac0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AAAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAAC0u;
            // 0x2aaac4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaac0) {
            ctx->pc = 0x2AACA4u;
            goto label_2aaca4;
        }
    }
    ctx->pc = 0x2AAAC8u;
label_2aaac8:
    // 0x2aaac8: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_2aaacc:
    if (ctx->pc == 0x2AAACCu) {
        ctx->pc = 0x2AAACCu;
            // 0x2aaacc: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x2AAAD0u;
        goto label_2aaad0;
    }
    ctx->pc = 0x2AAAC8u;
    {
        const bool branch_taken_0x2aaac8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAAC8u;
            // 0x2aaacc: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaac8) {
            ctx->pc = 0x2AAAE0u;
            goto label_2aaae0;
        }
    }
    ctx->pc = 0x2AAAD0u;
label_2aaad0:
    // 0x2aaad0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aaad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aaad4:
    // 0x2aaad4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2aaad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2aaad8:
    // 0x2aaad8: 0x240f809  jalr        $s2
label_2aaadc:
    if (ctx->pc == 0x2AAADCu) {
        ctx->pc = 0x2AAADCu;
            // 0x2aaadc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2AAAE0u;
        goto label_2aaae0;
    }
    ctx->pc = 0x2AAAD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x2AAAE0u);
        ctx->pc = 0x2AAADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAAD8u;
            // 0x2aaadc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AAAE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AAAE0u; }
            if (ctx->pc != 0x2AAAE0u) { return; }
        }
        }
    }
    ctx->pc = 0x2AAAE0u;
label_2aaae0:
    // 0x2aaae0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2aaae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2aaae4:
    // 0x2aaae4: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x2aaae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_2aaae8:
    // 0x2aaae8: 0x8e30003c  lw          $s0, 0x3C($s1)
    ctx->pc = 0x2aaae8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2aaaec:
    // 0x2aaaec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2aaaecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2aaaf0:
    // 0x2aaaf0: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_2aaaf4:
    if (ctx->pc == 0x2AAAF4u) {
        ctx->pc = 0x2AAAF4u;
            // 0x2aaaf4: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x2AAAF8u;
        goto label_2aaaf8;
    }
    ctx->pc = 0x2AAAF0u;
    {
        const bool branch_taken_0x2aaaf0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AAAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAAF0u;
            // 0x2aaaf4: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaaf0) {
            ctx->pc = 0x2AAB0Cu;
            goto label_2aab0c;
        }
    }
    ctx->pc = 0x2AAAF8u;
label_2aaaf8:
    // 0x2aaaf8: 0xc0a32b4  jal         func_28CAD0
label_2aaafc:
    if (ctx->pc == 0x2AAAFCu) {
        ctx->pc = 0x2AAB00u;
        goto label_2aab00;
    }
    ctx->pc = 0x2AAAF8u;
    SET_GPR_U32(ctx, 31, 0x2AAB00u);
    ctx->pc = 0x28CAD0u;
    if (runtime->hasFunction(0x28CAD0u)) {
        auto targetFn = runtime->lookupFunction(0x28CAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAB00u; }
        if (ctx->pc != 0x2AAB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CAD0_0x28cad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAB00u; }
        if (ctx->pc != 0x2AAB00u) { return; }
    }
    ctx->pc = 0x2AAB00u;
label_2aab00:
    // 0x2aab00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aab00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aab04:
    // 0x2aab04: 0x52000078  beql        $s0, $zero, . + 4 + (0x78 << 2)
label_2aab08:
    if (ctx->pc == 0x2AAB08u) {
        ctx->pc = 0x2AAB08u;
            // 0x2aab08: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2AAB0Cu;
        goto label_2aab0c;
    }
    ctx->pc = 0x2AAB04u;
    {
        const bool branch_taken_0x2aab04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aab04) {
            ctx->pc = 0x2AAB08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAB04u;
            // 0x2aab08: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AACE8u;
            goto label_2aace8;
        }
    }
    ctx->pc = 0x2AAB0Cu;
label_2aab0c:
    // 0x2aab0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aab0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2aab10:
    // 0x2aab10: 0xc0a32e0  jal         func_28CB80
label_2aab14:
    if (ctx->pc == 0x2AAB14u) {
        ctx->pc = 0x2AAB14u;
            // 0x2aab14: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x2AAB18u;
        goto label_2aab18;
    }
    ctx->pc = 0x2AAB10u;
    SET_GPR_U32(ctx, 31, 0x2AAB18u);
    ctx->pc = 0x2AAB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAB10u;
            // 0x2aab14: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CB80u;
    if (runtime->hasFunction(0x28CB80u)) {
        auto targetFn = runtime->lookupFunction(0x28CB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAB18u; }
        if (ctx->pc != 0x2AAB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CB80_0x28cb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAB18u; }
        if (ctx->pc != 0x2AAB18u) { return; }
    }
    ctx->pc = 0x2AAB18u;
label_2aab18:
    // 0x2aab18: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2aab1c:
    if (ctx->pc == 0x2AAB1Cu) {
        ctx->pc = 0x2AAB1Cu;
            // 0x2aab1c: 0x24021010  addiu       $v0, $zero, 0x1010 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4112));
        ctx->pc = 0x2AAB20u;
        goto label_2aab20;
    }
    ctx->pc = 0x2AAB18u;
    {
        const bool branch_taken_0x2aab18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAB18u;
            // 0x2aab1c: 0x24021010  addiu       $v0, $zero, 0x1010 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aab18) {
            ctx->pc = 0x2AAB58u;
            goto label_2aab58;
        }
    }
    ctx->pc = 0x2AAB20u;
label_2aab20:
    // 0x2aab20: 0xae30003c  sw          $s0, 0x3C($s1)
    ctx->pc = 0x2aab20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 16));
label_2aab24:
    // 0x2aab24: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x2aab24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_2aab28:
    // 0x2aab28: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x2aab28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
label_2aab2c:
    // 0x2aab2c: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x2aab2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_2aab30:
    // 0x2aab30: 0x24630218  addiu       $v1, $v1, 0x218
    ctx->pc = 0x2aab30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 536));
label_2aab34:
    // 0x2aab34: 0x8e2500dc  lw          $a1, 0xDC($s1)
    ctx->pc = 0x2aab34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_2aab38:
    // 0x2aab38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aab38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aab3c:
    // 0x2aab3c: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x2aab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_2aab40:
    // 0x2aab40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2aab40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2aab44:
    // 0x2aab44: 0xaca2004c  sw          $v0, 0x4C($a1)
    ctx->pc = 0x2aab44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 2));
label_2aab48:
    // 0x2aab48: 0xc0ab2a0  jal         func_2ACA80
label_2aab4c:
    if (ctx->pc == 0x2AAB4Cu) {
        ctx->pc = 0x2AAB4Cu;
            // 0x2aab4c: 0xae230020  sw          $v1, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
        ctx->pc = 0x2AAB50u;
        goto label_2aab50;
    }
    ctx->pc = 0x2AAB48u;
    SET_GPR_U32(ctx, 31, 0x2AAB50u);
    ctx->pc = 0x2AAB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAB48u;
            // 0x2aab4c: 0xae230020  sw          $v1, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACA80u;
    if (runtime->hasFunction(0x2ACA80u)) {
        auto targetFn = runtime->lookupFunction(0x2ACA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAB50u; }
        if (ctx->pc != 0x2AAB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACA80_0x2aca80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAB50u; }
        if (ctx->pc != 0x2AAB50u) { return; }
    }
    ctx->pc = 0x2AAB50u;
label_2aab50:
    // 0x2aab50: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
label_2aab54:
    if (ctx->pc == 0x2AAB54u) {
        ctx->pc = 0x2AAB58u;
        goto label_2aab58;
    }
    ctx->pc = 0x2AAB50u;
    {
        const bool branch_taken_0x2aab50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aab50) {
            ctx->pc = 0x2AACC0u;
            goto label_2aacc0;
        }
    }
    ctx->pc = 0x2AAB58u;
label_2aab58:
    // 0x2aab58: 0x10000063  b           . + 4 + (0x63 << 2)
label_2aab5c:
    if (ctx->pc == 0x2AAB5Cu) {
        ctx->pc = 0x2AAB5Cu;
            // 0x2aab5c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2AAB60u;
        goto label_2aab60;
    }
    ctx->pc = 0x2AAB58u;
    {
        const bool branch_taken_0x2aab58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAB58u;
            // 0x2aab5c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aab58) {
            ctx->pc = 0x2AACE8u;
            goto label_2aace8;
        }
    }
    ctx->pc = 0x2AAB60u;
label_2aab60:
    // 0x2aab60: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x2aab60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_2aab64:
    // 0x2aab64: 0xc0aac82  jal         func_2AB208
label_2aab68:
    if (ctx->pc == 0x2AAB68u) {
        ctx->pc = 0x2AAB68u;
            // 0x2aab68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AAB6Cu;
        goto label_2aab6c;
    }
    ctx->pc = 0x2AAB64u;
    SET_GPR_U32(ctx, 31, 0x2AAB6Cu);
    ctx->pc = 0x2AAB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAB64u;
            // 0x2aab68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB208u;
    if (runtime->hasFunction(0x2AB208u)) {
        auto targetFn = runtime->lookupFunction(0x2AB208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAB6Cu; }
        if (ctx->pc != 0x2AAB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB208_0x2ab208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAB6Cu; }
        if (ctx->pc != 0x2AAB6Cu) { return; }
    }
    ctx->pc = 0x2AAB6Cu;
label_2aab6c:
    // 0x2aab6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aab6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aab70:
    // 0x2aab70: 0x1a00005d  blez        $s0, . + 4 + (0x5D << 2)
label_2aab74:
    if (ctx->pc == 0x2AAB74u) {
        ctx->pc = 0x2AAB74u;
            // 0x2aab74: 0x24021020  addiu       $v0, $zero, 0x1020 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4128));
        ctx->pc = 0x2AAB78u;
        goto label_2aab78;
    }
    ctx->pc = 0x2AAB70u;
    {
        const bool branch_taken_0x2aab70 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2AAB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAB70u;
            // 0x2aab74: 0x24021020  addiu       $v0, $zero, 0x1020 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aab70) {
            ctx->pc = 0x2AACE8u;
            goto label_2aace8;
        }
    }
    ctx->pc = 0x2AAB78u;
label_2aab78:
    // 0x2aab78: 0x1000002c  b           . + 4 + (0x2C << 2)
label_2aab7c:
    if (ctx->pc == 0x2AAB7Cu) {
        ctx->pc = 0x2AAB7Cu;
            // 0x2aab7c: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->pc = 0x2AAB80u;
        goto label_2aab80;
    }
    ctx->pc = 0x2AAB78u;
    {
        const bool branch_taken_0x2aab78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAB78u;
            // 0x2aab7c: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aab78) {
            ctx->pc = 0x2AAC2Cu;
            goto label_2aac2c;
        }
    }
    ctx->pc = 0x2AAB80u;
label_2aab80:
    // 0x2aab80: 0xc0aab4a  jal         func_2AAD28
label_2aab84:
    if (ctx->pc == 0x2AAB84u) {
        ctx->pc = 0x2AAB84u;
            // 0x2aab84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AAB88u;
        goto label_2aab88;
    }
    ctx->pc = 0x2AAB80u;
    SET_GPR_U32(ctx, 31, 0x2AAB88u);
    ctx->pc = 0x2AAB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAB80u;
            // 0x2aab84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AAD28u;
    if (runtime->hasFunction(0x2AAD28u)) {
        auto targetFn = runtime->lookupFunction(0x2AAD28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAB88u; }
        if (ctx->pc != 0x2AAB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AAD28_0x2aad28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAB88u; }
        if (ctx->pc != 0x2AAB88u) { return; }
    }
    ctx->pc = 0x2AAB88u;
label_2aab88:
    // 0x2aab88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aab88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aab8c:
    // 0x2aab8c: 0x5a000057  blezl       $s0, . + 4 + (0x57 << 2)
label_2aab90:
    if (ctx->pc == 0x2AAB90u) {
        ctx->pc = 0x2AAB90u;
            // 0x2aab90: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x2AAB94u;
        goto label_2aab94;
    }
    ctx->pc = 0x2AAB8Cu;
    {
        const bool branch_taken_0x2aab8c = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2aab8c) {
            ctx->pc = 0x2AAB90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAB8Cu;
            // 0x2aab90: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AACECu;
            goto label_2aacec;
        }
    }
    ctx->pc = 0x2AAB94u;
label_2aab94:
    // 0x2aab94: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x2aab94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2aab98:
    // 0x2aab98: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2aab9c:
    if (ctx->pc == 0x2AAB9Cu) {
        ctx->pc = 0x2AAB9Cu;
            // 0x2aab9c: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->pc = 0x2AABA0u;
        goto label_2aaba0;
    }
    ctx->pc = 0x2AAB98u;
    {
        const bool branch_taken_0x2aab98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AAB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAB98u;
            // 0x2aab9c: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aab98) {
            ctx->pc = 0x2AABACu;
            goto label_2aabac;
        }
    }
    ctx->pc = 0x2AABA0u;
label_2aaba0:
    // 0x2aaba0: 0x24021030  addiu       $v0, $zero, 0x1030
    ctx->pc = 0x2aaba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4144));
label_2aaba4:
    // 0x2aaba4: 0x10000046  b           . + 4 + (0x46 << 2)
label_2aaba8:
    if (ctx->pc == 0x2AABA8u) {
        ctx->pc = 0x2AABA8u;
            // 0x2aaba8: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->pc = 0x2AABACu;
        goto label_2aabac;
    }
    ctx->pc = 0x2AABA4u;
    {
        const bool branch_taken_0x2aaba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AABA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AABA4u;
            // 0x2aaba8: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaba4) {
            ctx->pc = 0x2AACC0u;
            goto label_2aacc0;
        }
    }
    ctx->pc = 0x2AABACu;
label_2aabac:
    // 0x2aabac: 0x24021080  addiu       $v0, $zero, 0x1080
    ctx->pc = 0x2aabacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4224));
label_2aabb0:
    // 0x2aabb0: 0x10000043  b           . + 4 + (0x43 << 2)
label_2aabb4:
    if (ctx->pc == 0x2AABB4u) {
        ctx->pc = 0x2AABB4u;
            // 0x2aabb4: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->pc = 0x2AABB8u;
        goto label_2aabb8;
    }
    ctx->pc = 0x2AABB0u;
    {
        const bool branch_taken_0x2aabb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AABB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AABB0u;
            // 0x2aabb4: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aabb0) {
            ctx->pc = 0x2AACC0u;
            goto label_2aacc0;
        }
    }
    ctx->pc = 0x2AABB8u;
label_2aabb8:
    // 0x2aabb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aabb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aabbc:
    // 0x2aabbc: 0xc0ab084  jal         func_2AC210
label_2aabc0:
    if (ctx->pc == 0x2AABC0u) {
        ctx->pc = 0x2AABC0u;
            // 0x2aabc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2AABC4u;
        goto label_2aabc4;
    }
    ctx->pc = 0x2AABBCu;
    SET_GPR_U32(ctx, 31, 0x2AABC4u);
    ctx->pc = 0x2AABC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AABBCu;
            // 0x2aabc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AC210u;
    if (runtime->hasFunction(0x2AC210u)) {
        auto targetFn = runtime->lookupFunction(0x2AC210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AABC4u; }
        if (ctx->pc != 0x2AABC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AC210_0x2ac210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AABC4u; }
        if (ctx->pc != 0x2AABC4u) { return; }
    }
    ctx->pc = 0x2AABC4u;
label_2aabc4:
    // 0x2aabc4: 0x1040ffe4  beqz        $v0, . + 4 + (-0x1C << 2)
label_2aabc8:
    if (ctx->pc == 0x2AABC8u) {
        ctx->pc = 0x2AABC8u;
            // 0x2aabc8: 0x24031040  addiu       $v1, $zero, 0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4160));
        ctx->pc = 0x2AABCCu;
        goto label_2aabcc;
    }
    ctx->pc = 0x2AABC4u;
    {
        const bool branch_taken_0x2aabc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AABC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AABC4u;
            // 0x2aabc8: 0x24031040  addiu       $v1, $zero, 0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aabc4) {
            ctx->pc = 0x2AAB58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2aab58;
        }
    }
    ctx->pc = 0x2AABCCu;
label_2aabcc:
    // 0x2aabcc: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2aabccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2aabd0:
    // 0x2aabd0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2aabd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2aabd4:
    // 0x2aabd4: 0x1000003a  b           . + 4 + (0x3A << 2)
label_2aabd8:
    if (ctx->pc == 0x2AABD8u) {
        ctx->pc = 0x2AABD8u;
            // 0x2aabd8: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->pc = 0x2AABDCu;
        goto label_2aabdc;
    }
    ctx->pc = 0x2AABD4u;
    {
        const bool branch_taken_0x2aabd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AABD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AABD4u;
            // 0x2aabd8: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aabd4) {
            ctx->pc = 0x2AACC0u;
            goto label_2aacc0;
        }
    }
    ctx->pc = 0x2AABDCu;
label_2aabdc:
    // 0x2aabdc: 0xc0aadaa  jal         func_2AB6A8
label_2aabe0:
    if (ctx->pc == 0x2AABE0u) {
        ctx->pc = 0x2AABE0u;
            // 0x2aabe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AABE4u;
        goto label_2aabe4;
    }
    ctx->pc = 0x2AABDCu;
    SET_GPR_U32(ctx, 31, 0x2AABE4u);
    ctx->pc = 0x2AABE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AABDCu;
            // 0x2aabe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB6A8u;
    if (runtime->hasFunction(0x2AB6A8u)) {
        auto targetFn = runtime->lookupFunction(0x2AB6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AABE4u; }
        if (ctx->pc != 0x2AABE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB6A8_0x2ab6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AABE4u; }
        if (ctx->pc != 0x2AABE4u) { return; }
    }
    ctx->pc = 0x2AABE4u;
label_2aabe4:
    // 0x2aabe4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aabe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aabe8:
    // 0x2aabe8: 0x1a00003f  blez        $s0, . + 4 + (0x3F << 2)
label_2aabec:
    if (ctx->pc == 0x2AABECu) {
        ctx->pc = 0x2AABECu;
            // 0x2aabec: 0x24021060  addiu       $v0, $zero, 0x1060 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4192));
        ctx->pc = 0x2AABF0u;
        goto label_2aabf0;
    }
    ctx->pc = 0x2AABE8u;
    {
        const bool branch_taken_0x2aabe8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2AABECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AABE8u;
            // 0x2aabec: 0x24021060  addiu       $v0, $zero, 0x1060 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aabe8) {
            ctx->pc = 0x2AACE8u;
            goto label_2aace8;
        }
    }
    ctx->pc = 0x2AABF0u;
label_2aabf0:
    // 0x2aabf0: 0x1000000e  b           . + 4 + (0xE << 2)
label_2aabf4:
    if (ctx->pc == 0x2AABF4u) {
        ctx->pc = 0x2AABF4u;
            // 0x2aabf4: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->pc = 0x2AABF8u;
        goto label_2aabf8;
    }
    ctx->pc = 0x2AABF0u;
    {
        const bool branch_taken_0x2aabf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AABF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AABF0u;
            // 0x2aabf4: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aabf0) {
            ctx->pc = 0x2AAC2Cu;
            goto label_2aac2c;
        }
    }
    ctx->pc = 0x2AABF8u;
label_2aabf8:
    // 0x2aabf8: 0xc0aaf34  jal         func_2ABCD0
label_2aabfc:
    if (ctx->pc == 0x2AABFCu) {
        ctx->pc = 0x2AABFCu;
            // 0x2aabfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AAC00u;
        goto label_2aac00;
    }
    ctx->pc = 0x2AABF8u;
    SET_GPR_U32(ctx, 31, 0x2AAC00u);
    ctx->pc = 0x2AABFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AABF8u;
            // 0x2aabfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ABCD0u;
    if (runtime->hasFunction(0x2ABCD0u)) {
        auto targetFn = runtime->lookupFunction(0x2ABCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAC00u; }
        if (ctx->pc != 0x2AAC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ABCD0_0x2abcd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAC00u; }
        if (ctx->pc != 0x2AAC00u) { return; }
    }
    ctx->pc = 0x2AAC00u;
label_2aac00:
    // 0x2aac00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aac00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aac04:
    // 0x2aac04: 0x5a000039  blezl       $s0, . + 4 + (0x39 << 2)
label_2aac08:
    if (ctx->pc == 0x2AAC08u) {
        ctx->pc = 0x2AAC08u;
            // 0x2aac08: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x2AAC0Cu;
        goto label_2aac0c;
    }
    ctx->pc = 0x2AAC04u;
    {
        const bool branch_taken_0x2aac04 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2aac04) {
            ctx->pc = 0x2AAC08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAC04u;
            // 0x2aac08: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AACECu;
            goto label_2aacec;
        }
    }
    ctx->pc = 0x2AAC0Cu;
label_2aac0c:
    // 0x2aac0c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_2aac10:
    if (ctx->pc == 0x2AAC10u) {
        ctx->pc = 0x2AAC14u;
        goto label_2aac14;
    }
    ctx->pc = 0x2AAC0Cu;
    {
        const bool branch_taken_0x2aac0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aac0c) {
            ctx->pc = 0x2AACC0u;
            goto label_2aacc0;
        }
    }
    ctx->pc = 0x2AAC14u;
label_2aac14:
    // 0x2aac14: 0xc0aadc8  jal         func_2AB720
label_2aac18:
    if (ctx->pc == 0x2AAC18u) {
        ctx->pc = 0x2AAC18u;
            // 0x2aac18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AAC1Cu;
        goto label_2aac1c;
    }
    ctx->pc = 0x2AAC14u;
    SET_GPR_U32(ctx, 31, 0x2AAC1Cu);
    ctx->pc = 0x2AAC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAC14u;
            // 0x2aac18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB720u;
    if (runtime->hasFunction(0x2AB720u)) {
        auto targetFn = runtime->lookupFunction(0x2AB720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAC1Cu; }
        if (ctx->pc != 0x2AAC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB720_0x2ab720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAC1Cu; }
        if (ctx->pc != 0x2AAC1Cu) { return; }
    }
    ctx->pc = 0x2AAC1Cu;
label_2aac1c:
    // 0x2aac1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aac1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aac20:
    // 0x2aac20: 0x1a000031  blez        $s0, . + 4 + (0x31 << 2)
label_2aac24:
    if (ctx->pc == 0x2AAC24u) {
        ctx->pc = 0x2AAC24u;
            // 0x2aac24: 0x24021070  addiu       $v0, $zero, 0x1070 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4208));
        ctx->pc = 0x2AAC28u;
        goto label_2aac28;
    }
    ctx->pc = 0x2AAC20u;
    {
        const bool branch_taken_0x2aac20 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2AAC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAC20u;
            // 0x2aac24: 0x24021070  addiu       $v0, $zero, 0x1070 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aac20) {
            ctx->pc = 0x2AACE8u;
            goto label_2aace8;
        }
    }
    ctx->pc = 0x2AAC28u;
label_2aac28:
    // 0x2aac28: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x2aac28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_2aac2c:
    // 0x2aac2c: 0x10000024  b           . + 4 + (0x24 << 2)
label_2aac30:
    if (ctx->pc == 0x2AAC30u) {
        ctx->pc = 0x2AAC30u;
            // 0x2aac30: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->pc = 0x2AAC34u;
        goto label_2aac34;
    }
    ctx->pc = 0x2AAC2Cu;
    {
        const bool branch_taken_0x2aac2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAC2Cu;
            // 0x2aac30: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aac2c) {
            ctx->pc = 0x2AACC0u;
            goto label_2aacc0;
        }
    }
    ctx->pc = 0x2AAC34u;
label_2aac34:
    // 0x2aac34: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x2aac34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2aac38:
    // 0x2aac38: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2aac3c:
    if (ctx->pc == 0x2AAC3Cu) {
        ctx->pc = 0x2AAC3Cu;
            // 0x2aac3c: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->pc = 0x2AAC40u;
        goto label_2aac40;
    }
    ctx->pc = 0x2AAC38u;
    {
        const bool branch_taken_0x2aac38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aac38) {
            ctx->pc = 0x2AAC3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAC38u;
            // 0x2aac3c: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AAC50u;
            goto label_2aac50;
        }
    }
    ctx->pc = 0x2AAC40u;
label_2aac40:
    // 0x2aac40: 0xc0a32ca  jal         func_28CB28
label_2aac44:
    if (ctx->pc == 0x2AAC44u) {
        ctx->pc = 0x2AAC48u;
        goto label_2aac48;
    }
    ctx->pc = 0x2AAC40u;
    SET_GPR_U32(ctx, 31, 0x2AAC48u);
    ctx->pc = 0x28CB28u;
    if (runtime->hasFunction(0x28CB28u)) {
        auto targetFn = runtime->lookupFunction(0x28CB28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAC48u; }
        if (ctx->pc != 0x2AAC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CB28_0x28cb28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAC48u; }
        if (ctx->pc != 0x2AAC48u) { return; }
    }
    ctx->pc = 0x2AAC48u;
label_2aac48:
    // 0x2aac48: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x2aac48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_2aac4c:
    // 0x2aac4c: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x2aac4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_2aac50:
    // 0x2aac50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aac50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aac54:
    // 0x2aac54: 0xc0ac436  jal         func_2B10D8
label_2aac58:
    if (ctx->pc == 0x2AAC58u) {
        ctx->pc = 0x2AAC58u;
            // 0x2aac58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2AAC5Cu;
        goto label_2aac5c;
    }
    ctx->pc = 0x2AAC54u;
    SET_GPR_U32(ctx, 31, 0x2AAC5Cu);
    ctx->pc = 0x2AAC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAC54u;
            // 0x2aac58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B10D8u;
    if (runtime->hasFunction(0x2B10D8u)) {
        auto targetFn = runtime->lookupFunction(0x2B10D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAC5Cu; }
        if (ctx->pc != 0x2AAC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B10D8_0x2b10d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAC5Cu; }
        if (ctx->pc != 0x2AAC5Cu) { return; }
    }
    ctx->pc = 0x2AAC5Cu;
label_2aac5c:
    // 0x2aac5c: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x2aac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2aac60:
    // 0x2aac60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2aac64:
    if (ctx->pc == 0x2AAC64u) {
        ctx->pc = 0x2AAC64u;
            // 0x2aac64: 0x8e2300dc  lw          $v1, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->pc = 0x2AAC68u;
        goto label_2aac68;
    }
    ctx->pc = 0x2AAC60u;
    {
        const bool branch_taken_0x2aac60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAC60u;
            // 0x2aac64: 0x8e2300dc  lw          $v1, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aac60) {
            ctx->pc = 0x2AAC78u;
            goto label_2aac78;
        }
    }
    ctx->pc = 0x2AAC68u;
label_2aac68:
    // 0x2aac68: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x2aac68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_2aac6c:
    // 0x2aac6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2aac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2aac70:
    // 0x2aac70: 0xac620070  sw          $v0, 0x70($v1)
    ctx->pc = 0x2aac70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 2));
label_2aac74:
    // 0x2aac74: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x2aac74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_2aac78:
    // 0x2aac78: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2aac78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aac7c:
    // 0x2aac7c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2aac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2aac80:
    // 0x2aac80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2aac80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2aac84:
    // 0x2aac84: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
label_2aac88:
    if (ctx->pc == 0x2AAC88u) {
        ctx->pc = 0x2AAC88u;
            // 0x2aac88: 0xac620054  sw          $v0, 0x54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x2AAC8Cu;
        goto label_2aac8c;
    }
    ctx->pc = 0x2AAC84u;
    {
        const bool branch_taken_0x2aac84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAC84u;
            // 0x2aac88: 0xac620054  sw          $v0, 0x54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aac84) {
            ctx->pc = 0x2AACE8u;
            goto label_2aace8;
        }
    }
    ctx->pc = 0x2AAC8Cu;
label_2aac8c:
    // 0x2aac8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aac8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aac90:
    // 0x2aac90: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2aac90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2aac94:
    // 0x2aac94: 0x240f809  jalr        $s2
label_2aac98:
    if (ctx->pc == 0x2AAC98u) {
        ctx->pc = 0x2AAC98u;
            // 0x2aac98: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2AAC9Cu;
        goto label_2aac9c;
    }
    ctx->pc = 0x2AAC94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x2AAC9Cu);
        ctx->pc = 0x2AAC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAC94u;
            // 0x2aac98: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AAC9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AAC9Cu; }
            if (ctx->pc != 0x2AAC9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2AAC9Cu;
label_2aac9c:
    // 0x2aac9c: 0x10000013  b           . + 4 + (0x13 << 2)
label_2aaca0:
    if (ctx->pc == 0x2AACA0u) {
        ctx->pc = 0x2AACA0u;
            // 0x2aaca0: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x2AACA4u;
        goto label_2aaca4;
    }
    ctx->pc = 0x2AAC9Cu;
    {
        const bool branch_taken_0x2aac9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AACA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAC9Cu;
            // 0x2aaca0: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aac9c) {
            ctx->pc = 0x2AACECu;
            goto label_2aacec;
        }
    }
    ctx->pc = 0x2AACA4u;
label_2aaca4:
    // 0x2aaca4: 0x2405007b  addiu       $a1, $zero, 0x7B
    ctx->pc = 0x2aaca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
label_2aaca8:
    // 0x2aaca8: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2aaca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2aacac:
    // 0x2aacac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2aacacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aacb0:
    // 0x2aacb0: 0xc0a5648  jal         func_295920
label_2aacb4:
    if (ctx->pc == 0x2AACB4u) {
        ctx->pc = 0x2AACB4u;
            // 0x2aacb4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AACB8u;
        goto label_2aacb8;
    }
    ctx->pc = 0x2AACB0u;
    SET_GPR_U32(ctx, 31, 0x2AACB8u);
    ctx->pc = 0x2AACB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AACB0u;
            // 0x2aacb4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AACB8u; }
        if (ctx->pc != 0x2AACB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AACB8u; }
        if (ctx->pc != 0x2AACB8u) { return; }
    }
    ctx->pc = 0x2AACB8u;
label_2aacb8:
    // 0x2aacb8: 0x10000014  b           . + 4 + (0x14 << 2)
label_2aacbc:
    if (ctx->pc == 0x2AACBCu) {
        ctx->pc = 0x2AACBCu;
            // 0x2aacbc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2AACC0u;
        goto label_2aacc0;
    }
    ctx->pc = 0x2AACB8u;
    {
        const bool branch_taken_0x2aacb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AACBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AACB8u;
            // 0x2aacbc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aacb8) {
            ctx->pc = 0x2AAD0Cu;
            goto label_2aad0c;
        }
    }
    ctx->pc = 0x2AACC0u;
label_2aacc0:
    // 0x2aacc0: 0x1240ff39  beqz        $s2, . + 4 + (-0xC7 << 2)
label_2aacc4:
    if (ctx->pc == 0x2AACC4u) {
        ctx->pc = 0x2AACC4u;
            // 0x2aacc4: 0x8e300030  lw          $s0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->pc = 0x2AACC8u;
        goto label_2aacc8;
    }
    ctx->pc = 0x2AACC0u;
    {
        const bool branch_taken_0x2aacc0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AACC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AACC0u;
            // 0x2aacc4: 0x8e300030  lw          $s0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aacc0) {
            ctx->pc = 0x2AA9A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2aa9a8;
        }
    }
    ctx->pc = 0x2AACC8u;
label_2aacc8:
    // 0x2aacc8: 0x1213ff37  beq         $s0, $s3, . + 4 + (-0xC9 << 2)
label_2aaccc:
    if (ctx->pc == 0x2AACCCu) {
        ctx->pc = 0x2AACCCu;
            // 0x2aaccc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AACD0u;
        goto label_2aacd0;
    }
    ctx->pc = 0x2AACC8u;
    {
        const bool branch_taken_0x2aacc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x2AACCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AACC8u;
            // 0x2aaccc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aacc8) {
            ctx->pc = 0x2AA9A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2aa9a8;
        }
    }
    ctx->pc = 0x2AACD0u;
label_2aacd0:
    // 0x2aacd0: 0xae330030  sw          $s3, 0x30($s1)
    ctx->pc = 0x2aacd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 19));
label_2aacd4:
    // 0x2aacd4: 0x24051001  addiu       $a1, $zero, 0x1001
    ctx->pc = 0x2aacd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
label_2aacd8:
    // 0x2aacd8: 0x240f809  jalr        $s2
label_2aacdc:
    if (ctx->pc == 0x2AACDCu) {
        ctx->pc = 0x2AACDCu;
            // 0x2aacdc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2AACE0u;
        goto label_2aace0;
    }
    ctx->pc = 0x2AACD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x2AACE0u);
        ctx->pc = 0x2AACDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AACD8u;
            // 0x2aacdc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AACE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AACE0u; }
            if (ctx->pc != 0x2AACE0u) { return; }
        }
        }
    }
    ctx->pc = 0x2AACE0u;
label_2aace0:
    // 0x2aace0: 0x1000ff31  b           . + 4 + (-0xCF << 2)
label_2aace4:
    if (ctx->pc == 0x2AACE4u) {
        ctx->pc = 0x2AACE4u;
            // 0x2aace4: 0xae300030  sw          $s0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 16));
        ctx->pc = 0x2AACE8u;
        goto label_2aace8;
    }
    ctx->pc = 0x2AACE0u;
    {
        const bool branch_taken_0x2aace0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AACE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AACE0u;
            // 0x2aace4: 0xae300030  sw          $s0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aace0) {
            ctx->pc = 0x2AA9A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2aa9a8;
        }
    }
    ctx->pc = 0x2AACE8u;
label_2aace8:
    // 0x2aace8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2aace8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2aacec:
    // 0x2aacec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2aacecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2aacf0:
    // 0x2aacf0: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_2aacf4:
    if (ctx->pc == 0x2AACF4u) {
        ctx->pc = 0x2AACF4u;
            // 0x2aacf4: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->pc = 0x2AACF8u;
        goto label_2aacf8;
    }
    ctx->pc = 0x2AACF0u;
    {
        const bool branch_taken_0x2aacf0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AACF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AACF0u;
            // 0x2aacf4: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aacf0) {
            ctx->pc = 0x2AAD08u;
            goto label_2aad08;
        }
    }
    ctx->pc = 0x2AACF8u;
label_2aacf8:
    // 0x2aacf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aacf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aacfc:
    // 0x2aacfc: 0x24051002  addiu       $a1, $zero, 0x1002
    ctx->pc = 0x2aacfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4098));
label_2aad00:
    // 0x2aad00: 0x240f809  jalr        $s2
label_2aad04:
    if (ctx->pc == 0x2AAD04u) {
        ctx->pc = 0x2AAD04u;
            // 0x2aad04: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AAD08u;
        goto label_2aad08;
    }
    ctx->pc = 0x2AAD00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x2AAD08u);
        ctx->pc = 0x2AAD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAD00u;
            // 0x2aad04: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AAD08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AAD08u; }
            if (ctx->pc != 0x2AAD08u) { return; }
        }
        }
    }
    ctx->pc = 0x2AAD08u;
label_2aad08:
    // 0x2aad08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2aad08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2aad0c:
    // 0x2aad0c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2aad0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2aad10:
    // 0x2aad10: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2aad10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2aad14:
    // 0x2aad14: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2aad14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2aad18:
    // 0x2aad18: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2aad18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2aad1c:
    // 0x2aad1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2aad1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2aad20:
    // 0x2aad20: 0x3e00008  jr          $ra
label_2aad24:
    if (ctx->pc == 0x2AAD24u) {
        ctx->pc = 0x2AAD24u;
            // 0x2aad24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2AAD28u;
        goto label_fallthrough_0x2aad20;
    }
    ctx->pc = 0x2AAD20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AAD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAD20u;
            // 0x2aad24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2aad20:
    ctx->pc = 0x2AAD28u;
    ctx->pc = 0x2aad28u;
}
