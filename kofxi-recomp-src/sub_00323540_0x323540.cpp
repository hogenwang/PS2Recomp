#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00323540
// Address: 0x323540 - 0x3235f0
void sub_00323540_0x323540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323540_0x323540");
#endif

    switch (ctx->pc) {
        case 0x32356cu: goto label_32356c;
        case 0x32357cu: goto label_32357c;
        case 0x3235c0u: goto label_3235c0;
        default: break;
    }

    ctx->pc = 0x323540u;

    // 0x323540: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x323540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x323544: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x323544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x323548: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x323548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32354c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32354cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x323550: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x323550u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323554: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x323554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x323558: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x323558u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32355c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x32355cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323560: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x323560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x323564: 0xc0c87e4  jal         func_321F90
    ctx->pc = 0x323564u;
    SET_GPR_U32(ctx, 31, 0x32356Cu);
    ctx->pc = 0x323568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323564u;
            // 0x323568: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321F90u;
    if (runtime->hasFunction(0x321F90u)) {
        auto targetFn = runtime->lookupFunction(0x321F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32356Cu; }
        if (ctx->pc != 0x32356Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321F90_0x321f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32356Cu; }
        if (ctx->pc != 0x32356Cu) { return; }
    }
    ctx->pc = 0x32356Cu;
label_32356c:
    // 0x32356c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32356cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323570: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x323570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323574: 0xc0c87f8  jal         func_321FE0
    ctx->pc = 0x323574u;
    SET_GPR_U32(ctx, 31, 0x32357Cu);
    ctx->pc = 0x323578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323574u;
            // 0x323578: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321FE0u;
    if (runtime->hasFunction(0x321FE0u)) {
        auto targetFn = runtime->lookupFunction(0x321FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32357Cu; }
        if (ctx->pc != 0x32357Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321FE0_0x321fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32357Cu; }
        if (ctx->pc != 0x32357Cu) { return; }
    }
    ctx->pc = 0x32357Cu;
label_32357c:
    // 0x32357c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x32357cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323580: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x323580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    // 0x323584: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x323584u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x323588: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x323588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32358c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x32358cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x323590: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x323590u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x323594: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x323594u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x323598: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x323598u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x32359c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x32359Cu;
    {
        const bool branch_taken_0x32359c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3235A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32359Cu;
            // 0x3235a0: 0xa6000012  sh          $zero, 0x12($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32359c) {
            ctx->pc = 0x3235C8u;
            goto label_3235c8;
        }
    }
    ctx->pc = 0x3235A4u;
    // 0x3235a4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x3235a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3235a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3235a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3235ac: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x3235acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3235b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3235b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3235b4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3235b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3235b8: 0xc0c8de0  jal         func_323780
    ctx->pc = 0x3235B8u;
    SET_GPR_U32(ctx, 31, 0x3235C0u);
    ctx->pc = 0x3235BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3235B8u;
            // 0x3235bc: 0xa462000c  sh          $v0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323780u;
    if (runtime->hasFunction(0x323780u)) {
        auto targetFn = runtime->lookupFunction(0x323780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3235C0u; }
        if (ctx->pc != 0x3235C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323780_0x323780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3235C0u; }
        if (ctx->pc != 0x3235C0u) { return; }
    }
    ctx->pc = 0x3235C0u;
label_3235c0:
    // 0x3235c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3235C0u;
    {
        const bool branch_taken_0x3235c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3235C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3235C0u;
            // 0x3235c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3235c0) {
            ctx->pc = 0x3235CCu;
            goto label_3235cc;
        }
    }
    ctx->pc = 0x3235C8u;
label_3235c8:
    // 0x3235c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3235c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3235cc:
    // 0x3235cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3235ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3235d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3235d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3235d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3235d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3235d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3235d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3235dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3235dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3235e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3235E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3235E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3235E0u;
            // 0x3235e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3235E8u;
    // 0x3235e8: 0x0  nop
    ctx->pc = 0x3235e8u;
    // NOP
    // 0x3235ec: 0x0  nop
    ctx->pc = 0x3235ecu;
    // NOP
    ctx->pc = 0x3235f0u;
}
