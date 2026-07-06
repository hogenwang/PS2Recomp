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

// Function: sub_001DAAD0
// Address: 0x1daad0 - 0x1dad50
void sub_001DAAD0_0x1daad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DAAD0_0x1daad0");
#endif

    switch (ctx->pc) {
        case 0x1daad0u: goto label_1daad0;
        case 0x1daad4u: goto label_1daad4;
        case 0x1daad8u: goto label_1daad8;
        case 0x1daadcu: goto label_1daadc;
        case 0x1daae0u: goto label_1daae0;
        case 0x1daae4u: goto label_1daae4;
        case 0x1daae8u: goto label_1daae8;
        case 0x1daaecu: goto label_1daaec;
        case 0x1daaf0u: goto label_1daaf0;
        case 0x1daaf4u: goto label_1daaf4;
        case 0x1daaf8u: goto label_1daaf8;
        case 0x1daafcu: goto label_1daafc;
        case 0x1dab00u: goto label_1dab00;
        case 0x1dab04u: goto label_1dab04;
        case 0x1dab08u: goto label_1dab08;
        case 0x1dab0cu: goto label_1dab0c;
        case 0x1dab10u: goto label_1dab10;
        case 0x1dab14u: goto label_1dab14;
        case 0x1dab18u: goto label_1dab18;
        case 0x1dab1cu: goto label_1dab1c;
        case 0x1dab20u: goto label_1dab20;
        case 0x1dab24u: goto label_1dab24;
        case 0x1dab28u: goto label_1dab28;
        case 0x1dab2cu: goto label_1dab2c;
        case 0x1dab30u: goto label_1dab30;
        case 0x1dab34u: goto label_1dab34;
        case 0x1dab38u: goto label_1dab38;
        case 0x1dab3cu: goto label_1dab3c;
        case 0x1dab40u: goto label_1dab40;
        case 0x1dab44u: goto label_1dab44;
        case 0x1dab48u: goto label_1dab48;
        case 0x1dab4cu: goto label_1dab4c;
        case 0x1dab50u: goto label_1dab50;
        case 0x1dab54u: goto label_1dab54;
        case 0x1dab58u: goto label_1dab58;
        case 0x1dab5cu: goto label_1dab5c;
        case 0x1dab60u: goto label_1dab60;
        case 0x1dab64u: goto label_1dab64;
        case 0x1dab68u: goto label_1dab68;
        case 0x1dab6cu: goto label_1dab6c;
        case 0x1dab70u: goto label_1dab70;
        case 0x1dab74u: goto label_1dab74;
        case 0x1dab78u: goto label_1dab78;
        case 0x1dab7cu: goto label_1dab7c;
        case 0x1dab80u: goto label_1dab80;
        case 0x1dab84u: goto label_1dab84;
        case 0x1dab88u: goto label_1dab88;
        case 0x1dab8cu: goto label_1dab8c;
        case 0x1dab90u: goto label_1dab90;
        case 0x1dab94u: goto label_1dab94;
        case 0x1dab98u: goto label_1dab98;
        case 0x1dab9cu: goto label_1dab9c;
        case 0x1daba0u: goto label_1daba0;
        case 0x1daba4u: goto label_1daba4;
        case 0x1daba8u: goto label_1daba8;
        case 0x1dabacu: goto label_1dabac;
        case 0x1dabb0u: goto label_1dabb0;
        case 0x1dabb4u: goto label_1dabb4;
        case 0x1dabb8u: goto label_1dabb8;
        case 0x1dabbcu: goto label_1dabbc;
        case 0x1dabc0u: goto label_1dabc0;
        case 0x1dabc4u: goto label_1dabc4;
        case 0x1dabc8u: goto label_1dabc8;
        case 0x1dabccu: goto label_1dabcc;
        case 0x1dabd0u: goto label_1dabd0;
        case 0x1dabd4u: goto label_1dabd4;
        case 0x1dabd8u: goto label_1dabd8;
        case 0x1dabdcu: goto label_1dabdc;
        case 0x1dabe0u: goto label_1dabe0;
        case 0x1dabe4u: goto label_1dabe4;
        case 0x1dabe8u: goto label_1dabe8;
        case 0x1dabecu: goto label_1dabec;
        case 0x1dabf0u: goto label_1dabf0;
        case 0x1dabf4u: goto label_1dabf4;
        case 0x1dabf8u: goto label_1dabf8;
        case 0x1dabfcu: goto label_1dabfc;
        case 0x1dac00u: goto label_1dac00;
        case 0x1dac04u: goto label_1dac04;
        case 0x1dac08u: goto label_1dac08;
        case 0x1dac0cu: goto label_1dac0c;
        case 0x1dac10u: goto label_1dac10;
        case 0x1dac14u: goto label_1dac14;
        case 0x1dac18u: goto label_1dac18;
        case 0x1dac1cu: goto label_1dac1c;
        case 0x1dac20u: goto label_1dac20;
        case 0x1dac24u: goto label_1dac24;
        case 0x1dac28u: goto label_1dac28;
        case 0x1dac2cu: goto label_1dac2c;
        case 0x1dac30u: goto label_1dac30;
        case 0x1dac34u: goto label_1dac34;
        case 0x1dac38u: goto label_1dac38;
        case 0x1dac3cu: goto label_1dac3c;
        case 0x1dac40u: goto label_1dac40;
        case 0x1dac44u: goto label_1dac44;
        case 0x1dac48u: goto label_1dac48;
        case 0x1dac4cu: goto label_1dac4c;
        case 0x1dac50u: goto label_1dac50;
        case 0x1dac54u: goto label_1dac54;
        case 0x1dac58u: goto label_1dac58;
        case 0x1dac5cu: goto label_1dac5c;
        case 0x1dac60u: goto label_1dac60;
        case 0x1dac64u: goto label_1dac64;
        case 0x1dac68u: goto label_1dac68;
        case 0x1dac6cu: goto label_1dac6c;
        case 0x1dac70u: goto label_1dac70;
        case 0x1dac74u: goto label_1dac74;
        case 0x1dac78u: goto label_1dac78;
        case 0x1dac7cu: goto label_1dac7c;
        case 0x1dac80u: goto label_1dac80;
        case 0x1dac84u: goto label_1dac84;
        case 0x1dac88u: goto label_1dac88;
        case 0x1dac8cu: goto label_1dac8c;
        case 0x1dac90u: goto label_1dac90;
        case 0x1dac94u: goto label_1dac94;
        case 0x1dac98u: goto label_1dac98;
        case 0x1dac9cu: goto label_1dac9c;
        case 0x1daca0u: goto label_1daca0;
        case 0x1daca4u: goto label_1daca4;
        case 0x1daca8u: goto label_1daca8;
        case 0x1dacacu: goto label_1dacac;
        case 0x1dacb0u: goto label_1dacb0;
        case 0x1dacb4u: goto label_1dacb4;
        case 0x1dacb8u: goto label_1dacb8;
        case 0x1dacbcu: goto label_1dacbc;
        case 0x1dacc0u: goto label_1dacc0;
        case 0x1dacc4u: goto label_1dacc4;
        case 0x1dacc8u: goto label_1dacc8;
        case 0x1dacccu: goto label_1daccc;
        case 0x1dacd0u: goto label_1dacd0;
        case 0x1dacd4u: goto label_1dacd4;
        case 0x1dacd8u: goto label_1dacd8;
        case 0x1dacdcu: goto label_1dacdc;
        case 0x1dace0u: goto label_1dace0;
        case 0x1dace4u: goto label_1dace4;
        case 0x1dace8u: goto label_1dace8;
        case 0x1dacecu: goto label_1dacec;
        case 0x1dacf0u: goto label_1dacf0;
        case 0x1dacf4u: goto label_1dacf4;
        case 0x1dacf8u: goto label_1dacf8;
        case 0x1dacfcu: goto label_1dacfc;
        case 0x1dad00u: goto label_1dad00;
        case 0x1dad04u: goto label_1dad04;
        case 0x1dad08u: goto label_1dad08;
        case 0x1dad0cu: goto label_1dad0c;
        case 0x1dad10u: goto label_1dad10;
        case 0x1dad14u: goto label_1dad14;
        case 0x1dad18u: goto label_1dad18;
        case 0x1dad1cu: goto label_1dad1c;
        case 0x1dad20u: goto label_1dad20;
        case 0x1dad24u: goto label_1dad24;
        case 0x1dad28u: goto label_1dad28;
        case 0x1dad2cu: goto label_1dad2c;
        case 0x1dad30u: goto label_1dad30;
        case 0x1dad34u: goto label_1dad34;
        case 0x1dad38u: goto label_1dad38;
        case 0x1dad3cu: goto label_1dad3c;
        case 0x1dad40u: goto label_1dad40;
        case 0x1dad44u: goto label_1dad44;
        case 0x1dad48u: goto label_1dad48;
        case 0x1dad4cu: goto label_1dad4c;
        default: break;
    }

    ctx->pc = 0x1daad0u;

label_1daad0:
    // 0x1daad0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1daad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1daad4:
    // 0x1daad4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1daad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1daad8:
    // 0x1daad8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1daad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1daadc:
    // 0x1daadc: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1daadcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1daae0:
    // 0x1daae0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1daae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1daae4:
    // 0x1daae4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1daae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1daae8:
    // 0x1daae8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1daae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1daaec:
    // 0x1daaec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1daaecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1daaf0:
    // 0x1daaf0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1daaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1daaf4:
    // 0x1daaf4: 0x263303a8  addiu       $s3, $s1, 0x3A8
    ctx->pc = 0x1daaf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 936));
label_1daaf8:
    // 0x1daaf8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1daaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1daafc:
    // 0x1daafc: 0x263001dc  addiu       $s0, $s1, 0x1DC
    ctx->pc = 0x1daafcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 476));
label_1dab00:
    // 0x1dab00: 0xae2203d4  sw          $v0, 0x3D4($s1)
    ctx->pc = 0x1dab00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 980), GPR_U32(ctx, 2));
label_1dab04:
    // 0x1dab04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dab04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dab08:
    // 0x1dab08: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1dab08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1dab0c:
    // 0x1dab0c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1dab0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1dab10:
    // 0x1dab10: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1dab10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1dab14:
    // 0x1dab14: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1dab14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dab18:
    // 0x1dab18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1dab18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1dab1c:
    // 0x1dab1c: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x1dab1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_1dab20:
    // 0x1dab20: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1dab20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_1dab24:
    // 0x1dab24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dab24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dab28:
    // 0x1dab28: 0xae200418  sw          $zero, 0x418($s1)
    ctx->pc = 0x1dab28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1048), GPR_U32(ctx, 0));
label_1dab2c:
    // 0x1dab2c: 0xae20041c  sw          $zero, 0x41C($s1)
    ctx->pc = 0x1dab2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 0));
label_1dab30:
    // 0x1dab30: 0x40f809  jalr        $v0
label_1dab34:
    if (ctx->pc == 0x1DAB34u) {
        ctx->pc = 0x1DAB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB30u;
        // 0x1dab34: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAB38u;
        goto label_1dab38;
    }
    ctx->pc = 0x1DAB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DAB38u);
        ctx->pc = 0x1DAB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB30u;
        // 0x1dab34: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAB30u, 0x1DAB38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DAB38u;
label_1dab38:
    // 0x1dab38: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1dab38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1dab3c:
    // 0x1dab3c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1dab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1dab40:
    // 0x1dab40: 0x625024  and         $t2, $v1, $v0
    ctx->pc = 0x1dab40u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1dab44:
    // 0x1dab44: 0x6a1823  subu        $v1, $v1, $t2
    ctx->pc = 0x1dab44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_1dab48:
    // 0x1dab48: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1dab48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_1dab4c:
    // 0x1dab4c: 0x81490000  lb          $t1, 0x0($t2)
    ctx->pc = 0x1dab4cu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_1dab50:
    // 0x1dab50: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1dab50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1dab54:
    // 0x1dab54: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x1dab54u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_1dab58:
    // 0x1dab58: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1dab58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1dab5c:
    // 0x1dab5c: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1dab5cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_1dab60:
    // 0x1dab60: 0x91440000  lbu         $a0, 0x0($t2)
    ctx->pc = 0x1dab60u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_1dab64:
    // 0x1dab64: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1dab64u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_1dab68:
    // 0x1dab68: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1dab68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1dab6c:
    // 0x1dab6c: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1dab6cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_1dab70:
    // 0x1dab70: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x1dab70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_1dab74:
    // 0x1dab74: 0x1244825  or          $t1, $t1, $a0
    ctx->pc = 0x1dab74u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
label_1dab78:
    // 0x1dab78: 0x358c0  sll         $t3, $v1, 3
    ctx->pc = 0x1dab78u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1dab7c:
    // 0x1dab7c: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1dab7cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_1dab80:
    // 0x1dab80: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1dab80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1dab84:
    // 0x1dab84: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1dab84u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_1dab88:
    // 0x1dab88: 0x39630000  xori        $v1, $t3, 0x0
    ctx->pc = 0x1dab88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) ^ (uint64_t)(uint16_t)0);
label_1dab8c:
    // 0x1dab8c: 0x1691004  sllv        $v0, $t1, $t3
    ctx->pc = 0x1dab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 11) & 0x1F));
label_1dab90:
    // 0x1dab90: 0x120602d  daddu       $t4, $t1, $zero
    ctx->pc = 0x1dab90u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1dab94:
    // 0x1dab94: 0x81490000  lb          $t1, 0x0($t2)
    ctx->pc = 0x1dab94u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_1dab98:
    // 0x1dab98: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1dab98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1dab9c:
    // 0x1dab9c: 0x43600b  movn        $t4, $v0, $v1
    ctx->pc = 0x1dab9cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 2));
label_1daba0:
    // 0x1daba0: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x1daba0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_1daba4:
    // 0x1daba4: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1daba4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_1daba8:
    // 0x1daba8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1daba8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1dabac:
    // 0x1dabac: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x1dabacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_1dabb0:
    // 0x1dabb0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1dabb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1dabb4:
    // 0x1dabb4: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1dabb4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_1dabb8:
    // 0x1dabb8: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x1dabb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_1dabbc:
    // 0x1dabbc: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1dabbcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_1dabc0:
    // 0x1dabc0: 0x29640007  slti        $a0, $t3, 0x7
    ctx->pc = 0x1dabc0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)7) ? 1 : 0);
label_1dabc4:
    // 0x1dabc4: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x1dabc4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_1dabc8:
    // 0x1dabc8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1dabc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1dabcc:
    // 0x1dabcc: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1dabccu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_1dabd0:
    // 0x1dabd0: 0x1480001d  bnez        $a0, . + 4 + (0x1D << 2)
label_1dabd4:
    if (ctx->pc == 0x1DABD4u) {
        ctx->pc = 0x1DABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DABD0u;
        // 0x1dabd4: 0x1224825  or          $t1, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DABD8u;
        goto label_1dabd8;
    }
    ctx->pc = 0x1DABD0u;
    {
        const bool branch_taken_0x1dabd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DABD0u;
        // 0x1dabd4: 0x1224825  or          $t1, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dabd0) {
            ctx->pc = 0x1DAC48u;
            goto label_1dac48;
        }
    }
    ctx->pc = 0x1DABD8u;
label_1dabd8:
    // 0x1dabd8: 0x256bfff9  addiu       $t3, $t3, -0x7
    ctx->pc = 0x1dabd8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967289));
label_1dabdc:
    // 0x1dabdc: 0x11600008  beqz        $t3, . + 4 + (0x8 << 2)
label_1dabe0:
    if (ctx->pc == 0x1DABE0u) {
        ctx->pc = 0x1DABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DABDCu;
        // 0x1dabe0: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DABE4u;
        goto label_1dabe4;
    }
    ctx->pc = 0x1DABDCu;
    {
        const bool branch_taken_0x1dabdc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DABDCu;
        // 0x1dabe0: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dabdc) {
            ctx->pc = 0x1DAC00u;
            goto label_1dac00;
        }
    }
    ctx->pc = 0x1DABE4u;
label_1dabe4:
    // 0x1dabe4: 0x4b1023  subu        $v0, $v0, $t3
    ctx->pc = 0x1dabe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_1dabe8:
    // 0x1dabe8: 0x491006  srlv        $v0, $t1, $v0
    ctx->pc = 0x1dabe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 2) & 0x1F));
label_1dabec:
    // 0x1dabec: 0x1826025  or          $t4, $t4, $v0
    ctx->pc = 0x1dabecu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
label_1dabf0:
    // 0x1dabf0: 0xc21c2  srl         $a0, $t4, 7
    ctx->pc = 0x1dabf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 7));
label_1dabf4:
    // 0x1dabf4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1dabf8:
    if (ctx->pc == 0x1DABF8u) {
        ctx->pc = 0x1DABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DABF4u;
        // 0x1dabf8: 0x1696004  sllv        $t4, $t1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 11) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DABFCu;
        goto label_1dabfc;
    }
    ctx->pc = 0x1DABF4u;
    {
        const bool branch_taken_0x1dabf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DABF4u;
        // 0x1dabf8: 0x1696004  sllv        $t4, $t1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 11) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dabf4) {
            ctx->pc = 0x1DAC08u;
            goto label_1dac08;
        }
    }
    ctx->pc = 0x1DABFCu;
label_1dabfc:
    // 0x1dabfc: 0x0  nop
    ctx->pc = 0x1dabfcu;
    // NOP
label_1dac00:
    // 0x1dac00: 0xc21c2  srl         $a0, $t4, 7
    ctx->pc = 0x1dac00u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 7));
label_1dac04:
    // 0x1dac04: 0x120602d  daddu       $t4, $t1, $zero
    ctx->pc = 0x1dac04u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1dac08:
    // 0x1dac08: 0x81490000  lb          $t1, 0x0($t2)
    ctx->pc = 0x1dac08u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_1dac0c:
    // 0x1dac0c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1dac0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1dac10:
    // 0x1dac10: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x1dac10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_1dac14:
    // 0x1dac14: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1dac14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1dac18:
    // 0x1dac18: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1dac18u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_1dac1c:
    // 0x1dac1c: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x1dac1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_1dac20:
    // 0x1dac20: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1dac20u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_1dac24:
    // 0x1dac24: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1dac24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1dac28:
    // 0x1dac28: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1dac28u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_1dac2c:
    // 0x1dac2c: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x1dac2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_1dac30:
    // 0x1dac30: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x1dac30u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_1dac34:
    // 0x1dac34: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1dac34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1dac38:
    // 0x1dac38: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1dac38u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_1dac3c:
    // 0x1dac3c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1dac40:
    if (ctx->pc == 0x1DAC40u) {
        ctx->pc = 0x1DAC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC3Cu;
        // 0x1dac40: 0x1224825  or          $t1, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAC44u;
        goto label_1dac44;
    }
    ctx->pc = 0x1DAC3Cu;
    {
        const bool branch_taken_0x1dac3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC3Cu;
        // 0x1dac40: 0x1224825  or          $t1, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dac3c) {
            ctx->pc = 0x1DAC54u;
            goto label_1dac54;
        }
    }
    ctx->pc = 0x1DAC44u;
label_1dac44:
    // 0x1dac44: 0x0  nop
    ctx->pc = 0x1dac44u;
    // NOP
label_1dac48:
    // 0x1dac48: 0xc21c2  srl         $a0, $t4, 7
    ctx->pc = 0x1dac48u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 7));
label_1dac4c:
    // 0x1dac4c: 0xc6640  sll         $t4, $t4, 25
    ctx->pc = 0x1dac4cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 25));
label_1dac50:
    // 0x1dac50: 0x256b0019  addiu       $t3, $t3, 0x19
    ctx->pc = 0x1dac50u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 25));
label_1dac54:
    // 0x1dac54: 0x3088003f  andi        $t0, $a0, 0x3F
    ctx->pc = 0x1dac54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
label_1dac58:
    // 0x1dac58: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x1dac58u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
label_1dac5c:
    // 0x1dac5c: 0x3087003f  andi        $a3, $a0, 0x3F
    ctx->pc = 0x1dac5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
label_1dac60:
    // 0x1dac60: 0x421c2  srl         $a0, $a0, 7
    ctx->pc = 0x1dac60u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 7));
label_1dac64:
    // 0x1dac64: 0x3086003f  andi        $a2, $a0, 0x3F
    ctx->pc = 0x1dac64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
label_1dac68:
    // 0x1dac68: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x1dac68u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
label_1dac6c:
    // 0x1dac6c: 0x41142  srl         $v0, $a0, 5
    ctx->pc = 0x1dac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
label_1dac70:
    // 0x1dac70: 0x3083001f  andi        $v1, $a0, 0x1F
    ctx->pc = 0x1dac70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_1dac74:
    // 0x1dac74: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x1dac74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1dac78:
    // 0x1dac78: 0xc27c2  srl         $a0, $t4, 31
    ctx->pc = 0x1dac78u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
label_1dac7c:
    // 0x1dac7c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1dac7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1dac80:
    // 0x1dac80: 0xae08002c  sw          $t0, 0x2C($s0)
    ctx->pc = 0x1dac80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 8));
label_1dac84:
    // 0x1dac84: 0xae070028  sw          $a3, 0x28($s0)
    ctx->pc = 0x1dac84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 7));
label_1dac88:
    // 0x1dac88: 0xae060024  sw          $a2, 0x24($s0)
    ctx->pc = 0x1dac88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 6));
label_1dac8c:
    // 0x1dac8c: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1dac8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_1dac90:
    // 0x1dac90: 0x15650005  bne         $t3, $a1, . + 4 + (0x5 << 2)
label_1dac94:
    if (ctx->pc == 0x1DAC94u) {
        ctx->pc = 0x1DAC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC90u;
        // 0x1dac94: 0xae2402d0  sw          $a0, 0x2D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 720), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAC98u;
        goto label_1dac98;
    }
    ctx->pc = 0x1DAC90u;
    {
        const bool branch_taken_0x1dac90 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 5));
        ctx->pc = 0x1DAC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC90u;
        // 0x1dac94: 0xae2402d0  sw          $a0, 0x2D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 720), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dac90) {
            ctx->pc = 0x1DACA8u;
            goto label_1daca8;
        }
    }
    ctx->pc = 0x1DAC98u;
label_1dac98:
    // 0x1dac98: 0x120602d  daddu       $t4, $t1, $zero
    ctx->pc = 0x1dac98u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1dac9c:
    // 0x1dac9c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1dac9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1daca0:
    // 0x1daca0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1daca4:
    if (ctx->pc == 0x1DACA4u) {
        ctx->pc = 0x1DACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DACA0u;
        // 0x1daca4: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DACA8u;
        goto label_1daca8;
    }
    ctx->pc = 0x1DACA0u;
    {
        const bool branch_taken_0x1daca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DACA0u;
        // 0x1daca4: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daca0) {
            ctx->pc = 0x1DACB0u;
            goto label_1dacb0;
        }
    }
    ctx->pc = 0x1DACA8u;
label_1daca8:
    // 0x1daca8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1daca8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1dacac:
    // 0x1dacac: 0xc6040  sll         $t4, $t4, 1
    ctx->pc = 0x1dacacu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
label_1dacb0:
    // 0x1dacb0: 0xc17c2  srl         $v0, $t4, 31
    ctx->pc = 0x1dacb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
label_1dacb4:
    // 0x1dacb4: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1dacb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1dacb8:
    // 0x1dacb8: 0x15630005  bne         $t3, $v1, . + 4 + (0x5 << 2)
label_1dacbc:
    if (ctx->pc == 0x1DACBCu) {
        ctx->pc = 0x1DACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DACB8u;
        // 0x1dacbc: 0xae2202d4  sw          $v0, 0x2D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 724), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DACC0u;
        goto label_1dacc0;
    }
    ctx->pc = 0x1DACB8u;
    {
        const bool branch_taken_0x1dacb8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DACB8u;
        // 0x1dacbc: 0xae2202d4  sw          $v0, 0x2D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 724), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dacb8) {
            ctx->pc = 0x1DACD0u;
            goto label_1dacd0;
        }
    }
    ctx->pc = 0x1DACC0u;
label_1dacc0:
    // 0x1dacc0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1dacc0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dacc4:
    // 0x1dacc4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1dacc8:
    if (ctx->pc == 0x1DACC8u) {
        ctx->pc = 0x1DACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DACC4u;
        // 0x1dacc8: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DACCCu;
        goto label_1daccc;
    }
    ctx->pc = 0x1DACC4u;
    {
        const bool branch_taken_0x1dacc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DACC4u;
        // 0x1dacc8: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dacc4) {
            ctx->pc = 0x1DACD4u;
            goto label_1dacd4;
        }
    }
    ctx->pc = 0x1DACCCu;
label_1daccc:
    // 0x1daccc: 0x0  nop
    ctx->pc = 0x1dacccu;
    // NOP
label_1dacd0:
    // 0x1dacd0: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1dacd0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1dacd4:
    // 0x1dacd4: 0x25650007  addiu       $a1, $t3, 0x7
    ctx->pc = 0x1dacd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 7));
label_1dacd8:
    // 0x1dacd8: 0x8e2203a8  lw          $v0, 0x3A8($s1)
    ctx->pc = 0x1dacd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 936)));
label_1dacdc:
    // 0x1dacdc: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x1dacdcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
label_1dace0:
    // 0x1dace0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1dace0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1dace4:
    // 0x1dace4: 0x1452821  addu        $a1, $t2, $a1
    ctx->pc = 0x1dace4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_1dace8:
    // 0x1dace8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1dace8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dacec:
    // 0x1dacec: 0x24a5fff8  addiu       $a1, $a1, -0x8
    ctx->pc = 0x1dacecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
label_1dacf0:
    // 0x1dacf0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1dacf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dacf4:
    // 0x1dacf4: 0xc07337e  jal         func_1CCDF8
label_1dacf8:
    if (ctx->pc == 0x1DACF8u) {
        ctx->pc = 0x1DACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DACF4u;
        // 0x1dacf8: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DACFCu;
        goto label_1dacfc;
    }
    ctx->pc = 0x1DACF4u;
    SET_GPR_U32(ctx, 31, 0x1DACFCu);
    ctx->pc = 0x1DACF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DACF4u;
    // 0x1dacf8: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCDF8u, 0x1DACF4u, 0x1DACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DACFCu;
label_1dacfc:
    // 0x1dacfc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1dacfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1dad00:
    // 0x1dad00: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1dad00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dad04:
    // 0x1dad04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dad04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dad08:
    // 0x1dad08: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1dad08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1dad0c:
    // 0x1dad0c: 0x40f809  jalr        $v0
label_1dad10:
    if (ctx->pc == 0x1DAD10u) {
        ctx->pc = 0x1DAD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD0Cu;
        // 0x1dad10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAD14u;
        goto label_1dad14;
    }
    ctx->pc = 0x1DAD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DAD14u);
        ctx->pc = 0x1DAD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD0Cu;
        // 0x1dad10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAD0Cu, 0x1DAD14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DAD14u;
label_1dad14:
    // 0x1dad14: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1dad14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1dad18:
    // 0x1dad18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dad18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dad1c:
    // 0x1dad1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dad1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dad20:
    // 0x1dad20: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1dad20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1dad24:
    // 0x1dad24: 0x40f809  jalr        $v0
label_1dad28:
    if (ctx->pc == 0x1DAD28u) {
        ctx->pc = 0x1DAD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD24u;
        // 0x1dad28: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAD2Cu;
        goto label_1dad2c;
    }
    ctx->pc = 0x1DAD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DAD2Cu);
        ctx->pc = 0x1DAD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD24u;
        // 0x1dad28: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAD24u, 0x1DAD2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DAD2Cu;
label_1dad2c:
    // 0x1dad2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dad2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dad30:
    // 0x1dad30: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1dad30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dad34:
    // 0x1dad34: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1dad34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1dad38:
    // 0x1dad38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1dad38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1dad3c:
    // 0x1dad3c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1dad3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1dad40:
    // 0x1dad40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1dad40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1dad44:
    // 0x1dad44: 0x3e00008  jr          $ra
label_1dad48:
    if (ctx->pc == 0x1DAD48u) {
        ctx->pc = 0x1DAD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD44u;
        // 0x1dad48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAD4Cu;
        goto label_1dad4c;
    }
    ctx->pc = 0x1DAD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD44u;
        // 0x1dad48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAD4Cu;
label_1dad4c:
    // 0x1dad4c: 0x0  nop
    ctx->pc = 0x1dad4cu;
    // NOP
    if (ctx->pc == 0x1dad4cu) { ctx->pc = 0x1dad50u; }
}
