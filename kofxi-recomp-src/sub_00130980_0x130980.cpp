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

// Function: sub_00130980
// Address: 0x130980 - 0x131c70
void sub_00130980_0x130980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130980_0x130980");
#endif

    switch (ctx->pc) {
        case 0x1309a8u: goto label_1309a8;
        case 0x1309b0u: goto label_1309b0;
        case 0x1309b8u: goto label_1309b8;
        case 0x1309f8u: goto label_1309f8;
        case 0x130a00u: goto label_130a00;
        case 0x130a38u: goto label_130a38;
        case 0x130a70u: goto label_130a70;
        case 0x130b94u: goto label_130b94;
        case 0x130b9cu: goto label_130b9c;
        case 0x130d18u: goto label_130d18;
        case 0x130de0u: goto label_130de0;
        case 0x130de8u: goto label_130de8;
        case 0x130df0u: goto label_130df0;
        case 0x130e00u: goto label_130e00;
        case 0x130e08u: goto label_130e08;
        case 0x130e18u: goto label_130e18;
        case 0x130e44u: goto label_130e44;
        case 0x130e54u: goto label_130e54;
        case 0x130e90u: goto label_130e90;
        case 0x130eb4u: goto label_130eb4;
        case 0x130eccu: goto label_130ecc;
        case 0x130ef4u: goto label_130ef4;
        case 0x130efcu: goto label_130efc;
        case 0x130f04u: goto label_130f04;
        case 0x130f0cu: goto label_130f0c;
        case 0x130f14u: goto label_130f14;
        case 0x130f24u: goto label_130f24;
        case 0x130f2cu: goto label_130f2c;
        case 0x130f38u: goto label_130f38;
        case 0x130f68u: goto label_130f68;
        case 0x130f78u: goto label_130f78;
        case 0x130f84u: goto label_130f84;
        case 0x131000u: goto label_131000;
        case 0x131064u: goto label_131064;
        case 0x1310d8u: goto label_1310d8;
        case 0x1310e8u: goto label_1310e8;
        case 0x131120u: goto label_131120;
        case 0x131128u: goto label_131128;
        case 0x131148u: goto label_131148;
        case 0x131158u: goto label_131158;
        case 0x131268u: goto label_131268;
        case 0x1312fcu: goto label_1312fc;
        case 0x131308u: goto label_131308;
        case 0x131314u: goto label_131314;
        case 0x131320u: goto label_131320;
        case 0x131358u: goto label_131358;
        case 0x13138cu: goto label_13138c;
        case 0x1313a4u: goto label_1313a4;
        case 0x1313b4u: goto label_1313b4;
        case 0x1313bcu: goto label_1313bc;
        case 0x1313d4u: goto label_1313d4;
        case 0x1313e0u: goto label_1313e0;
        case 0x1313f8u: goto label_1313f8;
        case 0x131424u: goto label_131424;
        case 0x13142cu: goto label_13142c;
        case 0x13143cu: goto label_13143c;
        case 0x13144cu: goto label_13144c;
        case 0x13146cu: goto label_13146c;
        case 0x131510u: goto label_131510;
        case 0x13151cu: goto label_13151c;
        case 0x131524u: goto label_131524;
        case 0x131538u: goto label_131538;
        case 0x131550u: goto label_131550;
        case 0x13155cu: goto label_13155c;
        case 0x131568u: goto label_131568;
        case 0x13157cu: goto label_13157c;
        case 0x131584u: goto label_131584;
        case 0x131594u: goto label_131594;
        case 0x1315a4u: goto label_1315a4;
        case 0x1315b4u: goto label_1315b4;
        case 0x1315c4u: goto label_1315c4;
        case 0x1315d0u: goto label_1315d0;
        case 0x1315dcu: goto label_1315dc;
        case 0x1315ecu: goto label_1315ec;
        case 0x131614u: goto label_131614;
        case 0x13161cu: goto label_13161c;
        case 0x131660u: goto label_131660;
        case 0x1316acu: goto label_1316ac;
        case 0x131700u: goto label_131700;
        case 0x131730u: goto label_131730;
        case 0x131750u: goto label_131750;
        case 0x13176cu: goto label_13176c;
        case 0x1317a8u: goto label_1317a8;
        case 0x1317c4u: goto label_1317c4;
        case 0x131804u: goto label_131804;
        case 0x13182cu: goto label_13182c;
        case 0x131864u: goto label_131864;
        case 0x131880u: goto label_131880;
        case 0x1318c0u: goto label_1318c0;
        case 0x1318dcu: goto label_1318dc;
        case 0x131900u: goto label_131900;
        case 0x131920u: goto label_131920;
        case 0x131944u: goto label_131944;
        case 0x131960u: goto label_131960;
        case 0x131984u: goto label_131984;
        case 0x1319a4u: goto label_1319a4;
        case 0x1319c8u: goto label_1319c8;
        case 0x1319e4u: goto label_1319e4;
        case 0x131a08u: goto label_131a08;
        case 0x131a28u: goto label_131a28;
        case 0x131a44u: goto label_131a44;
        case 0x131a58u: goto label_131a58;
        case 0x131a70u: goto label_131a70;
        case 0x131a80u: goto label_131a80;
        case 0x131a94u: goto label_131a94;
        case 0x131b04u: goto label_131b04;
        case 0x131b34u: goto label_131b34;
        case 0x131bf0u: goto label_131bf0;
        case 0x131c00u: goto label_131c00;
        case 0x131c18u: goto label_131c18;
        case 0x131c48u: goto label_131c48;
        default: break;
    }

    ctx->pc = 0x130980u;

label_130980:
    // 0x130980: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x130980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x130984: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x130984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x130988: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x130988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13098c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13098cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x130990: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x130990u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x130994: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x130994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x130998: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x130998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13099c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13099cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1309a0: 0xc04c890  jal         func_132240
    ctx->pc = 0x1309A0u;
    SET_GPR_U32(ctx, 31, 0x1309A8u);
    ctx->pc = 0x1309A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1309A0u;
    // 0x1309a4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132240u, 0x1309A0u, 0x1309A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1309A8u;
label_1309a8:
    // 0x1309a8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1309a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1309ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1309acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1309b0:
    // 0x1309b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1309b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1309b4: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1309b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1309b8:
    // 0x1309b8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1309b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1309bc: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1309bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1309c0: 0x24840007  addiu       $a0, $a0, 0x7
    ctx->pc = 0x1309c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x1309c4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1309c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1309c8: 0x28820015  slti        $v0, $a0, 0x15
    ctx->pc = 0x1309c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x1309cc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1309ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1309d0: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x1309d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1309d4: 0xa0600005  sb          $zero, 0x5($v1)
    ctx->pc = 0x1309d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x1309d8: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x1309d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x1309dc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1309DCu;
    {
        const bool branch_taken_0x1309dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1309E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1309DCu;
        // 0x1309e0: 0x24630007  addiu       $v1, $v1, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1309dc) {
            ctx->pc = 0x1309B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1309b8;
        }
    }
    ctx->pc = 0x1309E4u;
    // 0x1309e4: 0x3c120041  lui         $s2, 0x41
    ctx->pc = 0x1309e4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65 << 16));
    // 0x1309e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1309e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1309ec: 0x26525ae0  addiu       $s2, $s2, 0x5AE0
    ctx->pc = 0x1309ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 23264));
    // 0x1309f0: 0x2538821  addu        $s1, $s2, $s3
    ctx->pc = 0x1309f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1309f4: 0x0  nop
    ctx->pc = 0x1309f4u;
    // NOP
label_1309f8:
    // 0x1309f8: 0xc067c48  jal         func_19F120
    ctx->pc = 0x1309F8u;
    SET_GPR_U32(ctx, 31, 0x130A00u);
    ctx->pc = 0x19F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F120u, 0x1309F8u, 0x130A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130A00u;
label_130a00:
    // 0x130a00: 0x3c034130  lui         $v1, 0x4130
    ctx->pc = 0x130a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16688 << 16));
    // 0x130a04: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x130a04u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a08: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x130a08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x130a0c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x130a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x130a10: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x130a10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x130a14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x130a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130a18: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x130a18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x130a1c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x130a1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x130a20: 0x0  nop
    ctx->pc = 0x130a20u;
    // NOP
    // 0x130a24: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x130a24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x130a28: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x130a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x130a2c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x130a2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a30: 0x2463c4a0  addiu       $v1, $v1, -0x3B60
    ctx->pc = 0x130a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952096));
    // 0x130a34: 0x0  nop
    ctx->pc = 0x130a34u;
    // NOP
label_130a38:
    // 0x130a38: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x130a38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a3c: 0x126001a  div         $zero, $t1, $a2
    ctx->pc = 0x130a3cu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x130a40: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x130a40u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a44: 0x0  nop
    ctx->pc = 0x130a44u;
    // NOP
    // 0x130a48: 0x2810  mfhi        $a1
    ctx->pc = 0x130a48u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x130a4c: 0x1a800010  blez        $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x130A4Cu;
    {
        const bool branch_taken_0x130a4c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x130A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A4Cu;
        // 0x130a50: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x130a4c) {
            ctx->pc = 0x130A90u;
            goto label_130a90;
        }
    }
    ctx->pc = 0x130A54u;
    // 0x130a54: 0x30ae00ff  andi        $t6, $a1, 0xFF
    ctx->pc = 0x130a54u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x130a58: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x130a58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a5c: 0xe6840  sll         $t5, $t6, 1
    ctx->pc = 0x130a5cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x130a60: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x130a60u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x130a64: 0x6d6821  addu        $t5, $v1, $t5
    ctx->pc = 0x130a64u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x130a68: 0x81ae0000  lb          $t6, 0x0($t5)
    ctx->pc = 0x130a68u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x130a6c: 0x0  nop
    ctx->pc = 0x130a6cu;
    // NOP
label_130a70:
    // 0x130a70: 0x950d0000  lhu         $t5, 0x0($t0)
    ctx->pc = 0x130a70u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x130a74: 0x15cd0002  bne         $t6, $t5, . + 4 + (0x2 << 2)
    ctx->pc = 0x130A74u;
    {
        const bool branch_taken_0x130a74 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 13));
        if (branch_taken_0x130a74) {
            ctx->pc = 0x130A80u;
            goto label_130a80;
        }
    }
    ctx->pc = 0x130A7Cu;
    // 0x130a7c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x130a7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_130a80:
    // 0x130a80: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x130a80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x130a84: 0x174682a  slt         $t5, $t3, $s4
    ctx->pc = 0x130a84u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x130a88: 0x15a0fff9  bnez        $t5, . + 4 + (-0x7 << 2)
    ctx->pc = 0x130A88u;
    {
        const bool branch_taken_0x130a88 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x130A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A88u;
        // 0x130a8c: 0x25080006  addiu       $t0, $t0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130a88) {
            ctx->pc = 0x130A70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_130a70;
        }
    }
    ctx->pc = 0x130A90u;
label_130a90:
    // 0x130a90: 0x1140000d  beqz        $t2, . + 4 + (0xD << 2)
    ctx->pc = 0x130A90u;
    {
        const bool branch_taken_0x130a90 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x130a90) {
            ctx->pc = 0x130AC8u;
            goto label_130ac8;
        }
    }
    ctx->pc = 0x130A98u;
    // 0x130a98: 0x30a800ff  andi        $t0, $a1, 0xFF
    ctx->pc = 0x130a98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x130a9c: 0x11d4021  addu        $t0, $t0, $sp
    ctx->pc = 0x130a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
    // 0x130aa0: 0x250a0070  addiu       $t2, $t0, 0x70
    ctx->pc = 0x130aa0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
    // 0x130aa4: 0x81480000  lb          $t0, 0x0($t2)
    ctx->pc = 0x130aa4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x130aa8: 0x15000007  bnez        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x130AA8u;
    {
        const bool branch_taken_0x130aa8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x130aa8) {
            ctx->pc = 0x130AC8u;
            goto label_130ac8;
        }
    }
    ctx->pc = 0x130AB0u;
    // 0x130ab0: 0x5ae3c  dsll32      $s5, $a1, 24
    ctx->pc = 0x130ab0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) << (32 + 24));
    // 0x130ab4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x130ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130ab8: 0x15ae3f  dsra32      $s5, $s5, 24
    ctx->pc = 0x130ab8u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 24));
    // 0x130abc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x130ABCu;
    {
        const bool branch_taken_0x130abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130ABCu;
        // 0x130ac0: 0xa1430000  sb          $v1, 0x0($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130abc) {
            ctx->pc = 0x130AD8u;
            goto label_130ad8;
        }
    }
    ctx->pc = 0x130AC4u;
    // 0x130ac4: 0x0  nop
    ctx->pc = 0x130ac4u;
    // NOP
label_130ac8:
    // 0x130ac8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x130ac8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x130acc: 0x2985000b  slti        $a1, $t4, 0xB
    ctx->pc = 0x130accu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x130ad0: 0x14a0ffd9  bnez        $a1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x130AD0u;
    {
        const bool branch_taken_0x130ad0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x130AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130AD0u;
        // 0x130ad4: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ad0) {
            ctx->pc = 0x130A38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_130a38;
        }
    }
    ctx->pc = 0x130AD8u;
label_130ad8:
    // 0x130ad8: 0x15263c  dsll32      $a0, $s5, 24
    ctx->pc = 0x130ad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) << (32 + 24));
    // 0x130adc: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x130adcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x130ae0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x130ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x130ae4: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x130AE4u;
    {
        const bool branch_taken_0x130ae4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x130ae4) {
            ctx->pc = 0x130AF8u;
            goto label_130af8;
        }
    }
    ctx->pc = 0x130AECu;
    // 0x130aec: 0x7ae3c  dsll32      $s5, $a3, 24
    ctx->pc = 0x130aecu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 7) << (32 + 24));
    // 0x130af0: 0x15ae3f  dsra32      $s5, $s5, 24
    ctx->pc = 0x130af0u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 24));
    // 0x130af4: 0x0  nop
    ctx->pc = 0x130af4u;
    // NOP
label_130af8:
    // 0x130af8: 0x152e3c  dsll32      $a1, $s5, 24
    ctx->pc = 0x130af8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) << (32 + 24));
    // 0x130afc: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x130afcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x130b00: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x130b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x130b04: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x130b04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x130b08: 0x2463c4a0  addiu       $v1, $v1, -0x3B60
    ctx->pc = 0x130b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952096));
    // 0x130b0c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x130b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x130b10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x130b10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x130b14: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x130b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x130b18: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x130b18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x130b1c: 0x80860000  lb          $a2, 0x0($a0)
    ctx->pc = 0x130b1cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x130b20: 0x2a030009  slti        $v1, $s0, 0x9
    ctx->pc = 0x130b20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x130b24: 0x80850001  lb          $a1, 0x1($a0)
    ctx->pc = 0x130b24u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x130b28: 0xa6260000  sh          $a2, 0x0($s1)
    ctx->pc = 0x130b28u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x130b2c: 0x80840002  lb          $a0, 0x2($a0)
    ctx->pc = 0x130b2cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x130b30: 0xa6250002  sh          $a1, 0x2($s1)
    ctx->pc = 0x130b30u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x130b34: 0xa6240004  sh          $a0, 0x4($s1)
    ctx->pc = 0x130b34u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x130b38: 0x1460ffaf  bnez        $v1, . + 4 + (-0x51 << 2)
    ctx->pc = 0x130B38u;
    {
        const bool branch_taken_0x130b38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B38u;
        // 0x130b3c: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b38) {
            ctx->pc = 0x1309F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1309f8;
        }
    }
    ctx->pc = 0x130B40u;
    // 0x130b40: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x130b40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x130b44: 0x2a830004  slti        $v1, $s4, 0x4
    ctx->pc = 0x130b44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x130b48: 0x1460ff99  bnez        $v1, . + 4 + (-0x67 << 2)
    ctx->pc = 0x130B48u;
    {
        const bool branch_taken_0x130b48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B48u;
        // 0x130b4c: 0x26730006  addiu       $s3, $s3, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b48) {
            ctx->pc = 0x1309B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1309b0;
        }
    }
    ctx->pc = 0x130B50u;
    // 0x130b50: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x130b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130b54: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x130b54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x130b58: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x130b58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x130b5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x130b5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x130b60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x130b60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130b64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x130b64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130b68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x130b68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x130B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B6Cu;
        // 0x130b70: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130B74u;
    // 0x130b74: 0x0  nop
    ctx->pc = 0x130b74u;
    // NOP
    // 0x130b78: 0x0  nop
    ctx->pc = 0x130b78u;
    // NOP
    // 0x130b7c: 0x0  nop
    ctx->pc = 0x130b7cu;
    // NOP
    // 0x130b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x130b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x130b84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x130b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x130b88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x130b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x130b8c: 0xc068350  jal         func_1A0D40
    ctx->pc = 0x130B8Cu;
    SET_GPR_U32(ctx, 31, 0x130B94u);
    ctx->pc = 0x130B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130B8Cu;
    // 0x130b90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D40u, 0x130B8Cu, 0x130B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130B94u;
label_130b94:
    // 0x130b94: 0xc068330  jal         func_1A0CC0
    ctx->pc = 0x130B94u;
    SET_GPR_U32(ctx, 31, 0x130B9Cu);
    ctx->pc = 0x1A0CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CC0u, 0x130B94u, 0x130B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130B9Cu;
label_130b9c:
    // 0x130b9c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x130b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x130ba0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x130ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x130ba4: 0xa040da98  sb          $zero, -0x2568($v0)
    ctx->pc = 0x130ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957720), (uint8_t)GPR_U32(ctx, 0));
    // 0x130ba8: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x130ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x130bac: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x130bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x130bb0: 0xa045daa0  sb          $a1, -0x2560($v0)
    ctx->pc = 0x130bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957728), (uint8_t)GPR_U32(ctx, 5));
    // 0x130bb4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x130bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x130bb8: 0xa040f338  sb          $zero, -0xCC8($v0)
    ctx->pc = 0x130bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294964024), (uint8_t)GPR_U32(ctx, 0));
    // 0x130bbc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x130bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x130bc0: 0xa040da08  sb          $zero, -0x25F8($v0)
    ctx->pc = 0x130bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 0));
    // 0x130bc4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x130bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x130bc8: 0xa040d9f8  sb          $zero, -0x2608($v0)
    ctx->pc = 0x130bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957560), (uint8_t)GPR_U32(ctx, 0));
    // 0x130bcc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x130bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x130bd0: 0xac40da10  sw          $zero, -0x25F0($v0)
    ctx->pc = 0x130bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957584), GPR_U32(ctx, 0));
    // 0x130bd4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x130bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x130bd8: 0x9044f364  lbu         $a0, -0xC9C($v0)
    ctx->pc = 0x130bd8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964068)));
    // 0x130bdc: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x130bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x130be0: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x130be0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x130be4: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x130be4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x130be8: 0x2c41000f  sltiu       $at, $v0, 0xF
    ctx->pc = 0x130be8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x130bec: 0x1020007a  beqz        $at, . + 4 + (0x7A << 2)
    ctx->pc = 0x130BECu;
    {
        const bool branch_taken_0x130bec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x130BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130BECu;
        // 0x130bf0: 0xa064f364  sb          $a0, -0xC9C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964068), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130bec) {
            ctx->pc = 0x130DD8u;
            goto label_130dd8;
        }
    }
    ctx->pc = 0x130BF4u;
    // 0x130bf4: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x130bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x130bf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x130bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x130bfc: 0x2463c4a0  addiu       $v1, $v1, -0x3B60
    ctx->pc = 0x130bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952096));
    // 0x130c00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x130c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x130c04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x130c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130c08: 0x400008  jr          $v0
    ctx->pc = 0x130C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130C10u: goto label_130c10;
            case 0x130C3Cu: goto label_130c3c;
            case 0x130C68u: goto label_130c68;
            case 0x130CA8u: goto label_130ca8;
            case 0x130CD4u: goto label_130cd4;
            case 0x130D10u: goto label_130d10;
            case 0x130DD8u: goto label_130dd8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130C08u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x130C10u;
label_130c10:
    // 0x130c10: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x130c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x130c14: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x130c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x130c18: 0x9045b270  lbu         $a1, -0x4D90($v0)
    ctx->pc = 0x130c18u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947440)));
    // 0x130c1c: 0xa060f35a  sb          $zero, -0xCA6($v1)
    ctx->pc = 0x130c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294964058), (uint8_t)GPR_U32(ctx, 0));
    // 0x130c20: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x130c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x130c24: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x130c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x130c28: 0xa065f35b  sb          $a1, -0xCA5($v1)
    ctx->pc = 0x130c28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294964059), (uint8_t)GPR_U32(ctx, 5));
    // 0x130c2c: 0x9044b273  lbu         $a0, -0x4D8D($v0)
    ctx->pc = 0x130c2cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947443)));
    // 0x130c30: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x130c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x130c34: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x130C34u;
    {
        const bool branch_taken_0x130c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C34u;
        // 0x130c38: 0xa044f35c  sb          $a0, -0xCA4($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294964060), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c34) {
            ctx->pc = 0x130DD8u;
            goto label_130dd8;
        }
    }
    ctx->pc = 0x130C3Cu;
label_130c3c:
    // 0x130c3c: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x130c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x130c40: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x130c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x130c44: 0x9045b270  lbu         $a1, -0x4D90($v0)
    ctx->pc = 0x130c44u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947440)));
    // 0x130c48: 0xa060f35a  sb          $zero, -0xCA6($v1)
    ctx->pc = 0x130c48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294964058), (uint8_t)GPR_U32(ctx, 0));
    // 0x130c4c: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x130c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x130c50: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x130c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x130c54: 0xa065f35b  sb          $a1, -0xCA5($v1)
    ctx->pc = 0x130c54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294964059), (uint8_t)GPR_U32(ctx, 5));
    // 0x130c58: 0x9044b273  lbu         $a0, -0x4D8D($v0)
    ctx->pc = 0x130c58u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947443)));
    // 0x130c5c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x130c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x130c60: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x130C60u;
    {
        const bool branch_taken_0x130c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C60u;
        // 0x130c64: 0xa044f35c  sb          $a0, -0xCA4($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294964060), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c60) {
            ctx->pc = 0x130DD8u;
            goto label_130dd8;
        }
    }
    ctx->pc = 0x130C68u;
label_130c68:
    // 0x130c68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x130c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130c6c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x130c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x130c70: 0xa043f35a  sb          $v1, -0xCA6($v0)
    ctx->pc = 0x130c70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294964058), (uint8_t)GPR_U32(ctx, 3));
    // 0x130c74: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x130c74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x130c78: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x130c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x130c7c: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x130c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x130c80: 0x9047b270  lbu         $a3, -0x4D90($v0)
    ctx->pc = 0x130c80u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947440)));
    // 0x130c84: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x130c84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x130c88: 0x9063b273  lbu         $v1, -0x4D8D($v1)
    ctx->pc = 0x130c88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947443)));
    // 0x130c8c: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x130c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x130c90: 0xa0a7f35b  sb          $a3, -0xCA5($a1)
    ctx->pc = 0x130c90u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294964059), (uint8_t)GPR_U32(ctx, 7));
    // 0x130c94: 0x9046b274  lbu         $a2, -0x4D8C($v0)
    ctx->pc = 0x130c94u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947444)));
    // 0x130c98: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x130c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x130c9c: 0xa086f35d  sb          $a2, -0xCA3($a0)
    ctx->pc = 0x130c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294964061), (uint8_t)GPR_U32(ctx, 6));
    // 0x130ca0: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x130CA0u;
    {
        const bool branch_taken_0x130ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130CA0u;
        // 0x130ca4: 0xa043f35c  sb          $v1, -0xCA4($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294964060), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ca0) {
            ctx->pc = 0x130DD8u;
            goto label_130dd8;
        }
    }
    ctx->pc = 0x130CA8u;
label_130ca8:
    // 0x130ca8: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x130ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x130cac: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x130cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x130cb0: 0xa065f35a  sb          $a1, -0xCA6($v1)
    ctx->pc = 0x130cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294964058), (uint8_t)GPR_U32(ctx, 5));
    // 0x130cb4: 0x9045b270  lbu         $a1, -0x4D90($v0)
    ctx->pc = 0x130cb4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947440)));
    // 0x130cb8: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x130cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x130cbc: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x130cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x130cc0: 0xa065f35b  sb          $a1, -0xCA5($v1)
    ctx->pc = 0x130cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294964059), (uint8_t)GPR_U32(ctx, 5));
    // 0x130cc4: 0x9044b273  lbu         $a0, -0x4D8D($v0)
    ctx->pc = 0x130cc4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947443)));
    // 0x130cc8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x130cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x130ccc: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x130CCCu;
    {
        const bool branch_taken_0x130ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130CCCu;
        // 0x130cd0: 0xa044f35c  sb          $a0, -0xCA4($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294964060), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ccc) {
            ctx->pc = 0x130DD8u;
            goto label_130dd8;
        }
    }
    ctx->pc = 0x130CD4u;
label_130cd4:
    // 0x130cd4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x130cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x130cd8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x130cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x130cdc: 0x9046f364  lbu         $a2, -0xC9C($v0)
    ctx->pc = 0x130cdcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964068)));
    // 0x130ce0: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x130ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x130ce4: 0xa065f35a  sb          $a1, -0xCA6($v1)
    ctx->pc = 0x130ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294964058), (uint8_t)GPR_U32(ctx, 5));
    // 0x130ce8: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x130ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x130cec: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x130cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x130cf0: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x130cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x130cf4: 0x30c600fb  andi        $a2, $a2, 0xFB
    ctx->pc = 0x130cf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)251);
    // 0x130cf8: 0x9045b270  lbu         $a1, -0x4D90($v0)
    ctx->pc = 0x130cf8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947440)));
    // 0x130cfc: 0xa086f364  sb          $a2, -0xC9C($a0)
    ctx->pc = 0x130cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294964068), (uint8_t)GPR_U32(ctx, 6));
    // 0x130d00: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x130d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x130d04: 0xa065f35b  sb          $a1, -0xCA5($v1)
    ctx->pc = 0x130d04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294964059), (uint8_t)GPR_U32(ctx, 5));
    // 0x130d08: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x130D08u;
    {
        const bool branch_taken_0x130d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D08u;
        // 0x130d0c: 0xa040f35c  sb          $zero, -0xCA4($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294964060), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d08) {
            ctx->pc = 0x130DD8u;
            goto label_130dd8;
        }
    }
    ctx->pc = 0x130D10u;
label_130d10:
    // 0x130d10: 0xc0d0b98  jal         func_342E60
    ctx->pc = 0x130D10u;
    SET_GPR_U32(ctx, 31, 0x130D18u);
    ctx->pc = 0x342E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342E60u, 0x130D10u, 0x130D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D18u;
label_130d18:
    // 0x130d18: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x130d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x130d1c: 0x50430026  beql        $v0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x130D1Cu;
    {
        const bool branch_taken_0x130d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x130d1c) {
            ctx->pc = 0x130D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130D1Cu;
            // 0x130d20: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130DB8u;
            goto label_130db8;
        }
    }
    ctx->pc = 0x130D24u;
    // 0x130d24: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x130d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x130d28: 0x5043001b  beql        $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x130D28u;
    {
        const bool branch_taken_0x130d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x130d28) {
            ctx->pc = 0x130D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130D28u;
            // 0x130d2c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130D98u;
            goto label_130d98;
        }
    }
    ctx->pc = 0x130D30u;
    // 0x130d30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x130d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x130d34: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x130D34u;
    {
        const bool branch_taken_0x130d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x130d34) {
            ctx->pc = 0x130D78u;
            goto label_130d78;
        }
    }
    ctx->pc = 0x130D3Cu;
    // 0x130d3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x130d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130d40: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x130D40u;
    {
        const bool branch_taken_0x130d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x130d40) {
            ctx->pc = 0x130D58u;
            goto label_130d58;
        }
    }
    ctx->pc = 0x130D48u;
    // 0x130d48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x130D48u;
    {
        const bool branch_taken_0x130d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130d48) {
            ctx->pc = 0x130D58u;
            goto label_130d58;
        }
    }
    ctx->pc = 0x130D50u;
    // 0x130d50: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x130D50u;
    {
        const bool branch_taken_0x130d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130d50) {
            ctx->pc = 0x130DD8u;
            goto label_130dd8;
        }
    }
    ctx->pc = 0x130D58u;
label_130d58:
    // 0x130d58: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x130d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x130d5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x130d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130d60: 0xa040f35a  sb          $zero, -0xCA6($v0)
    ctx->pc = 0x130d60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294964058), (uint8_t)GPR_U32(ctx, 0));
    // 0x130d64: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x130d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x130d68: 0xa043f35b  sb          $v1, -0xCA5($v0)
    ctx->pc = 0x130d68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294964059), (uint8_t)GPR_U32(ctx, 3));
    // 0x130d6c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x130d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x130d70: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x130D70u;
    {
        const bool branch_taken_0x130d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D70u;
        // 0x130d74: 0xa043f35c  sb          $v1, -0xCA4($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294964060), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d70) {
            ctx->pc = 0x130DD8u;
            goto label_130dd8;
        }
    }
    ctx->pc = 0x130D78u;
label_130d78:
    // 0x130d78: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x130d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x130d7c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x130d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x130d80: 0xa060f35a  sb          $zero, -0xCA6($v1)
    ctx->pc = 0x130d80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294964058), (uint8_t)GPR_U32(ctx, 0));
    // 0x130d84: 0xa040f35b  sb          $zero, -0xCA5($v0)
    ctx->pc = 0x130d84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294964059), (uint8_t)GPR_U32(ctx, 0));
    // 0x130d88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x130d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130d8c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x130d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x130d90: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x130D90u;
    {
        const bool branch_taken_0x130d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D90u;
        // 0x130d94: 0xa043f35c  sb          $v1, -0xCA4($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294964060), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d90) {
            ctx->pc = 0x130DD8u;
            goto label_130dd8;
        }
    }
    ctx->pc = 0x130D98u;
label_130d98:
    // 0x130d98: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x130d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x130d9c: 0xa043f35a  sb          $v1, -0xCA6($v0)
    ctx->pc = 0x130d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294964058), (uint8_t)GPR_U32(ctx, 3));
    // 0x130da0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x130da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x130da4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x130da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130da8: 0xa040f35b  sb          $zero, -0xCA5($v0)
    ctx->pc = 0x130da8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294964059), (uint8_t)GPR_U32(ctx, 0));
    // 0x130dac: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x130dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x130db0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x130DB0u;
    {
        const bool branch_taken_0x130db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130DB0u;
        // 0x130db4: 0xa043f35c  sb          $v1, -0xCA4($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294964060), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130db0) {
            ctx->pc = 0x130DD8u;
            goto label_130dd8;
        }
    }
    ctx->pc = 0x130DB8u;
label_130db8:
    // 0x130db8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x130db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x130dbc: 0xa043f35a  sb          $v1, -0xCA6($v0)
    ctx->pc = 0x130dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294964058), (uint8_t)GPR_U32(ctx, 3));
    // 0x130dc0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x130dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x130dc4: 0xa040f35b  sb          $zero, -0xCA5($v0)
    ctx->pc = 0x130dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294964059), (uint8_t)GPR_U32(ctx, 0));
    // 0x130dc8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x130dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x130dcc: 0xa043f35d  sb          $v1, -0xCA3($v0)
    ctx->pc = 0x130dccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294964061), (uint8_t)GPR_U32(ctx, 3));
    // 0x130dd0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x130dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x130dd4: 0xa043f35c  sb          $v1, -0xCA4($v0)
    ctx->pc = 0x130dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294964060), (uint8_t)GPR_U32(ctx, 3));
label_130dd8:
    // 0x130dd8: 0xc0541f8  jal         func_1507E0
    ctx->pc = 0x130DD8u;
    SET_GPR_U32(ctx, 31, 0x130DE0u);
    ctx->pc = 0x1507E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1507E0u, 0x130DD8u, 0x130DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130DE0u;
label_130de0:
    // 0x130de0: 0xc04c260  jal         func_130980
    ctx->pc = 0x130DE0u;
    SET_GPR_U32(ctx, 31, 0x130DE8u);
    ctx->pc = 0x130DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130DE0u;
    // 0x130de4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130980u;
    goto label_130980;
    ctx->pc = 0x130DE8u;
label_130de8:
    // 0x130de8: 0xc04c210  jal         func_130840
    ctx->pc = 0x130DE8u;
    SET_GPR_U32(ctx, 31, 0x130DF0u);
    ctx->pc = 0x130DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130DE8u;
    // 0x130dec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130840u, 0x130DE8u, 0x130DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130DF0u;
label_130df0:
    // 0x130df0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x130df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130df4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x130df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130df8: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x130DF8u;
    SET_GPR_U32(ctx, 31, 0x130E00u);
    ctx->pc = 0x130DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130DF8u;
    // 0x130dfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x130DF8u, 0x130E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E00u;
label_130e00:
    // 0x130e00: 0xc06814c  jal         func_1A0530
    ctx->pc = 0x130E00u;
    SET_GPR_U32(ctx, 31, 0x130E08u);
    ctx->pc = 0x130E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130E00u;
    // 0x130e04: 0x24040300  addiu       $a0, $zero, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0530u, 0x130E00u, 0x130E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E08u;
label_130e08:
    // 0x130e08: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x130e08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x130e0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x130e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e10: 0xc055768  jal         func_155DA0
    ctx->pc = 0x130E10u;
    SET_GPR_U32(ctx, 31, 0x130E18u);
    ctx->pc = 0x130E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130E10u;
    // 0x130e14: 0x24840e30  addiu       $a0, $a0, 0xE30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x130E10u, 0x130E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E18u;
label_130e18:
    // 0x130e18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x130e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130e1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x130e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130e20: 0x3e00008  jr          $ra
    ctx->pc = 0x130E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E20u;
        // 0x130e24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130E28u;
    // 0x130e28: 0x0  nop
    ctx->pc = 0x130e28u;
    // NOP
    // 0x130e2c: 0x0  nop
    ctx->pc = 0x130e2cu;
    // NOP
    // 0x130e30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x130e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x130e34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x130e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x130e38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x130e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x130e3c: 0xc068330  jal         func_1A0CC0
    ctx->pc = 0x130E3Cu;
    SET_GPR_U32(ctx, 31, 0x130E44u);
    ctx->pc = 0x130E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130E3Cu;
    // 0x130e40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CC0u, 0x130E3Cu, 0x130E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E44u;
label_130e44:
    // 0x130e44: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x130e44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x130e48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x130e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e4c: 0xc055768  jal         func_155DA0
    ctx->pc = 0x130E4Cu;
    SET_GPR_U32(ctx, 31, 0x130E54u);
    ctx->pc = 0x130E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130E4Cu;
    // 0x130e50: 0x24840e70  addiu       $a0, $a0, 0xE70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x130E4Cu, 0x130E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E54u;
label_130e54:
    // 0x130e54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x130e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130e58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x130e58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x130E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E5Cu;
        // 0x130e60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130E64u;
    // 0x130e64: 0x0  nop
    ctx->pc = 0x130e64u;
    // NOP
    // 0x130e68: 0x0  nop
    ctx->pc = 0x130e68u;
    // NOP
    // 0x130e6c: 0x0  nop
    ctx->pc = 0x130e6cu;
    // NOP
    // 0x130e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x130e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x130e74: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x130e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x130e78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x130e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x130e7c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x130e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x130e80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x130e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x130e84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x130e84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e88: 0xc055650  jal         func_155940
    ctx->pc = 0x130E88u;
    SET_GPR_U32(ctx, 31, 0x130E90u);
    ctx->pc = 0x130E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130E88u;
    // 0x130e8c: 0xa043d9d0  sb          $v1, -0x2630($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957520), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155940u, 0x130E88u, 0x130E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E90u;
label_130e90:
    // 0x130e90: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x130e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x130e94: 0x9042f364  lbu         $v0, -0xC9C($v0)
    ctx->pc = 0x130e94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964068)));
    // 0x130e98: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x130e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x130e9c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x130E9Cu;
    {
        const bool branch_taken_0x130e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130e9c) {
            ctx->pc = 0x130EBCu;
            goto label_130ebc;
        }
    }
    ctx->pc = 0x130EA4u;
    // 0x130ea4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x130ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x130ea8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x130ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130eac: 0xc055768  jal         func_155DA0
    ctx->pc = 0x130EACu;
    SET_GPR_U32(ctx, 31, 0x130EB4u);
    ctx->pc = 0x130EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130EACu;
    // 0x130eb0: 0x24849840  addiu       $a0, $a0, -0x67C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x130EACu, 0x130EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130EB4u;
label_130eb4:
    // 0x130eb4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x130EB4u;
    {
        const bool branch_taken_0x130eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130EB4u;
        // 0x130eb8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130eb4) {
            ctx->pc = 0x130ED0u;
            goto label_130ed0;
        }
    }
    ctx->pc = 0x130EBCu;
label_130ebc:
    // 0x130ebc: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x130ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x130ec0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x130ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ec4: 0xc055768  jal         func_155DA0
    ctx->pc = 0x130EC4u;
    SET_GPR_U32(ctx, 31, 0x130ECCu);
    ctx->pc = 0x130EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130EC4u;
    // 0x130ec8: 0x24840ee0  addiu       $a0, $a0, 0xEE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x130EC4u, 0x130ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130ECCu;
label_130ecc:
    // 0x130ecc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x130eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_130ed0:
    // 0x130ed0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x130ed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x130ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130ED4u;
        // 0x130ed8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130EDCu;
    // 0x130edc: 0x0  nop
    ctx->pc = 0x130edcu;
    // NOP
    // 0x130ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x130ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x130ee4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x130ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x130ee8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x130ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x130eec: 0xc0692c0  jal         func_1A4B00
    ctx->pc = 0x130EECu;
    SET_GPR_U32(ctx, 31, 0x130EF4u);
    ctx->pc = 0x130EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130EECu;
    // 0x130ef0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B00u, 0x130EECu, 0x130EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130EF4u;
label_130ef4:
    // 0x130ef4: 0xc0cb1f4  jal         func_32C7D0
    ctx->pc = 0x130EF4u;
    SET_GPR_U32(ctx, 31, 0x130EFCu);
    ctx->pc = 0x32C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C7D0u, 0x130EF4u, 0x130EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130EFCu;
label_130efc:
    // 0x130efc: 0xc068350  jal         func_1A0D40
    ctx->pc = 0x130EFCu;
    SET_GPR_U32(ctx, 31, 0x130F04u);
    ctx->pc = 0x1A0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D40u, 0x130EFCu, 0x130F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F04u;
label_130f04:
    // 0x130f04: 0xc068330  jal         func_1A0CC0
    ctx->pc = 0x130F04u;
    SET_GPR_U32(ctx, 31, 0x130F0Cu);
    ctx->pc = 0x1A0CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CC0u, 0x130F04u, 0x130F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F0Cu;
label_130f0c:
    // 0x130f0c: 0xc055630  jal         func_1558C0
    ctx->pc = 0x130F0Cu;
    SET_GPR_U32(ctx, 31, 0x130F14u);
    ctx->pc = 0x1558C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1558C0u, 0x130F0Cu, 0x130F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F14u;
label_130f14:
    // 0x130f14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x130f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130f18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x130f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130f1c: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x130F1Cu;
    SET_GPR_U32(ctx, 31, 0x130F24u);
    ctx->pc = 0x130F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130F1Cu;
    // 0x130f20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x130F1Cu, 0x130F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F24u;
label_130f24:
    // 0x130f24: 0xc06814c  jal         func_1A0530
    ctx->pc = 0x130F24u;
    SET_GPR_U32(ctx, 31, 0x130F2Cu);
    ctx->pc = 0x130F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130F24u;
    // 0x130f28: 0x24040301  addiu       $a0, $zero, 0x301 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0530u, 0x130F24u, 0x130F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F2Cu;
label_130f2c:
    // 0x130f2c: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x130f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x130f30: 0xc0558d0  jal         func_156340
    ctx->pc = 0x130F30u;
    SET_GPR_U32(ctx, 31, 0x130F38u);
    ctx->pc = 0x130F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130F30u;
    // 0x130f34: 0x24844850  addiu       $a0, $a0, 0x4850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x130F30u, 0x130F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F38u;
label_130f38:
    // 0x130f38: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x130f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x130f3c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x130f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x130f40: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x130f40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x130f44: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x130f44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x130f48: 0xac605958  sw          $zero, 0x5958($v1)
    ctx->pc = 0x130f48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22872), GPR_U32(ctx, 0));
    // 0x130f4c: 0x24841170  addiu       $a0, $a0, 0x1170
    ctx->pc = 0x130f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4464));
    // 0x130f50: 0xac405950  sw          $zero, 0x5950($v0)
    ctx->pc = 0x130f50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22864), GPR_U32(ctx, 0));
    // 0x130f54: 0x24a5c4e0  addiu       $a1, $a1, -0x3B20
    ctx->pc = 0x130f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952160));
    // 0x130f58: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x130f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x130f5c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x130f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x130f60: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x130F60u;
    SET_GPR_U32(ctx, 31, 0x130F68u);
    ctx->pc = 0x130F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130F60u;
    // 0x130f64: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x130F60u, 0x130F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F68u;
label_130f68:
    // 0x130f68: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x130f68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x130f6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x130f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130f70: 0xc055768  jal         func_155DA0
    ctx->pc = 0x130F70u;
    SET_GPR_U32(ctx, 31, 0x130F78u);
    ctx->pc = 0x130F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130F70u;
    // 0x130f74: 0x24840fa0  addiu       $a0, $a0, 0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x130F70u, 0x130F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F78u;
label_130f78:
    // 0x130f78: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x130f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x130f7c: 0xc04c200  jal         func_130800
    ctx->pc = 0x130F7Cu;
    SET_GPR_U32(ctx, 31, 0x130F84u);
    ctx->pc = 0x130F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130F7Cu;
    // 0x130f80: 0xa04058c0  sb          $zero, 0x58C0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 22720), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130800u, 0x130F7Cu, 0x130F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F84u;
label_130f84:
    // 0x130f84: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x130f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x130f88: 0xa4605960  sh          $zero, 0x5960($v1)
    ctx->pc = 0x130f88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22880), (uint16_t)GPR_U32(ctx, 0));
    // 0x130f8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x130f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130f90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x130f90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130f94: 0x3e00008  jr          $ra
    ctx->pc = 0x130F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F94u;
        // 0x130f98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130F9Cu;
    // 0x130f9c: 0x0  nop
    ctx->pc = 0x130f9cu;
    // NOP
    // 0x130fa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x130fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x130fa4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x130fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x130fa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x130fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x130fac: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x130facu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x130fb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x130fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x130fb4: 0x906759b0  lbu         $a3, 0x59B0($v1)
    ctx->pc = 0x130fb4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22960)));
    // 0x130fb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x130fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130fbc: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x130fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x130fc0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x130fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x130fc4: 0x30e7007f  andi        $a3, $a3, 0x7F
    ctx->pc = 0x130fc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
    // 0x130fc8: 0x906659b1  lbu         $a2, 0x59B1($v1)
    ctx->pc = 0x130fc8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22961)));
    // 0x130fcc: 0xa0a759b0  sb          $a3, 0x59B0($a1)
    ctx->pc = 0x130fccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 22960), (uint8_t)GPR_U32(ctx, 7));
    // 0x130fd0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x130fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x130fd4: 0x30c5007f  andi        $a1, $a2, 0x7F
    ctx->pc = 0x130fd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
    // 0x130fd8: 0x906359b8  lbu         $v1, 0x59B8($v1)
    ctx->pc = 0x130fd8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22968)));
    // 0x130fdc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x130fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x130fe0: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x130FE0u;
    {
        const bool branch_taken_0x130fe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x130FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130FE0u;
        // 0x130fe4: 0xa08559b1  sb          $a1, 0x59B1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 22961), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130fe0) {
            ctx->pc = 0x13104Cu;
            goto label_13104c;
        }
    }
    ctx->pc = 0x130FE8u;
    // 0x130fe8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x130fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x130fec: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x130fecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x130ff0: 0x906459b0  lbu         $a0, 0x59B0($v1)
    ctx->pc = 0x130ff0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22960)));
    // 0x130ff4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x130ff4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ff8: 0x24c659a8  addiu       $a2, $a2, 0x59A8
    ctx->pc = 0x130ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22952));
    // 0x130ffc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x130ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_131000:
    // 0x131000: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x131000u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x131004: 0x5465000c  bnel        $v1, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x131004u;
    {
        const bool branch_taken_0x131004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x131004) {
            ctx->pc = 0x131008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131004u;
            // 0x131008: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131038u;
            goto label_131038;
        }
    }
    ctx->pc = 0x13100Cu;
    // 0x13100c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x13100cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x131010: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x131010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x131014: 0x248459a8  addiu       $a0, $a0, 0x59A8
    ctx->pc = 0x131014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22952));
    // 0x131018: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x131018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13101c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x13101cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x131020: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x131020u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x131024: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x131024u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x131028: 0x34e40080  ori         $a0, $a3, 0x80
    ctx->pc = 0x131028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x13102c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13102cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131030: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x131030u;
    {
        const bool branch_taken_0x131030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131030u;
        // 0x131034: 0xa06459b0  sb          $a0, 0x59B0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 22960), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131030) {
            ctx->pc = 0x1310B0u;
            goto label_1310b0;
        }
    }
    ctx->pc = 0x131038u;
label_131038:
    // 0x131038: 0x28e30003  slti        $v1, $a3, 0x3
    ctx->pc = 0x131038u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x13103c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x13103Cu;
    {
        const bool branch_taken_0x13103c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x131040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13103Cu;
        // 0x131040: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13103c) {
            ctx->pc = 0x131000u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_131000;
        }
    }
    ctx->pc = 0x131044u;
    // 0x131044: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x131044u;
    {
        const bool branch_taken_0x131044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131044) {
            ctx->pc = 0x1310B0u;
            goto label_1310b0;
        }
    }
    ctx->pc = 0x13104Cu;
label_13104c:
    // 0x13104c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13104cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131050: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x131050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x131054: 0x906459b1  lbu         $a0, 0x59B1($v1)
    ctx->pc = 0x131054u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22961)));
    // 0x131058: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x131058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13105c: 0x24a559a8  addiu       $a1, $a1, 0x59A8
    ctx->pc = 0x13105cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22952));
    // 0x131060: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x131060u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_131064:
    // 0x131064: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x131064u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x131068: 0x5468000d  bnel        $v1, $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x131068u;
    {
        const bool branch_taken_0x131068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x131068) {
            ctx->pc = 0x13106Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131068u;
            // 0x13106c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1310A0u;
            goto label_1310a0;
        }
    }
    ctx->pc = 0x131070u;
    // 0x131070: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x131070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x131074: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x131074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x131078: 0x24a559a8  addiu       $a1, $a1, 0x59A8
    ctx->pc = 0x131078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22952));
    // 0x13107c: 0x34c40080  ori         $a0, $a2, 0x80
    ctx->pc = 0x13107cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x131080: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x131080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x131084: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x131084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131088: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x131088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x13108c: 0xa0c70000  sb          $a3, 0x0($a2)
    ctx->pc = 0x13108cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x131090: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131094: 0xa0a80000  sb          $t0, 0x0($a1)
    ctx->pc = 0x131094u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x131098: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x131098u;
    {
        const bool branch_taken_0x131098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131098u;
        // 0x13109c: 0xa06459b1  sb          $a0, 0x59B1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 22961), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131098) {
            ctx->pc = 0x1310B0u;
            goto label_1310b0;
        }
    }
    ctx->pc = 0x1310A0u;
label_1310a0:
    // 0x1310a0: 0x28c30003  slti        $v1, $a2, 0x3
    ctx->pc = 0x1310a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1310a4: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1310A4u;
    {
        const bool branch_taken_0x1310a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1310A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1310A4u;
        // 0x1310a8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1310a4) {
            ctx->pc = 0x131064u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_131064;
        }
    }
    ctx->pc = 0x1310ACu;
    // 0x1310ac: 0x0  nop
    ctx->pc = 0x1310acu;
    // NOP
label_1310b0:
    // 0x1310b0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1310b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1310b4: 0x906559b8  lbu         $a1, 0x59B8($v1)
    ctx->pc = 0x1310b4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22968)));
    // 0x1310b8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1310b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1310bc: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1310bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1310c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1310c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1310c4: 0x8c635950  lw          $v1, 0x5950($v1)
    ctx->pc = 0x1310c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22864)));
    // 0x1310c8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1310C8u;
    {
        const bool branch_taken_0x1310c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1310CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1310C8u;
        // 0x1310cc: 0xa08559b8  sb          $a1, 0x59B8($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 22968), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1310c8) {
            ctx->pc = 0x1310E8u;
            goto label_1310e8;
        }
    }
    ctx->pc = 0x1310D0u;
    // 0x1310d0: 0xc068330  jal         func_1A0CC0
    ctx->pc = 0x1310D0u;
    SET_GPR_U32(ctx, 31, 0x1310D8u);
    ctx->pc = 0x1A0CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CC0u, 0x1310D0u, 0x1310D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1310D8u;
label_1310d8:
    // 0x1310d8: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x1310d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x1310dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1310dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1310e0: 0xc055768  jal         func_155DA0
    ctx->pc = 0x1310E0u;
    SET_GPR_U32(ctx, 31, 0x1310E8u);
    ctx->pc = 0x1310E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1310E0u;
    // 0x1310e4: 0x24841100  addiu       $a0, $a0, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x1310E0u, 0x1310E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1310E8u;
label_1310e8:
    // 0x1310e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1310e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1310ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1310ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1310f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1310F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1310F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1310F0u;
        // 0x1310f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1310F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1310F8u;
    // 0x1310f8: 0x0  nop
    ctx->pc = 0x1310f8u;
    // NOP
    // 0x1310fc: 0x0  nop
    ctx->pc = 0x1310fcu;
    // NOP
    // 0x131100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x131100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x131104: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x131104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x131108: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x131108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13110c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x13110cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x131110: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x131110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x131114: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x131114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131118: 0xc055650  jal         func_155940
    ctx->pc = 0x131118u;
    SET_GPR_U32(ctx, 31, 0x131120u);
    ctx->pc = 0x13111Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131118u;
    // 0x13111c: 0xa043d9d0  sb          $v1, -0x2630($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957520), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155940u, 0x131118u, 0x131120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131120u;
label_131120:
    // 0x131120: 0xc04c71c  jal         func_131C70
    ctx->pc = 0x131120u;
    SET_GPR_U32(ctx, 31, 0x131128u);
    ctx->pc = 0x131C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131C70u, 0x131120u, 0x131128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131128u;
label_131128:
    // 0x131128: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x131128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x13112c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x13112cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x131130: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x131130u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x131134: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x131134u;
    {
        const bool branch_taken_0x131134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x131134) {
            ctx->pc = 0x131138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131134u;
            // 0x131138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131150u;
            goto label_131150;
        }
    }
    ctx->pc = 0x13113Cu;
    // 0x13113c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x13113cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x131140: 0xc0558e0  jal         func_156380
    ctx->pc = 0x131140u;
    SET_GPR_U32(ctx, 31, 0x131148u);
    ctx->pc = 0x131144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131140u;
    // 0x131144: 0x248415d0  addiu       $a0, $a0, 0x15D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x131140u, 0x131148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131148u;
label_131148:
    // 0x131148: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x131148u;
    {
        const bool branch_taken_0x131148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131148u;
        // 0x13114c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131148) {
            ctx->pc = 0x13115Cu;
            goto label_13115c;
        }
    }
    ctx->pc = 0x131150u;
label_131150:
    // 0x131150: 0xc055770  jal         func_155DC0
    ctx->pc = 0x131150u;
    SET_GPR_U32(ctx, 31, 0x131158u);
    ctx->pc = 0x155DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DC0u, 0x131150u, 0x131158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131158u;
label_131158:
    // 0x131158: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x131158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13115c:
    // 0x13115c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13115cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131160: 0x3e00008  jr          $ra
    ctx->pc = 0x131160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131160u;
        // 0x131164: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131168u;
    // 0x131168: 0x0  nop
    ctx->pc = 0x131168u;
    // NOP
    // 0x13116c: 0x0  nop
    ctx->pc = 0x13116cu;
    // NOP
    // 0x131170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x131170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x131174: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131178: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x131178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13117c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13117cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x131180: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x131180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x131184: 0x8c665958  lw          $a2, 0x5958($v1)
    ctx->pc = 0x131184u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22872)));
    // 0x131188: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x131188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13118c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x13118cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x131190: 0x50c400ac  beql        $a2, $a0, . + 4 + (0xAC << 2)
    ctx->pc = 0x131190u;
    {
        const bool branch_taken_0x131190 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x131190) {
            ctx->pc = 0x131194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131190u;
            // 0x131194: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131444u;
            goto label_131444;
        }
    }
    ctx->pc = 0x131198u;
    // 0x131198: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x131198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x13119c: 0x50c30094  beql        $a2, $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x13119Cu;
    {
        const bool branch_taken_0x13119c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x13119c) {
            ctx->pc = 0x1311A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13119Cu;
            // 0x1311a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1313F0u;
            goto label_1313f0;
        }
    }
    ctx->pc = 0x1311A4u;
    // 0x1311a4: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x1311a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1311a8: 0x50c30088  beql        $a2, $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x1311A8u;
    {
        const bool branch_taken_0x1311a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1311a8) {
            ctx->pc = 0x1311ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1311A8u;
            // 0x1311ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1313CCu;
            goto label_1313cc;
        }
    }
    ctx->pc = 0x1311B0u;
    // 0x1311b0: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x1311b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1311b4: 0x10c30079  beq         $a2, $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x1311B4u;
    {
        const bool branch_taken_0x1311b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1311b4) {
            ctx->pc = 0x13139Cu;
            goto label_13139c;
        }
    }
    ctx->pc = 0x1311BCu;
    // 0x1311bc: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x1311bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1311c0: 0x10c3006f  beq         $a2, $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x1311C0u;
    {
        const bool branch_taken_0x1311c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1311c0) {
            ctx->pc = 0x131380u;
            goto label_131380;
        }
    }
    ctx->pc = 0x1311C8u;
    // 0x1311c8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1311c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1311cc: 0x10c3005d  beq         $a2, $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x1311CCu;
    {
        const bool branch_taken_0x1311cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1311cc) {
            ctx->pc = 0x131344u;
            goto label_131344;
        }
    }
    ctx->pc = 0x1311D4u;
    // 0x1311d4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1311d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1311d8: 0x10c50044  beq         $a2, $a1, . + 4 + (0x44 << 2)
    ctx->pc = 0x1311D8u;
    {
        const bool branch_taken_0x1311d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1311d8) {
            ctx->pc = 0x1312ECu;
            goto label_1312ec;
        }
    }
    ctx->pc = 0x1311E0u;
    // 0x1311e0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1311E0u;
    {
        const bool branch_taken_0x1311e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1311e0) {
            ctx->pc = 0x1311F0u;
            goto label_1311f0;
        }
    }
    ctx->pc = 0x1311E8u;
    // 0x1311e8: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x1311E8u;
    {
        const bool branch_taken_0x1311e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1311ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1311E8u;
        // 0x1311ec: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1311e8) {
            ctx->pc = 0x131470u;
            goto label_131470;
        }
    }
    ctx->pc = 0x1311F0u;
label_1311f0:
    // 0x1311f0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1311f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1311f4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1311f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1311f8: 0xa04059b0  sb          $zero, 0x59B0($v0)
    ctx->pc = 0x1311f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 22960), (uint8_t)GPR_U32(ctx, 0));
    // 0x1311fc: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x1311fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x131200: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x131200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131204: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x131204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x131208: 0xa04759b1  sb          $a3, 0x59B1($v0)
    ctx->pc = 0x131208u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 22961), (uint8_t)GPR_U32(ctx, 7));
    // 0x13120c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x13120cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x131210: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x131210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x131214: 0xa06059b8  sb          $zero, 0x59B8($v1)
    ctx->pc = 0x131214u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 22968), (uint8_t)GPR_U32(ctx, 0));
    // 0x131218: 0xa04059a8  sb          $zero, 0x59A8($v0)
    ctx->pc = 0x131218u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 22952), (uint8_t)GPR_U32(ctx, 0));
    // 0x13121c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x13121cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x131220: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x131220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x131224: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131228: 0xa04759a9  sb          $a3, 0x59A9($v0)
    ctx->pc = 0x131228u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 22953), (uint8_t)GPR_U32(ctx, 7));
    // 0x13122c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x13122cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131230: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x131230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x131234: 0xa06659a0  sb          $a2, 0x59A0($v1)
    ctx->pc = 0x131234u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 22944), (uint8_t)GPR_U32(ctx, 6));
    // 0x131238: 0xac455958  sw          $a1, 0x5958($v0)
    ctx->pc = 0x131238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22872), GPR_U32(ctx, 5));
    // 0x13123c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13123cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131240: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x131240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x131244: 0xa08659aa  sb          $a2, 0x59AA($a0)
    ctx->pc = 0x131244u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 22954), (uint8_t)GPR_U32(ctx, 6));
    // 0x131248: 0xa04659a1  sb          $a2, 0x59A1($v0)
    ctx->pc = 0x131248u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 22945), (uint8_t)GPR_U32(ctx, 6));
    // 0x13124c: 0x2508db50  addiu       $t0, $t0, -0x24B0
    ctx->pc = 0x13124cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957904));
    // 0x131250: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x131250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x131254: 0xa06659a2  sb          $a2, 0x59A2($v1)
    ctx->pc = 0x131254u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 22946), (uint8_t)GPR_U32(ctx, 6));
    // 0x131258: 0xa04659a3  sb          $a2, 0x59A3($v0)
    ctx->pc = 0x131258u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 22947), (uint8_t)GPR_U32(ctx, 6));
    // 0x13125c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x13125cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x131260: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x131260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x131264: 0x9044f35a  lbu         $a0, -0xCA6($v0)
    ctx->pc = 0x131264u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964058)));
label_131268:
    // 0x131268: 0x91020050  lbu         $v0, 0x50($t0)
    ctx->pc = 0x131268u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 80)));
    // 0x13126c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13126cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x131270: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x131270u;
    {
        const bool branch_taken_0x131270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x131270) {
            ctx->pc = 0x131288u;
            goto label_131288;
        }
    }
    ctx->pc = 0x131278u;
    // 0x131278: 0x9102000a  lbu         $v0, 0xA($t0)
    ctx->pc = 0x131278u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 10)));
    // 0x13127c: 0x10470012  beq         $v0, $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x13127Cu;
    {
        const bool branch_taken_0x13127c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x13127c) {
            ctx->pc = 0x1312C8u;
            goto label_1312c8;
        }
    }
    ctx->pc = 0x131284u;
    // 0x131284: 0x0  nop
    ctx->pc = 0x131284u;
    // NOP
label_131288:
    // 0x131288: 0xa106014d  sb          $a2, 0x14D($t0)
    ctx->pc = 0x131288u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 333), (uint8_t)GPR_U32(ctx, 6));
    // 0x13128c: 0xa1060150  sb          $a2, 0x150($t0)
    ctx->pc = 0x13128cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 336), (uint8_t)GPR_U32(ctx, 6));
    // 0x131290: 0xa106016d  sb          $a2, 0x16D($t0)
    ctx->pc = 0x131290u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 365), (uint8_t)GPR_U32(ctx, 6));
    // 0x131294: 0xa1060170  sb          $a2, 0x170($t0)
    ctx->pc = 0x131294u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 368), (uint8_t)GPR_U32(ctx, 6));
    // 0x131298: 0xa106018d  sb          $a2, 0x18D($t0)
    ctx->pc = 0x131298u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 397), (uint8_t)GPR_U32(ctx, 6));
    // 0x13129c: 0xa1060190  sb          $a2, 0x190($t0)
    ctx->pc = 0x13129cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 400), (uint8_t)GPR_U32(ctx, 6));
    // 0x1312a0: 0x10870003  beq         $a0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1312A0u;
    {
        const bool branch_taken_0x1312a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x1312A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1312A0u;
        // 0x1312a4: 0xa1050005  sb          $a1, 0x5($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 5), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1312a0) {
            ctx->pc = 0x1312B0u;
            goto label_1312b0;
        }
    }
    ctx->pc = 0x1312A8u;
    // 0x1312a8: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1312A8u;
    {
        const bool branch_taken_0x1312a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x1312a8) {
            ctx->pc = 0x1312B8u;
            goto label_1312b8;
        }
    }
    ctx->pc = 0x1312B0u;
label_1312b0:
    // 0x1312b0: 0xa1070005  sb          $a3, 0x5($t0)
    ctx->pc = 0x1312b0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 5), (uint8_t)GPR_U32(ctx, 7));
    // 0x1312b4: 0x0  nop
    ctx->pc = 0x1312b4u;
    // NOP
label_1312b8:
    // 0x1312b8: 0x91020050  lbu         $v0, 0x50($t0)
    ctx->pc = 0x1312b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 80)));
    // 0x1312bc: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x1312bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x1312c0: 0xa1020050  sb          $v0, 0x50($t0)
    ctx->pc = 0x1312c0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 80), (uint8_t)GPR_U32(ctx, 2));
    // 0x1312c4: 0x0  nop
    ctx->pc = 0x1312c4u;
    // NOP
label_1312c8:
    // 0x1312c8: 0x91030050  lbu         $v1, 0x50($t0)
    ctx->pc = 0x1312c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 80)));
    // 0x1312cc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1312ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1312d0: 0x29220004  slti        $v0, $t1, 0x4
    ctx->pc = 0x1312d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1312d4: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x1312d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x1312d8: 0xa1030050  sb          $v1, 0x50($t0)
    ctx->pc = 0x1312d8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 80), (uint8_t)GPR_U32(ctx, 3));
    // 0x1312dc: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1312DCu;
    {
        const bool branch_taken_0x1312dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1312E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1312DCu;
        // 0x1312e0: 0x25080248  addiu       $t0, $t0, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1312dc) {
            ctx->pc = 0x131268u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_131268;
        }
    }
    ctx->pc = 0x1312E4u;
    // 0x1312e4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1312e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1312e8: 0xa0405bf8  sb          $zero, 0x5BF8($v0)
    ctx->pc = 0x1312e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23544), (uint8_t)GPR_U32(ctx, 0));
label_1312ec:
    // 0x1312ec: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1312ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1312f0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x1312f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x1312f4: 0xc0cb3c4  jal         func_32CF10
    ctx->pc = 0x1312F4u;
    SET_GPR_U32(ctx, 31, 0x1312FCu);
    ctx->pc = 0x1312F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1312F4u;
    // 0x1312f8: 0x2484c4f0  addiu       $a0, $a0, -0x3B10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CF10u, 0x1312F4u, 0x1312FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1312FCu;
label_1312fc:
    // 0x1312fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1312fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131300: 0xc0cb224  jal         func_32C890
    ctx->pc = 0x131300u;
    SET_GPR_U32(ctx, 31, 0x131308u);
    ctx->pc = 0x131304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131300u;
    // 0x131304: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C890u, 0x131300u, 0x131308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131308u;
label_131308:
    // 0x131308: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x131308u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
    // 0x13130c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13130cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131310: 0x263159c0  addiu       $s1, $s1, 0x59C0
    ctx->pc = 0x131310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 22976));
label_131314:
    // 0x131314: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x131314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x131318: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x131318u;
    SET_GPR_U32(ctx, 31, 0x131320u);
    ctx->pc = 0x13131Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131318u;
    // 0x13131c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C8B0u, 0x131318u, 0x131320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131320u;
label_131320:
    // 0x131320: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x131320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x131324: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x131324u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x131328: 0x2e030036  sltiu       $v1, $s0, 0x36
    ctx->pc = 0x131328u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)54) ? 1 : 0);
    // 0x13132c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x13132Cu;
    {
        const bool branch_taken_0x13132c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x131330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13132Cu;
        // 0x131330: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13132c) {
            ctx->pc = 0x131314u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_131314;
        }
    }
    ctx->pc = 0x131334u;
    // 0x131334: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x131334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x131338: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13133c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x13133Cu;
    {
        const bool branch_taken_0x13133c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13133Cu;
        // 0x131340: 0xac645958  sw          $a0, 0x5958($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22872), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13133c) {
            ctx->pc = 0x13146Cu;
            goto label_13146c;
        }
    }
    ctx->pc = 0x131344u;
label_131344:
    // 0x131344: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x131344u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x131348: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x131348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x13134c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13134cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131350: 0x24c659c0  addiu       $a2, $a2, 0x59C0
    ctx->pc = 0x131350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22976));
    // 0x131354: 0x24a55610  addiu       $a1, $a1, 0x5610
    ctx->pc = 0x131354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22032));
label_131358:
    // 0x131358: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x131358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13135c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x13135cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x131360: 0x2c820036  sltiu       $v0, $a0, 0x36
    ctx->pc = 0x131360u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)54) ? 1 : 0);
    // 0x131364: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x131364u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x131368: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x131368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x13136c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13136Cu;
    {
        const bool branch_taken_0x13136c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x131370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13136Cu;
        // 0x131370: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13136c) {
            ctx->pc = 0x131358u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_131358;
        }
    }
    ctx->pc = 0x131374u;
    // 0x131374: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x131374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x131378: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x131378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x13137c: 0xac435958  sw          $v1, 0x5958($v0)
    ctx->pc = 0x13137cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22872), GPR_U32(ctx, 3));
label_131380:
    // 0x131380: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x131380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x131384: 0xc0c0db4  jal         func_3036D0
    ctx->pc = 0x131384u;
    SET_GPR_U32(ctx, 31, 0x13138Cu);
    ctx->pc = 0x131388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131384u;
    // 0x131388: 0x2484d840  addiu       $a0, $a0, -0x27C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3036D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3036D0u, 0x131384u, 0x13138Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13138Cu;
label_13138c:
    // 0x13138c: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x13138cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x131390: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131394: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x131394u;
    {
        const bool branch_taken_0x131394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131394u;
        // 0x131398: 0xac645958  sw          $a0, 0x5958($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22872), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131394) {
            ctx->pc = 0x13146Cu;
            goto label_13146c;
        }
    }
    ctx->pc = 0x13139Cu;
label_13139c:
    // 0x13139c: 0xc0c0da8  jal         func_3036A0
    ctx->pc = 0x13139Cu;
    SET_GPR_U32(ctx, 31, 0x1313A4u);
    ctx->pc = 0x3036A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3036A0u, 0x13139Cu, 0x1313A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1313A4u;
label_1313a4:
    // 0x1313a4: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1313A4u;
    {
        const bool branch_taken_0x1313a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1313a4) {
            ctx->pc = 0x13146Cu;
            goto label_13146c;
        }
    }
    ctx->pc = 0x1313ACu;
    // 0x1313ac: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x1313ACu;
    SET_GPR_U32(ctx, 31, 0x1313B4u);
    ctx->pc = 0x197FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197FF0u, 0x1313ACu, 0x1313B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1313B4u;
label_1313b4:
    // 0x1313b4: 0xc063d18  jal         func_18F460
    ctx->pc = 0x1313B4u;
    SET_GPR_U32(ctx, 31, 0x1313BCu);
    ctx->pc = 0x18F460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F460u, 0x1313B4u, 0x1313BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1313BCu;
label_1313bc:
    // 0x1313bc: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1313bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1313c0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1313c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1313c4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1313C4u;
    {
        const bool branch_taken_0x1313c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1313C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1313C4u;
        // 0x1313c8: 0xac645958  sw          $a0, 0x5958($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22872), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1313c4) {
            ctx->pc = 0x13146Cu;
            goto label_13146c;
        }
    }
    ctx->pc = 0x1313CCu;
label_1313cc:
    // 0x1313cc: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x1313CCu;
    SET_GPR_U32(ctx, 31, 0x1313D4u);
    ctx->pc = 0x1313D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1313CCu;
    // 0x1313d0: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C8B0u, 0x1313CCu, 0x1313D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1313D4u;
label_1313d4:
    // 0x1313d4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1313d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1313d8: 0xc0c880c  jal         func_322030
    ctx->pc = 0x1313D8u;
    SET_GPR_U32(ctx, 31, 0x1313E0u);
    ctx->pc = 0x1313DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1313D8u;
    // 0x1313dc: 0xac625608  sw          $v0, 0x5608($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 22024), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322030u, 0x1313D8u, 0x1313E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1313E0u;
label_1313e0:
    // 0x1313e0: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1313e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1313e4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1313e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1313e8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1313E8u;
    {
        const bool branch_taken_0x1313e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1313ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1313E8u;
        // 0x1313ec: 0xac645958  sw          $a0, 0x5958($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22872), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1313e8) {
            ctx->pc = 0x13146Cu;
            goto label_13146c;
        }
    }
    ctx->pc = 0x1313F0u;
label_1313f0:
    // 0x1313f0: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x1313F0u;
    SET_GPR_U32(ctx, 31, 0x1313F8u);
    ctx->pc = 0x1313F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1313F0u;
    // 0x1313f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C8B0u, 0x1313F0u, 0x1313F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1313F8u;
label_1313f8:
    // 0x1313f8: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x1313f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x1313fc: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x1313fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x131400: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x131400u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x131404: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x131404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131408: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x131408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13140c: 0x24c6d840  addiu       $a2, $a2, -0x27C0
    ctx->pc = 0x13140cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957120));
    // 0x131410: 0x24e7c8a0  addiu       $a3, $a3, -0x3760
    ctx->pc = 0x131410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953120));
    // 0x131414: 0x2508c960  addiu       $t0, $t0, -0x36A0
    ctx->pc = 0x131414u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953312));
    // 0x131418: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x131418u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13141c: 0xc0c886c  jal         func_3221B0
    ctx->pc = 0x13141Cu;
    SET_GPR_U32(ctx, 31, 0x131424u);
    ctx->pc = 0x131420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13141Cu;
    // 0x131420: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3221B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3221B0u, 0x13141Cu, 0x131424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131424u;
label_131424:
    // 0x131424: 0xc063d18  jal         func_18F460
    ctx->pc = 0x131424u;
    SET_GPR_U32(ctx, 31, 0x13142Cu);
    ctx->pc = 0x18F460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F460u, 0x131424u, 0x13142Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13142Cu;
label_13142c:
    // 0x13142c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x13142cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x131430: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x131430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x131434: 0xc052f44  jal         func_14BD10
    ctx->pc = 0x131434u;
    SET_GPR_U32(ctx, 31, 0x13143Cu);
    ctx->pc = 0x131438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131434u;
    // 0x131438: 0xac435958  sw          $v1, 0x5958($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 22872), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BD10u, 0x131434u, 0x13143Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13143Cu;
label_13143c:
    // 0x13143c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x13143Cu;
    {
        const bool branch_taken_0x13143c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13143c) {
            ctx->pc = 0x13146Cu;
            goto label_13146c;
        }
    }
    ctx->pc = 0x131444u;
label_131444:
    // 0x131444: 0xc052f54  jal         func_14BD50
    ctx->pc = 0x131444u;
    SET_GPR_U32(ctx, 31, 0x13144Cu);
    ctx->pc = 0x14BD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BD50u, 0x131444u, 0x13144Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13144Cu;
label_13144c:
    // 0x13144c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13144Cu;
    {
        const bool branch_taken_0x13144c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13144c) {
            ctx->pc = 0x13146Cu;
            goto label_13146c;
        }
    }
    ctx->pc = 0x131454u;
    // 0x131454: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x131454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x131458: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x131458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x13145c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13145cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131460: 0xac405958  sw          $zero, 0x5958($v0)
    ctx->pc = 0x131460u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22872), GPR_U32(ctx, 0));
    // 0x131464: 0xc055768  jal         func_155DA0
    ctx->pc = 0x131464u;
    SET_GPR_U32(ctx, 31, 0x13146Cu);
    ctx->pc = 0x131468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131464u;
    // 0x131468: 0x24841480  addiu       $a0, $a0, 0x1480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x131464u, 0x13146Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13146Cu;
label_13146c:
    // 0x13146c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13146cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_131470:
    // 0x131470: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x131470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131474: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131478: 0x3e00008  jr          $ra
    ctx->pc = 0x131478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131478u;
        // 0x13147c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131480u;
    // 0x131480: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x131480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x131484: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131488: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x131488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x13148c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13148cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x131490: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x131490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x131494: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x131494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x131498: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x131498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13149c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13149cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1314a0: 0x8c645958  lw          $a0, 0x5958($v1)
    ctx->pc = 0x1314a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22872)));
    // 0x1314a4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1314a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1314a8: 0x508301e1  beql        $a0, $v1, . + 4 + (0x1E1 << 2)
    ctx->pc = 0x1314A8u;
    {
        const bool branch_taken_0x1314a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1314a8) {
            ctx->pc = 0x1314ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1314A8u;
            // 0x1314ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131C30u;
            goto label_131c30;
        }
    }
    ctx->pc = 0x1314B0u;
    // 0x1314b0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1314b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1314b4: 0x508301d6  beql        $a0, $v1, . + 4 + (0x1D6 << 2)
    ctx->pc = 0x1314B4u;
    {
        const bool branch_taken_0x1314b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1314b4) {
            ctx->pc = 0x1314B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1314B4u;
            // 0x1314b8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131C10u;
            goto label_131c10;
        }
    }
    ctx->pc = 0x1314BCu;
    // 0x1314bc: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x1314bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1314c0: 0x108301c9  beq         $a0, $v1, . + 4 + (0x1C9 << 2)
    ctx->pc = 0x1314C0u;
    {
        const bool branch_taken_0x1314c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1314c0) {
            ctx->pc = 0x131BE8u;
            goto label_131be8;
        }
    }
    ctx->pc = 0x1314C8u;
    // 0x1314c8: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1314c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1314cc: 0x108301a4  beq         $a0, $v1, . + 4 + (0x1A4 << 2)
    ctx->pc = 0x1314CCu;
    {
        const bool branch_taken_0x1314cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1314cc) {
            ctx->pc = 0x131B60u;
            goto label_131b60;
        }
    }
    ctx->pc = 0x1314D4u;
    // 0x1314d4: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1314d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1314d8: 0x10830158  beq         $a0, $v1, . + 4 + (0x158 << 2)
    ctx->pc = 0x1314D8u;
    {
        const bool branch_taken_0x1314d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1314d8) {
            ctx->pc = 0x131A3Cu;
            goto label_131a3c;
        }
    }
    ctx->pc = 0x1314E0u;
    // 0x1314e0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1314e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1314e4: 0x1083008b  beq         $a0, $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x1314E4u;
    {
        const bool branch_taken_0x1314e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1314e4) {
            ctx->pc = 0x131714u;
            goto label_131714;
        }
    }
    ctx->pc = 0x1314ECu;
    // 0x1314ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1314ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1314f0: 0x50830081  beql        $a0, $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x1314F0u;
    {
        const bool branch_taken_0x1314f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1314f0) {
            ctx->pc = 0x1314F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1314F0u;
            // 0x1314f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1316F8u;
            goto label_1316f8;
        }
    }
    ctx->pc = 0x1314F8u;
    // 0x1314f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1314F8u;
    {
        const bool branch_taken_0x1314f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1314f8) {
            ctx->pc = 0x131508u;
            goto label_131508;
        }
    }
    ctx->pc = 0x131500u;
    // 0x131500: 0x100001d2  b           . + 4 + (0x1D2 << 2)
    ctx->pc = 0x131500u;
    {
        const bool branch_taken_0x131500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131500u;
        // 0x131504: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131500) {
            ctx->pc = 0x131C4Cu;
            goto label_131c4c;
        }
    }
    ctx->pc = 0x131508u;
label_131508:
    // 0x131508: 0xc068300  jal         func_1A0C00
    ctx->pc = 0x131508u;
    SET_GPR_U32(ctx, 31, 0x131510u);
    ctx->pc = 0x1A0C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0C00u, 0x131508u, 0x131510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131510u;
label_131510:
    // 0x131510: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x131510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x131514: 0xc067cd0  jal         func_19F340
    ctx->pc = 0x131514u;
    SET_GPR_U32(ctx, 31, 0x13151Cu);
    ctx->pc = 0x131518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131514u;
    // 0x131518: 0x2484d840  addiu       $a0, $a0, -0x27C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F340u, 0x131514u, 0x13151Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13151Cu;
label_13151c:
    // 0x13151c: 0xc067ccc  jal         func_19F330
    ctx->pc = 0x13151Cu;
    SET_GPR_U32(ctx, 31, 0x131524u);
    ctx->pc = 0x131520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13151Cu;
    // 0x131520: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F330u, 0x13151Cu, 0x131524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131524u;
label_131524:
    // 0x131524: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x131524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x131528: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x131528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x13152c: 0x8c465608  lw          $a2, 0x5608($v0)
    ctx->pc = 0x13152cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22024)));
    // 0x131530: 0xc04bdc0  jal         func_12F700
    ctx->pc = 0x131530u;
    SET_GPR_U32(ctx, 31, 0x131538u);
    ctx->pc = 0x131534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131530u;
    // 0x131534: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F700u, 0x131530u, 0x131538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131538u;
label_131538:
    // 0x131538: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x131538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x13153c: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x13153cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x131540: 0x8c425608  lw          $v0, 0x5608($v0)
    ctx->pc = 0x131540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22024)));
    // 0x131544: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x131544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x131548: 0xc04bdc0  jal         func_12F700
    ctx->pc = 0x131548u;
    SET_GPR_U32(ctx, 31, 0x131550u);
    ctx->pc = 0x13154Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131548u;
    // 0x13154c: 0x24460a00  addiu       $a2, $v0, 0xA00 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F700u, 0x131548u, 0x131550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131550u;
label_131550:
    // 0x131550: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x131550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x131554: 0xc067cc4  jal         func_19F310
    ctx->pc = 0x131554u;
    SET_GPR_U32(ctx, 31, 0x13155Cu);
    ctx->pc = 0x131558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131554u;
    // 0x131558: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F310u, 0x131554u, 0x13155Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13155Cu;
label_13155c:
    // 0x13155c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x13155cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x131560: 0xc067cc4  jal         func_19F310
    ctx->pc = 0x131560u;
    SET_GPR_U32(ctx, 31, 0x131568u);
    ctx->pc = 0x131564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131560u;
    // 0x131564: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F310u, 0x131560u, 0x131568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131568u;
label_131568:
    // 0x131568: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x131568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x13156c: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x13156cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x131570: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x131570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131574: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x131574u;
    SET_GPR_U32(ctx, 31, 0x13157Cu);
    ctx->pc = 0x131578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131574u;
    // 0x131578: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x131574u, 0x13157Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13157Cu;
label_13157c:
    // 0x13157c: 0xc0c8ad8  jal         func_322B60
    ctx->pc = 0x13157Cu;
    SET_GPR_U32(ctx, 31, 0x131584u);
    ctx->pc = 0x322B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322B60u, 0x13157Cu, 0x131584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131584u;
label_131584:
    // 0x131584: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x131584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131588: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x131588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13158c: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x13158Cu;
    SET_GPR_U32(ctx, 31, 0x131594u);
    ctx->pc = 0x131590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13158Cu;
    // 0x131590: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x13158Cu, 0x131594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131594u;
label_131594:
    // 0x131594: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x131594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131598: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x131598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13159c: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x13159Cu;
    SET_GPR_U32(ctx, 31, 0x1315A4u);
    ctx->pc = 0x1315A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13159Cu;
    // 0x1315a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x13159Cu, 0x1315A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1315A4u;
label_1315a4:
    // 0x1315a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1315a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1315a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1315a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1315ac: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x1315ACu;
    SET_GPR_U32(ctx, 31, 0x1315B4u);
    ctx->pc = 0x1315B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1315ACu;
    // 0x1315b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x1315ACu, 0x1315B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1315B4u;
label_1315b4:
    // 0x1315b4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1315b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1315b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1315b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1315bc: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x1315BCu;
    SET_GPR_U32(ctx, 31, 0x1315C4u);
    ctx->pc = 0x1315C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1315BCu;
    // 0x1315c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x1315BCu, 0x1315C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1315C4u;
label_1315c4:
    // 0x1315c4: 0x2404040a  addiu       $a0, $zero, 0x40A
    ctx->pc = 0x1315c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1034));
    // 0x1315c8: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x1315C8u;
    SET_GPR_U32(ctx, 31, 0x1315D0u);
    ctx->pc = 0x1315CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1315C8u;
    // 0x1315cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x1315C8u, 0x1315D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1315D0u;
label_1315d0:
    // 0x1315d0: 0x24040164  addiu       $a0, $zero, 0x164
    ctx->pc = 0x1315d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 356));
    // 0x1315d4: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x1315D4u;
    SET_GPR_U32(ctx, 31, 0x1315DCu);
    ctx->pc = 0x1315D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1315D4u;
    // 0x1315d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x1315D4u, 0x1315DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1315DCu;
label_1315dc:
    // 0x1315dc: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1315dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1315e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1315e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1315e4: 0x24845980  addiu       $a0, $a0, 0x5980
    ctx->pc = 0x1315e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22912));
    // 0x1315e8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1315e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1315ec:
    // 0x1315ec: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x1315ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1315f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1315f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1315f4: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x1315f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1315f8: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x1315f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1315fc: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x1315fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x131600: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x131600u;
    {
        const bool branch_taken_0x131600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x131604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131600u;
        // 0x131604: 0x24840006  addiu       $a0, $a0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131600) {
            ctx->pc = 0x1315ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1315ec;
        }
    }
    ctx->pc = 0x131608u;
    // 0x131608: 0x3c13009c  lui         $s3, 0x9C
    ctx->pc = 0x131608u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)156 << 16));
    // 0x13160c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13160cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131610: 0x2673db50  addiu       $s3, $s3, -0x24B0
    ctx->pc = 0x131610u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957904));
label_131614:
    // 0x131614: 0xc067c48  jal         func_19F120
    ctx->pc = 0x131614u;
    SET_GPR_U32(ctx, 31, 0x13161Cu);
    ctx->pc = 0x19F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F120u, 0x131614u, 0x13161Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13161Cu;
label_13161c:
    // 0x13161c: 0x3c044130  lui         $a0, 0x4130
    ctx->pc = 0x13161cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16688 << 16));
    // 0x131620: 0x92630050  lbu         $v1, 0x50($s3)
    ctx->pc = 0x131620u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x131624: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x131624u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x131628: 0x0  nop
    ctx->pc = 0x131628u;
    // NOP
    // 0x13162c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13162cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x131630: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x131630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x131634: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x131634u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x131638: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x131638u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x13163c: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x13163Cu;
    {
        const bool branch_taken_0x13163c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13163c) {
            ctx->pc = 0x1316D8u;
            goto label_1316d8;
        }
    }
    ctx->pc = 0x131644u;
    // 0x131644: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x131644u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x131648: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x131648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x13164c: 0x2463c4a0  addiu       $v1, $v1, -0x3B60
    ctx->pc = 0x13164cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952096));
    // 0x131650: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x131650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x131654: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x131654u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131658: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x131658u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13165c: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x13165cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_131660:
    // 0x131660: 0x92450150  lbu         $a1, 0x150($s2)
    ctx->pc = 0x131660u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x131664: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x131664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x131668: 0x10a30015  beq         $a1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x131668u;
    {
        const bool branch_taken_0x131668 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x131668) {
            ctx->pc = 0x1316C0u;
            goto label_1316c0;
        }
    }
    ctx->pc = 0x131670u;
    // 0x131670: 0x9244014c  lbu         $a0, 0x14C($s2)
    ctx->pc = 0x131670u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 332)));
    // 0x131674: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x131674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x131678: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x131678u;
    {
        const bool branch_taken_0x131678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x131678) {
            ctx->pc = 0x1316B8u;
            goto label_1316b8;
        }
    }
    ctx->pc = 0x131680u;
    // 0x131680: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x131680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131684: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x131684u;
    {
        const bool branch_taken_0x131684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x131684) {
            ctx->pc = 0x1316A0u;
            goto label_1316a0;
        }
    }
    ctx->pc = 0x13168Cu;
    // 0x13168c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x13168Cu;
    {
        const bool branch_taken_0x13168c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13168c) {
            ctx->pc = 0x1316C0u;
            goto label_1316c0;
        }
    }
    ctx->pc = 0x131694u;
    // 0x131694: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x131694u;
    {
        const bool branch_taken_0x131694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131694) {
            ctx->pc = 0x1316C0u;
            goto label_1316c0;
        }
    }
    ctx->pc = 0x13169Cu;
    // 0x13169c: 0x0  nop
    ctx->pc = 0x13169cu;
    // NOP
label_1316a0:
    // 0x1316a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1316a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1316a4: 0xc04c8a4  jal         func_132290
    ctx->pc = 0x1316A4u;
    SET_GPR_U32(ctx, 31, 0x1316ACu);
    ctx->pc = 0x1316A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1316A4u;
    // 0x1316a8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132290u, 0x1316A4u, 0x1316ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1316ACu;
label_1316ac:
    // 0x1316ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1316ACu;
    {
        const bool branch_taken_0x1316ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1316B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1316ACu;
        // 0x1316b0: 0xa2420150  sb          $v0, 0x150($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 336), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1316ac) {
            ctx->pc = 0x1316C0u;
            goto label_1316c0;
        }
    }
    ctx->pc = 0x1316B4u;
    // 0x1316b4: 0x0  nop
    ctx->pc = 0x1316b4u;
    // NOP
label_1316b8:
    // 0x1316b8: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x1316b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1316bc: 0xa2430150  sb          $v1, 0x150($s2)
    ctx->pc = 0x1316bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 336), (uint8_t)GPR_U32(ctx, 3));
label_1316c0:
    // 0x1316c0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1316c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1316c4: 0x2a830003  slti        $v1, $s4, 0x3
    ctx->pc = 0x1316c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1316c8: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x1316c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1316cc: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1316CCu;
    {
        const bool branch_taken_0x1316cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1316D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1316CCu;
        // 0x1316d0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1316cc) {
            ctx->pc = 0x131660u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_131660;
        }
    }
    ctx->pc = 0x1316D4u;
    // 0x1316d4: 0x0  nop
    ctx->pc = 0x1316d4u;
    // NOP
label_1316d8:
    // 0x1316d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1316d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1316dc: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x1316dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1316e0: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1316E0u;
    {
        const bool branch_taken_0x1316e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1316E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1316E0u;
        // 0x1316e4: 0x26730248  addiu       $s3, $s3, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1316e0) {
            ctx->pc = 0x131614u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_131614;
        }
    }
    ctx->pc = 0x1316E8u;
    // 0x1316e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1316e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1316ec: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1316ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1316f0: 0x10000155  b           . + 4 + (0x155 << 2)
    ctx->pc = 0x1316F0u;
    {
        const bool branch_taken_0x1316f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1316F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1316F0u;
        // 0x1316f4: 0xac645958  sw          $a0, 0x5958($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22872), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1316f0) {
            ctx->pc = 0x131C48u;
            goto label_131c48;
        }
    }
    ctx->pc = 0x1316F8u;
label_1316f8:
    // 0x1316f8: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x1316F8u;
    SET_GPR_U32(ctx, 31, 0x131700u);
    ctx->pc = 0x1316FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1316F8u;
    // 0x1316fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B40u, 0x1316F8u, 0x131700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131700u;
label_131700:
    // 0x131700: 0x10400151  beqz        $v0, . + 4 + (0x151 << 2)
    ctx->pc = 0x131700u;
    {
        const bool branch_taken_0x131700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x131700) {
            ctx->pc = 0x131C48u;
            goto label_131c48;
        }
    }
    ctx->pc = 0x131708u;
    // 0x131708: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x131708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13170c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x13170cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x131710: 0xac435958  sw          $v1, 0x5958($v0)
    ctx->pc = 0x131710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22872), GPR_U32(ctx, 3));
label_131714:
    // 0x131714: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x131714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x131718: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x131718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13171c: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x13171cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x131720: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x131720u;
    {
        const bool branch_taken_0x131720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x131720) {
            ctx->pc = 0x131730u;
            goto label_131730;
        }
    }
    ctx->pc = 0x131728u;
    // 0x131728: 0xc0d4360  jal         func_350D80
    ctx->pc = 0x131728u;
    SET_GPR_U32(ctx, 31, 0x131730u);
    ctx->pc = 0x350D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350D80u, 0x131728u, 0x131730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131730u;
label_131730:
    // 0x131730: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x131730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x131734: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x131734u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x131738: 0x248425d0  addiu       $a0, $a0, 0x25D0
    ctx->pc = 0x131738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9680));
    // 0x13173c: 0x24a5c500  addiu       $a1, $a1, -0x3B00
    ctx->pc = 0x13173cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952192));
    // 0x131740: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x131740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x131744: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x131744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x131748: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x131748u;
    SET_GPR_U32(ctx, 31, 0x131750u);
    ctx->pc = 0x13174Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131748u;
    // 0x13174c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x131748u, 0x131750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131750u;
label_131750:
    // 0x131750: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x131750u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x131754: 0x2404005e  addiu       $a0, $zero, 0x5E
    ctx->pc = 0x131754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x131758: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x131758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13175c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x13175cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x131760: 0xa6000006  sh          $zero, 0x6($s0)
    ctx->pc = 0x131760u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x131764: 0xc0c8b98  jal         func_322E60
    ctx->pc = 0x131764u;
    SET_GPR_U32(ctx, 31, 0x13176Cu);
    ctx->pc = 0x131768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131764u;
    // 0x131768: 0xa6000004  sh          $zero, 0x4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322E60u, 0x131764u, 0x13176Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13176Cu;
label_13176c:
    // 0x13176c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x13176cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x131770: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x131770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x131774: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x131774u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x131778: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x131778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x13177c: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x13177cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x131780: 0xa6000008  sh          $zero, 0x8($s0)
    ctx->pc = 0x131780u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x131784: 0xa2000013  sb          $zero, 0x13($s0)
    ctx->pc = 0x131784u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x131788: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x131788u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13178c: 0xa204000d  sb          $a0, 0xD($s0)
    ctx->pc = 0x13178cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 4));
    // 0x131790: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x131790u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x131794: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x131794u;
    {
        const bool branch_taken_0x131794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x131794) {
            ctx->pc = 0x1317A8u;
            goto label_1317a8;
        }
    }
    ctx->pc = 0x13179Cu;
    // 0x13179c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13179cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1317a0: 0xc0d5074  jal         func_3541D0
    ctx->pc = 0x1317A0u;
    SET_GPR_U32(ctx, 31, 0x1317A8u);
    ctx->pc = 0x1317A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1317A0u;
    // 0x1317a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3541D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3541D0u, 0x1317A0u, 0x1317A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1317A8u;
label_1317a8:
    // 0x1317a8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1317a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1317ac: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1317acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1317b0: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x1317b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x1317b4: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1317B4u;
    {
        const bool branch_taken_0x1317b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1317b4) {
            ctx->pc = 0x1317E4u;
            goto label_1317e4;
        }
    }
    ctx->pc = 0x1317BCu;
    // 0x1317bc: 0xc0d0ba4  jal         func_342E90
    ctx->pc = 0x1317BCu;
    SET_GPR_U32(ctx, 31, 0x1317C4u);
    ctx->pc = 0x342E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342E90u, 0x1317BCu, 0x1317C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1317C4u;
label_1317c4:
    // 0x1317c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1317C4u;
    {
        const bool branch_taken_0x1317c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1317c4) {
            ctx->pc = 0x1317E4u;
            goto label_1317e4;
        }
    }
    ctx->pc = 0x1317CCu;
    // 0x1317cc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1317ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1317d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1317d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1317d4: 0x9042db5a  lbu         $v0, -0x24A6($v0)
    ctx->pc = 0x1317d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957914)));
    // 0x1317d8: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1317D8u;
    {
        const bool branch_taken_0x1317d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1317d8) {
            ctx->pc = 0x1317E4u;
            goto label_1317e4;
        }
    }
    ctx->pc = 0x1317E0u;
    // 0x1317e0: 0xa203000c  sb          $v1, 0xC($s0)
    ctx->pc = 0x1317e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 3));
label_1317e4:
    // 0x1317e4: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x1317e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x1317e8: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1317e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1317ec: 0x248425d0  addiu       $a0, $a0, 0x25D0
    ctx->pc = 0x1317ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9680));
    // 0x1317f0: 0x24a5c508  addiu       $a1, $a1, -0x3AF8
    ctx->pc = 0x1317f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952200));
    // 0x1317f4: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1317f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1317f8: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x1317f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1317fc: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x1317FCu;
    SET_GPR_U32(ctx, 31, 0x131804u);
    ctx->pc = 0x131800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1317FCu;
    // 0x131800: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x1317FCu, 0x131804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131804u;
label_131804:
    // 0x131804: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x131804u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x131808: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x131808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13180c: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x13180cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x131810: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x131810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131814: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x131814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x131818: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x131818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x13181c: 0xa6000006  sh          $zero, 0x6($s0)
    ctx->pc = 0x13181cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x131820: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x131820u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x131824: 0xc0c8b98  jal         func_322E60
    ctx->pc = 0x131824u;
    SET_GPR_U32(ctx, 31, 0x13182Cu);
    ctx->pc = 0x131828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131824u;
    // 0x131828: 0xa600000a  sh          $zero, 0xA($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322E60u, 0x131824u, 0x13182Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13182Cu;
label_13182c:
    // 0x13182c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x13182cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x131830: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x131830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x131834: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x131834u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x131838: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x131838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x13183c: 0xa6000008  sh          $zero, 0x8($s0)
    ctx->pc = 0x13183cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x131840: 0xa2000013  sb          $zero, 0x13($s0)
    ctx->pc = 0x131840u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x131844: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x131844u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x131848: 0xa204000d  sb          $a0, 0xD($s0)
    ctx->pc = 0x131848u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 4));
    // 0x13184c: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x13184cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x131850: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x131850u;
    {
        const bool branch_taken_0x131850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x131850) {
            ctx->pc = 0x131864u;
            goto label_131864;
        }
    }
    ctx->pc = 0x131858u;
    // 0x131858: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x131858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13185c: 0xc0d5074  jal         func_3541D0
    ctx->pc = 0x13185Cu;
    SET_GPR_U32(ctx, 31, 0x131864u);
    ctx->pc = 0x131860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13185Cu;
    // 0x131860: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3541D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3541D0u, 0x13185Cu, 0x131864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131864u;
label_131864:
    // 0x131864: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x131864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x131868: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x131868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13186c: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x13186cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x131870: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x131870u;
    {
        const bool branch_taken_0x131870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x131870) {
            ctx->pc = 0x1318A0u;
            goto label_1318a0;
        }
    }
    ctx->pc = 0x131878u;
    // 0x131878: 0xc0d0ba4  jal         func_342E90
    ctx->pc = 0x131878u;
    SET_GPR_U32(ctx, 31, 0x131880u);
    ctx->pc = 0x342E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342E90u, 0x131878u, 0x131880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131880u;
label_131880:
    // 0x131880: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x131880u;
    {
        const bool branch_taken_0x131880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x131880) {
            ctx->pc = 0x1318A0u;
            goto label_1318a0;
        }
    }
    ctx->pc = 0x131888u;
    // 0x131888: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x131888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x13188c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13188cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131890: 0x9042dda2  lbu         $v0, -0x225E($v0)
    ctx->pc = 0x131890u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958498)));
    // 0x131894: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x131894u;
    {
        const bool branch_taken_0x131894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x131894) {
            ctx->pc = 0x1318A0u;
            goto label_1318a0;
        }
    }
    ctx->pc = 0x13189Cu;
    // 0x13189c: 0xa203000c  sb          $v1, 0xC($s0)
    ctx->pc = 0x13189cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 3));
label_1318a0:
    // 0x1318a0: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x1318a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x1318a4: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1318a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1318a8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1318a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1318ac: 0x24844000  addiu       $a0, $a0, 0x4000
    ctx->pc = 0x1318acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16384));
    // 0x1318b0: 0x24a5c510  addiu       $a1, $a1, -0x3AF0
    ctx->pc = 0x1318b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952208));
    // 0x1318b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1318b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1318b8: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x1318B8u;
    SET_GPR_U32(ctx, 31, 0x1318C0u);
    ctx->pc = 0x1318BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1318B8u;
    // 0x1318bc: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x1318B8u, 0x1318C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1318C0u;
label_1318c0:
    // 0x1318c0: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x1318c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1318c4: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x1318c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1318c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1318c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1318cc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1318ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1318d0: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x1318d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1318d4: 0xc0c8b98  jal         func_322E60
    ctx->pc = 0x1318D4u;
    SET_GPR_U32(ctx, 31, 0x1318DCu);
    ctx->pc = 0x1318D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1318D4u;
    // 0x1318d8: 0xa6000006  sh          $zero, 0x6($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322E60u, 0x1318D4u, 0x1318DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1318DCu;
label_1318dc:
    // 0x1318dc: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x1318dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x1318e0: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1318e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1318e4: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1318e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1318e8: 0x24844000  addiu       $a0, $a0, 0x4000
    ctx->pc = 0x1318e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16384));
    // 0x1318ec: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1318ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1318f0: 0x24a5c510  addiu       $a1, $a1, -0x3AF0
    ctx->pc = 0x1318f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952208));
    // 0x1318f4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1318f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1318f8: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x1318F8u;
    SET_GPR_U32(ctx, 31, 0x131900u);
    ctx->pc = 0x1318FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1318F8u;
    // 0x1318fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x1318F8u, 0x131900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131900u;
label_131900:
    // 0x131900: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x131900u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x131904: 0x2404006f  addiu       $a0, $zero, 0x6F
    ctx->pc = 0x131904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x131908: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x131908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13190c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13190cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131910: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x131910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x131914: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x131914u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x131918: 0xc0c8b98  jal         func_322E60
    ctx->pc = 0x131918u;
    SET_GPR_U32(ctx, 31, 0x131920u);
    ctx->pc = 0x13191Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131918u;
    // 0x13191c: 0xa6000006  sh          $zero, 0x6($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322E60u, 0x131918u, 0x131920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131920u;
label_131920:
    // 0x131920: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x131920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x131924: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x131924u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x131928: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x131928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x13192c: 0x248438a0  addiu       $a0, $a0, 0x38A0
    ctx->pc = 0x13192cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14496));
    // 0x131930: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x131930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x131934: 0x24a5c518  addiu       $a1, $a1, -0x3AE8
    ctx->pc = 0x131934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952216));
    // 0x131938: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x131938u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13193c: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x13193Cu;
    SET_GPR_U32(ctx, 31, 0x131944u);
    ctx->pc = 0x131940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13193Cu;
    // 0x131940: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x13193Cu, 0x131944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131944u;
label_131944:
    // 0x131944: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x131944u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x131948: 0x24040072  addiu       $a0, $zero, 0x72
    ctx->pc = 0x131948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x13194c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13194cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131950: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x131950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x131954: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x131954u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x131958: 0xc0c8b98  jal         func_322E60
    ctx->pc = 0x131958u;
    SET_GPR_U32(ctx, 31, 0x131960u);
    ctx->pc = 0x13195Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131958u;
    // 0x13195c: 0xa6000006  sh          $zero, 0x6($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322E60u, 0x131958u, 0x131960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131960u;
label_131960:
    // 0x131960: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x131960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x131964: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x131964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x131968: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x131968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x13196c: 0x248438a0  addiu       $a0, $a0, 0x38A0
    ctx->pc = 0x13196cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14496));
    // 0x131970: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x131970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x131974: 0x24a5c528  addiu       $a1, $a1, -0x3AD8
    ctx->pc = 0x131974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952232));
    // 0x131978: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x131978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13197c: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x13197Cu;
    SET_GPR_U32(ctx, 31, 0x131984u);
    ctx->pc = 0x131980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13197Cu;
    // 0x131980: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x13197Cu, 0x131984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131984u;
label_131984:
    // 0x131984: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x131984u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x131988: 0x24040073  addiu       $a0, $zero, 0x73
    ctx->pc = 0x131988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x13198c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13198cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131994: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x131994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x131998: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x131998u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x13199c: 0xc0c8b98  jal         func_322E60
    ctx->pc = 0x13199Cu;
    SET_GPR_U32(ctx, 31, 0x1319A4u);
    ctx->pc = 0x1319A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13199Cu;
    // 0x1319a0: 0xa6000006  sh          $zero, 0x6($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322E60u, 0x13199Cu, 0x1319A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1319A4u;
label_1319a4:
    // 0x1319a4: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x1319a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x1319a8: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1319a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1319ac: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1319acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1319b0: 0x248434a0  addiu       $a0, $a0, 0x34A0
    ctx->pc = 0x1319b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13472));
    // 0x1319b4: 0x24a5c538  addiu       $a1, $a1, -0x3AC8
    ctx->pc = 0x1319b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952248));
    // 0x1319b8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1319b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1319bc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1319bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1319c0: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x1319C0u;
    SET_GPR_U32(ctx, 31, 0x1319C8u);
    ctx->pc = 0x1319C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1319C0u;
    // 0x1319c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x1319C0u, 0x1319C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1319C8u;
label_1319c8:
    // 0x1319c8: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x1319c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1319cc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1319ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1319d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1319d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1319d4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1319d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1319d8: 0xa6000008  sh          $zero, 0x8($s0)
    ctx->pc = 0x1319d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1319dc: 0xc0c8b98  jal         func_322E60
    ctx->pc = 0x1319DCu;
    SET_GPR_U32(ctx, 31, 0x1319E4u);
    ctx->pc = 0x1319E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1319DCu;
    // 0x1319e0: 0xa600000a  sh          $zero, 0xA($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322E60u, 0x1319DCu, 0x1319E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1319E4u;
label_1319e4:
    // 0x1319e4: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x1319e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x1319e8: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1319e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1319ec: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1319ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1319f0: 0x248434a0  addiu       $a0, $a0, 0x34A0
    ctx->pc = 0x1319f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13472));
    // 0x1319f4: 0x24a5c540  addiu       $a1, $a1, -0x3AC0
    ctx->pc = 0x1319f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952256));
    // 0x1319f8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1319f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1319fc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1319fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x131a00: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x131A00u;
    SET_GPR_U32(ctx, 31, 0x131A08u);
    ctx->pc = 0x131A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131A00u;
    // 0x131a04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x131A00u, 0x131A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A08u;
label_131a08:
    // 0x131a08: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x131a08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x131a0c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x131a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x131a10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x131a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131a14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131a18: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x131a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x131a1c: 0xa6000008  sh          $zero, 0x8($s0)
    ctx->pc = 0x131a1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x131a20: 0xc0c8b98  jal         func_322E60
    ctx->pc = 0x131A20u;
    SET_GPR_U32(ctx, 31, 0x131A28u);
    ctx->pc = 0x131A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131A20u;
    // 0x131a24: 0xa600000a  sh          $zero, 0xA($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322E60u, 0x131A20u, 0x131A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A28u;
label_131a28:
    // 0x131a28: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x131a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x131a2c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x131a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x131a30: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131a34: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x131A34u;
    {
        const bool branch_taken_0x131a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131A34u;
        // 0x131a38: 0xac645958  sw          $a0, 0x5958($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22872), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131a34) {
            ctx->pc = 0x131C48u;
            goto label_131c48;
        }
    }
    ctx->pc = 0x131A3Cu;
label_131a3c:
    // 0x131a3c: 0xc04c734  jal         func_131CD0
    ctx->pc = 0x131A3Cu;
    SET_GPR_U32(ctx, 31, 0x131A44u);
    ctx->pc = 0x131CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CD0u, 0x131A3Cu, 0x131A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A44u;
label_131a44:
    // 0x131a44: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x131A44u;
    {
        const bool branch_taken_0x131a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x131a44) {
            ctx->pc = 0x131A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131A44u;
            // 0x131a48: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131A78u;
            goto label_131a78;
        }
    }
    ctx->pc = 0x131A4Cu;
    // 0x131a4c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x131a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x131a50: 0xc0c8edc  jal         func_323B70
    ctx->pc = 0x131A50u;
    SET_GPR_U32(ctx, 31, 0x131A58u);
    ctx->pc = 0x131A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131A50u;
    // 0x131a54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B70u, 0x131A50u, 0x131A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A58u;
label_131a58:
    // 0x131a58: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x131A58u;
    {
        const bool branch_taken_0x131a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x131a58) {
            ctx->pc = 0x131A94u;
            goto label_131a94;
        }
    }
    ctx->pc = 0x131A60u;
    // 0x131a60: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x131a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x131a64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x131a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131a68: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x131A68u;
    SET_GPR_U32(ctx, 31, 0x131A70u);
    ctx->pc = 0x131A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131A68u;
    // 0x131a6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x131A68u, 0x131A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A70u;
label_131a70:
    // 0x131a70: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x131A70u;
    {
        const bool branch_taken_0x131a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131a70) {
            ctx->pc = 0x131A94u;
            goto label_131a94;
        }
    }
    ctx->pc = 0x131A78u;
label_131a78:
    // 0x131a78: 0xc0c8edc  jal         func_323B70
    ctx->pc = 0x131A78u;
    SET_GPR_U32(ctx, 31, 0x131A80u);
    ctx->pc = 0x131A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131A78u;
    // 0x131a7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B70u, 0x131A78u, 0x131A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A80u;
label_131a80:
    // 0x131a80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x131A80u;
    {
        const bool branch_taken_0x131a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x131a80) {
            ctx->pc = 0x131A94u;
            goto label_131a94;
        }
    }
    ctx->pc = 0x131A88u;
    // 0x131a88: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x131a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x131a8c: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x131A8Cu;
    SET_GPR_U32(ctx, 31, 0x131A94u);
    ctx->pc = 0x131A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131A8Cu;
    // 0x131a90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323980u, 0x131A8Cu, 0x131A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A94u;
label_131a94:
    // 0x131a94: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x131a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x131a98: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x131a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x131a9c: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x131a9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x131aa0: 0x14640012  bne         $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x131AA0u;
    {
        const bool branch_taken_0x131aa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x131aa0) {
            ctx->pc = 0x131AECu;
            goto label_131aec;
        }
    }
    ctx->pc = 0x131AA8u;
    // 0x131aa8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x131aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x131aac: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131aacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131ab0: 0x8484597a  lh          $a0, 0x597A($a0)
    ctx->pc = 0x131ab0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 22906)));
    // 0x131ab4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x131ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x131ab8: 0xa464597a  sh          $a0, 0x597A($v1)
    ctx->pc = 0x131ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22906), (uint16_t)GPR_U32(ctx, 4));
    // 0x131abc: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x131abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x131ac0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x131ac0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x131ac4: 0x4610009  bgez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x131AC4u;
    {
        const bool branch_taken_0x131ac4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x131ac4) {
            ctx->pc = 0x131AECu;
            goto label_131aec;
        }
    }
    ctx->pc = 0x131ACCu;
    // 0x131acc: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x131accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x131ad0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131ad4: 0xa464597a  sh          $a0, 0x597A($v1)
    ctx->pc = 0x131ad4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22906), (uint16_t)GPR_U32(ctx, 4));
    // 0x131ad8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131adc: 0x84645978  lh          $a0, 0x5978($v1)
    ctx->pc = 0x131adcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 22904)));
    // 0x131ae0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131ae4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x131ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x131ae8: 0xa4645978  sh          $a0, 0x5978($v1)
    ctx->pc = 0x131ae8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22904), (uint16_t)GPR_U32(ctx, 4));
label_131aec:
    // 0x131aec: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131af0: 0x84635978  lh          $v1, 0x5978($v1)
    ctx->pc = 0x131af0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 22904)));
    // 0x131af4: 0x4610008  bgez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x131AF4u;
    {
        const bool branch_taken_0x131af4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x131af4) {
            ctx->pc = 0x131B18u;
            goto label_131b18;
        }
    }
    ctx->pc = 0x131AFCu;
    // 0x131afc: 0xc068330  jal         func_1A0CC0
    ctx->pc = 0x131AFCu;
    SET_GPR_U32(ctx, 31, 0x131B04u);
    ctx->pc = 0x1A0CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CC0u, 0x131AFCu, 0x131B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131B04u;
label_131b04:
    // 0x131b04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x131b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131b08: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131b0c: 0xa4645960  sh          $a0, 0x5960($v1)
    ctx->pc = 0x131b0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22880), (uint16_t)GPR_U32(ctx, 4));
    // 0x131b10: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131b14: 0xa4605978  sh          $zero, 0x5978($v1)
    ctx->pc = 0x131b14u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22904), (uint16_t)GPR_U32(ctx, 0));
label_131b18:
    // 0x131b18: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131b1c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x131b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x131b20: 0x90635bf8  lbu         $v1, 0x5BF8($v1)
    ctx->pc = 0x131b20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23544)));
    // 0x131b24: 0x14640048  bne         $v1, $a0, . + 4 + (0x48 << 2)
    ctx->pc = 0x131B24u;
    {
        const bool branch_taken_0x131b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x131b24) {
            ctx->pc = 0x131C48u;
            goto label_131c48;
        }
    }
    ctx->pc = 0x131B2Cu;
    // 0x131b2c: 0xc068330  jal         func_1A0CC0
    ctx->pc = 0x131B2Cu;
    SET_GPR_U32(ctx, 31, 0x131B34u);
    ctx->pc = 0x1A0CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CC0u, 0x131B2Cu, 0x131B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131B34u;
label_131b34:
    // 0x131b34: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x131b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x131b38: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131b3c: 0xa464596a  sh          $a0, 0x596A($v1)
    ctx->pc = 0x131b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22890), (uint16_t)GPR_U32(ctx, 4));
    // 0x131b40: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131b44: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x131b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x131b48: 0xa4605968  sh          $zero, 0x5968($v1)
    ctx->pc = 0x131b48u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22888), (uint16_t)GPR_U32(ctx, 0));
    // 0x131b4c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131b50: 0xa4605960  sh          $zero, 0x5960($v1)
    ctx->pc = 0x131b50u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22880), (uint16_t)GPR_U32(ctx, 0));
    // 0x131b54: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131b58: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x131B58u;
    {
        const bool branch_taken_0x131b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131B58u;
        // 0x131b5c: 0xac645958  sw          $a0, 0x5958($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22872), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131b58) {
            ctx->pc = 0x131C48u;
            goto label_131c48;
        }
    }
    ctx->pc = 0x131B60u;
label_131b60:
    // 0x131b60: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x131b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x131b64: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131b68: 0x8484596a  lh          $a0, 0x596A($a0)
    ctx->pc = 0x131b68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 22890)));
    // 0x131b6c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x131b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x131b70: 0xa464596a  sh          $a0, 0x596A($v1)
    ctx->pc = 0x131b70u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22890), (uint16_t)GPR_U32(ctx, 4));
    // 0x131b74: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x131b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x131b78: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x131b78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x131b7c: 0x4610009  bgez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x131B7Cu;
    {
        const bool branch_taken_0x131b7c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x131b7c) {
            ctx->pc = 0x131BA4u;
            goto label_131ba4;
        }
    }
    ctx->pc = 0x131B84u;
    // 0x131b84: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x131b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x131b88: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131b8c: 0xa464596a  sh          $a0, 0x596A($v1)
    ctx->pc = 0x131b8cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22890), (uint16_t)GPR_U32(ctx, 4));
    // 0x131b90: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131b94: 0x84645968  lh          $a0, 0x5968($v1)
    ctx->pc = 0x131b94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 22888)));
    // 0x131b98: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131b9c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x131b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x131ba0: 0xa4645968  sh          $a0, 0x5968($v1)
    ctx->pc = 0x131ba0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22888), (uint16_t)GPR_U32(ctx, 4));
label_131ba4:
    // 0x131ba4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131ba8: 0x84635968  lh          $v1, 0x5968($v1)
    ctx->pc = 0x131ba8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 22888)));
    // 0x131bac: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x131BACu;
    {
        const bool branch_taken_0x131bac = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x131bac) {
            ctx->pc = 0x131BC8u;
            goto label_131bc8;
        }
    }
    ctx->pc = 0x131BB4u;
    // 0x131bb4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x131bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131bb8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131bbc: 0xa4645960  sh          $a0, 0x5960($v1)
    ctx->pc = 0x131bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22880), (uint16_t)GPR_U32(ctx, 4));
    // 0x131bc0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131bc4: 0xa4605968  sh          $zero, 0x5968($v1)
    ctx->pc = 0x131bc4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22888), (uint16_t)GPR_U32(ctx, 0));
label_131bc8:
    // 0x131bc8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131bcc: 0x94635960  lhu         $v1, 0x5960($v1)
    ctx->pc = 0x131bccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22880)));
    // 0x131bd0: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x131BD0u;
    {
        const bool branch_taken_0x131bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131bd0) {
            ctx->pc = 0x131C48u;
            goto label_131c48;
        }
    }
    ctx->pc = 0x131BD8u;
    // 0x131bd8: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x131bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x131bdc: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131be0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x131BE0u;
    {
        const bool branch_taken_0x131be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131BE0u;
        // 0x131be4: 0xac645958  sw          $a0, 0x5958($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22872), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131be0) {
            ctx->pc = 0x131C48u;
            goto label_131c48;
        }
    }
    ctx->pc = 0x131BE8u;
label_131be8:
    // 0x131be8: 0xc0538d0  jal         func_14E340
    ctx->pc = 0x131BE8u;
    SET_GPR_U32(ctx, 31, 0x131BF0u);
    ctx->pc = 0x14E340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E340u, 0x131BE8u, 0x131BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131BF0u;
label_131bf0:
    // 0x131bf0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x131bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x131bf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x131bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131bf8: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x131BF8u;
    SET_GPR_U32(ctx, 31, 0x131C00u);
    ctx->pc = 0x131BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131BF8u;
    // 0x131bfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x131BF8u, 0x131C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C00u;
label_131c00:
    // 0x131c00: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x131c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x131c04: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131c08: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x131C08u;
    {
        const bool branch_taken_0x131c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C08u;
        // 0x131c0c: 0xac645958  sw          $a0, 0x5958($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22872), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131c08) {
            ctx->pc = 0x131C48u;
            goto label_131c48;
        }
    }
    ctx->pc = 0x131C10u;
label_131c10:
    // 0x131c10: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x131C10u;
    SET_GPR_U32(ctx, 31, 0x131C18u);
    ctx->pc = 0x131C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131C10u;
    // 0x131c14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B40u, 0x131C10u, 0x131C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C18u;
label_131c18:
    // 0x131c18: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x131C18u;
    {
        const bool branch_taken_0x131c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x131c18) {
            ctx->pc = 0x131C48u;
            goto label_131c48;
        }
    }
    ctx->pc = 0x131C20u;
    // 0x131c20: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x131c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x131c24: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131c28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x131C28u;
    {
        const bool branch_taken_0x131c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C28u;
        // 0x131c2c: 0xac645958  sw          $a0, 0x5958($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22872), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131c28) {
            ctx->pc = 0x131C48u;
            goto label_131c48;
        }
    }
    ctx->pc = 0x131C30u;
label_131c30:
    // 0x131c30: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x131c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x131c34: 0xac435950  sw          $v1, 0x5950($v0)
    ctx->pc = 0x131c34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22864), GPR_U32(ctx, 3));
    // 0x131c38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x131c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131c3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x131c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131c40: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x131C40u;
    SET_GPR_U32(ctx, 31, 0x131C48u);
    ctx->pc = 0x131C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131C40u;
    // 0x131c44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x131C40u, 0x131C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C48u;
label_131c48:
    // 0x131c48: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x131c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_131c4c:
    // 0x131c4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x131c4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x131c50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x131c50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131c54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x131c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131c58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x131c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131c5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131c5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131c60: 0x3e00008  jr          $ra
    ctx->pc = 0x131C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C60u;
        // 0x131c64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131C68u;
    // 0x131c68: 0x0  nop
    ctx->pc = 0x131c68u;
    // NOP
    // 0x131c6c: 0x0  nop
    ctx->pc = 0x131c6cu;
    // NOP
}
