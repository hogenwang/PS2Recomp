#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00207CF0
// Address: 0x207cf0 - 0x208150
void sub_00207CF0_0x207cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207CF0_0x207cf0");
#endif

    switch (ctx->pc) {
        case 0x207dacu: goto label_207dac;
        case 0x207eb0u: goto label_207eb0;
        case 0x207ec4u: goto label_207ec4;
        case 0x207ec8u: goto label_207ec8;
        case 0x207f10u: goto label_207f10;
        case 0x207f8cu: goto label_207f8c;
        case 0x207f94u: goto label_207f94;
        case 0x207fb4u: goto label_207fb4;
        case 0x207fe4u: goto label_207fe4;
        case 0x207fecu: goto label_207fec;
        case 0x208000u: goto label_208000;
        case 0x20802cu: goto label_20802c;
        case 0x208098u: goto label_208098;
        case 0x2080acu: goto label_2080ac;
        case 0x2080d4u: goto label_2080d4;
        case 0x208100u: goto label_208100;
        default: break;
    }

    ctx->pc = 0x207cf0u;

label_207cf0:
    // 0x207cf0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x207cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x207cf4: 0x30cb00ff  andi        $t3, $a2, 0xFF
    ctx->pc = 0x207cf4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x207cf8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x207cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x207cfc: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x207cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x207d00: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x207d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x207d04: 0x30ea00ff  andi        $t2, $a3, 0xFF
    ctx->pc = 0x207d04u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x207d08: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x207d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x207d0c: 0x312700ff  andi        $a3, $t1, 0xFF
    ctx->pc = 0x207d0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x207d10: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x207d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x207d14: 0x24c600d0  addiu       $a2, $a2, 0xD0
    ctx->pc = 0x207d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 208));
    // 0x207d18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x207d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x207d1c: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x207d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x207d20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x207d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x207d24: 0x3c038026  lui         $v1, 0x8026
    ctx->pc = 0x207d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32806 << 16));
    // 0x207d28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x207d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x207d2c: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x207d2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x207d30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x207d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x207d34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x207d34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207d38: 0xac460370  sw          $a2, 0x370($v0)
    ctx->pc = 0x207d38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 6));
    // 0x207d3c: 0x34624000  ori         $v0, $v1, 0x4000
    ctx->pc = 0x207d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x207d40: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x207d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x207d44: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x207d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x207d48: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x207d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x207d4c: 0x3c025151  lui         $v0, 0x5151
    ctx->pc = 0x207d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20817 << 16));
    // 0x207d50: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x207d50u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x207d54: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x207d54u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x207d58: 0x34425151  ori         $v0, $v0, 0x5151
    ctx->pc = 0x207d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20817);
    // 0x207d5c: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x207d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x207d60: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x207d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x207d64: 0x8c430370  lw          $v1, 0x370($v0)
    ctx->pc = 0x207d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x207d68: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x207d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x207d6c: 0x24750010  addiu       $s5, $v1, 0x10
    ctx->pc = 0x207d6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x207d70: 0xac550370  sw          $s5, 0x370($v0)
    ctx->pc = 0x207d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 21));
    // 0x207d74: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x207d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x207d78: 0x3c1801dc  lui         $t8, 0x1DC
    ctx->pc = 0x207d78u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)476 << 16));
    // 0x207d7c: 0x34468889  ori         $a2, $v0, 0x8889
    ctx->pc = 0x207d7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x207d80: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x207d80u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x207d84: 0x2402a833  addiu       $v0, $zero, -0x57CD
    ctx->pc = 0x207d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x207d88: 0x3c0e01dc  lui         $t6, 0x1DC
    ctx->pc = 0x207d88u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)476 << 16));
    // 0x207d8c: 0x3c0d01dc  lui         $t5, 0x1DC
    ctx->pc = 0x207d8cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)476 << 16));
    // 0x207d90: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x207d90u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x207d94: 0x3c1401dc  lui         $s4, 0x1DC
    ctx->pc = 0x207d94u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)476 << 16));
    // 0x207d98: 0x3c1301dc  lui         $s3, 0x1DC
    ctx->pc = 0x207d98u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)476 << 16));
    // 0x207d9c: 0x3c1201dc  lui         $s2, 0x1DC
    ctx->pc = 0x207d9cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)476 << 16));
    // 0x207da0: 0x3c1101dc  lui         $s1, 0x1DC
    ctx->pc = 0x207da0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)476 << 16));
    // 0x207da4: 0x3c1001dc  lui         $s0, 0x1DC
    ctx->pc = 0x207da4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)476 << 16));
    // 0x207da8: 0x3c19009d  lui         $t9, 0x9D
    ctx->pc = 0x207da8u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)157 << 16));
label_207dac:
    // 0x207dac: 0x15183c  dsll32      $v1, $s5, 0
    ctx->pc = 0x207dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 0));
    // 0x207db0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x207db0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x207db4: 0xac6b0000  sw          $t3, 0x0($v1)
    ctx->pc = 0x207db4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 11));
    // 0x207db8: 0x8e830370  lw          $v1, 0x370($s4)
    ctx->pc = 0x207db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 880)));
    // 0x207dbc: 0xac6a0004  sw          $t2, 0x4($v1)
    ctx->pc = 0x207dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 10));
    // 0x207dc0: 0x8e630370  lw          $v1, 0x370($s3)
    ctx->pc = 0x207dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 880)));
    // 0x207dc4: 0xac680008  sw          $t0, 0x8($v1)
    ctx->pc = 0x207dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 8));
    // 0x207dc8: 0x8e430370  lw          $v1, 0x370($s2)
    ctx->pc = 0x207dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 880)));
    // 0x207dcc: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x207dccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
    // 0x207dd0: 0x8e230370  lw          $v1, 0x370($s1)
    ctx->pc = 0x207dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
    // 0x207dd4: 0x24750010  addiu       $s5, $v1, 0x10
    ctx->pc = 0x207dd4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x207dd8: 0xae150370  sw          $s5, 0x370($s0)
    ctx->pc = 0x207dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 21));
    // 0x207ddc: 0x84950000  lh          $s5, 0x0($a0)
    ctx->pc = 0x207ddcu;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x207de0: 0x15a900  sll         $s5, $s5, 4
    ctx->pc = 0x207de0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x207de4: 0x26b56c00  addiu       $s5, $s5, 0x6C00
    ctx->pc = 0x207de4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 27648));
    // 0x207de8: 0xac750010  sw          $s5, 0x10($v1)
    ctx->pc = 0x207de8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 21));
    // 0x207dec: 0x9323b280  lbu         $v1, -0x4D80($t9)
    ctx->pc = 0x207decu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 4294947456)));
    // 0x207df0: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x207DF0u;
    {
        const bool branch_taken_0x207df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x207df0) {
            ctx->pc = 0x207DF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207DF0u;
            // 0x207df4: 0x84a30000  lh          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x207E3Cu;
            goto label_207e3c;
        }
    }
    ctx->pc = 0x207DF8u;
    // 0x207df8: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x207df8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x207dfc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x207dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x207e00: 0x24637100  addiu       $v1, $v1, 0x7100
    ctx->pc = 0x207e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
    // 0x207e04: 0x24758000  addiu       $s5, $v1, -0x8000
    ctx->pc = 0x207e04u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x207e08: 0x1518c0  sll         $v1, $s5, 3
    ctx->pc = 0x207e08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x207e0c: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x207e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x207e10: 0x3b180  sll         $s6, $v1, 6
    ctx->pc = 0x207e10u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x207e14: 0xd60018  mult        $zero, $a2, $s6
    ctx->pc = 0x207e14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x207e18: 0x161fc2  srl         $v1, $s6, 31
    ctx->pc = 0x207e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 31));
    // 0x207e1c: 0x0  nop
    ctx->pc = 0x207e1cu;
    // NOP
    // 0x207e20: 0xa810  mfhi        $s5
    ctx->pc = 0x207e20u;
    SET_GPR_U64(ctx, 21, ctx->hi);
    // 0x207e24: 0x2b6a821  addu        $s5, $s5, $s6
    ctx->pc = 0x207e24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x207e28: 0x15aa03  sra         $s5, $s5, 8
    ctx->pc = 0x207e28u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 21), 8));
    // 0x207e2c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x207e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x207e30: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x207e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x207e34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x207E34u;
    {
        const bool branch_taken_0x207e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207E34u;
            // 0x207e38: 0x24760001  addiu       $s6, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e34) {
            ctx->pc = 0x207E44u;
            goto label_207e44;
        }
    }
    ctx->pc = 0x207E3Cu;
label_207e3c:
    // 0x207e3c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x207e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x207e40: 0x24767100  addiu       $s6, $v1, 0x7100
    ctx->pc = 0x207e40u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
label_207e44:
    // 0x207e44: 0x8f150370  lw          $s5, 0x370($t8)
    ctx->pc = 0x207e44u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 880)));
    // 0x207e48: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x207e48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x207e4c: 0x29230004  slti        $v1, $t1, 0x4
    ctx->pc = 0x207e4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x207e50: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x207e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x207e54: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x207e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x207e58: 0xaeb60004  sw          $s6, 0x4($s5)
    ctx->pc = 0x207e58u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 22));
    // 0x207e5c: 0x8df50370  lw          $s5, 0x370($t7)
    ctx->pc = 0x207e5cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 880)));
    // 0x207e60: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x207e60u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
    // 0x207e64: 0x8dd50370  lw          $s5, 0x370($t6)
    ctx->pc = 0x207e64u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 880)));
    // 0x207e68: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x207e68u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
    // 0x207e6c: 0x8db50370  lw          $s5, 0x370($t5)
    ctx->pc = 0x207e6cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 880)));
    // 0x207e70: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x207e70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x207e74: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x207E74u;
    {
        const bool branch_taken_0x207e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x207E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207E74u;
            // 0x207e78: 0xad950370  sw          $s5, 0x370($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 880), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e74) {
            ctx->pc = 0x207DACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_207dac;
        }
    }
    ctx->pc = 0x207E7Cu;
    // 0x207e7c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x207e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x207e80: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x207e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x207e84: 0x7c4000c0  sq          $zero, 0xC0($v0)
    ctx->pc = 0x207e84u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 192), GPR_VEC(ctx, 0));
    // 0x207e88: 0x34640009  ori         $a0, $v1, 0x9
    ctx->pc = 0x207e88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9);
    // 0x207e8c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x207e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x207e90: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x207e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x207e94: 0xac6400c0  sw          $a0, 0xC0($v1)
    ctx->pc = 0x207e94u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 4)); // MMIO: 0x700000c0
    // 0x207e98: 0x7c400160  sq          $zero, 0x160($v0)
    ctx->pc = 0x207e98u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 352), GPR_VEC(ctx, 0));
    // 0x207e9c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x207e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x207ea0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x207ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x207ea4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x207ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207ea8: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x207EA8u;
    SET_GPR_U32(ctx, 31, 0x207EB0u);
    ctx->pc = 0x207EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207EA8u;
            // 0x207eac: 0xac430160  sw          $v1, 0x160($v0) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207EB0u; }
        if (ctx->pc != 0x207EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207EB0u; }
        if (ctx->pc != 0x207EB0u) { return; }
    }
    ctx->pc = 0x207EB0u;
label_207eb0:
    // 0x207eb0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x207eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x207eb4: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x207eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x207eb8: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x207eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x207ebc: 0xc040a04  jal         func_102810
    ctx->pc = 0x207EBCu;
    SET_GPR_U32(ctx, 31, 0x207EC4u);
    ctx->pc = 0x207EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207EBCu;
            // 0x207ec0: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (runtime->hasFunction(0x102810u)) {
        auto targetFn = runtime->lookupFunction(0x102810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207EC4u; }
        if (ctx->pc != 0x207EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102810_0x102810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207EC4u; }
        if (ctx->pc != 0x207EC4u) { return; }
    }
    ctx->pc = 0x207EC4u;
label_207ec4:
    // 0x207ec4: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x207ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
label_207ec8:
    // 0x207ec8: 0x8c64a000  lw          $a0, -0x6000($v1)
    ctx->pc = 0x207ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x207ecc: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x207eccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x207ed0: 0x0  nop
    ctx->pc = 0x207ed0u;
    // NOP
    // 0x207ed4: 0x0  nop
    ctx->pc = 0x207ed4u;
    // NOP
    // 0x207ed8: 0x0  nop
    ctx->pc = 0x207ed8u;
    // NOP
    // 0x207edc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x207EDCu;
    {
        const bool branch_taken_0x207edc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x207edc) {
            ctx->pc = 0x207EC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_207ec8;
        }
    }
    ctx->pc = 0x207EE4u;
    // 0x207ee4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x207ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x207ee8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x207ee8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x207eec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x207eecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x207ef0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x207ef0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x207ef4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x207ef4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x207ef8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x207ef8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x207efc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x207efcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207f00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x207f00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207f04: 0x3e00008  jr          $ra
    ctx->pc = 0x207F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207F04u;
            // 0x207f08: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x207F0Cu;
    // 0x207f0c: 0x0  nop
    ctx->pc = 0x207f0cu;
    // NOP
label_207f10:
    // 0x207f10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x207f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x207f14: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x207f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x207f18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x207f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x207f1c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x207f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x207f20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x207f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x207f24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x207f24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207f28: 0x8446a380  lh          $a2, -0x5C80($v0)
    ctx->pc = 0x207f28u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294943616)));
    // 0x207f2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x207f2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207f30: 0x8463a386  lh          $v1, -0x5C7A($v1)
    ctx->pc = 0x207f30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294943622)));
    // 0x207f34: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x207f34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x207f38: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x207f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x207f3c: 0xa7a60028  sh          $a2, 0x28($sp)
    ctx->pc = 0x207f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 40), (uint16_t)GPR_U32(ctx, 6));
    // 0x207f40: 0x8444a382  lh          $a0, -0x5C7E($v0)
    ctx->pc = 0x207f40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294943618)));
    // 0x207f44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x207f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207f48: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x207f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x207f4c: 0xa7a4002a  sh          $a0, 0x2A($sp)
    ctx->pc = 0x207f4cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 42), (uint16_t)GPR_U32(ctx, 4));
    // 0x207f50: 0x8445a384  lh          $a1, -0x5C7C($v0)
    ctx->pc = 0x207f50u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294943620)));
    // 0x207f54: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x207f54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x207f58: 0x2484a368  addiu       $a0, $a0, -0x5C98
    ctx->pc = 0x207f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943592));
    // 0x207f5c: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x207f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x207f60: 0xa7a5002c  sh          $a1, 0x2C($sp)
    ctx->pc = 0x207f60u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 44), (uint16_t)GPR_U32(ctx, 5));
    // 0x207f64: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x207f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x207f68: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x207f68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x207f6c: 0xa7a3002e  sh          $v1, 0x2E($sp)
    ctx->pc = 0x207f6cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x207f70: 0x24a5a370  addiu       $a1, $a1, -0x5C90
    ctx->pc = 0x207f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943600));
    // 0x207f74: 0x90420502  lbu         $v0, 0x502($v0)
    ctx->pc = 0x207f74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1282)));
    // 0x207f78: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x207f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x207f7c: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x207f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x207f80: 0xa7a2002c  sh          $v0, 0x2C($sp)
    ctx->pc = 0x207f80u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x207f84: 0xc081f3c  jal         func_207CF0
    ctx->pc = 0x207F84u;
    SET_GPR_U32(ctx, 31, 0x207F8Cu);
    ctx->pc = 0x207F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207F84u;
            // 0x207f88: 0xa7a2002e  sh          $v0, 0x2E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 46), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x207CF0u;
    goto label_207cf0;
    ctx->pc = 0x207F8Cu;
label_207f8c:
    // 0x207f8c: 0xc0c0d10  jal         func_303440
    ctx->pc = 0x207F8Cu;
    SET_GPR_U32(ctx, 31, 0x207F94u);
    ctx->pc = 0x303440u;
    if (runtime->hasFunction(0x303440u)) {
        auto targetFn = runtime->lookupFunction(0x303440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207F94u; }
        if (ctx->pc != 0x207F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303440_0x303440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207F94u; }
        if (ctx->pc != 0x207F94u) { return; }
    }
    ctx->pc = 0x207F94u;
label_207f94:
    // 0x207f94: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x207f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x207f98: 0x8c63a060  lw          $v1, -0x5FA0($v1)
    ctx->pc = 0x207f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942816)));
    // 0x207f9c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x207f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x207fa0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x207FA0u;
    {
        const bool branch_taken_0x207fa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x207fa0) {
            ctx->pc = 0x207FB4u;
            goto label_207fb4;
        }
    }
    ctx->pc = 0x207FA8u;
    // 0x207fa8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x207fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x207fac: 0xc083060  jal         func_20C180
    ctx->pc = 0x207FACu;
    SET_GPR_U32(ctx, 31, 0x207FB4u);
    ctx->pc = 0x207FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207FACu;
            // 0x207fb0: 0x8c44b7e8  lw          $a0, -0x4818($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948840)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20C180u;
    if (runtime->hasFunction(0x20C180u)) {
        auto targetFn = runtime->lookupFunction(0x20C180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207FB4u; }
        if (ctx->pc != 0x207FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020C180_0x20c180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207FB4u; }
        if (ctx->pc != 0x207FB4u) { return; }
    }
    ctx->pc = 0x207FB4u;
label_207fb4:
    // 0x207fb4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x207fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x207fb8: 0x9063e818  lbu         $v1, -0x17E8($v1)
    ctx->pc = 0x207fb8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x207fbc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x207FBCu;
    {
        const bool branch_taken_0x207fbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x207fbc) {
            ctx->pc = 0x207FECu;
            goto label_207fec;
        }
    }
    ctx->pc = 0x207FC4u;
    // 0x207fc4: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x207fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x207fc8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x207fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x207fcc: 0x2484a378  addiu       $a0, $a0, -0x5C88
    ctx->pc = 0x207fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943608));
    // 0x207fd0: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x207fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x207fd4: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x207fd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x207fd8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x207fd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207fdc: 0xc081f3c  jal         func_207CF0
    ctx->pc = 0x207FDCu;
    SET_GPR_U32(ctx, 31, 0x207FE4u);
    ctx->pc = 0x207FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207FDCu;
            // 0x207fe0: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x207CF0u;
    goto label_207cf0;
    ctx->pc = 0x207FE4u;
label_207fe4:
    // 0x207fe4: 0xc081db0  jal         func_2076C0
    ctx->pc = 0x207FE4u;
    SET_GPR_U32(ctx, 31, 0x207FECu);
    ctx->pc = 0x2076C0u;
    if (runtime->hasFunction(0x2076C0u)) {
        auto targetFn = runtime->lookupFunction(0x2076C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207FECu; }
        if (ctx->pc != 0x207FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002076C0_0x2076c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207FECu; }
        if (ctx->pc != 0x207FECu) { return; }
    }
    ctx->pc = 0x207FECu;
label_207fec:
    // 0x207fec: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x207fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x207ff0: 0x8c63a068  lw          $v1, -0x5F98($v1)
    ctx->pc = 0x207ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942824)));
    // 0x207ff4: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x207FF4u;
    {
        const bool branch_taken_0x207ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x207ff4) {
            ctx->pc = 0x2080ACu;
            goto label_2080ac;
        }
    }
    ctx->pc = 0x207FFCu;
    // 0x207ffc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x207ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208000:
    // 0x208000: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x208000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x208004: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x208004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x208008: 0x9045e818  lbu         $a1, -0x17E8($v0)
    ctx->pc = 0x208008u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961176)));
    // 0x20800c: 0x2463a360  addiu       $v1, $v1, -0x5CA0
    ctx->pc = 0x20800cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943584));
    // 0x208010: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x208010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x208014: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x208014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x208018: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x208018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20801c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x20801cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x208020: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x208020u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x208024: 0xc083110  jal         func_20C440
    ctx->pc = 0x208024u;
    SET_GPR_U32(ctx, 31, 0x20802Cu);
    ctx->pc = 0x208028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208024u;
            // 0x208028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20C440u;
    if (runtime->hasFunction(0x20C440u)) {
        auto targetFn = runtime->lookupFunction(0x20C440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20802Cu; }
        if (ctx->pc != 0x20802Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020C440_0x20c440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20802Cu; }
        if (ctx->pc != 0x20802Cu) { return; }
    }
    ctx->pc = 0x20802Cu;
label_20802c:
    // 0x20802c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20802cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x208030: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x208030u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x208034: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x208034u;
    {
        const bool branch_taken_0x208034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208034) {
            ctx->pc = 0x208000u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_208000;
        }
    }
    ctx->pc = 0x20803Cu;
    // 0x20803c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20803cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x208040: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x208040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x208044: 0x8c66a488  lw          $a2, -0x5B78($v1)
    ctx->pc = 0x208044u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943880)));
    // 0x208048: 0x7cc00000  sq          $zero, 0x0($a2)
    ctx->pc = 0x208048u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 0));
    // 0x20804c: 0x8c42a480  lw          $v0, -0x5B80($v0)
    ctx->pc = 0x20804cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943872)));
    // 0x208050: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x208050u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x208054: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208054u;
    {
        const bool branch_taken_0x208054 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x208058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208054u;
            // 0x208058: 0x22103  sra         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208054) {
            ctx->pc = 0x208064u;
            goto label_208064;
        }
    }
    ctx->pc = 0x20805Cu;
    // 0x20805c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x20805cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x208060: 0x22103  sra         $a0, $v0, 4
    ctx->pc = 0x208060u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
label_208064:
    // 0x208064: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x208064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x208068: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x208068u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20806c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x20806cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x208070: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x208070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x208074: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x208074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x208078: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x208078u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x20807c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x20807cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x208080: 0x8c42a488  lw          $v0, -0x5B78($v0)
    ctx->pc = 0x208080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943880)));
    // 0x208084: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x208084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208088: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x208088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20808c: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x20808cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x208090: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x208090u;
    SET_GPR_U32(ctx, 31, 0x208098u);
    ctx->pc = 0x208094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208090u;
            // 0x208094: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208098u; }
        if (ctx->pc != 0x208098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208098u; }
        if (ctx->pc != 0x208098u) { return; }
    }
    ctx->pc = 0x208098u;
label_208098:
    // 0x208098: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x208098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x20809c: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20809cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2080a0: 0x8c45a488  lw          $a1, -0x5B78($v0)
    ctx->pc = 0x2080a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943880)));
    // 0x2080a4: 0xc040a04  jal         func_102810
    ctx->pc = 0x2080A4u;
    SET_GPR_U32(ctx, 31, 0x2080ACu);
    ctx->pc = 0x2080A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2080A4u;
            // 0x2080a8: 0x8c64e688  lw          $a0, -0x1978($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (runtime->hasFunction(0x102810u)) {
        auto targetFn = runtime->lookupFunction(0x102810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2080ACu; }
        if (ctx->pc != 0x2080ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102810_0x102810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2080ACu; }
        if (ctx->pc != 0x2080ACu) { return; }
    }
    ctx->pc = 0x2080ACu;
label_2080ac:
    // 0x2080ac: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x2080acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x2080b0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2080b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2080b4: 0xac80a060  sw          $zero, -0x5FA0($a0)
    ctx->pc = 0x2080b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294942816), GPR_U32(ctx, 0));
    // 0x2080b8: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x2080b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x2080bc: 0xac60a068  sw          $zero, -0x5F98($v1)
    ctx->pc = 0x2080bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942824), GPR_U32(ctx, 0));
    // 0x2080c0: 0x8c84a488  lw          $a0, -0x5B78($a0)
    ctx->pc = 0x2080c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294943880)));
    // 0x2080c4: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2080c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2080c8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2080c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2080cc: 0xac64a480  sw          $a0, -0x5B80($v1)
    ctx->pc = 0x2080ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943872), GPR_U32(ctx, 4));
    // 0x2080d0: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x2080d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
label_2080d4:
    // 0x2080d4: 0x8c64a000  lw          $a0, -0x6000($v1)
    ctx->pc = 0x2080d4u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x2080d8: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x2080d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x2080dc: 0x0  nop
    ctx->pc = 0x2080dcu;
    // NOP
    // 0x2080e0: 0x0  nop
    ctx->pc = 0x2080e0u;
    // NOP
    // 0x2080e4: 0x0  nop
    ctx->pc = 0x2080e4u;
    // NOP
    // 0x2080e8: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2080E8u;
    {
        const bool branch_taken_0x2080e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2080e8) {
            ctx->pc = 0x2080D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2080d4;
        }
    }
    ctx->pc = 0x2080F0u;
    // 0x2080f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2080f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2080f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2080f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2080f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2080F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2080FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2080F8u;
            // 0x2080fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x208100u;
label_208100:
    // 0x208100: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x208100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x208104: 0x3c0601da  lui         $a2, 0x1DA
    ctx->pc = 0x208104u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)474 << 16));
    // 0x208108: 0x8c6829e0  lw          $t0, 0x29E0($v1)
    ctx->pc = 0x208108u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10720)));
    // 0x20810c: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x20810cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x208110: 0x24c64df0  addiu       $a2, $a2, 0x4DF0
    ctx->pc = 0x208110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19952));
    // 0x208114: 0x24847f10  addiu       $a0, $a0, 0x7F10
    ctx->pc = 0x208114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32528));
    // 0x208118: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x208118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x20811c: 0x25050001  addiu       $a1, $t0, 0x1
    ctx->pc = 0x20811cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x208120: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x208120u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x208124: 0xac6529e0  sw          $a1, 0x29E0($v1)
    ctx->pc = 0x208124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10720), GPR_U32(ctx, 5));
    // 0x208128: 0xe82823  subu        $a1, $a3, $t0
    ctx->pc = 0x208128u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x20812c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x20812cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x208130: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x208130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x208134: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x208134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x208138: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x208138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x20813c: 0xac600110  sw          $zero, 0x110($v1)
    ctx->pc = 0x20813cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 272), GPR_U32(ctx, 0));
    // 0x208140: 0x3e00008  jr          $ra
    ctx->pc = 0x208140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208140u;
            // 0x208144: 0xac640114  sw          $a0, 0x114($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x208148u;
    // 0x208148: 0x0  nop
    ctx->pc = 0x208148u;
    // NOP
    // 0x20814c: 0x0  nop
    ctx->pc = 0x20814cu;
    // NOP
    ctx->pc = 0x208150u;
}
