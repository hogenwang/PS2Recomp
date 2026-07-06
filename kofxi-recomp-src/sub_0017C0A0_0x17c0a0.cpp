#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017C0A0
// Address: 0x17c0a0 - 0x17c2b0
void sub_0017C0A0_0x17c0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C0A0_0x17c0a0");
#endif

    switch (ctx->pc) {
        case 0x17c130u: goto label_17c130;
        case 0x17c140u: goto label_17c140;
        case 0x17c190u: goto label_17c190;
        case 0x17c1d0u: goto label_17c1d0;
        case 0x17c208u: goto label_17c208;
        default: break;
    }

    ctx->pc = 0x17c0a0u;

    // 0x17c0a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x17c0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x17c0a4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17c0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17c0a8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x17c0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x17c0ac: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17c0acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17c0b0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x17c0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x17c0b4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17c0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x17c0b8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x17c0b8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c0bc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17c0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x17c0c0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17c0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x17c0c4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17c0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17c0c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17c0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17c0cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17c0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17c0d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17c0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17c0d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17c0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17c0d8: 0xa060b818  sb          $zero, -0x47E8($v1)
    ctx->pc = 0x17c0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294948888), (uint8_t)GPR_U32(ctx, 0));
    // 0x17c0dc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17c0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17c0e0: 0x9465da88  lhu         $a1, -0x2578($v1)
    ctx->pc = 0x17c0e0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957704)));
    // 0x17c0e4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17c0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17c0e8: 0x30a50003  andi        $a1, $a1, 0x3
    ctx->pc = 0x17c0e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x17c0ec: 0x9063daa0  lbu         $v1, -0x2560($v1)
    ctx->pc = 0x17c0ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957728)));
    // 0x17c0f0: 0x18600061  blez        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x17C0F0u;
    {
        const bool branch_taken_0x17c0f0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x17C0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C0F0u;
            // 0x17c0f4: 0xa485da88  sh          $a1, -0x2578($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4294957704), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c0f0) {
            ctx->pc = 0x17C278u;
            goto label_17c278;
        }
    }
    ctx->pc = 0x17C0F8u;
    // 0x17c0f8: 0x3c14009c  lui         $s4, 0x9C
    ctx->pc = 0x17c0f8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)156 << 16));
    // 0x17c0fc: 0x3c13009c  lui         $s3, 0x9C
    ctx->pc = 0x17c0fcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)156 << 16));
    // 0x17c100: 0x3c12009c  lui         $s2, 0x9C
    ctx->pc = 0x17c100u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)156 << 16));
    // 0x17c104: 0x3c11009c  lui         $s1, 0x9C
    ctx->pc = 0x17c104u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)156 << 16));
    // 0x17c108: 0x3c10009c  lui         $s0, 0x9C
    ctx->pc = 0x17c108u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)156 << 16));
    // 0x17c10c: 0x3c16009c  lui         $s6, 0x9C
    ctx->pc = 0x17c10cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)156 << 16));
    // 0x17c110: 0x3c17009c  lui         $s7, 0x9C
    ctx->pc = 0x17c110u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)156 << 16));
    // 0x17c114: 0x2694db50  addiu       $s4, $s4, -0x24B0
    ctx->pc = 0x17c114u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957904));
    // 0x17c118: 0x2673da58  addiu       $s3, $s3, -0x25A8
    ctx->pc = 0x17c118u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957656));
    // 0x17c11c: 0x2652b6d0  addiu       $s2, $s2, -0x4930
    ctx->pc = 0x17c11cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294948560));
    // 0x17c120: 0x2631b6b0  addiu       $s1, $s1, -0x4950
    ctx->pc = 0x17c120u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294948528));
    // 0x17c124: 0x2610b6b8  addiu       $s0, $s0, -0x4948
    ctx->pc = 0x17c124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948536));
    // 0x17c128: 0x26d6b6a8  addiu       $s6, $s6, -0x4958
    ctx->pc = 0x17c128u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294948520));
    // 0x17c12c: 0x26f7b6c0  addiu       $s7, $s7, -0x4940
    ctx->pc = 0x17c12cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294948544));
label_17c130:
    // 0x17c130: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17c130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c134: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x17c134u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c138: 0x3c31804  sllv        $v1, $v1, $fp
    ctx->pc = 0x17c138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 30) & 0x1F));
    // 0x17c13c: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x17c13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_17c140:
    // 0x17c140: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17c140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17c144: 0x9064db00  lbu         $a0, -0x2500($v1)
    ctx->pc = 0x17c144u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957824)));
    // 0x17c148: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x17c148u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17c14c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x17c14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x17c150: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x17C150u;
    {
        const bool branch_taken_0x17c150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c150) {
            ctx->pc = 0x17C238u;
            goto label_17c238;
        }
    }
    ctx->pc = 0x17C158u;
    // 0x17c158: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17c158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17c15c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17c15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c160: 0x9465da88  lhu         $a1, -0x2578($v1)
    ctx->pc = 0x17c160u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957704)));
    // 0x17c164: 0x2a41804  sllv        $v1, $a0, $s5
    ctx->pc = 0x17c164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 21) & 0x1F));
    // 0x17c168: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x17c168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x17c16c: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x17C16Cu;
    {
        const bool branch_taken_0x17c16c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c16c) {
            ctx->pc = 0x17C238u;
            goto label_17c238;
        }
    }
    ctx->pc = 0x17C174u;
    // 0x17c174: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x17c174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x17c178: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x17c178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17c17c: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x17c17cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x17c180: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x17C180u;
    {
        const bool branch_taken_0x17c180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17c180) {
            ctx->pc = 0x17C1C0u;
            goto label_17c1c0;
        }
    }
    ctx->pc = 0x17C188u;
    // 0x17c188: 0xc05f104  jal         func_17C410
    ctx->pc = 0x17C188u;
    SET_GPR_U32(ctx, 31, 0x17C190u);
    ctx->pc = 0x17C18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C188u;
            // 0x17c18c: 0x96840014  lhu         $a0, 0x14($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C410u;
    if (runtime->hasFunction(0x17C410u)) {
        auto targetFn = runtime->lookupFunction(0x17C410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C190u; }
        if (ctx->pc != 0x17C190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C410_0x17c410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C190u; }
        if (ctx->pc != 0x17C190u) { return; }
    }
    ctx->pc = 0x17C190u;
label_17c190:
    // 0x17c190: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x17c190u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x17c194: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x17C194u;
    {
        const bool branch_taken_0x17c194 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c194) {
            ctx->pc = 0x17C238u;
            goto label_17c238;
        }
    }
    ctx->pc = 0x17C19Cu;
    // 0x17c19c: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x17c19cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17c1a0: 0xa2400024  sb          $zero, 0x24($s2)
    ctx->pc = 0x17c1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x17c1a4: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x17c1a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x17c1a8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x17c1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x17c1ac: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x17c1acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x17c1b0: 0xa2c00000  sb          $zero, 0x0($s6)
    ctx->pc = 0x17c1b0u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x17c1b4: 0xa6e00000  sh          $zero, 0x0($s7)
    ctx->pc = 0x17c1b4u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x17c1b8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x17C1B8u;
    {
        const bool branch_taken_0x17c1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C1B8u;
            // 0x17c1bc: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c1b8) {
            ctx->pc = 0x17C238u;
            goto label_17c238;
        }
    }
    ctx->pc = 0x17C1C0u;
label_17c1c0:
    // 0x17c1c0: 0x16a0000f  bnez        $s5, . + 4 + (0xF << 2)
    ctx->pc = 0x17C1C0u;
    {
        const bool branch_taken_0x17c1c0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c1c0) {
            ctx->pc = 0x17C200u;
            goto label_17c200;
        }
    }
    ctx->pc = 0x17C1C8u;
    // 0x17c1c8: 0xc05f0cc  jal         func_17C330
    ctx->pc = 0x17C1C8u;
    SET_GPR_U32(ctx, 31, 0x17C1D0u);
    ctx->pc = 0x17C1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C1C8u;
            // 0x17c1cc: 0x8e840044  lw          $a0, 0x44($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C330u;
    if (runtime->hasFunction(0x17C330u)) {
        auto targetFn = runtime->lookupFunction(0x17C330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C1D0u; }
        if (ctx->pc != 0x17C1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C330_0x17c330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C1D0u; }
        if (ctx->pc != 0x17C1D0u) { return; }
    }
    ctx->pc = 0x17C1D0u;
label_17c1d0:
    // 0x17c1d0: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x17c1d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x17c1d4: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x17C1D4u;
    {
        const bool branch_taken_0x17c1d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c1d4) {
            ctx->pc = 0x17C238u;
            goto label_17c238;
        }
    }
    ctx->pc = 0x17C1DCu;
    // 0x17c1dc: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x17c1dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17c1e0: 0xa2400024  sb          $zero, 0x24($s2)
    ctx->pc = 0x17c1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x17c1e4: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x17c1e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x17c1e8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x17c1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x17c1ec: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x17c1ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x17c1f0: 0xa2c00000  sb          $zero, 0x0($s6)
    ctx->pc = 0x17c1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x17c1f4: 0xa6e00000  sh          $zero, 0x0($s7)
    ctx->pc = 0x17c1f4u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x17c1f8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x17C1F8u;
    {
        const bool branch_taken_0x17c1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C1F8u;
            // 0x17c1fc: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c1f8) {
            ctx->pc = 0x17C238u;
            goto label_17c238;
        }
    }
    ctx->pc = 0x17C200u;
label_17c200:
    // 0x17c200: 0xc05f104  jal         func_17C410
    ctx->pc = 0x17C200u;
    SET_GPR_U32(ctx, 31, 0x17C208u);
    ctx->pc = 0x17C204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C200u;
            // 0x17c204: 0x96840014  lhu         $a0, 0x14($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C410u;
    if (runtime->hasFunction(0x17C410u)) {
        auto targetFn = runtime->lookupFunction(0x17C410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C208u; }
        if (ctx->pc != 0x17C208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C410_0x17c410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C208u; }
        if (ctx->pc != 0x17C208u) { return; }
    }
    ctx->pc = 0x17C208u;
label_17c208:
    // 0x17c208: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x17c208u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x17c20c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x17C20Cu;
    {
        const bool branch_taken_0x17c20c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c20c) {
            ctx->pc = 0x17C238u;
            goto label_17c238;
        }
    }
    ctx->pc = 0x17C214u;
    // 0x17c214: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x17c214u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17c218: 0xa2400024  sb          $zero, 0x24($s2)
    ctx->pc = 0x17c218u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x17c21c: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x17c21cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x17c220: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x17c220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x17c224: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x17c224u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x17c228: 0xa2c00000  sb          $zero, 0x0($s6)
    ctx->pc = 0x17c228u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x17c22c: 0xa6e00000  sh          $zero, 0x0($s7)
    ctx->pc = 0x17c22cu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x17c230: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x17c230u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x17c234: 0x0  nop
    ctx->pc = 0x17c234u;
    // NOP
label_17c238:
    // 0x17c238: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x17c238u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x17c23c: 0x2aa30002  slti        $v1, $s5, 0x2
    ctx->pc = 0x17c23cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17c240: 0x1460ffbf  bnez        $v1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x17C240u;
    {
        const bool branch_taken_0x17c240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c240) {
            ctx->pc = 0x17C140u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17c140;
        }
    }
    ctx->pc = 0x17C248u;
    // 0x17c248: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17c248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17c24c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x17c24cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x17c250: 0x9063daa0  lbu         $v1, -0x2560($v1)
    ctx->pc = 0x17c250u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957728)));
    // 0x17c254: 0x26940248  addiu       $s4, $s4, 0x248
    ctx->pc = 0x17c254u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 584));
    // 0x17c258: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x17c258u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x17c25c: 0x26520050  addiu       $s2, $s2, 0x50
    ctx->pc = 0x17c25cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x17c260: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x17c260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x17c264: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x17c264u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x17c268: 0x3c3182a  slt         $v1, $fp, $v1
    ctx->pc = 0x17c268u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17c26c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x17c26cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x17c270: 0x1460ffaf  bnez        $v1, . + 4 + (-0x51 << 2)
    ctx->pc = 0x17C270u;
    {
        const bool branch_taken_0x17c270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C270u;
            // 0x17c274: 0x26f70002  addiu       $s7, $s7, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c270) {
            ctx->pc = 0x17C130u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17c130;
        }
    }
    ctx->pc = 0x17C278u;
label_17c278:
    // 0x17c278: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x17c278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c27c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x17c27cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17c280: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x17c280u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17c284: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17c284u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17c288: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17c288u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17c28c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17c28cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17c290: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17c290u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c294: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17c294u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c298: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17c298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c29c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17c29cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c2a0: 0x3e00008  jr          $ra
    ctx->pc = 0x17C2A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C2A0u;
            // 0x17c2a4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17C2A8u;
    // 0x17c2a8: 0x0  nop
    ctx->pc = 0x17c2a8u;
    // NOP
    // 0x17c2ac: 0x0  nop
    ctx->pc = 0x17c2acu;
    // NOP
    ctx->pc = 0x17c2b0u;
}
