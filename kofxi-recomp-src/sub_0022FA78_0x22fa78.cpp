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

// Function: sub_0022FA78
// Address: 0x22fa78 - 0x22fe08
void sub_0022FA78_0x22fa78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FA78_0x22fa78");
#endif

    switch (ctx->pc) {
        case 0x22fa78u: goto label_22fa78;
        case 0x22fa7cu: goto label_22fa7c;
        case 0x22fa80u: goto label_22fa80;
        case 0x22fa84u: goto label_22fa84;
        case 0x22fa88u: goto label_22fa88;
        case 0x22fa8cu: goto label_22fa8c;
        case 0x22fa90u: goto label_22fa90;
        case 0x22fa94u: goto label_22fa94;
        case 0x22fa98u: goto label_22fa98;
        case 0x22fa9cu: goto label_22fa9c;
        case 0x22faa0u: goto label_22faa0;
        case 0x22faa4u: goto label_22faa4;
        case 0x22faa8u: goto label_22faa8;
        case 0x22faacu: goto label_22faac;
        case 0x22fab0u: goto label_22fab0;
        case 0x22fab4u: goto label_22fab4;
        case 0x22fab8u: goto label_22fab8;
        case 0x22fabcu: goto label_22fabc;
        case 0x22fac0u: goto label_22fac0;
        case 0x22fac4u: goto label_22fac4;
        case 0x22fac8u: goto label_22fac8;
        case 0x22faccu: goto label_22facc;
        case 0x22fad0u: goto label_22fad0;
        case 0x22fad4u: goto label_22fad4;
        case 0x22fad8u: goto label_22fad8;
        case 0x22fadcu: goto label_22fadc;
        case 0x22fae0u: goto label_22fae0;
        case 0x22fae4u: goto label_22fae4;
        case 0x22fae8u: goto label_22fae8;
        case 0x22faecu: goto label_22faec;
        case 0x22faf0u: goto label_22faf0;
        case 0x22faf4u: goto label_22faf4;
        case 0x22faf8u: goto label_22faf8;
        case 0x22fafcu: goto label_22fafc;
        case 0x22fb00u: goto label_22fb00;
        case 0x22fb04u: goto label_22fb04;
        case 0x22fb08u: goto label_22fb08;
        case 0x22fb0cu: goto label_22fb0c;
        case 0x22fb10u: goto label_22fb10;
        case 0x22fb14u: goto label_22fb14;
        case 0x22fb18u: goto label_22fb18;
        case 0x22fb1cu: goto label_22fb1c;
        case 0x22fb20u: goto label_22fb20;
        case 0x22fb24u: goto label_22fb24;
        case 0x22fb28u: goto label_22fb28;
        case 0x22fb2cu: goto label_22fb2c;
        case 0x22fb30u: goto label_22fb30;
        case 0x22fb34u: goto label_22fb34;
        case 0x22fb38u: goto label_22fb38;
        case 0x22fb3cu: goto label_22fb3c;
        case 0x22fb40u: goto label_22fb40;
        case 0x22fb44u: goto label_22fb44;
        case 0x22fb48u: goto label_22fb48;
        case 0x22fb4cu: goto label_22fb4c;
        case 0x22fb50u: goto label_22fb50;
        case 0x22fb54u: goto label_22fb54;
        case 0x22fb58u: goto label_22fb58;
        case 0x22fb5cu: goto label_22fb5c;
        case 0x22fb60u: goto label_22fb60;
        case 0x22fb64u: goto label_22fb64;
        case 0x22fb68u: goto label_22fb68;
        case 0x22fb6cu: goto label_22fb6c;
        case 0x22fb70u: goto label_22fb70;
        case 0x22fb74u: goto label_22fb74;
        case 0x22fb78u: goto label_22fb78;
        case 0x22fb7cu: goto label_22fb7c;
        case 0x22fb80u: goto label_22fb80;
        case 0x22fb84u: goto label_22fb84;
        case 0x22fb88u: goto label_22fb88;
        case 0x22fb8cu: goto label_22fb8c;
        case 0x22fb90u: goto label_22fb90;
        case 0x22fb94u: goto label_22fb94;
        case 0x22fb98u: goto label_22fb98;
        case 0x22fb9cu: goto label_22fb9c;
        case 0x22fba0u: goto label_22fba0;
        case 0x22fba4u: goto label_22fba4;
        case 0x22fba8u: goto label_22fba8;
        case 0x22fbacu: goto label_22fbac;
        case 0x22fbb0u: goto label_22fbb0;
        case 0x22fbb4u: goto label_22fbb4;
        case 0x22fbb8u: goto label_22fbb8;
        case 0x22fbbcu: goto label_22fbbc;
        case 0x22fbc0u: goto label_22fbc0;
        case 0x22fbc4u: goto label_22fbc4;
        case 0x22fbc8u: goto label_22fbc8;
        case 0x22fbccu: goto label_22fbcc;
        case 0x22fbd0u: goto label_22fbd0;
        case 0x22fbd4u: goto label_22fbd4;
        case 0x22fbd8u: goto label_22fbd8;
        case 0x22fbdcu: goto label_22fbdc;
        case 0x22fbe0u: goto label_22fbe0;
        case 0x22fbe4u: goto label_22fbe4;
        case 0x22fbe8u: goto label_22fbe8;
        case 0x22fbecu: goto label_22fbec;
        case 0x22fbf0u: goto label_22fbf0;
        case 0x22fbf4u: goto label_22fbf4;
        case 0x22fbf8u: goto label_22fbf8;
        case 0x22fbfcu: goto label_22fbfc;
        case 0x22fc00u: goto label_22fc00;
        case 0x22fc04u: goto label_22fc04;
        case 0x22fc08u: goto label_22fc08;
        case 0x22fc0cu: goto label_22fc0c;
        case 0x22fc10u: goto label_22fc10;
        case 0x22fc14u: goto label_22fc14;
        case 0x22fc18u: goto label_22fc18;
        case 0x22fc1cu: goto label_22fc1c;
        case 0x22fc20u: goto label_22fc20;
        case 0x22fc24u: goto label_22fc24;
        case 0x22fc28u: goto label_22fc28;
        case 0x22fc2cu: goto label_22fc2c;
        case 0x22fc30u: goto label_22fc30;
        case 0x22fc34u: goto label_22fc34;
        case 0x22fc38u: goto label_22fc38;
        case 0x22fc3cu: goto label_22fc3c;
        case 0x22fc40u: goto label_22fc40;
        case 0x22fc44u: goto label_22fc44;
        case 0x22fc48u: goto label_22fc48;
        case 0x22fc4cu: goto label_22fc4c;
        case 0x22fc50u: goto label_22fc50;
        case 0x22fc54u: goto label_22fc54;
        case 0x22fc58u: goto label_22fc58;
        case 0x22fc5cu: goto label_22fc5c;
        case 0x22fc60u: goto label_22fc60;
        case 0x22fc64u: goto label_22fc64;
        case 0x22fc68u: goto label_22fc68;
        case 0x22fc6cu: goto label_22fc6c;
        case 0x22fc70u: goto label_22fc70;
        case 0x22fc74u: goto label_22fc74;
        case 0x22fc78u: goto label_22fc78;
        case 0x22fc7cu: goto label_22fc7c;
        case 0x22fc80u: goto label_22fc80;
        case 0x22fc84u: goto label_22fc84;
        case 0x22fc88u: goto label_22fc88;
        case 0x22fc8cu: goto label_22fc8c;
        case 0x22fc90u: goto label_22fc90;
        case 0x22fc94u: goto label_22fc94;
        case 0x22fc98u: goto label_22fc98;
        case 0x22fc9cu: goto label_22fc9c;
        case 0x22fca0u: goto label_22fca0;
        case 0x22fca4u: goto label_22fca4;
        case 0x22fca8u: goto label_22fca8;
        case 0x22fcacu: goto label_22fcac;
        case 0x22fcb0u: goto label_22fcb0;
        case 0x22fcb4u: goto label_22fcb4;
        case 0x22fcb8u: goto label_22fcb8;
        case 0x22fcbcu: goto label_22fcbc;
        case 0x22fcc0u: goto label_22fcc0;
        case 0x22fcc4u: goto label_22fcc4;
        case 0x22fcc8u: goto label_22fcc8;
        case 0x22fcccu: goto label_22fccc;
        case 0x22fcd0u: goto label_22fcd0;
        case 0x22fcd4u: goto label_22fcd4;
        case 0x22fcd8u: goto label_22fcd8;
        case 0x22fcdcu: goto label_22fcdc;
        case 0x22fce0u: goto label_22fce0;
        case 0x22fce4u: goto label_22fce4;
        case 0x22fce8u: goto label_22fce8;
        case 0x22fcecu: goto label_22fcec;
        case 0x22fcf0u: goto label_22fcf0;
        case 0x22fcf4u: goto label_22fcf4;
        case 0x22fcf8u: goto label_22fcf8;
        case 0x22fcfcu: goto label_22fcfc;
        case 0x22fd00u: goto label_22fd00;
        case 0x22fd04u: goto label_22fd04;
        case 0x22fd08u: goto label_22fd08;
        case 0x22fd0cu: goto label_22fd0c;
        case 0x22fd10u: goto label_22fd10;
        case 0x22fd14u: goto label_22fd14;
        case 0x22fd18u: goto label_22fd18;
        case 0x22fd1cu: goto label_22fd1c;
        case 0x22fd20u: goto label_22fd20;
        case 0x22fd24u: goto label_22fd24;
        case 0x22fd28u: goto label_22fd28;
        case 0x22fd2cu: goto label_22fd2c;
        case 0x22fd30u: goto label_22fd30;
        case 0x22fd34u: goto label_22fd34;
        case 0x22fd38u: goto label_22fd38;
        case 0x22fd3cu: goto label_22fd3c;
        case 0x22fd40u: goto label_22fd40;
        case 0x22fd44u: goto label_22fd44;
        case 0x22fd48u: goto label_22fd48;
        case 0x22fd4cu: goto label_22fd4c;
        case 0x22fd50u: goto label_22fd50;
        case 0x22fd54u: goto label_22fd54;
        case 0x22fd58u: goto label_22fd58;
        case 0x22fd5cu: goto label_22fd5c;
        case 0x22fd60u: goto label_22fd60;
        case 0x22fd64u: goto label_22fd64;
        case 0x22fd68u: goto label_22fd68;
        case 0x22fd6cu: goto label_22fd6c;
        case 0x22fd70u: goto label_22fd70;
        case 0x22fd74u: goto label_22fd74;
        case 0x22fd78u: goto label_22fd78;
        case 0x22fd7cu: goto label_22fd7c;
        case 0x22fd80u: goto label_22fd80;
        case 0x22fd84u: goto label_22fd84;
        case 0x22fd88u: goto label_22fd88;
        case 0x22fd8cu: goto label_22fd8c;
        case 0x22fd90u: goto label_22fd90;
        case 0x22fd94u: goto label_22fd94;
        case 0x22fd98u: goto label_22fd98;
        case 0x22fd9cu: goto label_22fd9c;
        case 0x22fda0u: goto label_22fda0;
        case 0x22fda4u: goto label_22fda4;
        case 0x22fda8u: goto label_22fda8;
        case 0x22fdacu: goto label_22fdac;
        case 0x22fdb0u: goto label_22fdb0;
        case 0x22fdb4u: goto label_22fdb4;
        case 0x22fdb8u: goto label_22fdb8;
        case 0x22fdbcu: goto label_22fdbc;
        case 0x22fdc0u: goto label_22fdc0;
        case 0x22fdc4u: goto label_22fdc4;
        case 0x22fdc8u: goto label_22fdc8;
        case 0x22fdccu: goto label_22fdcc;
        case 0x22fdd0u: goto label_22fdd0;
        case 0x22fdd4u: goto label_22fdd4;
        case 0x22fdd8u: goto label_22fdd8;
        case 0x22fddcu: goto label_22fddc;
        case 0x22fde0u: goto label_22fde0;
        case 0x22fde4u: goto label_22fde4;
        case 0x22fde8u: goto label_22fde8;
        case 0x22fdecu: goto label_22fdec;
        case 0x22fdf0u: goto label_22fdf0;
        case 0x22fdf4u: goto label_22fdf4;
        case 0x22fdf8u: goto label_22fdf8;
        case 0x22fdfcu: goto label_22fdfc;
        case 0x22fe00u: goto label_22fe00;
        case 0x22fe04u: goto label_22fe04;
        default: break;
    }

    ctx->pc = 0x22fa78u;

label_22fa78:
    // 0x22fa78: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x22fa78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_22fa7c:
    // 0x22fa7c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x22fa7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_22fa80:
    // 0x22fa80: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x22fa80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_22fa84:
    // 0x22fa84: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x22fa84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_22fa88:
    // 0x22fa88: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x22fa88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22fa8c:
    // 0x22fa8c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x22fa8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_22fa90:
    // 0x22fa90: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x22fa90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22fa94:
    // 0x22fa94: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x22fa94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_22fa98:
    // 0x22fa98: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x22fa98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_22fa9c:
    // 0x22fa9c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x22fa9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_22faa0:
    // 0x22faa0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22faa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22faa4:
    // 0x22faa4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x22faa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_22faa8:
    // 0x22faa8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x22faa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22faac:
    // 0x22faac: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x22faacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_22fab0:
    // 0x22fab0: 0x12a2000e  beq         $s5, $v0, . + 4 + (0xE << 2)
label_22fab4:
    if (ctx->pc == 0x22FAB4u) {
        ctx->pc = 0x22FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAB0u;
        // 0x22fab4: 0xafa70010  sw          $a3, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FAB8u;
        goto label_22fab8;
    }
    ctx->pc = 0x22FAB0u;
    {
        const bool branch_taken_0x22fab0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x22FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAB0u;
        // 0x22fab4: 0xafa70010  sw          $a3, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fab0) {
            ctx->pc = 0x22FAECu;
            goto label_22faec;
        }
    }
    ctx->pc = 0x22FAB8u;
label_22fab8:
    // 0x22fab8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x22fab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_22fabc:
    // 0x22fabc: 0x104000c4  beqz        $v0, . + 4 + (0xC4 << 2)
label_22fac0:
    if (ctx->pc == 0x22FAC0u) {
        ctx->pc = 0x22FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FABCu;
        // 0x22fac0: 0x2414006d  addiu       $s4, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FAC4u;
        goto label_22fac4;
    }
    ctx->pc = 0x22FABCu;
    {
        const bool branch_taken_0x22fabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FABCu;
        // 0x22fac0: 0x2414006d  addiu       $s4, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fabc) {
            ctx->pc = 0x22FDD0u;
            goto label_22fdd0;
        }
    }
    ctx->pc = 0x22FAC4u;
label_22fac4:
    // 0x22fac4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x22fac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_22fac8:
    // 0x22fac8: 0x104000c1  beqz        $v0, . + 4 + (0xC1 << 2)
label_22facc:
    if (ctx->pc == 0x22FACCu) {
        ctx->pc = 0x22FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAC8u;
        // 0x22facc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FAD0u;
        goto label_22fad0;
    }
    ctx->pc = 0x22FAC8u;
    {
        const bool branch_taken_0x22fac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAC8u;
        // 0x22facc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fac8) {
            ctx->pc = 0x22FDD0u;
            goto label_22fdd0;
        }
    }
    ctx->pc = 0x22FAD0u;
label_22fad0:
    // 0x22fad0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x22fad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_22fad4:
    // 0x22fad4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x22fad4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22fad8:
    // 0x22fad8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22fad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22fadc:
    // 0x22fadc: 0x40f809  jalr        $v0
label_22fae0:
    if (ctx->pc == 0x22FAE0u) {
        ctx->pc = 0x22FAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FADCu;
        // 0x22fae0: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FAE4u;
        goto label_22fae4;
    }
    ctx->pc = 0x22FADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22FAE4u);
        ctx->pc = 0x22FAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FADCu;
        // 0x22fae0: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FADCu, 0x22FAE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22FAE4u;
label_22fae4:
    // 0x22fae4: 0x100000c0  b           . + 4 + (0xC0 << 2)
label_22fae8:
    if (ctx->pc == 0x22FAE8u) {
        ctx->pc = 0x22FAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAE4u;
        // 0x22fae8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FAECu;
        goto label_22faec;
    }
    ctx->pc = 0x22FAE4u;
    {
        const bool branch_taken_0x22fae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAE4u;
        // 0x22fae8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fae4) {
            ctx->pc = 0x22FDE8u;
            goto label_22fde8;
        }
    }
    ctx->pc = 0x22FAECu;
label_22faec:
    // 0x22faec: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x22faecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_22faf0:
    // 0x22faf0: 0x1222003c  beq         $s1, $v0, . + 4 + (0x3C << 2)
label_22faf4:
    if (ctx->pc == 0x22FAF4u) {
        ctx->pc = 0x22FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAF0u;
        // 0x22faf4: 0x2a220101  slti        $v0, $s1, 0x101 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)257) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FAF8u;
        goto label_22faf8;
    }
    ctx->pc = 0x22FAF0u;
    {
        const bool branch_taken_0x22faf0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x22FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAF0u;
        // 0x22faf4: 0x2a220101  slti        $v0, $s1, 0x101 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)257) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22faf0) {
            ctx->pc = 0x22FBE4u;
            goto label_22fbe4;
        }
    }
    ctx->pc = 0x22FAF8u;
label_22faf8:
    // 0x22faf8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_22fafc:
    if (ctx->pc == 0x22FAFCu) {
        ctx->pc = 0x22FAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAF8u;
        // 0x22fafc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FB00u;
        goto label_22fb00;
    }
    ctx->pc = 0x22FAF8u;
    {
        const bool branch_taken_0x22faf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAF8u;
        // 0x22fafc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22faf8) {
            ctx->pc = 0x22FB7Cu;
            goto label_22fb7c;
        }
    }
    ctx->pc = 0x22FB00u;
label_22fb00:
    // 0x22fb00: 0x12220038  beq         $s1, $v0, . + 4 + (0x38 << 2)
label_22fb04:
    if (ctx->pc == 0x22FB04u) {
        ctx->pc = 0x22FB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB00u;
        // 0x22fb04: 0x2a220011  slti        $v0, $s1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FB08u;
        goto label_22fb08;
    }
    ctx->pc = 0x22FB00u;
    {
        const bool branch_taken_0x22fb00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x22FB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB00u;
        // 0x22fb04: 0x2a220011  slti        $v0, $s1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb00) {
            ctx->pc = 0x22FBE4u;
            goto label_22fbe4;
        }
    }
    ctx->pc = 0x22FB08u;
label_22fb08:
    // 0x22fb08: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_22fb0c:
    if (ctx->pc == 0x22FB0Cu) {
        ctx->pc = 0x22FB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB08u;
        // 0x22fb0c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FB10u;
        goto label_22fb10;
    }
    ctx->pc = 0x22FB08u;
    {
        const bool branch_taken_0x22fb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB08u;
        // 0x22fb0c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb08) {
            ctx->pc = 0x22FB44u;
            goto label_22fb44;
        }
    }
    ctx->pc = 0x22FB10u;
label_22fb10:
    // 0x22fb10: 0x12220034  beq         $s1, $v0, . + 4 + (0x34 << 2)
label_22fb14:
    if (ctx->pc == 0x22FB14u) {
        ctx->pc = 0x22FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB10u;
        // 0x22fb14: 0x2a220005  slti        $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FB18u;
        goto label_22fb18;
    }
    ctx->pc = 0x22FB10u;
    {
        const bool branch_taken_0x22fb10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x22FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB10u;
        // 0x22fb14: 0x2a220005  slti        $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb10) {
            ctx->pc = 0x22FBE4u;
            goto label_22fbe4;
        }
    }
    ctx->pc = 0x22FB18u;
label_22fb18:
    // 0x22fb18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_22fb1c:
    if (ctx->pc == 0x22FB1Cu) {
        ctx->pc = 0x22FB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB18u;
        // 0x22fb1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FB20u;
        goto label_22fb20;
    }
    ctx->pc = 0x22FB18u;
    {
        const bool branch_taken_0x22fb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB18u;
        // 0x22fb1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb18) {
            ctx->pc = 0x22FB30u;
            goto label_22fb30;
        }
    }
    ctx->pc = 0x22FB20u;
label_22fb20:
    // 0x22fb20: 0x12220030  beq         $s1, $v0, . + 4 + (0x30 << 2)
label_22fb24:
    if (ctx->pc == 0x22FB24u) {
        ctx->pc = 0x22FB28u;
        goto label_22fb28;
    }
    ctx->pc = 0x22FB20u;
    {
        const bool branch_taken_0x22fb20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x22fb20) {
            ctx->pc = 0x22FBE4u;
            goto label_22fbe4;
        }
    }
    ctx->pc = 0x22FB28u;
label_22fb28:
    // 0x22fb28: 0x1000009b  b           . + 4 + (0x9B << 2)
label_22fb2c:
    if (ctx->pc == 0x22FB2Cu) {
        ctx->pc = 0x22FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB28u;
        // 0x22fb2c: 0x2414006d  addiu       $s4, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FB30u;
        goto label_22fb30;
    }
    ctx->pc = 0x22FB28u;
    {
        const bool branch_taken_0x22fb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB28u;
        // 0x22fb2c: 0x2414006d  addiu       $s4, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb28) {
            ctx->pc = 0x22FD98u;
            goto label_22fd98;
        }
    }
    ctx->pc = 0x22FB30u;
label_22fb30:
    // 0x22fb30: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x22fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_22fb34:
    // 0x22fb34: 0x1222002b  beq         $s1, $v0, . + 4 + (0x2B << 2)
label_22fb38:
    if (ctx->pc == 0x22FB38u) {
        ctx->pc = 0x22FB3Cu;
        goto label_22fb3c;
    }
    ctx->pc = 0x22FB34u;
    {
        const bool branch_taken_0x22fb34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x22fb34) {
            ctx->pc = 0x22FBE4u;
            goto label_22fbe4;
        }
    }
    ctx->pc = 0x22FB3Cu;
label_22fb3c:
    // 0x22fb3c: 0x10000096  b           . + 4 + (0x96 << 2)
label_22fb40:
    if (ctx->pc == 0x22FB40u) {
        ctx->pc = 0x22FB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB3Cu;
        // 0x22fb40: 0x2414006d  addiu       $s4, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FB44u;
        goto label_22fb44;
    }
    ctx->pc = 0x22FB3Cu;
    {
        const bool branch_taken_0x22fb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB3Cu;
        // 0x22fb40: 0x2414006d  addiu       $s4, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb3c) {
            ctx->pc = 0x22FD98u;
            goto label_22fd98;
        }
    }
    ctx->pc = 0x22FB44u;
label_22fb44:
    // 0x22fb44: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x22fb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_22fb48:
    // 0x22fb48: 0x12220026  beq         $s1, $v0, . + 4 + (0x26 << 2)
label_22fb4c:
    if (ctx->pc == 0x22FB4Cu) {
        ctx->pc = 0x22FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB48u;
        // 0x22fb4c: 0x2a220041  slti        $v0, $s1, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FB50u;
        goto label_22fb50;
    }
    ctx->pc = 0x22FB48u;
    {
        const bool branch_taken_0x22fb48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x22FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB48u;
        // 0x22fb4c: 0x2a220041  slti        $v0, $s1, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb48) {
            ctx->pc = 0x22FBE4u;
            goto label_22fbe4;
        }
    }
    ctx->pc = 0x22FB50u;
label_22fb50:
    // 0x22fb50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_22fb54:
    if (ctx->pc == 0x22FB54u) {
        ctx->pc = 0x22FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB50u;
        // 0x22fb54: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FB58u;
        goto label_22fb58;
    }
    ctx->pc = 0x22FB50u;
    {
        const bool branch_taken_0x22fb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB50u;
        // 0x22fb54: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb50) {
            ctx->pc = 0x22FB68u;
            goto label_22fb68;
        }
    }
    ctx->pc = 0x22FB58u;
label_22fb58:
    // 0x22fb58: 0x12220022  beq         $s1, $v0, . + 4 + (0x22 << 2)
label_22fb5c:
    if (ctx->pc == 0x22FB5Cu) {
        ctx->pc = 0x22FB60u;
        goto label_22fb60;
    }
    ctx->pc = 0x22FB58u;
    {
        const bool branch_taken_0x22fb58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x22fb58) {
            ctx->pc = 0x22FBE4u;
            goto label_22fbe4;
        }
    }
    ctx->pc = 0x22FB60u;
label_22fb60:
    // 0x22fb60: 0x1000008d  b           . + 4 + (0x8D << 2)
label_22fb64:
    if (ctx->pc == 0x22FB64u) {
        ctx->pc = 0x22FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB60u;
        // 0x22fb64: 0x2414006d  addiu       $s4, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FB68u;
        goto label_22fb68;
    }
    ctx->pc = 0x22FB60u;
    {
        const bool branch_taken_0x22fb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB60u;
        // 0x22fb64: 0x2414006d  addiu       $s4, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb60) {
            ctx->pc = 0x22FD98u;
            goto label_22fd98;
        }
    }
    ctx->pc = 0x22FB68u;
label_22fb68:
    // 0x22fb68: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x22fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_22fb6c:
    // 0x22fb6c: 0x12220015  beq         $s1, $v0, . + 4 + (0x15 << 2)
label_22fb70:
    if (ctx->pc == 0x22FB70u) {
        ctx->pc = 0x22FB74u;
        goto label_22fb74;
    }
    ctx->pc = 0x22FB6Cu;
    {
        const bool branch_taken_0x22fb6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x22fb6c) {
            ctx->pc = 0x22FBC4u;
            goto label_22fbc4;
        }
    }
    ctx->pc = 0x22FB74u;
label_22fb74:
    // 0x22fb74: 0x10000088  b           . + 4 + (0x88 << 2)
label_22fb78:
    if (ctx->pc == 0x22FB78u) {
        ctx->pc = 0x22FB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB74u;
        // 0x22fb78: 0x2414006d  addiu       $s4, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FB7Cu;
        goto label_22fb7c;
    }
    ctx->pc = 0x22FB74u;
    {
        const bool branch_taken_0x22fb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB74u;
        // 0x22fb78: 0x2414006d  addiu       $s4, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb74) {
            ctx->pc = 0x22FD98u;
            goto label_22fd98;
        }
    }
    ctx->pc = 0x22FB7Cu;
label_22fb7c:
    // 0x22fb7c: 0x2a221005  slti        $v0, $s1, 0x1005
    ctx->pc = 0x22fb7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4101) ? 1 : 0);
label_22fb80:
    // 0x22fb80: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_22fb84:
    if (ctx->pc == 0x22FB84u) {
        ctx->pc = 0x22FB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB80u;
        // 0x22fb84: 0x2a231001  slti        $v1, $s1, 0x1001 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4097) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FB88u;
        goto label_22fb88;
    }
    ctx->pc = 0x22FB80u;
    {
        const bool branch_taken_0x22fb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB80u;
        // 0x22fb84: 0x2a231001  slti        $v1, $s1, 0x1001 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4097) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb80) {
            ctx->pc = 0x22FBA8u;
            goto label_22fba8;
        }
    }
    ctx->pc = 0x22FB88u;
label_22fb88:
    // 0x22fb88: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_22fb8c:
    if (ctx->pc == 0x22FB8Cu) {
        ctx->pc = 0x22FB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB88u;
        // 0x22fb8c: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FB90u;
        goto label_22fb90;
    }
    ctx->pc = 0x22FB88u;
    {
        const bool branch_taken_0x22fb88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB88u;
        // 0x22fb8c: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb88) {
            ctx->pc = 0x22FC28u;
            goto label_22fc28;
        }
    }
    ctx->pc = 0x22FB90u;
label_22fb90:
    // 0x22fb90: 0x12220014  beq         $s1, $v0, . + 4 + (0x14 << 2)
label_22fb94:
    if (ctx->pc == 0x22FB94u) {
        ctx->pc = 0x22FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB90u;
        // 0x22fb94: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FB98u;
        goto label_22fb98;
    }
    ctx->pc = 0x22FB90u;
    {
        const bool branch_taken_0x22fb90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x22FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB90u;
        // 0x22fb94: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb90) {
            ctx->pc = 0x22FBE4u;
            goto label_22fbe4;
        }
    }
    ctx->pc = 0x22FB98u;
label_22fb98:
    // 0x22fb98: 0x12220012  beq         $s1, $v0, . + 4 + (0x12 << 2)
label_22fb9c:
    if (ctx->pc == 0x22FB9Cu) {
        ctx->pc = 0x22FBA0u;
        goto label_22fba0;
    }
    ctx->pc = 0x22FB98u;
    {
        const bool branch_taken_0x22fb98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x22fb98) {
            ctx->pc = 0x22FBE4u;
            goto label_22fbe4;
        }
    }
    ctx->pc = 0x22FBA0u;
label_22fba0:
    // 0x22fba0: 0x1000007d  b           . + 4 + (0x7D << 2)
label_22fba4:
    if (ctx->pc == 0x22FBA4u) {
        ctx->pc = 0x22FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBA0u;
        // 0x22fba4: 0x2414006d  addiu       $s4, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FBA8u;
        goto label_22fba8;
    }
    ctx->pc = 0x22FBA0u;
    {
        const bool branch_taken_0x22fba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBA0u;
        // 0x22fba4: 0x2414006d  addiu       $s4, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fba0) {
            ctx->pc = 0x22FD98u;
            goto label_22fd98;
        }
    }
    ctx->pc = 0x22FBA8u;
label_22fba8:
    // 0x22fba8: 0x2a221007  slti        $v0, $s1, 0x1007
    ctx->pc = 0x22fba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4103) ? 1 : 0);
label_22fbac:
    // 0x22fbac: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
label_22fbb0:
    if (ctx->pc == 0x22FBB0u) {
        ctx->pc = 0x22FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBACu;
        // 0x22fbb0: 0x24021009  addiu       $v0, $zero, 0x1009 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4105));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FBB4u;
        goto label_22fbb4;
    }
    ctx->pc = 0x22FBACu;
    {
        const bool branch_taken_0x22fbac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBACu;
        // 0x22fbb0: 0x24021009  addiu       $v0, $zero, 0x1009 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fbac) {
            ctx->pc = 0x22FCC4u;
            goto label_22fcc4;
        }
    }
    ctx->pc = 0x22FBB4u;
label_22fbb4:
    // 0x22fbb4: 0x12220068  beq         $s1, $v0, . + 4 + (0x68 << 2)
label_22fbb8:
    if (ctx->pc == 0x22FBB8u) {
        ctx->pc = 0x22FBBCu;
        goto label_22fbbc;
    }
    ctx->pc = 0x22FBB4u;
    {
        const bool branch_taken_0x22fbb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x22fbb4) {
            ctx->pc = 0x22FD58u;
            goto label_22fd58;
        }
    }
    ctx->pc = 0x22FBBCu;
label_22fbbc:
    // 0x22fbbc: 0x10000076  b           . + 4 + (0x76 << 2)
label_22fbc0:
    if (ctx->pc == 0x22FBC0u) {
        ctx->pc = 0x22FBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBBCu;
        // 0x22fbc0: 0x2414006d  addiu       $s4, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FBC4u;
        goto label_22fbc4;
    }
    ctx->pc = 0x22FBBCu;
    {
        const bool branch_taken_0x22fbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBBCu;
        // 0x22fbc0: 0x2414006d  addiu       $s4, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fbbc) {
            ctx->pc = 0x22FD98u;
            goto label_22fd98;
        }
    }
    ctx->pc = 0x22FBC4u;
label_22fbc4:
    // 0x22fbc4: 0x1260006a  beqz        $s3, . + 4 + (0x6A << 2)
label_22fbc8:
    if (ctx->pc == 0x22FBC8u) {
        ctx->pc = 0x22FBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBC4u;
        // 0x22fbc8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FBCCu;
        goto label_22fbcc;
    }
    ctx->pc = 0x22FBC4u;
    {
        const bool branch_taken_0x22fbc4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBC4u;
        // 0x22fbc8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fbc4) {
            ctx->pc = 0x22FD70u;
            goto label_22fd70;
        }
    }
    ctx->pc = 0x22FBCCu;
label_22fbcc:
    // 0x22fbcc: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x22fbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_22fbd0:
    // 0x22fbd0: 0x5462007f  bnel        $v1, $v0, . + 4 + (0x7F << 2)
label_22fbd4:
    if (ctx->pc == 0x22FBD4u) {
        ctx->pc = 0x22FBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBD0u;
        // 0x22fbd4: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FBD8u;
        goto label_22fbd8;
    }
    ctx->pc = 0x22FBD0u;
    {
        const bool branch_taken_0x22fbd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22fbd0) {
            ctx->pc = 0x22FBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FBD0u;
            // 0x22fbd4: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FDD0u;
            goto label_22fdd0;
        }
    }
    ctx->pc = 0x22FBD8u;
label_22fbd8:
    // 0x22fbd8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x22fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_22fbdc:
    // 0x22fbdc: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x22fbdcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_22fbe0:
    // 0x22fbe0: 0xa6430004  sh          $v1, 0x4($s2)
    ctx->pc = 0x22fbe0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
label_22fbe4:
    // 0x22fbe4: 0x5260007a  beql        $s3, $zero, . + 4 + (0x7A << 2)
label_22fbe8:
    if (ctx->pc == 0x22FBE8u) {
        ctx->pc = 0x22FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBE4u;
        // 0x22fbe8: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FBECu;
        goto label_22fbec;
    }
    ctx->pc = 0x22FBE4u;
    {
        const bool branch_taken_0x22fbe4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fbe4) {
            ctx->pc = 0x22FBE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FBE4u;
            // 0x22fbe8: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FDD0u;
            goto label_22fdd0;
        }
    }
    ctx->pc = 0x22FBECu;
label_22fbec:
    // 0x22fbec: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x22fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_22fbf0:
    // 0x22fbf0: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x22fbf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_22fbf4:
    // 0x22fbf4: 0x54400076  bnel        $v0, $zero, . + 4 + (0x76 << 2)
label_22fbf8:
    if (ctx->pc == 0x22FBF8u) {
        ctx->pc = 0x22FBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBF4u;
        // 0x22fbf8: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FBFCu;
        goto label_22fbfc;
    }
    ctx->pc = 0x22FBF4u;
    {
        const bool branch_taken_0x22fbf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fbf4) {
            ctx->pc = 0x22FBF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FBF4u;
            // 0x22fbf8: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FDD0u;
            goto label_22fdd0;
        }
    }
    ctx->pc = 0x22FBFCu;
label_22fbfc:
    // 0x22fbfc: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x22fbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_22fc00:
    // 0x22fc00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22fc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22fc04:
    // 0x22fc04: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_22fc08:
    if (ctx->pc == 0x22FC08u) {
        ctx->pc = 0x22FC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC04u;
        // 0x22fc08: 0x96420002  lhu         $v0, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC0Cu;
        goto label_22fc0c;
    }
    ctx->pc = 0x22FC04u;
    {
        const bool branch_taken_0x22fc04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC04u;
        // 0x22fc08: 0x96420002  lhu         $v0, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc04) {
            ctx->pc = 0x22FC18u;
            goto label_22fc18;
        }
    }
    ctx->pc = 0x22FC0Cu;
label_22fc0c:
    // 0x22fc0c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x22fc0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_22fc10:
    // 0x22fc10: 0x10000061  b           . + 4 + (0x61 << 2)
label_22fc14:
    if (ctx->pc == 0x22FC14u) {
        ctx->pc = 0x22FC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC10u;
        // 0x22fc14: 0xa6420002  sh          $v0, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC18u;
        goto label_22fc18;
    }
    ctx->pc = 0x22FC10u;
    {
        const bool branch_taken_0x22fc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC10u;
        // 0x22fc14: 0xa6420002  sh          $v0, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc10) {
            ctx->pc = 0x22FD98u;
            goto label_22fd98;
        }
    }
    ctx->pc = 0x22FC18u;
label_22fc18:
    // 0x22fc18: 0x111827  nor         $v1, $zero, $s1
    ctx->pc = 0x22fc18u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 17)));
label_22fc1c:
    // 0x22fc1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x22fc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_22fc20:
    // 0x22fc20: 0x1000005d  b           . + 4 + (0x5D << 2)
label_22fc24:
    if (ctx->pc == 0x22FC24u) {
        ctx->pc = 0x22FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC20u;
        // 0x22fc24: 0xa6420002  sh          $v0, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC28u;
        goto label_22fc28;
    }
    ctx->pc = 0x22FC20u;
    {
        const bool branch_taken_0x22fc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC20u;
        // 0x22fc24: 0xa6420002  sh          $v0, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc20) {
            ctx->pc = 0x22FD98u;
            goto label_22fd98;
        }
    }
    ctx->pc = 0x22FC28u;
label_22fc28:
    // 0x22fc28: 0x52600069  beql        $s3, $zero, . + 4 + (0x69 << 2)
label_22fc2c:
    if (ctx->pc == 0x22FC2Cu) {
        ctx->pc = 0x22FC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC28u;
        // 0x22fc2c: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC30u;
        goto label_22fc30;
    }
    ctx->pc = 0x22FC28u;
    {
        const bool branch_taken_0x22fc28 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fc28) {
            ctx->pc = 0x22FC2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FC28u;
            // 0x22fc2c: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FDD0u;
            goto label_22fdd0;
        }
    }
    ctx->pc = 0x22FC30u;
label_22fc30:
    // 0x22fc30: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x22fc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_22fc34:
    // 0x22fc34: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x22fc34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_22fc38:
    // 0x22fc38: 0x54400065  bnel        $v0, $zero, . + 4 + (0x65 << 2)
label_22fc3c:
    if (ctx->pc == 0x22FC3Cu) {
        ctx->pc = 0x22FC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC38u;
        // 0x22fc3c: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC40u;
        goto label_22fc40;
    }
    ctx->pc = 0x22FC38u;
    {
        const bool branch_taken_0x22fc38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fc38) {
            ctx->pc = 0x22FC3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FC38u;
            // 0x22fc3c: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FDD0u;
            goto label_22fdd0;
        }
    }
    ctx->pc = 0x22FC40u;
label_22fc40:
    // 0x22fc40: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x22fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_22fc44:
    // 0x22fc44: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x22fc44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22fc48:
    // 0x22fc48: 0x18a00049  blez        $a1, . + 4 + (0x49 << 2)
label_22fc4c:
    if (ctx->pc == 0x22FC4Cu) {
        ctx->pc = 0x22FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC48u;
        // 0x22fc4c: 0x24021003  addiu       $v0, $zero, 0x1003 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC50u;
        goto label_22fc50;
    }
    ctx->pc = 0x22FC48u;
    {
        const bool branch_taken_0x22fc48 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x22FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC48u;
        // 0x22fc4c: 0x24021003  addiu       $v0, $zero, 0x1003 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc48) {
            ctx->pc = 0x22FD70u;
            goto label_22fd70;
        }
    }
    ctx->pc = 0x22FC50u;
label_22fc50:
    // 0x22fc50: 0x12220011  beq         $s1, $v0, . + 4 + (0x11 << 2)
label_22fc54:
    if (ctx->pc == 0x22FC54u) {
        ctx->pc = 0x22FC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC50u;
        // 0x22fc54: 0x2a221004  slti        $v0, $s1, 0x1004 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4100) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC58u;
        goto label_22fc58;
    }
    ctx->pc = 0x22FC50u;
    {
        const bool branch_taken_0x22fc50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x22FC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC50u;
        // 0x22fc54: 0x2a221004  slti        $v0, $s1, 0x1004 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4100) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc50) {
            ctx->pc = 0x22FC98u;
            goto label_22fc98;
        }
    }
    ctx->pc = 0x22FC58u;
label_22fc58:
    // 0x22fc58: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_22fc5c:
    if (ctx->pc == 0x22FC5Cu) {
        ctx->pc = 0x22FC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC58u;
        // 0x22fc5c: 0x24021004  addiu       $v0, $zero, 0x1004 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC60u;
        goto label_22fc60;
    }
    ctx->pc = 0x22FC58u;
    {
        const bool branch_taken_0x22fc58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC58u;
        // 0x22fc5c: 0x24021004  addiu       $v0, $zero, 0x1004 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc58) {
            ctx->pc = 0x22FC70u;
            goto label_22fc70;
        }
    }
    ctx->pc = 0x22FC60u;
label_22fc60:
    // 0x22fc60: 0x52220013  beql        $s1, $v0, . + 4 + (0x13 << 2)
label_22fc64:
    if (ctx->pc == 0x22FC64u) {
        ctx->pc = 0x22FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC60u;
        // 0x22fc64: 0xde420050  ld          $v0, 0x50($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC68u;
        goto label_22fc68;
    }
    ctx->pc = 0x22FC60u;
    {
        const bool branch_taken_0x22fc60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x22fc60) {
            ctx->pc = 0x22FC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FC60u;
            // 0x22fc64: 0xde420050  ld          $v0, 0x50($s2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FCB0u;
            goto label_22fcb0;
        }
    }
    ctx->pc = 0x22FC68u;
label_22fc68:
    // 0x22fc68: 0x1000004b  b           . + 4 + (0x4B << 2)
label_22fc6c:
    if (ctx->pc == 0x22FC6Cu) {
        ctx->pc = 0x22FC70u;
        goto label_22fc70;
    }
    ctx->pc = 0x22FC68u;
    {
        const bool branch_taken_0x22fc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fc68) {
            ctx->pc = 0x22FD98u;
            goto label_22fd98;
        }
    }
    ctx->pc = 0x22FC70u;
label_22fc70:
    // 0x22fc70: 0x14600049  bnez        $v1, . + 4 + (0x49 << 2)
label_22fc74:
    if (ctx->pc == 0x22FC74u) {
        ctx->pc = 0x22FC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC70u;
        // 0x22fc74: 0x26430048  addiu       $v1, $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC78u;
        goto label_22fc78;
    }
    ctx->pc = 0x22FC70u;
    {
        const bool branch_taken_0x22fc70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC70u;
        // 0x22fc74: 0x26430048  addiu       $v1, $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc70) {
            ctx->pc = 0x22FD98u;
            goto label_22fd98;
        }
    }
    ctx->pc = 0x22FC78u;
label_22fc78:
    // 0x22fc78: 0x26440080  addiu       $a0, $s2, 0x80
    ctx->pc = 0x22fc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_22fc7c:
    // 0x22fc7c: 0x3a221001  xori        $v0, $s1, 0x1001
    ctx->pc = 0x22fc7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)4097);
label_22fc80:
    // 0x22fc80: 0xc08c284  jal         func_230A10
label_22fc84:
    if (ctx->pc == 0x22FC84u) {
        ctx->pc = 0x22FC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC80u;
        // 0x22fc84: 0x62200b  movn        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC88u;
        goto label_22fc88;
    }
    ctx->pc = 0x22FC80u;
    SET_GPR_U32(ctx, 31, 0x22FC88u);
    ctx->pc = 0x22FC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FC80u;
    // 0x22fc84: 0x62200b  movn        $a0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230A10u, 0x22FC80u, 0x22FC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC88u;
label_22fc88:
    // 0x22fc88: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
label_22fc8c:
    if (ctx->pc == 0x22FC8Cu) {
        ctx->pc = 0x22FC90u;
        goto label_22fc90;
    }
    ctx->pc = 0x22FC88u;
    {
        const bool branch_taken_0x22fc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fc88) {
            ctx->pc = 0x22FD98u;
            goto label_22fd98;
        }
    }
    ctx->pc = 0x22FC90u;
label_22fc90:
    // 0x22fc90: 0x1000004f  b           . + 4 + (0x4F << 2)
label_22fc94:
    if (ctx->pc == 0x22FC94u) {
        ctx->pc = 0x22FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC90u;
        // 0x22fc94: 0x24140069  addiu       $s4, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC98u;
        goto label_22fc98;
    }
    ctx->pc = 0x22FC90u;
    {
        const bool branch_taken_0x22fc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC90u;
        // 0x22fc94: 0x24140069  addiu       $s4, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc90) {
            ctx->pc = 0x22FDD0u;
            goto label_22fdd0;
        }
    }
    ctx->pc = 0x22FC98u;
label_22fc98:
    // 0x22fc98: 0xde420088  ld          $v0, 0x88($s2)
    ctx->pc = 0x22fc98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 136)));
label_22fc9c:
    // 0x22fc9c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x22fc9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22fca0:
    // 0x22fca0: 0x43202b  sltu        $a0, $v0, $v1
    ctx->pc = 0x22fca0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_22fca4:
    // 0x22fca4: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x22fca4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_22fca8:
    // 0x22fca8: 0x1000003b  b           . + 4 + (0x3B << 2)
label_22fcac:
    if (ctx->pc == 0x22FCACu) {
        ctx->pc = 0x22FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCA8u;
        // 0x22fcac: 0xfe4300a0  sd          $v1, 0xA0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FCB0u;
        goto label_22fcb0;
    }
    ctx->pc = 0x22FCA8u;
    {
        const bool branch_taken_0x22fca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCA8u;
        // 0x22fcac: 0xfe4300a0  sd          $v1, 0xA0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fca8) {
            ctx->pc = 0x22FD98u;
            goto label_22fd98;
        }
    }
    ctx->pc = 0x22FCB0u;
label_22fcb0:
    // 0x22fcb0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x22fcb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22fcb4:
    // 0x22fcb4: 0x43202b  sltu        $a0, $v0, $v1
    ctx->pc = 0x22fcb4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_22fcb8:
    // 0x22fcb8: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x22fcb8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_22fcbc:
    // 0x22fcbc: 0x10000036  b           . + 4 + (0x36 << 2)
label_22fcc0:
    if (ctx->pc == 0x22FCC0u) {
        ctx->pc = 0x22FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCBCu;
        // 0x22fcc0: 0xfe430068  sd          $v1, 0x68($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 104), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FCC4u;
        goto label_22fcc4;
    }
    ctx->pc = 0x22FCBCu;
    {
        const bool branch_taken_0x22fcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCBCu;
        // 0x22fcc0: 0xfe430068  sd          $v1, 0x68($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 104), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fcbc) {
            ctx->pc = 0x22FD98u;
            goto label_22fd98;
        }
    }
    ctx->pc = 0x22FCC4u;
label_22fcc4:
    // 0x22fcc4: 0x52600042  beql        $s3, $zero, . + 4 + (0x42 << 2)
label_22fcc8:
    if (ctx->pc == 0x22FCC8u) {
        ctx->pc = 0x22FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCC4u;
        // 0x22fcc8: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FCCCu;
        goto label_22fccc;
    }
    ctx->pc = 0x22FCC4u;
    {
        const bool branch_taken_0x22fcc4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fcc4) {
            ctx->pc = 0x22FCC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FCC4u;
            // 0x22fcc8: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FDD0u;
            goto label_22fdd0;
        }
    }
    ctx->pc = 0x22FCCCu;
label_22fccc:
    // 0x22fccc: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x22fcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_22fcd0:
    // 0x22fcd0: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x22fcd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_22fcd4:
    // 0x22fcd4: 0x5440003e  bnel        $v0, $zero, . + 4 + (0x3E << 2)
label_22fcd8:
    if (ctx->pc == 0x22FCD8u) {
        ctx->pc = 0x22FCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCD4u;
        // 0x22fcd8: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FCDCu;
        goto label_22fcdc;
    }
    ctx->pc = 0x22FCD4u;
    {
        const bool branch_taken_0x22fcd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fcd4) {
            ctx->pc = 0x22FCD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FCD4u;
            // 0x22fcd8: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FDD0u;
            goto label_22fdd0;
        }
    }
    ctx->pc = 0x22FCDCu;
label_22fcdc:
    // 0x22fcdc: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x22fcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_22fce0:
    // 0x22fce0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22fce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22fce4:
    // 0x22fce4: 0xc08b538  jal         func_22D4E0
label_22fce8:
    if (ctx->pc == 0x22FCE8u) {
        ctx->pc = 0x22FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCE4u;
        // 0x22fce8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FCECu;
        goto label_22fcec;
    }
    ctx->pc = 0x22FCE4u;
    SET_GPR_U32(ctx, 31, 0x22FCECu);
    ctx->pc = 0x22FCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FCE4u;
    // 0x22fce8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x22FCE4u, 0x22FCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FCECu;
label_22fcec:
    // 0x22fcec: 0xdfa30000  ld          $v1, 0x0($sp)
    ctx->pc = 0x22fcecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22fcf0:
    // 0x22fcf0: 0x24052710  addiu       $a1, $zero, 0x2710
    ctx->pc = 0x22fcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_22fcf4:
    // 0x22fcf4: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x22fcf4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_22fcf8:
    // 0x22fcf8: 0x38078  dsll        $s0, $v1, 1
    ctx->pc = 0x22fcf8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << 1);
label_22fcfc:
    // 0x22fcfc: 0x203802d  daddu       $s0, $s0, $v1
    ctx->pc = 0x22fcfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
label_22fd00:
    // 0x22fd00: 0x1080f8  dsll        $s0, $s0, 3
    ctx->pc = 0x22fd00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 3);
label_22fd04:
    // 0x22fd04: 0x203802d  daddu       $s0, $s0, $v1
    ctx->pc = 0x22fd04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
label_22fd08:
    // 0x22fd08: 0xc04818c  jal         func_120630
label_22fd0c:
    if (ctx->pc == 0x22FD0Cu) {
        ctx->pc = 0x22FD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD08u;
        // 0x22fd0c: 0x1080b8  dsll        $s0, $s0, 2 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FD10u;
        goto label_22fd10;
    }
    ctx->pc = 0x22FD08u;
    SET_GPR_U32(ctx, 31, 0x22FD10u);
    ctx->pc = 0x22FD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FD08u;
    // 0x22fd0c: 0x1080b8  dsll        $s0, $s0, 2 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x120630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120630u, 0x22FD08u, 0x22FD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FD10u;
label_22fd10:
    // 0x22fd10: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x22fd10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_22fd14:
    // 0x22fd14: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x22fd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
label_22fd18:
    // 0x22fd18: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x22fd18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_22fd1c:
    // 0x22fd1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22fd20:
    if (ctx->pc == 0x22FD20u) {
        ctx->pc = 0x22FD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD1Cu;
        // 0x22fd20: 0x3202ffff  andi        $v0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FD24u;
        goto label_22fd24;
    }
    ctx->pc = 0x22FD1Cu;
    {
        const bool branch_taken_0x22fd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD1Cu;
        // 0x22fd20: 0x3202ffff  andi        $v0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd1c) {
            ctx->pc = 0x22FD2Cu;
            goto label_22fd2c;
        }
    }
    ctx->pc = 0x22FD24u;
label_22fd24:
    // 0x22fd24: 0x1000002a  b           . + 4 + (0x2A << 2)
label_22fd28:
    if (ctx->pc == 0x22FD28u) {
        ctx->pc = 0x22FD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD24u;
        // 0x22fd28: 0x24140021  addiu       $s4, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FD2Cu;
        goto label_22fd2c;
    }
    ctx->pc = 0x22FD24u;
    {
        const bool branch_taken_0x22fd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD24u;
        // 0x22fd28: 0x24140021  addiu       $s4, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd24) {
            ctx->pc = 0x22FDD0u;
            goto label_22fdd0;
        }
    }
    ctx->pc = 0x22FD2Cu;
label_22fd2c:
    // 0x22fd2c: 0x24031005  addiu       $v1, $zero, 0x1005
    ctx->pc = 0x22fd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4101));
label_22fd30:
    // 0x22fd30: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x22fd30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_22fd34:
    // 0x22fd34: 0x12230006  beq         $s1, $v1, . + 4 + (0x6 << 2)
label_22fd38:
    if (ctx->pc == 0x22FD38u) {
        ctx->pc = 0x22FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD34u;
        // 0x22fd38: 0x28403  sra         $s0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FD3Cu;
        goto label_22fd3c;
    }
    ctx->pc = 0x22FD34u;
    {
        const bool branch_taken_0x22fd34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x22FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD34u;
        // 0x22fd38: 0x28403  sra         $s0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd34) {
            ctx->pc = 0x22FD50u;
            goto label_22fd50;
        }
    }
    ctx->pc = 0x22FD3Cu;
label_22fd3c:
    // 0x22fd3c: 0x24021006  addiu       $v0, $zero, 0x1006
    ctx->pc = 0x22fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4102));
label_22fd40:
    // 0x22fd40: 0x52220015  beql        $s1, $v0, . + 4 + (0x15 << 2)
label_22fd44:
    if (ctx->pc == 0x22FD44u) {
        ctx->pc = 0x22FD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD40u;
        // 0x22fd44: 0xa650007a  sh          $s0, 0x7A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 122), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FD48u;
        goto label_22fd48;
    }
    ctx->pc = 0x22FD40u;
    {
        const bool branch_taken_0x22fd40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x22fd40) {
            ctx->pc = 0x22FD44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FD40u;
            // 0x22fd44: 0xa650007a  sh          $s0, 0x7A($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 122), (uint16_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FD98u;
            goto label_22fd98;
        }
    }
    ctx->pc = 0x22FD48u;
label_22fd48:
    // 0x22fd48: 0x10000013  b           . + 4 + (0x13 << 2)
label_22fd4c:
    if (ctx->pc == 0x22FD4Cu) {
        ctx->pc = 0x22FD50u;
        goto label_22fd50;
    }
    ctx->pc = 0x22FD48u;
    {
        const bool branch_taken_0x22fd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fd48) {
            ctx->pc = 0x22FD98u;
            goto label_22fd98;
        }
    }
    ctx->pc = 0x22FD50u;
label_22fd50:
    // 0x22fd50: 0x10000011  b           . + 4 + (0x11 << 2)
label_22fd54:
    if (ctx->pc == 0x22FD54u) {
        ctx->pc = 0x22FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD50u;
        // 0x22fd54: 0xa65000b2  sh          $s0, 0xB2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 178), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FD58u;
        goto label_22fd58;
    }
    ctx->pc = 0x22FD50u;
    {
        const bool branch_taken_0x22fd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD50u;
        // 0x22fd54: 0xa65000b2  sh          $s0, 0xB2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 178), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd50) {
            ctx->pc = 0x22FD98u;
            goto label_22fd98;
        }
    }
    ctx->pc = 0x22FD58u;
label_22fd58:
    // 0x22fd58: 0x5260001d  beql        $s3, $zero, . + 4 + (0x1D << 2)
label_22fd5c:
    if (ctx->pc == 0x22FD5Cu) {
        ctx->pc = 0x22FD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD58u;
        // 0x22fd5c: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FD60u;
        goto label_22fd60;
    }
    ctx->pc = 0x22FD58u;
    {
        const bool branch_taken_0x22fd58 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fd58) {
            ctx->pc = 0x22FD5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FD58u;
            // 0x22fd5c: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FDD0u;
            goto label_22fdd0;
        }
    }
    ctx->pc = 0x22FD60u;
label_22fd60:
    // 0x22fd60: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x22fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_22fd64:
    // 0x22fd64: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x22fd64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_22fd68:
    // 0x22fd68: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_22fd6c:
    if (ctx->pc == 0x22FD6Cu) {
        ctx->pc = 0x22FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD68u;
        // 0x22fd6c: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FD70u;
        goto label_22fd70;
    }
    ctx->pc = 0x22FD68u;
    {
        const bool branch_taken_0x22fd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fd68) {
            ctx->pc = 0x22FD6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FD68u;
            // 0x22fd6c: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FD78u;
            goto label_22fd78;
        }
    }
    ctx->pc = 0x22FD70u;
label_22fd70:
    // 0x22fd70: 0x10000017  b           . + 4 + (0x17 << 2)
label_22fd74:
    if (ctx->pc == 0x22FD74u) {
        ctx->pc = 0x22FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD70u;
        // 0x22fd74: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FD78u;
        goto label_22fd78;
    }
    ctx->pc = 0x22FD70u;
    {
        const bool branch_taken_0x22fd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD70u;
        // 0x22fd74: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd70) {
            ctx->pc = 0x22FDD0u;
            goto label_22fdd0;
        }
    }
    ctx->pc = 0x22FD78u;
label_22fd78:
    // 0x22fd78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22fd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22fd7c:
    // 0x22fd7c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_22fd80:
    if (ctx->pc == 0x22FD80u) {
        ctx->pc = 0x22FD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD7Cu;
        // 0x22fd80: 0x96420006  lhu         $v0, 0x6($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FD84u;
        goto label_22fd84;
    }
    ctx->pc = 0x22FD7Cu;
    {
        const bool branch_taken_0x22fd7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD7Cu;
        // 0x22fd80: 0x96420006  lhu         $v0, 0x6($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd7c) {
            ctx->pc = 0x22FD90u;
            goto label_22fd90;
        }
    }
    ctx->pc = 0x22FD84u;
label_22fd84:
    // 0x22fd84: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x22fd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_22fd88:
    // 0x22fd88: 0x10000003  b           . + 4 + (0x3 << 2)
label_22fd8c:
    if (ctx->pc == 0x22FD8Cu) {
        ctx->pc = 0x22FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD88u;
        // 0x22fd8c: 0xa6420006  sh          $v0, 0x6($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FD90u;
        goto label_22fd90;
    }
    ctx->pc = 0x22FD88u;
    {
        const bool branch_taken_0x22fd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD88u;
        // 0x22fd8c: 0xa6420006  sh          $v0, 0x6($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd88) {
            ctx->pc = 0x22FD98u;
            goto label_22fd98;
        }
    }
    ctx->pc = 0x22FD90u;
label_22fd90:
    // 0x22fd90: 0x3042ff7f  andi        $v0, $v0, 0xFF7F
    ctx->pc = 0x22fd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65407);
label_22fd94:
    // 0x22fd94: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x22fd94u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
label_22fd98:
    // 0x22fd98: 0x1680000d  bnez        $s4, . + 4 + (0xD << 2)
label_22fd9c:
    if (ctx->pc == 0x22FD9Cu) {
        ctx->pc = 0x22FDA0u;
        goto label_22fda0;
    }
    ctx->pc = 0x22FD98u;
    {
        const bool branch_taken_0x22fd98 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fd98) {
            ctx->pc = 0x22FDD0u;
            goto label_22fdd0;
        }
    }
    ctx->pc = 0x22FDA0u;
label_22fda0:
    // 0x22fda0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x22fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_22fda4:
    // 0x22fda4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_22fda8:
    if (ctx->pc == 0x22FDA8u) {
        ctx->pc = 0x22FDACu;
        goto label_22fdac;
    }
    ctx->pc = 0x22FDA4u;
    {
        const bool branch_taken_0x22fda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fda4) {
            ctx->pc = 0x22FDD0u;
            goto label_22fdd0;
        }
    }
    ctx->pc = 0x22FDACu;
label_22fdac:
    // 0x22fdac: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x22fdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_22fdb0:
    // 0x22fdb0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_22fdb4:
    if (ctx->pc == 0x22FDB4u) {
        ctx->pc = 0x22FDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FDB0u;
        // 0x22fdb4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FDB8u;
        goto label_22fdb8;
    }
    ctx->pc = 0x22FDB0u;
    {
        const bool branch_taken_0x22fdb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FDB0u;
        // 0x22fdb4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fdb0) {
            ctx->pc = 0x22FDD0u;
            goto label_22fdd0;
        }
    }
    ctx->pc = 0x22FDB8u;
label_22fdb8:
    // 0x22fdb8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x22fdb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_22fdbc:
    // 0x22fdbc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x22fdbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22fdc0:
    // 0x22fdc0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22fdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22fdc4:
    // 0x22fdc4: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x22fdc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_22fdc8:
    // 0x22fdc8: 0x40f809  jalr        $v0
label_22fdcc:
    if (ctx->pc == 0x22FDCCu) {
        ctx->pc = 0x22FDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FDC8u;
        // 0x22fdcc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FDD0u;
        goto label_22fdd0;
    }
    ctx->pc = 0x22FDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22FDD0u);
        ctx->pc = 0x22FDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FDC8u;
        // 0x22fdcc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FDC8u, 0x22FDD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22FDD0u;
label_22fdd0:
    // 0x22fdd0: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_22fdd4:
    if (ctx->pc == 0x22FDD4u) {
        ctx->pc = 0x22FDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FDD0u;
        // 0x22fdd4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FDD8u;
        goto label_22fdd8;
    }
    ctx->pc = 0x22FDD0u;
    {
        const bool branch_taken_0x22fdd0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FDD0u;
        // 0x22fdd4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fdd0) {
            ctx->pc = 0x22FDE4u;
            goto label_22fde4;
        }
    }
    ctx->pc = 0x22FDD8u;
label_22fdd8:
    // 0x22fdd8: 0xc08a996  jal         func_22A658
label_22fddc:
    if (ctx->pc == 0x22FDDCu) {
        ctx->pc = 0x22FDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FDD8u;
        // 0x22fddc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FDE0u;
        goto label_22fde0;
    }
    ctx->pc = 0x22FDD8u;
    SET_GPR_U32(ctx, 31, 0x22FDE0u);
    ctx->pc = 0x22FDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FDD8u;
    // 0x22fddc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A658u, 0x22FDD8u, 0x22FDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FDE0u;
label_22fde0:
    // 0x22fde0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x22fde0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22fde4:
    // 0x22fde4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x22fde4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_22fde8:
    // 0x22fde8: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x22fde8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_22fdec:
    // 0x22fdec: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x22fdecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_22fdf0:
    // 0x22fdf0: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x22fdf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_22fdf4:
    // 0x22fdf4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x22fdf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22fdf8:
    // 0x22fdf8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x22fdf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22fdfc:
    // 0x22fdfc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x22fdfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22fe00:
    // 0x22fe00: 0x3e00008  jr          $ra
label_22fe04:
    if (ctx->pc == 0x22FE04u) {
        ctx->pc = 0x22FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE00u;
        // 0x22fe04: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FE08u;
        goto label_fallthrough_0x22fe00;
    }
    ctx->pc = 0x22FE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE00u;
        // 0x22fe04: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22fe00:
    ctx->pc = 0x22FE08u;
}
