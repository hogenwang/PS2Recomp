#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010A520
// Address: 0x10a520 - 0x10a618
void sub_0010A520_0x10a520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A520_0x10a520");
#endif

    switch (ctx->pc) {
        case 0x10a530u: goto label_10a530;
        case 0x10a5a4u: goto label_10a5a4;
        case 0x10a5c0u: goto label_10a5c0;
        case 0x10a5d0u: goto label_10a5d0;
        case 0x10a5d8u: goto label_10a5d8;
        case 0x10a604u: goto label_10a604;
        default: break;
    }

    ctx->pc = 0x10a520u;

    // 0x10a520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10a520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10a524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10a524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10a528: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10A528u;
    SET_GPR_U32(ctx, 31, 0x10A530u);
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A530u; }
        if (ctx->pc != 0x10A530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A530u; }
        if (ctx->pc != 0x10A530u) { return; }
    }
    ctx->pc = 0x10A530u;
label_10a530:
    // 0x10a530: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x10a530u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x10a534: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x10a534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x10a538: 0x3529f520  ori         $t1, $t1, 0xF520
    ctx->pc = 0x10a538u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)62752);
    // 0x10a53c: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x10a53cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x10a540: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x10a540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x10a544: 0x354af590  ori         $t2, $t2, 0xF590
    ctx->pc = 0x10a544u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)62864);
    // 0x10a548: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10a548u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10a54c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x10a54cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x10a550: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10a550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x10a554: 0x34c6b000  ori         $a2, $a2, 0xB000
    ctx->pc = 0x10a554u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)45056);
    // 0x10a558: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x10a558u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x10a55c: 0x3508feff  ori         $t0, $t0, 0xFEFF
    ctx->pc = 0x10a55cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65279);
    // 0x10a560: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10a560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10a564: 0x3c07fffe  lui         $a3, 0xFFFE
    ctx->pc = 0x10a564u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65534 << 16));
    // 0x10a568: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x10a568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10a56c: 0x34a5b400  ori         $a1, $a1, 0xB400
    ctx->pc = 0x10a56cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46080);
    // 0x10a570: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x10a570u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x10a574: 0x882024  and         $a0, $a0, $t0
    ctx->pc = 0x10a574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x10a578: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x10a578u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x10a57c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10a57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10a580: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x10a580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x10a584: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x10a584u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x10a588: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x10a588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x10a58c: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x10a58cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x10a590: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x10a590u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x10a594: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A594u;
    {
        const bool branch_taken_0x10a594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A594u;
            // 0x10a598: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a594) {
            ctx->pc = 0x10A5A8u;
            goto label_10a5a8;
        }
    }
    ctx->pc = 0x10A59Cu;
    // 0x10a59c: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x10A59Cu;
    SET_GPR_U32(ctx, 31, 0x10A5A4u);
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A5A4u; }
        if (ctx->pc != 0x10A5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A5A4u; }
        if (ctx->pc != 0x10A5A4u) { return; }
    }
    ctx->pc = 0x10A5A4u;
label_10a5a4:
    // 0x10a5a4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_10a5a8:
    // 0x10a5a8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10a5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10a5ac: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x10a5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x10a5b0: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x10a5b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x10a5b4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10a5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x10a5b8: 0xc043182  jal         func_10C608
    ctx->pc = 0x10A5B8u;
    SET_GPR_U32(ctx, 31, 0x10A5C0u);
    ctx->pc = 0x10A5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A5B8u;
            // 0x10a5bc: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C608u;
    if (runtime->hasFunction(0x10C608u)) {
        auto targetFn = runtime->lookupFunction(0x10C608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A5C0u; }
        if (ctx->pc != 0x10A5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C608_0x10c608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A5C0u; }
        if (ctx->pc != 0x10A5C0u) { return; }
    }
    ctx->pc = 0x10A5C0u;
label_10a5c0:
    // 0x10a5c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10a5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a5c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x10A5C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A5C8u;
            // 0x10a5cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A5D0u;
label_10a5d0:
    // 0x10a5d0: 0x3e00008  jr          $ra
    ctx->pc = 0x10A5D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A5D0u;
            // 0x10a5d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A5D8u;
label_10a5d8:
    // 0x10a5d8: 0x24c30013  addiu       $v1, $a2, 0x13
    ctx->pc = 0x10a5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 19));
    // 0x10a5dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10a5dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10a5e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10a5e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10a5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10a5e8: 0x24c60022  addiu       $a2, $a2, 0x22
    ctx->pc = 0x10a5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 34));
    // 0x10a5ec: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x10a5ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10a5f0: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x10a5f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x10a5f4: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x10a5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10a5f8: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x10a5f8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x10a5fc: 0xc0426ec  jal         func_109BB0
    ctx->pc = 0x10A5FCu;
    SET_GPR_U32(ctx, 31, 0x10A604u);
    ctx->pc = 0x10A600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A5FCu;
            // 0x10a600: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109BB0u;
    if (runtime->hasFunction(0x109BB0u)) {
        auto targetFn = runtime->lookupFunction(0x109BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A604u; }
        if (ctx->pc != 0x10A604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109BB0_0x109bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A604u; }
        if (ctx->pc != 0x10A604u) { return; }
    }
    ctx->pc = 0x10A604u;
label_10a604:
    // 0x10a604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10a604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a608: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a60c: 0x3e00008  jr          $ra
    ctx->pc = 0x10A60Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A60Cu;
            // 0x10a610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A614u;
    // 0x10a614: 0x0  nop
    ctx->pc = 0x10a614u;
    // NOP
    ctx->pc = 0x10a618u;
}
