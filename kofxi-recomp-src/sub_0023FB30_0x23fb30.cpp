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

// Function: sub_0023FB30
// Address: 0x23fb30 - 0x23ffe0
void sub_0023FB30_0x23fb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FB30_0x23fb30");
#endif

    switch (ctx->pc) {
        case 0x23fb30u: goto label_23fb30;
        case 0x23fb34u: goto label_23fb34;
        case 0x23fb38u: goto label_23fb38;
        case 0x23fb3cu: goto label_23fb3c;
        case 0x23fb40u: goto label_23fb40;
        case 0x23fb44u: goto label_23fb44;
        case 0x23fb48u: goto label_23fb48;
        case 0x23fb4cu: goto label_23fb4c;
        case 0x23fb50u: goto label_23fb50;
        case 0x23fb54u: goto label_23fb54;
        case 0x23fb58u: goto label_23fb58;
        case 0x23fb5cu: goto label_23fb5c;
        case 0x23fb60u: goto label_23fb60;
        case 0x23fb64u: goto label_23fb64;
        case 0x23fb68u: goto label_23fb68;
        case 0x23fb6cu: goto label_23fb6c;
        case 0x23fb70u: goto label_23fb70;
        case 0x23fb74u: goto label_23fb74;
        case 0x23fb78u: goto label_23fb78;
        case 0x23fb7cu: goto label_23fb7c;
        case 0x23fb80u: goto label_23fb80;
        case 0x23fb84u: goto label_23fb84;
        case 0x23fb88u: goto label_23fb88;
        case 0x23fb8cu: goto label_23fb8c;
        case 0x23fb90u: goto label_23fb90;
        case 0x23fb94u: goto label_23fb94;
        case 0x23fb98u: goto label_23fb98;
        case 0x23fb9cu: goto label_23fb9c;
        case 0x23fba0u: goto label_23fba0;
        case 0x23fba4u: goto label_23fba4;
        case 0x23fba8u: goto label_23fba8;
        case 0x23fbacu: goto label_23fbac;
        case 0x23fbb0u: goto label_23fbb0;
        case 0x23fbb4u: goto label_23fbb4;
        case 0x23fbb8u: goto label_23fbb8;
        case 0x23fbbcu: goto label_23fbbc;
        case 0x23fbc0u: goto label_23fbc0;
        case 0x23fbc4u: goto label_23fbc4;
        case 0x23fbc8u: goto label_23fbc8;
        case 0x23fbccu: goto label_23fbcc;
        case 0x23fbd0u: goto label_23fbd0;
        case 0x23fbd4u: goto label_23fbd4;
        case 0x23fbd8u: goto label_23fbd8;
        case 0x23fbdcu: goto label_23fbdc;
        case 0x23fbe0u: goto label_23fbe0;
        case 0x23fbe4u: goto label_23fbe4;
        case 0x23fbe8u: goto label_23fbe8;
        case 0x23fbecu: goto label_23fbec;
        case 0x23fbf0u: goto label_23fbf0;
        case 0x23fbf4u: goto label_23fbf4;
        case 0x23fbf8u: goto label_23fbf8;
        case 0x23fbfcu: goto label_23fbfc;
        case 0x23fc00u: goto label_23fc00;
        case 0x23fc04u: goto label_23fc04;
        case 0x23fc08u: goto label_23fc08;
        case 0x23fc0cu: goto label_23fc0c;
        case 0x23fc10u: goto label_23fc10;
        case 0x23fc14u: goto label_23fc14;
        case 0x23fc18u: goto label_23fc18;
        case 0x23fc1cu: goto label_23fc1c;
        case 0x23fc20u: goto label_23fc20;
        case 0x23fc24u: goto label_23fc24;
        case 0x23fc28u: goto label_23fc28;
        case 0x23fc2cu: goto label_23fc2c;
        case 0x23fc30u: goto label_23fc30;
        case 0x23fc34u: goto label_23fc34;
        case 0x23fc38u: goto label_23fc38;
        case 0x23fc3cu: goto label_23fc3c;
        case 0x23fc40u: goto label_23fc40;
        case 0x23fc44u: goto label_23fc44;
        case 0x23fc48u: goto label_23fc48;
        case 0x23fc4cu: goto label_23fc4c;
        case 0x23fc50u: goto label_23fc50;
        case 0x23fc54u: goto label_23fc54;
        case 0x23fc58u: goto label_23fc58;
        case 0x23fc5cu: goto label_23fc5c;
        case 0x23fc60u: goto label_23fc60;
        case 0x23fc64u: goto label_23fc64;
        case 0x23fc68u: goto label_23fc68;
        case 0x23fc6cu: goto label_23fc6c;
        case 0x23fc70u: goto label_23fc70;
        case 0x23fc74u: goto label_23fc74;
        case 0x23fc78u: goto label_23fc78;
        case 0x23fc7cu: goto label_23fc7c;
        case 0x23fc80u: goto label_23fc80;
        case 0x23fc84u: goto label_23fc84;
        case 0x23fc88u: goto label_23fc88;
        case 0x23fc8cu: goto label_23fc8c;
        case 0x23fc90u: goto label_23fc90;
        case 0x23fc94u: goto label_23fc94;
        case 0x23fc98u: goto label_23fc98;
        case 0x23fc9cu: goto label_23fc9c;
        case 0x23fca0u: goto label_23fca0;
        case 0x23fca4u: goto label_23fca4;
        case 0x23fca8u: goto label_23fca8;
        case 0x23fcacu: goto label_23fcac;
        case 0x23fcb0u: goto label_23fcb0;
        case 0x23fcb4u: goto label_23fcb4;
        case 0x23fcb8u: goto label_23fcb8;
        case 0x23fcbcu: goto label_23fcbc;
        case 0x23fcc0u: goto label_23fcc0;
        case 0x23fcc4u: goto label_23fcc4;
        case 0x23fcc8u: goto label_23fcc8;
        case 0x23fcccu: goto label_23fccc;
        case 0x23fcd0u: goto label_23fcd0;
        case 0x23fcd4u: goto label_23fcd4;
        case 0x23fcd8u: goto label_23fcd8;
        case 0x23fcdcu: goto label_23fcdc;
        case 0x23fce0u: goto label_23fce0;
        case 0x23fce4u: goto label_23fce4;
        case 0x23fce8u: goto label_23fce8;
        case 0x23fcecu: goto label_23fcec;
        case 0x23fcf0u: goto label_23fcf0;
        case 0x23fcf4u: goto label_23fcf4;
        case 0x23fcf8u: goto label_23fcf8;
        case 0x23fcfcu: goto label_23fcfc;
        case 0x23fd00u: goto label_23fd00;
        case 0x23fd04u: goto label_23fd04;
        case 0x23fd08u: goto label_23fd08;
        case 0x23fd0cu: goto label_23fd0c;
        case 0x23fd10u: goto label_23fd10;
        case 0x23fd14u: goto label_23fd14;
        case 0x23fd18u: goto label_23fd18;
        case 0x23fd1cu: goto label_23fd1c;
        case 0x23fd20u: goto label_23fd20;
        case 0x23fd24u: goto label_23fd24;
        case 0x23fd28u: goto label_23fd28;
        case 0x23fd2cu: goto label_23fd2c;
        case 0x23fd30u: goto label_23fd30;
        case 0x23fd34u: goto label_23fd34;
        case 0x23fd38u: goto label_23fd38;
        case 0x23fd3cu: goto label_23fd3c;
        case 0x23fd40u: goto label_23fd40;
        case 0x23fd44u: goto label_23fd44;
        case 0x23fd48u: goto label_23fd48;
        case 0x23fd4cu: goto label_23fd4c;
        case 0x23fd50u: goto label_23fd50;
        case 0x23fd54u: goto label_23fd54;
        case 0x23fd58u: goto label_23fd58;
        case 0x23fd5cu: goto label_23fd5c;
        case 0x23fd60u: goto label_23fd60;
        case 0x23fd64u: goto label_23fd64;
        case 0x23fd68u: goto label_23fd68;
        case 0x23fd6cu: goto label_23fd6c;
        case 0x23fd70u: goto label_23fd70;
        case 0x23fd74u: goto label_23fd74;
        case 0x23fd78u: goto label_23fd78;
        case 0x23fd7cu: goto label_23fd7c;
        case 0x23fd80u: goto label_23fd80;
        case 0x23fd84u: goto label_23fd84;
        case 0x23fd88u: goto label_23fd88;
        case 0x23fd8cu: goto label_23fd8c;
        case 0x23fd90u: goto label_23fd90;
        case 0x23fd94u: goto label_23fd94;
        case 0x23fd98u: goto label_23fd98;
        case 0x23fd9cu: goto label_23fd9c;
        case 0x23fda0u: goto label_23fda0;
        case 0x23fda4u: goto label_23fda4;
        case 0x23fda8u: goto label_23fda8;
        case 0x23fdacu: goto label_23fdac;
        case 0x23fdb0u: goto label_23fdb0;
        case 0x23fdb4u: goto label_23fdb4;
        case 0x23fdb8u: goto label_23fdb8;
        case 0x23fdbcu: goto label_23fdbc;
        case 0x23fdc0u: goto label_23fdc0;
        case 0x23fdc4u: goto label_23fdc4;
        case 0x23fdc8u: goto label_23fdc8;
        case 0x23fdccu: goto label_23fdcc;
        case 0x23fdd0u: goto label_23fdd0;
        case 0x23fdd4u: goto label_23fdd4;
        case 0x23fdd8u: goto label_23fdd8;
        case 0x23fddcu: goto label_23fddc;
        case 0x23fde0u: goto label_23fde0;
        case 0x23fde4u: goto label_23fde4;
        case 0x23fde8u: goto label_23fde8;
        case 0x23fdecu: goto label_23fdec;
        case 0x23fdf0u: goto label_23fdf0;
        case 0x23fdf4u: goto label_23fdf4;
        case 0x23fdf8u: goto label_23fdf8;
        case 0x23fdfcu: goto label_23fdfc;
        case 0x23fe00u: goto label_23fe00;
        case 0x23fe04u: goto label_23fe04;
        case 0x23fe08u: goto label_23fe08;
        case 0x23fe0cu: goto label_23fe0c;
        case 0x23fe10u: goto label_23fe10;
        case 0x23fe14u: goto label_23fe14;
        case 0x23fe18u: goto label_23fe18;
        case 0x23fe1cu: goto label_23fe1c;
        case 0x23fe20u: goto label_23fe20;
        case 0x23fe24u: goto label_23fe24;
        case 0x23fe28u: goto label_23fe28;
        case 0x23fe2cu: goto label_23fe2c;
        case 0x23fe30u: goto label_23fe30;
        case 0x23fe34u: goto label_23fe34;
        case 0x23fe38u: goto label_23fe38;
        case 0x23fe3cu: goto label_23fe3c;
        case 0x23fe40u: goto label_23fe40;
        case 0x23fe44u: goto label_23fe44;
        case 0x23fe48u: goto label_23fe48;
        case 0x23fe4cu: goto label_23fe4c;
        case 0x23fe50u: goto label_23fe50;
        case 0x23fe54u: goto label_23fe54;
        case 0x23fe58u: goto label_23fe58;
        case 0x23fe5cu: goto label_23fe5c;
        case 0x23fe60u: goto label_23fe60;
        case 0x23fe64u: goto label_23fe64;
        case 0x23fe68u: goto label_23fe68;
        case 0x23fe6cu: goto label_23fe6c;
        case 0x23fe70u: goto label_23fe70;
        case 0x23fe74u: goto label_23fe74;
        case 0x23fe78u: goto label_23fe78;
        case 0x23fe7cu: goto label_23fe7c;
        case 0x23fe80u: goto label_23fe80;
        case 0x23fe84u: goto label_23fe84;
        case 0x23fe88u: goto label_23fe88;
        case 0x23fe8cu: goto label_23fe8c;
        case 0x23fe90u: goto label_23fe90;
        case 0x23fe94u: goto label_23fe94;
        case 0x23fe98u: goto label_23fe98;
        case 0x23fe9cu: goto label_23fe9c;
        case 0x23fea0u: goto label_23fea0;
        case 0x23fea4u: goto label_23fea4;
        case 0x23fea8u: goto label_23fea8;
        case 0x23feacu: goto label_23feac;
        case 0x23feb0u: goto label_23feb0;
        case 0x23feb4u: goto label_23feb4;
        case 0x23feb8u: goto label_23feb8;
        case 0x23febcu: goto label_23febc;
        case 0x23fec0u: goto label_23fec0;
        case 0x23fec4u: goto label_23fec4;
        case 0x23fec8u: goto label_23fec8;
        case 0x23feccu: goto label_23fecc;
        case 0x23fed0u: goto label_23fed0;
        case 0x23fed4u: goto label_23fed4;
        case 0x23fed8u: goto label_23fed8;
        case 0x23fedcu: goto label_23fedc;
        case 0x23fee0u: goto label_23fee0;
        case 0x23fee4u: goto label_23fee4;
        case 0x23fee8u: goto label_23fee8;
        case 0x23feecu: goto label_23feec;
        case 0x23fef0u: goto label_23fef0;
        case 0x23fef4u: goto label_23fef4;
        case 0x23fef8u: goto label_23fef8;
        case 0x23fefcu: goto label_23fefc;
        case 0x23ff00u: goto label_23ff00;
        case 0x23ff04u: goto label_23ff04;
        case 0x23ff08u: goto label_23ff08;
        case 0x23ff0cu: goto label_23ff0c;
        case 0x23ff10u: goto label_23ff10;
        case 0x23ff14u: goto label_23ff14;
        case 0x23ff18u: goto label_23ff18;
        case 0x23ff1cu: goto label_23ff1c;
        case 0x23ff20u: goto label_23ff20;
        case 0x23ff24u: goto label_23ff24;
        case 0x23ff28u: goto label_23ff28;
        case 0x23ff2cu: goto label_23ff2c;
        case 0x23ff30u: goto label_23ff30;
        case 0x23ff34u: goto label_23ff34;
        case 0x23ff38u: goto label_23ff38;
        case 0x23ff3cu: goto label_23ff3c;
        case 0x23ff40u: goto label_23ff40;
        case 0x23ff44u: goto label_23ff44;
        case 0x23ff48u: goto label_23ff48;
        case 0x23ff4cu: goto label_23ff4c;
        case 0x23ff50u: goto label_23ff50;
        case 0x23ff54u: goto label_23ff54;
        case 0x23ff58u: goto label_23ff58;
        case 0x23ff5cu: goto label_23ff5c;
        case 0x23ff60u: goto label_23ff60;
        case 0x23ff64u: goto label_23ff64;
        case 0x23ff68u: goto label_23ff68;
        case 0x23ff6cu: goto label_23ff6c;
        case 0x23ff70u: goto label_23ff70;
        case 0x23ff74u: goto label_23ff74;
        case 0x23ff78u: goto label_23ff78;
        case 0x23ff7cu: goto label_23ff7c;
        case 0x23ff80u: goto label_23ff80;
        case 0x23ff84u: goto label_23ff84;
        case 0x23ff88u: goto label_23ff88;
        case 0x23ff8cu: goto label_23ff8c;
        case 0x23ff90u: goto label_23ff90;
        case 0x23ff94u: goto label_23ff94;
        case 0x23ff98u: goto label_23ff98;
        case 0x23ff9cu: goto label_23ff9c;
        case 0x23ffa0u: goto label_23ffa0;
        case 0x23ffa4u: goto label_23ffa4;
        case 0x23ffa8u: goto label_23ffa8;
        case 0x23ffacu: goto label_23ffac;
        case 0x23ffb0u: goto label_23ffb0;
        case 0x23ffb4u: goto label_23ffb4;
        case 0x23ffb8u: goto label_23ffb8;
        case 0x23ffbcu: goto label_23ffbc;
        case 0x23ffc0u: goto label_23ffc0;
        case 0x23ffc4u: goto label_23ffc4;
        case 0x23ffc8u: goto label_23ffc8;
        case 0x23ffccu: goto label_23ffcc;
        case 0x23ffd0u: goto label_23ffd0;
        case 0x23ffd4u: goto label_23ffd4;
        case 0x23ffd8u: goto label_23ffd8;
        case 0x23ffdcu: goto label_23ffdc;
        default: break;
    }

    ctx->pc = 0x23fb30u;

label_23fb30:
    // 0x23fb30: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x23fb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_23fb34:
    // 0x23fb34: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x23fb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_23fb38:
    // 0x23fb38: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x23fb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_23fb3c:
    // 0x23fb3c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x23fb3cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23fb40:
    // 0x23fb40: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x23fb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_23fb44:
    // 0x23fb44: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x23fb44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23fb48:
    // 0x23fb48: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x23fb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_23fb4c:
    // 0x23fb4c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x23fb4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23fb50:
    // 0x23fb50: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x23fb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_23fb54:
    // 0x23fb54: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x23fb54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23fb58:
    // 0x23fb58: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x23fb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_23fb5c:
    // 0x23fb5c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x23fb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_23fb60:
    // 0x23fb60: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x23fb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_23fb64:
    // 0x23fb64: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x23fb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_23fb68:
    // 0x23fb68: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x23fb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_23fb6c:
    // 0x23fb6c: 0xffa800f0  sd          $t0, 0xF0($sp)
    ctx->pc = 0x23fb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 8));
label_23fb70:
    // 0x23fb70: 0xffa900f8  sd          $t1, 0xF8($sp)
    ctx->pc = 0x23fb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 9));
label_23fb74:
    // 0x23fb74: 0xffaa0100  sd          $t2, 0x100($sp)
    ctx->pc = 0x23fb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 10));
label_23fb78:
    // 0x23fb78: 0xc08c682  jal         func_231A08
label_23fb7c:
    if (ctx->pc == 0x23FB7Cu) {
        ctx->pc = 0x23FB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB78u;
        // 0x23fb7c: 0xffab0108  sd          $t3, 0x108($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FB80u;
        goto label_23fb80;
    }
    ctx->pc = 0x23FB78u;
    SET_GPR_U32(ctx, 31, 0x23FB80u);
    ctx->pc = 0x23FB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FB78u;
    // 0x23fb7c: 0xffab0108  sd          $t3, 0x108($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x23FB78u, 0x23FB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FB80u;
label_23fb80:
    // 0x23fb80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23fb80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23fb84:
    // 0x23fb84: 0xc098552  jal         func_261548
label_23fb88:
    if (ctx->pc == 0x23FB88u) {
        ctx->pc = 0x23FB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB84u;
        // 0x23fb88: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FB8Cu;
        goto label_23fb8c;
    }
    ctx->pc = 0x23FB84u;
    SET_GPR_U32(ctx, 31, 0x23FB8Cu);
    ctx->pc = 0x23FB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FB84u;
    // 0x23fb88: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x23FB84u, 0x23FB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FB8Cu;
label_23fb8c:
    // 0x23fb8c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x23fb8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23fb90:
    // 0x23fb90: 0xc08c698  jal         func_231A60
label_23fb94:
    if (ctx->pc == 0x23FB94u) {
        ctx->pc = 0x23FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB90u;
        // 0x23fb94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FB98u;
        goto label_23fb98;
    }
    ctx->pc = 0x23FB90u;
    SET_GPR_U32(ctx, 31, 0x23FB98u);
    ctx->pc = 0x23FB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FB90u;
    // 0x23fb94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x23FB90u, 0x23FB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FB98u;
label_23fb98:
    // 0x23fb98: 0x16800014  bnez        $s4, . + 4 + (0x14 << 2)
label_23fb9c:
    if (ctx->pc == 0x23FB9Cu) {
        ctx->pc = 0x23FB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB98u;
        // 0x23fb9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FBA0u;
        goto label_23fba0;
    }
    ctx->pc = 0x23FB98u;
    {
        const bool branch_taken_0x23fb98 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB98u;
        // 0x23fb9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fb98) {
            ctx->pc = 0x23FBECu;
            goto label_23fbec;
        }
    }
    ctx->pc = 0x23FBA0u;
label_23fba0:
    // 0x23fba0: 0xc08a8cc  jal         func_22A330
label_23fba4:
    if (ctx->pc == 0x23FBA4u) {
        ctx->pc = 0x23FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FBA0u;
        // 0x23fba4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FBA8u;
        goto label_23fba8;
    }
    ctx->pc = 0x23FBA0u;
    SET_GPR_U32(ctx, 31, 0x23FBA8u);
    ctx->pc = 0x23FBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FBA0u;
    // 0x23fba4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A330u, 0x23FBA0u, 0x23FBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FBA8u;
label_23fba8:
    // 0x23fba8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x23fba8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23fbac:
    // 0x23fbac: 0x0  nop
    ctx->pc = 0x23fbacu;
    // NOP
label_23fbb0:
    // 0x23fbb0: 0x12800092  beqz        $s4, . + 4 + (0x92 << 2)
label_23fbb4:
    if (ctx->pc == 0x23FBB4u) {
        ctx->pc = 0x23FBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FBB0u;
        // 0x23fbb4: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FBB8u;
        goto label_23fbb8;
    }
    ctx->pc = 0x23FBB0u;
    {
        const bool branch_taken_0x23fbb0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FBB0u;
        // 0x23fbb4: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fbb0) {
            ctx->pc = 0x23FDFCu;
            goto label_23fdfc;
        }
    }
    ctx->pc = 0x23FBB8u;
label_23fbb8:
    // 0x23fbb8: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x23fbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
label_23fbbc:
    // 0x23fbbc: 0x8ec2012c  lw          $v0, 0x12C($s6)
    ctx->pc = 0x23fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 300)));
label_23fbc0:
    // 0x23fbc0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x23fbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_23fbc4:
    // 0x23fbc4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_23fbc8:
    if (ctx->pc == 0x23FBC8u) {
        ctx->pc = 0x23FBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FBC4u;
        // 0x23fbc8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FBCCu;
        goto label_23fbcc;
    }
    ctx->pc = 0x23FBC4u;
    {
        const bool branch_taken_0x23fbc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FBC4u;
        // 0x23fbc8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fbc4) {
            ctx->pc = 0x23FC14u;
            goto label_23fc14;
        }
    }
    ctx->pc = 0x23FBCCu;
label_23fbcc:
    // 0x23fbcc: 0x97c40000  lhu         $a0, 0x0($fp)
    ctx->pc = 0x23fbccu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
label_23fbd0:
    // 0x23fbd0: 0xc08a262  jal         func_228988
label_23fbd4:
    if (ctx->pc == 0x23FBD4u) {
        ctx->pc = 0x23FBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FBD0u;
        // 0x23fbd4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FBD8u;
        goto label_23fbd8;
    }
    ctx->pc = 0x23FBD0u;
    SET_GPR_U32(ctx, 31, 0x23FBD8u);
    ctx->pc = 0x23FBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FBD0u;
    // 0x23fbd4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x23FBD0u, 0x23FBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FBD8u;
label_23fbd8:
    // 0x23fbd8: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x23fbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_23fbdc:
    // 0x23fbdc: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x23fbdcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_23fbe0:
    // 0x23fbe0: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x23fbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_23fbe4:
    // 0x23fbe4: 0x10000018  b           . + 4 + (0x18 << 2)
label_23fbe8:
    if (ctx->pc == 0x23FBE8u) {
        ctx->pc = 0x23FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FBE4u;
        // 0x23fbe8: 0x24550002  addiu       $s5, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FBECu;
        goto label_23fbec;
    }
    ctx->pc = 0x23FBE4u;
    {
        const bool branch_taken_0x23fbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FBE4u;
        // 0x23fbe8: 0x24550002  addiu       $s5, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fbe4) {
            ctx->pc = 0x23FC48u;
            goto label_23fc48;
        }
    }
    ctx->pc = 0x23FBECu;
label_23fbec:
    // 0x23fbec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23fbf0:
    // 0x23fbf0: 0x26830020  addiu       $v1, $s4, 0x20
    ctx->pc = 0x23fbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_23fbf4:
    // 0x23fbf4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x23fbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23fbf8:
    // 0x23fbf8: 0xa6820010  sh          $v0, 0x10($s4)
    ctx->pc = 0x23fbf8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 2));
label_23fbfc:
    // 0x23fbfc: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x23fbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_23fc00:
    // 0x23fc00: 0xa6840012  sh          $a0, 0x12($s4)
    ctx->pc = 0x23fc00u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 18), (uint16_t)GPR_U32(ctx, 4));
label_23fc04:
    // 0x23fc04: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x23fc04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_23fc08:
    // 0x23fc08: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x23fc08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_23fc0c:
    // 0x23fc0c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_23fc10:
    if (ctx->pc == 0x23FC10u) {
        ctx->pc = 0x23FC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC0Cu;
        // 0x23fc10: 0xae80001c  sw          $zero, 0x1C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FC14u;
        goto label_23fc14;
    }
    ctx->pc = 0x23FC0Cu;
    {
        const bool branch_taken_0x23fc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC0Cu;
        // 0x23fc10: 0xae80001c  sw          $zero, 0x1C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc0c) {
            ctx->pc = 0x23FBB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23fbb0;
        }
    }
    ctx->pc = 0x23FC14u;
label_23fc14:
    // 0x23fc14: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x23fc14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_23fc18:
    // 0x23fc18: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x23fc18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23fc1c:
    // 0x23fc1c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23fc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_23fc20:
    // 0x23fc20: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x23fc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_23fc24:
    // 0x23fc24: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23fc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23fc28:
    // 0x23fc28: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x23fc28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_23fc2c:
    // 0x23fc2c: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x23fc2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_23fc30:
    // 0x23fc30: 0x26150004  addiu       $s5, $s0, 0x4
    ctx->pc = 0x23fc30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_23fc34:
    // 0x23fc34: 0xc08a262  jal         func_228988
label_23fc38:
    if (ctx->pc == 0x23FC38u) {
        ctx->pc = 0x23FC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC34u;
        // 0x23fc38: 0x97c40000  lhu         $a0, 0x0($fp) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FC3Cu;
        goto label_23fc3c;
    }
    ctx->pc = 0x23FC34u;
    SET_GPR_U32(ctx, 31, 0x23FC3Cu);
    ctx->pc = 0x23FC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FC34u;
    // 0x23fc38: 0x97c40000  lhu         $a0, 0x0($fp) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x23FC34u, 0x23FC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FC3Cu;
label_23fc3c:
    // 0x23fc3c: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x23fc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_23fc40:
    // 0x23fc40: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x23fc40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_23fc44:
    // 0x23fc44: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x23fc44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
label_23fc48:
    // 0x23fc48: 0xa2b10000  sb          $s1, 0x0($s5)
    ctx->pc = 0x23fc48u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 17));
label_23fc4c:
    // 0x23fc4c: 0x26a20004  addiu       $v0, $s5, 0x4
    ctx->pc = 0x23fc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_23fc50:
    // 0x23fc50: 0xa2b20001  sb          $s2, 0x1($s5)
    ctx->pc = 0x23fc50u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 18));
label_23fc54:
    // 0x23fc54: 0x27b100f8  addiu       $s1, $sp, 0xF8
    ctx->pc = 0x23fc54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_23fc58:
    // 0x23fc58: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x23fc58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_23fc5c:
    // 0x23fc5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23fc5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23fc60:
    // 0x23fc60: 0x8e30fff8  lw          $s0, -0x8($s1)
    ctx->pc = 0x23fc60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967288)));
label_23fc64:
    // 0x23fc64: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
label_23fc68:
    if (ctx->pc == 0x23FC68u) {
        ctx->pc = 0x23FC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC64u;
        // 0x23fc68: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FC6Cu;
        goto label_23fc6c;
    }
    ctx->pc = 0x23FC64u;
    {
        const bool branch_taken_0x23fc64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC64u;
        // 0x23fc68: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc64) {
            ctx->pc = 0x23FCB0u;
            goto label_23fcb0;
        }
    }
    ctx->pc = 0x23FC6Cu;
label_23fc6c:
    // 0x23fc6c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x23fc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23fc70:
    // 0x23fc70: 0x240200dc  addiu       $v0, $zero, 0xDC
    ctx->pc = 0x23fc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
label_23fc74:
    // 0x23fc74: 0x439823  subu        $s3, $v0, $v1
    ctx->pc = 0x23fc74u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23fc78:
    // 0x23fc78: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x23fc78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_23fc7c:
    // 0x23fc7c: 0x0  nop
    ctx->pc = 0x23fc7cu;
    // NOP
label_23fc80:
    // 0x23fc80: 0x2f0b821  addu        $s7, $s7, $s0
    ctx->pc = 0x23fc80u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_23fc84:
    // 0x23fc84: 0x277102b  sltu        $v0, $s3, $s7
    ctx->pc = 0x23fc84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_23fc88:
    // 0x23fc88: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
label_23fc8c:
    if (ctx->pc == 0x23FC8Cu) {
        ctx->pc = 0x23FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC88u;
        // 0x23fc8c: 0x8e24fff8  lw          $a0, -0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FC90u;
        goto label_23fc90;
    }
    ctx->pc = 0x23FC88u;
    {
        const bool branch_taken_0x23fc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC88u;
        // 0x23fc8c: 0x8e24fff8  lw          $a0, -0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc88) {
            ctx->pc = 0x23FDA8u;
            goto label_23fda8;
        }
    }
    ctx->pc = 0x23FC90u;
label_23fc90:
    // 0x23fc90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23fc90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23fc94:
    // 0x23fc94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23fc94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23fc98:
    // 0x23fc98: 0xc08b4f8  jal         func_22D3E0
label_23fc9c:
    if (ctx->pc == 0x23FC9Cu) {
        ctx->pc = 0x23FC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC98u;
        // 0x23fc9c: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FCA0u;
        goto label_23fca0;
    }
    ctx->pc = 0x23FC98u;
    SET_GPR_U32(ctx, 31, 0x23FCA0u);
    ctx->pc = 0x23FC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FC98u;
    // 0x23fc9c: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x23FC98u, 0x23FCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FCA0u;
label_23fca0:
    // 0x23fca0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x23fca0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_23fca4:
    // 0x23fca4: 0x8e30fff8  lw          $s0, -0x8($s1)
    ctx->pc = 0x23fca4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967288)));
label_23fca8:
    // 0x23fca8: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
label_23fcac:
    if (ctx->pc == 0x23FCACu) {
        ctx->pc = 0x23FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCA8u;
        // 0x23fcac: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FCB0u;
        goto label_23fcb0;
    }
    ctx->pc = 0x23FCA8u;
    {
        const bool branch_taken_0x23fca8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCA8u;
        // 0x23fcac: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fca8) {
            ctx->pc = 0x23FC80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23fc80;
        }
    }
    ctx->pc = 0x23FCB0u;
label_23fcb0:
    // 0x23fcb0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x23fcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23fcb4:
    // 0x23fcb4: 0x26e40004  addiu       $a0, $s7, 0x4
    ctx->pc = 0x23fcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_23fcb8:
    // 0x23fcb8: 0x26d30014  addiu       $s3, $s6, 0x14
    ctx->pc = 0x23fcb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
label_23fcbc:
    // 0x23fcbc: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x23fcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23fcc0:
    // 0x23fcc0: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x23fcc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_23fcc4:
    // 0x23fcc4: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x23fcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_23fcc8:
    // 0x23fcc8: 0xc08a262  jal         func_228988
label_23fccc:
    if (ctx->pc == 0x23FCCCu) {
        ctx->pc = 0x23FCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCC8u;
        // 0x23fccc: 0xae82000c  sw          $v0, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FCD0u;
        goto label_23fcd0;
    }
    ctx->pc = 0x23FCC8u;
    SET_GPR_U32(ctx, 31, 0x23FCD0u);
    ctx->pc = 0x23FCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FCC8u;
    // 0x23fccc: 0xae82000c  sw          $v0, 0xC($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x23FCC8u, 0x23FCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FCD0u;
label_23fcd0:
    // 0x23fcd0: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x23fcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_23fcd4:
    // 0x23fcd4: 0xa2a20002  sb          $v0, 0x2($s5)
    ctx->pc = 0x23fcd4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 2));
label_23fcd8:
    // 0x23fcd8: 0xa2a30003  sb          $v1, 0x3($s5)
    ctx->pc = 0x23fcd8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3), (uint8_t)GPR_U32(ctx, 3));
label_23fcdc:
    // 0x23fcdc: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23fcdcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23fce0:
    // 0x23fce0: 0x92a50000  lbu         $a1, 0x0($s5)
    ctx->pc = 0x23fce0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_23fce4:
    // 0x23fce4: 0x261052d8  addiu       $s0, $s0, 0x52D8
    ctx->pc = 0x23fce4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21208));
label_23fce8:
    // 0x23fce8: 0xc0902e8  jal         func_240BA0
label_23fcec:
    if (ctx->pc == 0x23FCECu) {
        ctx->pc = 0x23FCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCE8u;
        // 0x23fcec: 0x97c40000  lhu         $a0, 0x0($fp) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FCF0u;
        goto label_23fcf0;
    }
    ctx->pc = 0x23FCE8u;
    SET_GPR_U32(ctx, 31, 0x23FCF0u);
    ctx->pc = 0x23FCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FCE8u;
    // 0x23fcec: 0x97c40000  lhu         $a0, 0x0($fp) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240BA0u, 0x23FCE8u, 0x23FCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FCF0u;
label_23fcf0:
    // 0x23fcf0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23fcf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23fcf4:
    // 0x23fcf4: 0x92a40003  lbu         $a0, 0x3($s5)
    ctx->pc = 0x23fcf4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
label_23fcf8:
    // 0x23fcf8: 0x92a20002  lbu         $v0, 0x2($s5)
    ctx->pc = 0x23fcf8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
label_23fcfc:
    // 0x23fcfc: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x23fcfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_23fd00:
    // 0x23fd00: 0x92b10001  lbu         $s1, 0x1($s5)
    ctx->pc = 0x23fd00u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
label_23fd04:
    // 0x23fd04: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x23fd04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_23fd08:
    // 0x23fd08: 0xc08b60c  jal         func_22D830
label_23fd0c:
    if (ctx->pc == 0x23FD0Cu) {
        ctx->pc = 0x23FD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD08u;
        // 0x23fd0c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FD10u;
        goto label_23fd10;
    }
    ctx->pc = 0x23FD08u;
    SET_GPR_U32(ctx, 31, 0x23FD10u);
    ctx->pc = 0x23FD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FD08u;
    // 0x23fd0c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x23FD08u, 0x23FD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FD10u;
label_23fd10:
    // 0x23fd10: 0x8fc70004  lw          $a3, 0x4($fp)
    ctx->pc = 0x23fd10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_23fd14:
    // 0x23fd14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23fd14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23fd18:
    // 0x23fd18: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x23fd18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23fd1c:
    // 0x23fd1c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x23fd1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23fd20:
    // 0x23fd20: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x23fd20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23fd24:
    // 0x23fd24: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x23fd24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23fd28:
    // 0x23fd28: 0xc08b5ac  jal         func_22D6B0
label_23fd2c:
    if (ctx->pc == 0x23FD2Cu) {
        ctx->pc = 0x23FD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD28u;
        // 0x23fd2c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FD30u;
        goto label_23fd30;
    }
    ctx->pc = 0x23FD28u;
    SET_GPR_U32(ctx, 31, 0x23FD30u);
    ctx->pc = 0x23FD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FD28u;
    // 0x23fd2c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23FD28u, 0x23FD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FD30u;
label_23fd30:
    // 0x23fd30: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
label_23fd34:
    if (ctx->pc == 0x23FD34u) {
        ctx->pc = 0x23FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD30u;
        // 0x23fd34: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FD38u;
        goto label_23fd38;
    }
    ctx->pc = 0x23FD30u;
    {
        const bool branch_taken_0x23fd30 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD30u;
        // 0x23fd34: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd30) {
            ctx->pc = 0x23FD40u;
            goto label_23fd40;
        }
    }
    ctx->pc = 0x23FD38u;
label_23fd38:
    // 0x23fd38: 0xc090404  jal         func_241010
label_23fd3c:
    if (ctx->pc == 0x23FD3Cu) {
        ctx->pc = 0x23FD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD38u;
        // 0x23fd3c: 0x32e5ffff  andi        $a1, $s7, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FD40u;
        goto label_23fd40;
    }
    ctx->pc = 0x23FD38u;
    SET_GPR_U32(ctx, 31, 0x23FD40u);
    ctx->pc = 0x23FD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FD38u;
    // 0x23fd3c: 0x32e5ffff  andi        $a1, $s7, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x241010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241010u, 0x23FD38u, 0x23FD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FD40u;
label_23fd40:
    // 0x23fd40: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23fd40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23fd44:
    // 0x23fd44: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23fd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23fd48:
    // 0x23fd48: 0xc08b5ac  jal         func_22D6B0
label_23fd4c:
    if (ctx->pc == 0x23FD4Cu) {
        ctx->pc = 0x23FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD48u;
        // 0x23fd4c: 0x24a55300  addiu       $a1, $a1, 0x5300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FD50u;
        goto label_23fd50;
    }
    ctx->pc = 0x23FD48u;
    SET_GPR_U32(ctx, 31, 0x23FD50u);
    ctx->pc = 0x23FD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FD48u;
    // 0x23fd4c: 0x24a55300  addiu       $a1, $a1, 0x5300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23FD48u, 0x23FD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FD50u;
label_23fd50:
    // 0x23fd50: 0x8ec2011c  lw          $v0, 0x11C($s6)
    ctx->pc = 0x23fd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 284)));
label_23fd54:
    // 0x23fd54: 0x8ec30120  lw          $v1, 0x120($s6)
    ctx->pc = 0x23fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 288)));
label_23fd58:
    // 0x23fd58: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x23fd58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23fd5c:
    // 0x23fd5c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_23fd60:
    if (ctx->pc == 0x23FD60u) {
        ctx->pc = 0x23FD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD5Cu;
        // 0x23fd60: 0xae800004  sw          $zero, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FD64u;
        goto label_23fd64;
    }
    ctx->pc = 0x23FD5Cu;
    {
        const bool branch_taken_0x23fd5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fd5c) {
            ctx->pc = 0x23FD60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FD5Cu;
            // 0x23fd60: 0xae800004  sw          $zero, 0x4($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FD94u;
            goto label_23fd94;
        }
    }
    ctx->pc = 0x23FD64u;
label_23fd64:
    // 0x23fd64: 0x8ec30110  lw          $v1, 0x110($s6)
    ctx->pc = 0x23fd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 272)));
label_23fd68:
    // 0x23fd68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23fd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23fd6c:
    // 0x23fd6c: 0x8ec200ec  lw          $v0, 0xEC($s6)
    ctx->pc = 0x23fd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 236)));
label_23fd70:
    // 0x23fd70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23fd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23fd74:
    // 0x23fd74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23fd78:
    // 0x23fd78: 0xaec30110  sw          $v1, 0x110($s6)
    ctx->pc = 0x23fd78u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 272), GPR_U32(ctx, 3));
label_23fd7c:
    // 0x23fd7c: 0xc08a9d6  jal         func_22A758
label_23fd80:
    if (ctx->pc == 0x23FD80u) {
        ctx->pc = 0x23FD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD7Cu;
        // 0x23fd80: 0xaec200ec  sw          $v0, 0xEC($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FD84u;
        goto label_23fd84;
    }
    ctx->pc = 0x23FD7Cu;
    SET_GPR_U32(ctx, 31, 0x23FD84u);
    ctx->pc = 0x23FD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FD7Cu;
    // 0x23fd80: 0xaec200ec  sw          $v0, 0xEC($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x23FD7Cu, 0x23FD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FD84u;
label_23fd84:
    // 0x23fd84: 0xdec20070  ld          $v0, 0x70($s6)
    ctx->pc = 0x23fd84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 112)));
label_23fd88:
    // 0x23fd88: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x23fd88u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_23fd8c:
    // 0x23fd8c: 0x1000000e  b           . + 4 + (0xE << 2)
label_23fd90:
    if (ctx->pc == 0x23FD90u) {
        ctx->pc = 0x23FD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD8Cu;
        // 0x23fd90: 0xfec20070  sd          $v0, 0x70($s6) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 22), 112), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FD94u;
        goto label_23fd94;
    }
    ctx->pc = 0x23FD8Cu;
    {
        const bool branch_taken_0x23fd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD8Cu;
        // 0x23fd90: 0xfec20070  sd          $v0, 0x70($s6) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 22), 112), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd8c) {
            ctx->pc = 0x23FDC8u;
            goto label_23fdc8;
        }
    }
    ctx->pc = 0x23FD94u;
label_23fd94:
    // 0x23fd94: 0x8ec20118  lw          $v0, 0x118($s6)
    ctx->pc = 0x23fd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 280)));
label_23fd98:
    // 0x23fd98: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_23fd9c:
    if (ctx->pc == 0x23FD9Cu) {
        ctx->pc = 0x23FD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD98u;
        // 0x23fd9c: 0xac540004  sw          $s4, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FDA0u;
        goto label_23fda0;
    }
    ctx->pc = 0x23FD98u;
    {
        const bool branch_taken_0x23fd98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fd98) {
            ctx->pc = 0x23FD9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FD98u;
            // 0x23fd9c: 0xac540004  sw          $s4, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FDB8u;
            goto label_23fdb8;
        }
    }
    ctx->pc = 0x23FDA0u;
label_23fda0:
    // 0x23fda0: 0x10000005  b           . + 4 + (0x5 << 2)
label_23fda4:
    if (ctx->pc == 0x23FDA4u) {
        ctx->pc = 0x23FDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDA0u;
        // 0x23fda4: 0xaed40114  sw          $s4, 0x114($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 276), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FDA8u;
        goto label_23fda8;
    }
    ctx->pc = 0x23FDA0u;
    {
        const bool branch_taken_0x23fda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDA0u;
        // 0x23fda4: 0xaed40114  sw          $s4, 0x114($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 276), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fda0) {
            ctx->pc = 0x23FDB8u;
            goto label_23fdb8;
        }
    }
    ctx->pc = 0x23FDA8u;
label_23fda8:
    // 0x23fda8: 0xc08a9d6  jal         func_22A758
label_23fdac:
    if (ctx->pc == 0x23FDACu) {
        ctx->pc = 0x23FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDA8u;
        // 0x23fdac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FDB0u;
        goto label_23fdb0;
    }
    ctx->pc = 0x23FDA8u;
    SET_GPR_U32(ctx, 31, 0x23FDB0u);
    ctx->pc = 0x23FDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FDA8u;
    // 0x23fdac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x23FDA8u, 0x23FDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FDB0u;
label_23fdb0:
    // 0x23fdb0: 0x10000012  b           . + 4 + (0x12 << 2)
label_23fdb4:
    if (ctx->pc == 0x23FDB4u) {
        ctx->pc = 0x23FDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDB0u;
        // 0x23fdb4: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FDB8u;
        goto label_23fdb8;
    }
    ctx->pc = 0x23FDB0u;
    {
        const bool branch_taken_0x23fdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDB0u;
        // 0x23fdb4: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fdb0) {
            ctx->pc = 0x23FDFCu;
            goto label_23fdfc;
        }
    }
    ctx->pc = 0x23FDB8u;
label_23fdb8:
    // 0x23fdb8: 0x8ec2011c  lw          $v0, 0x11C($s6)
    ctx->pc = 0x23fdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 284)));
label_23fdbc:
    // 0x23fdbc: 0xaed40118  sw          $s4, 0x118($s6)
    ctx->pc = 0x23fdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 280), GPR_U32(ctx, 20));
label_23fdc0:
    // 0x23fdc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23fdc4:
    // 0x23fdc4: 0xaec2011c  sw          $v0, 0x11C($s6)
    ctx->pc = 0x23fdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 284), GPR_U32(ctx, 2));
label_23fdc8:
    // 0x23fdc8: 0x96c20030  lhu         $v0, 0x30($s6)
    ctx->pc = 0x23fdc8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 48)));
label_23fdcc:
    // 0x23fdcc: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x23fdccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_23fdd0:
    // 0x23fdd0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_23fdd4:
    if (ctx->pc == 0x23FDD4u) {
        ctx->pc = 0x23FDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDD0u;
        // 0x23fdd4: 0x8e820018  lw          $v0, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FDD8u;
        goto label_23fdd8;
    }
    ctx->pc = 0x23FDD0u;
    {
        const bool branch_taken_0x23fdd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fdd0) {
            ctx->pc = 0x23FDD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FDD0u;
            // 0x23fdd4: 0x8e820018  lw          $v0, 0x18($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FDE8u;
            goto label_23fde8;
        }
    }
    ctx->pc = 0x23FDD8u;
label_23fdd8:
    // 0x23fdd8: 0x8ec200c8  lw          $v0, 0xC8($s6)
    ctx->pc = 0x23fdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 200)));
label_23fddc:
    // 0x23fddc: 0x40f809  jalr        $v0
label_23fde0:
    if (ctx->pc == 0x23FDE0u) {
        ctx->pc = 0x23FDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDDCu;
        // 0x23fde0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FDE4u;
        goto label_23fde4;
    }
    ctx->pc = 0x23FDDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23FDE4u);
        ctx->pc = 0x23FDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDDCu;
        // 0x23fde0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FDDCu, 0x23FDE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23FDE4u;
label_23fde4:
    // 0x23fde4: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x23fde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_23fde8:
    // 0x23fde8: 0xdec30088  ld          $v1, 0x88($s6)
    ctx->pc = 0x23fde8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 136)));
label_23fdec:
    // 0x23fdec: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x23fdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_23fdf0:
    // 0x23fdf0: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x23fdf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_23fdf4:
    // 0x23fdf4: 0xfec30088  sd          $v1, 0x88($s6)
    ctx->pc = 0x23fdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 136), GPR_U64(ctx, 3));
label_23fdf8:
    // 0x23fdf8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x23fdf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_23fdfc:
    // 0x23fdfc: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x23fdfcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_23fe00:
    // 0x23fe00: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x23fe00u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_23fe04:
    // 0x23fe04: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x23fe04u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_23fe08:
    // 0x23fe08: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x23fe08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_23fe0c:
    // 0x23fe0c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x23fe0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23fe10:
    // 0x23fe10: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x23fe10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23fe14:
    // 0x23fe14: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x23fe14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23fe18:
    // 0x23fe18: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x23fe18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23fe1c:
    // 0x23fe1c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x23fe1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23fe20:
    // 0x23fe20: 0x3e00008  jr          $ra
label_23fe24:
    if (ctx->pc == 0x23FE24u) {
        ctx->pc = 0x23FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE20u;
        // 0x23fe24: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FE28u;
        goto label_23fe28;
    }
    ctx->pc = 0x23FE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE20u;
        // 0x23fe24: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FE28u;
label_23fe28:
    // 0x23fe28: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x23fe28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_23fe2c:
    // 0x23fe2c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x23fe2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_23fe30:
    // 0x23fe30: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x23fe30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_23fe34:
    // 0x23fe34: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x23fe34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_23fe38:
    // 0x23fe38: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x23fe38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_23fe3c:
    // 0x23fe3c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x23fe3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_23fe40:
    // 0x23fe40: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x23fe40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_23fe44:
    // 0x23fe44: 0xc08c682  jal         func_231A08
label_23fe48:
    if (ctx->pc == 0x23FE48u) {
        ctx->pc = 0x23FE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE44u;
        // 0x23fe48: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FE4Cu;
        goto label_23fe4c;
    }
    ctx->pc = 0x23FE44u;
    SET_GPR_U32(ctx, 31, 0x23FE4Cu);
    ctx->pc = 0x23FE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FE44u;
    // 0x23fe48: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x23FE44u, 0x23FE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FE4Cu;
label_23fe4c:
    // 0x23fe4c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x23fe4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23fe50:
    // 0x23fe50: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x23fe50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
label_23fe54:
    // 0x23fe54: 0x8c51adc0  lw          $s1, -0x5240($v0)
    ctx->pc = 0x23fe54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946240)));
label_23fe58:
    // 0x23fe58: 0x12200050  beqz        $s1, . + 4 + (0x50 << 2)
label_23fe5c:
    if (ctx->pc == 0x23FE5Cu) {
        ctx->pc = 0x23FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE58u;
        // 0x23fe5c: 0x3c1401c1  lui         $s4, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FE60u;
        goto label_23fe60;
    }
    ctx->pc = 0x23FE58u;
    {
        const bool branch_taken_0x23fe58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE58u;
        // 0x23fe5c: 0x3c1401c1  lui         $s4, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe58) {
            ctx->pc = 0x23FF9Cu;
            goto label_23ff9c;
        }
    }
    ctx->pc = 0x23FE60u;
label_23fe60:
    // 0x23fe60: 0x3c130024  lui         $s3, 0x24
    ctx->pc = 0x23fe60u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)36 << 16));
label_23fe64:
    // 0x23fe64: 0x8e22012c  lw          $v0, 0x12C($s1)
    ctx->pc = 0x23fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
label_23fe68:
    // 0x23fe68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23fe68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_23fe6c:
    // 0x23fe6c: 0x50400047  beql        $v0, $zero, . + 4 + (0x47 << 2)
label_23fe70:
    if (ctx->pc == 0x23FE70u) {
        ctx->pc = 0x23FE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE6Cu;
        // 0x23fe70: 0x8e310128  lw          $s1, 0x128($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FE74u;
        goto label_23fe74;
    }
    ctx->pc = 0x23FE6Cu;
    {
        const bool branch_taken_0x23fe6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fe6c) {
            ctx->pc = 0x23FE70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FE6Cu;
            // 0x23fe70: 0x8e310128  lw          $s1, 0x128($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FF8Cu;
            goto label_23ff8c;
        }
    }
    ctx->pc = 0x23FE74u;
label_23fe74:
    // 0x23fe74: 0x96220030  lhu         $v0, 0x30($s1)
    ctx->pc = 0x23fe74u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
label_23fe78:
    // 0x23fe78: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x23fe78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_23fe7c:
    // 0x23fe7c: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
label_23fe80:
    if (ctx->pc == 0x23FE80u) {
        ctx->pc = 0x23FE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE7Cu;
        // 0x23fe80: 0x8e310128  lw          $s1, 0x128($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FE84u;
        goto label_23fe84;
    }
    ctx->pc = 0x23FE7Cu;
    {
        const bool branch_taken_0x23fe7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fe7c) {
            ctx->pc = 0x23FE80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FE7Cu;
            // 0x23fe80: 0x8e310128  lw          $s1, 0x128($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FF8Cu;
            goto label_23ff8c;
        }
    }
    ctx->pc = 0x23FE84u;
label_23fe84:
    // 0x23fe84: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x23fe84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
label_23fe88:
    // 0x23fe88: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x23fe88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_23fe8c:
    // 0x23fe8c: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
label_23fe90:
    if (ctx->pc == 0x23FE90u) {
        ctx->pc = 0x23FE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE8Cu;
        // 0x23fe90: 0x8e310128  lw          $s1, 0x128($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FE94u;
        goto label_23fe94;
    }
    ctx->pc = 0x23FE8Cu;
    {
        const bool branch_taken_0x23fe8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fe8c) {
            ctx->pc = 0x23FE90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FE8Cu;
            // 0x23fe90: 0x8e310128  lw          $s1, 0x128($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FF8Cu;
            goto label_23ff8c;
        }
    }
    ctx->pc = 0x23FE94u;
label_23fe94:
    // 0x23fe94: 0x96240134  lhu         $a0, 0x134($s1)
    ctx->pc = 0x23fe94u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 308)));
label_23fe98:
    // 0x23fe98: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23fe9c:
    // 0x23fe9c: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x23fe9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_23fea0:
    // 0x23fea0: 0x14620028  bne         $v1, $v0, . + 4 + (0x28 << 2)
label_23fea4:
    if (ctx->pc == 0x23FEA4u) {
        ctx->pc = 0x23FEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FEA0u;
        // 0x23fea4: 0x2c620004  sltiu       $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FEA8u;
        goto label_23fea8;
    }
    ctx->pc = 0x23FEA0u;
    {
        const bool branch_taken_0x23fea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23FEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FEA0u;
        // 0x23fea4: 0x2c620004  sltiu       $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fea0) {
            ctx->pc = 0x23FF44u;
            goto label_23ff44;
        }
    }
    ctx->pc = 0x23FEA8u;
label_23fea8:
    // 0x23fea8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23fea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23feac:
    // 0x23feac: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x23feacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_23feb0:
    // 0x23feb0: 0x24a56070  addiu       $a1, $a1, 0x6070
    ctx->pc = 0x23feb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24688));
label_23feb4:
    // 0x23feb4: 0xc08b5ac  jal         func_22D6B0
label_23feb8:
    if (ctx->pc == 0x23FEB8u) {
        ctx->pc = 0x23FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FEB4u;
        // 0x23feb8: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FEBCu;
        goto label_23febc;
    }
    ctx->pc = 0x23FEB4u;
    SET_GPR_U32(ctx, 31, 0x23FEBCu);
    ctx->pc = 0x23FEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FEB4u;
    // 0x23feb8: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23FEB4u, 0x23FEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FEBCu;
label_23febc:
    // 0x23febc: 0xc08d4e4  jal         func_235390
label_23fec0:
    if (ctx->pc == 0x23FEC0u) {
        ctx->pc = 0x23FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FEBCu;
        // 0x23fec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FEC4u;
        goto label_23fec4;
    }
    ctx->pc = 0x23FEBCu;
    SET_GPR_U32(ctx, 31, 0x23FEC4u);
    ctx->pc = 0x23FEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FEBCu;
    // 0x23fec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235390u, 0x23FEBCu, 0x23FEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FEC4u;
label_23fec4:
    // 0x23fec4: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23fec4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23fec8:
    // 0x23fec8: 0x3c12003f  lui         $s2, 0x3F
    ctx->pc = 0x23fec8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)63 << 16));
label_23fecc:
    // 0x23fecc: 0x8e240114  lw          $a0, 0x114($s1)
    ctx->pc = 0x23feccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
label_23fed0:
    // 0x23fed0: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_23fed4:
    if (ctx->pc == 0x23FED4u) {
        ctx->pc = 0x23FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FED0u;
        // 0x23fed4: 0x26056080  addiu       $a1, $s0, 0x6080 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FED8u;
        goto label_23fed8;
    }
    ctx->pc = 0x23FED0u;
    {
        const bool branch_taken_0x23fed0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FED0u;
        // 0x23fed4: 0x26056080  addiu       $a1, $s0, 0x6080 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fed0) {
            ctx->pc = 0x23FF04u;
            goto label_23ff04;
        }
    }
    ctx->pc = 0x23FED8u;
label_23fed8:
    // 0x23fed8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x23fed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_23fedc:
    // 0x23fedc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_23fee0:
    if (ctx->pc == 0x23FEE0u) {
        ctx->pc = 0x23FEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FEDCu;
        // 0x23fee0: 0xae220114  sw          $v0, 0x114($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FEE4u;
        goto label_23fee4;
    }
    ctx->pc = 0x23FEDCu;
    {
        const bool branch_taken_0x23fedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FEDCu;
        // 0x23fee0: 0xae220114  sw          $v0, 0x114($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fedc) {
            ctx->pc = 0x23FEE8u;
            goto label_23fee8;
        }
    }
    ctx->pc = 0x23FEE4u;
label_23fee4:
    // 0x23fee4: 0xae200118  sw          $zero, 0x118($s1)
    ctx->pc = 0x23fee4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 0));
label_23fee8:
    // 0x23fee8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x23fee8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_23feec:
    // 0x23feec: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x23feecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_23fef0:
    // 0x23fef0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23fef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23fef4:
    // 0x23fef4: 0xc08a9d6  jal         func_22A758
label_23fef8:
    if (ctx->pc == 0x23FEF8u) {
        ctx->pc = 0x23FEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FEF4u;
        // 0x23fef8: 0xae22011c  sw          $v0, 0x11C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FEFCu;
        goto label_23fefc;
    }
    ctx->pc = 0x23FEF4u;
    SET_GPR_U32(ctx, 31, 0x23FEFCu);
    ctx->pc = 0x23FEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FEF4u;
    // 0x23fef8: 0xae22011c  sw          $v0, 0x11C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x23FEF4u, 0x23FEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FEFCu;
label_23fefc:
    // 0x23fefc: 0x1000fff4  b           . + 4 + (-0xC << 2)
label_23ff00:
    if (ctx->pc == 0x23FF00u) {
        ctx->pc = 0x23FF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FEFCu;
        // 0x23ff00: 0x8e240114  lw          $a0, 0x114($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF04u;
        goto label_23ff04;
    }
    ctx->pc = 0x23FEFCu;
    {
        const bool branch_taken_0x23fefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FEFCu;
        // 0x23ff00: 0x8e240114  lw          $a0, 0x114($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fefc) {
            ctx->pc = 0x23FED0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23fed0;
        }
    }
    ctx->pc = 0x23FF04u;
label_23ff04:
    // 0x23ff04: 0xc08b5ac  jal         func_22D6B0
label_23ff08:
    if (ctx->pc == 0x23FF08u) {
        ctx->pc = 0x23FF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF04u;
        // 0x23ff08: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF0Cu;
        goto label_23ff0c;
    }
    ctx->pc = 0x23FF04u;
    SET_GPR_U32(ctx, 31, 0x23FF0Cu);
    ctx->pc = 0x23FF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FF04u;
    // 0x23ff08: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23FF04u, 0x23FF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FF0Cu;
label_23ff0c:
    // 0x23ff0c: 0x26505060  addiu       $s0, $s2, 0x5060
    ctx->pc = 0x23ff0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 20576));
label_23ff10:
    // 0x23ff10: 0xa6200134  sh          $zero, 0x134($s1)
    ctx->pc = 0x23ff10u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 308), (uint16_t)GPR_U32(ctx, 0));
label_23ff14:
    // 0x23ff14: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x23ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_23ff18:
    // 0x23ff18: 0x40f809  jalr        $v0
label_23ff1c:
    if (ctx->pc == 0x23FF1Cu) {
        ctx->pc = 0x23FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF18u;
        // 0x23ff1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF20u;
        goto label_23ff20;
    }
    ctx->pc = 0x23FF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23FF20u);
        ctx->pc = 0x23FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF18u;
        // 0x23ff1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FF18u, 0x23FF20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23FF20u;
label_23ff20:
    // 0x23ff20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ff20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23ff24:
    // 0x23ff24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23ff24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23ff28:
    // 0x23ff28: 0xc08eef2  jal         func_23BBC8
label_23ff2c:
    if (ctx->pc == 0x23FF2Cu) {
        ctx->pc = 0x23FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF28u;
        // 0x23ff2c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF30u;
        goto label_23ff30;
    }
    ctx->pc = 0x23FF28u;
    SET_GPR_U32(ctx, 31, 0x23FF30u);
    ctx->pc = 0x23FF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FF28u;
    // 0x23ff2c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BBC8u, 0x23FF28u, 0x23FF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FF30u;
label_23ff30:
    // 0x23ff30: 0x8e224e20  lw          $v0, 0x4E20($s1)
    ctx->pc = 0x23ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20000)));
label_23ff34:
    // 0x23ff34: 0x40f809  jalr        $v0
label_23ff38:
    if (ctx->pc == 0x23FF38u) {
        ctx->pc = 0x23FF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF34u;
        // 0x23ff38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF3Cu;
        goto label_23ff3c;
    }
    ctx->pc = 0x23FF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23FF3Cu);
        ctx->pc = 0x23FF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF34u;
        // 0x23ff38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FF34u, 0x23FF3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23FF3Cu;
label_23ff3c:
    // 0x23ff3c: 0x10000013  b           . + 4 + (0x13 << 2)
label_23ff40:
    if (ctx->pc == 0x23FF40u) {
        ctx->pc = 0x23FF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF3Cu;
        // 0x23ff40: 0x8e310128  lw          $s1, 0x128($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF44u;
        goto label_23ff44;
    }
    ctx->pc = 0x23FF3Cu;
    {
        const bool branch_taken_0x23ff3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF3Cu;
        // 0x23ff40: 0x8e310128  lw          $s1, 0x128($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff3c) {
            ctx->pc = 0x23FF8Cu;
            goto label_23ff8c;
        }
    }
    ctx->pc = 0x23FF44u;
label_23ff44:
    // 0x23ff44: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_23ff48:
    if (ctx->pc == 0x23FF48u) {
        ctx->pc = 0x23FF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF44u;
        // 0x23ff48: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF4Cu;
        goto label_23ff4c;
    }
    ctx->pc = 0x23FF44u;
    {
        const bool branch_taken_0x23ff44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF44u;
        // 0x23ff48: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff44) {
            ctx->pc = 0x23FF50u;
            goto label_23ff50;
        }
    }
    ctx->pc = 0x23FF4Cu;
label_23ff4c:
    // 0x23ff4c: 0xa6220134  sh          $v0, 0x134($s1)
    ctx->pc = 0x23ff4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 308), (uint16_t)GPR_U32(ctx, 2));
label_23ff50:
    // 0x23ff50: 0xc08a254  jal         func_228950
label_23ff54:
    if (ctx->pc == 0x23FF54u) {
        ctx->pc = 0x23FF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF50u;
        // 0x23ff54: 0x8e240274  lw          $a0, 0x274($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF58u;
        goto label_23ff58;
    }
    ctx->pc = 0x23FF50u;
    SET_GPR_U32(ctx, 31, 0x23FF58u);
    ctx->pc = 0x23FF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FF50u;
    // 0x23ff54: 0x8e240274  lw          $a0, 0x274($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x23FF50u, 0x23FF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FF58u;
label_23ff58:
    // 0x23ff58: 0x8e230138  lw          $v1, 0x138($s1)
    ctx->pc = 0x23ff58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
label_23ff5c:
    // 0x23ff5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23ff5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23ff60:
    // 0x23ff60: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x23ff60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_23ff64:
    // 0x23ff64: 0x3405c021  ori         $a1, $zero, 0xC021
    ctx->pc = 0x23ff64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49185);
label_23ff68:
    // 0x23ff68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23ff6c:
    // 0x23ff6c: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x23ff6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_23ff70:
    // 0x23ff70: 0xa22302a0  sb          $v1, 0x2A0($s1)
    ctx->pc = 0x23ff70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 672), (uint8_t)GPR_U32(ctx, 3));
label_23ff74:
    // 0x23ff74: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x23ff74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23ff78:
    // 0x23ff78: 0xae230138  sw          $v1, 0x138($s1)
    ctx->pc = 0x23ff78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 3));
label_23ff7c:
    // 0x23ff7c: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x23ff7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23ff80:
    // 0x23ff80: 0xc08e8be  jal         func_23A2F8
label_23ff84:
    if (ctx->pc == 0x23FF84u) {
        ctx->pc = 0x23FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF80u;
        // 0x23ff84: 0x306700ff  andi        $a3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF88u;
        goto label_23ff88;
    }
    ctx->pc = 0x23FF80u;
    SET_GPR_U32(ctx, 31, 0x23FF88u);
    ctx->pc = 0x23FF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FF80u;
    // 0x23ff84: 0x306700ff  andi        $a3, $v1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A2F8u, 0x23FF80u, 0x23FF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FF88u;
label_23ff88:
    // 0x23ff88: 0x8e310128  lw          $s1, 0x128($s1)
    ctx->pc = 0x23ff88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_23ff8c:
    // 0x23ff8c: 0x5620ffb6  bnel        $s1, $zero, . + 4 + (-0x4A << 2)
label_23ff90:
    if (ctx->pc == 0x23FF90u) {
        ctx->pc = 0x23FF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF8Cu;
        // 0x23ff90: 0x8e22012c  lw          $v0, 0x12C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF94u;
        goto label_23ff94;
    }
    ctx->pc = 0x23FF8Cu;
    {
        const bool branch_taken_0x23ff8c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ff8c) {
            ctx->pc = 0x23FF90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FF8Cu;
            // 0x23ff90: 0x8e22012c  lw          $v0, 0x12C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FE68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23fe68;
        }
    }
    ctx->pc = 0x23FF94u;
label_23ff94:
    // 0x23ff94: 0x10000002  b           . + 4 + (0x2 << 2)
label_23ff98:
    if (ctx->pc == 0x23FF98u) {
        ctx->pc = 0x23FF9Cu;
        goto label_23ff9c;
    }
    ctx->pc = 0x23FF94u;
    {
        const bool branch_taken_0x23ff94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ff94) {
            ctx->pc = 0x23FFA0u;
            goto label_23ffa0;
        }
    }
    ctx->pc = 0x23FF9Cu;
label_23ff9c:
    // 0x23ff9c: 0x3c130024  lui         $s3, 0x24
    ctx->pc = 0x23ff9cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)36 << 16));
label_23ffa0:
    // 0x23ffa0: 0xc08c698  jal         func_231A60
label_23ffa4:
    if (ctx->pc == 0x23FFA4u) {
        ctx->pc = 0x23FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FFA0u;
        // 0x23ffa4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FFA8u;
        goto label_23ffa8;
    }
    ctx->pc = 0x23FFA0u;
    SET_GPR_U32(ctx, 31, 0x23FFA8u);
    ctx->pc = 0x23FFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FFA0u;
    // 0x23ffa4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x23FFA0u, 0x23FFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FFA8u;
label_23ffa8:
    // 0x23ffa8: 0x2684adc8  addiu       $a0, $s4, -0x5238
    ctx->pc = 0x23ffa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946248));
label_23ffac:
    // 0x23ffac: 0x2666fe28  addiu       $a2, $s3, -0x1D8
    ctx->pc = 0x23ffacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966824));
label_23ffb0:
    // 0x23ffb0: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x23ffb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_23ffb4:
    // 0x23ffb4: 0xc08a058  jal         func_228160
label_23ffb8:
    if (ctx->pc == 0x23FFB8u) {
        ctx->pc = 0x23FFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FFB4u;
        // 0x23ffb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FFBCu;
        goto label_23ffbc;
    }
    ctx->pc = 0x23FFB4u;
    SET_GPR_U32(ctx, 31, 0x23FFBCu);
    ctx->pc = 0x23FFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FFB4u;
    // 0x23ffb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228160u, 0x23FFB4u, 0x23FFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FFBCu;
label_23ffbc:
    // 0x23ffbc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x23ffbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_23ffc0:
    // 0x23ffc0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x23ffc0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_23ffc4:
    // 0x23ffc4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x23ffc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23ffc8:
    // 0x23ffc8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x23ffc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23ffcc:
    // 0x23ffcc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x23ffccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23ffd0:
    // 0x23ffd0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x23ffd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23ffd4:
    // 0x23ffd4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x23ffd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23ffd8:
    // 0x23ffd8: 0x3e00008  jr          $ra
label_23ffdc:
    if (ctx->pc == 0x23FFDCu) {
        ctx->pc = 0x23FFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FFD8u;
        // 0x23ffdc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FFE0u;
        goto label_fallthrough_0x23ffd8;
    }
    ctx->pc = 0x23FFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FFD8u;
        // 0x23ffdc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23ffd8:
    ctx->pc = 0x23FFE0u;
}
