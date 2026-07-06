#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026C428
// Address: 0x26c428 - 0x26c4f8
void sub_0026C428_0x26c428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C428_0x26c428");
#endif

    switch (ctx->pc) {
        case 0x26c448u: goto label_26c448;
        case 0x26c470u: goto label_26c470;
        case 0x26c48cu: goto label_26c48c;
        case 0x26c49cu: goto label_26c49c;
        case 0x26c4c0u: goto label_26c4c0;
        case 0x26c4dcu: goto label_26c4dc;
        default: break;
    }

    ctx->pc = 0x26c428u;

    // 0x26c428: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26c428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26c42c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x26c42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x26c430: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26c430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c434: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26c434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26c438: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x26c438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x26c43c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26c43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c440: 0xc098ba8  jal         func_262EA0
    ctx->pc = 0x26C440u;
    SET_GPR_U32(ctx, 31, 0x26C448u);
    ctx->pc = 0x26C444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C440u;
            // 0x26c444: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262EA0u;
    if (runtime->hasFunction(0x262EA0u)) {
        auto targetFn = runtime->lookupFunction(0x262EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C448u; }
        if (ctx->pc != 0x26C448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262EA0_0x262ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C448u; }
        if (ctx->pc != 0x26C448u) { return; }
    }
    ctx->pc = 0x26C448u;
label_26c448:
    // 0x26c448: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26c448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26c44c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C44Cu;
    {
        const bool branch_taken_0x26c44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26C450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C44Cu;
            // 0x26c450: 0xdfa40000  ld          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c44c) {
            ctx->pc = 0x26C45Cu;
            goto label_26c45c;
        }
    }
    ctx->pc = 0x26C454u;
    // 0x26c454: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x26C454u;
    {
        const bool branch_taken_0x26c454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C454u;
            // 0x26c458: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c454) {
            ctx->pc = 0x26C4E0u;
            goto label_26c4e0;
        }
    }
    ctx->pc = 0x26C45Cu;
label_26c45c:
    // 0x26c45c: 0x2630005c  addiu       $s0, $s1, 0x5C
    ctx->pc = 0x26c45cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    // 0x26c460: 0xde220198  ld          $v0, 0x198($s1)
    ctx->pc = 0x26c460u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 408)));
    // 0x26c464: 0x82202f  dsubu       $a0, $a0, $v0
    ctx->pc = 0x26c464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x26c468: 0xc08a262  jal         func_228988
    ctx->pc = 0x26C468u;
    SET_GPR_U32(ctx, 31, 0x26C470u);
    ctx->pc = 0x26C46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C468u;
            // 0x26c46c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C470u; }
        if (ctx->pc != 0x26C470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C470u; }
        if (ctx->pc != 0x26C470u) { return; }
    }
    ctx->pc = 0x26C470u;
label_26c470:
    // 0x26c470: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x26c470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x26c474: 0xa4620008  sh          $v0, 0x8($v1)
    ctx->pc = 0x26c474u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x26c478: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x26c478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x26c47c: 0xa0400007  sb          $zero, 0x7($v0)
    ctx->pc = 0x26c47cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x26c480: 0xa0400006  sb          $zero, 0x6($v0)
    ctx->pc = 0x26c480u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x26c484: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x26C484u;
    SET_GPR_U32(ctx, 31, 0x26C48Cu);
    ctx->pc = 0x26C488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C484u;
            // 0x26c488: 0x96240066  lhu         $a0, 0x66($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C48Cu; }
        if (ctx->pc != 0x26C48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C48Cu; }
        if (ctx->pc != 0x26C48Cu) { return; }
    }
    ctx->pc = 0x26C48Cu;
label_26c48c:
    // 0x26c48c: 0x8e250054  lw          $a1, 0x54($s1)
    ctx->pc = 0x26c48cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x26c490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26c490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c494: 0xc09adee  jal         func_26B7B8
    ctx->pc = 0x26C494u;
    SET_GPR_U32(ctx, 31, 0x26C49Cu);
    ctx->pc = 0x26C498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C494u;
            // 0x26c498: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B7B8u;
    if (runtime->hasFunction(0x26B7B8u)) {
        auto targetFn = runtime->lookupFunction(0x26B7B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C49Cu; }
        if (ctx->pc != 0x26C49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B7B8_0x26b7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C49Cu; }
        if (ctx->pc != 0x26C49Cu) { return; }
    }
    ctx->pc = 0x26C49Cu;
label_26c49c:
    // 0x26c49c: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x26c49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x26c4a0: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x26c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26c4a4: 0xa0830007  sb          $v1, 0x7($a0)
    ctx->pc = 0x26c4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x26c4a8: 0xa0820006  sb          $v0, 0x6($a0)
    ctx->pc = 0x26c4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x26c4ac: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x26c4acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x26c4b0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x26c4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x26c4b4: 0x8e26002c  lw          $a2, 0x2C($s1)
    ctx->pc = 0x26c4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x26c4b8: 0xc0980bc  jal         func_2602F0
    ctx->pc = 0x26C4B8u;
    SET_GPR_U32(ctx, 31, 0x26C4C0u);
    ctx->pc = 0x26C4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C4B8u;
            // 0x26c4bc: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2602F0u;
    if (runtime->hasFunction(0x2602F0u)) {
        auto targetFn = runtime->lookupFunction(0x2602F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C4C0u; }
        if (ctx->pc != 0x26C4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002602F0_0x2602f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C4C0u; }
        if (ctx->pc != 0x26C4C0u) { return; }
    }
    ctx->pc = 0x26C4C0u;
label_26c4c0:
    // 0x26c4c0: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x26c4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x26c4c4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26c4c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26c4c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26C4C8u;
    {
        const bool branch_taken_0x26c4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C4C8u;
            // 0x26c4cc: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c4c8) {
            ctx->pc = 0x26C4DCu;
            goto label_26c4dc;
        }
    }
    ctx->pc = 0x26C4D0u;
    // 0x26c4d0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26c4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26c4d4: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26C4D4u;
    SET_GPR_U32(ctx, 31, 0x26C4DCu);
    ctx->pc = 0x26C4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C4D4u;
            // 0x26c4d8: 0x24a58bb0  addiu       $a1, $a1, -0x7450 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C4DCu; }
        if (ctx->pc != 0x26C4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C4DCu; }
        if (ctx->pc != 0x26C4DCu) { return; }
    }
    ctx->pc = 0x26C4DCu;
label_26c4dc:
    // 0x26c4dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26c4dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26c4e0:
    // 0x26c4e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26c4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c4e4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x26c4e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c4e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x26c4e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x26C4ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C4ECu;
            // 0x26c4f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26C4F4u;
    // 0x26c4f4: 0x0  nop
    ctx->pc = 0x26c4f4u;
    // NOP
    ctx->pc = 0x26c4f8u;
}
