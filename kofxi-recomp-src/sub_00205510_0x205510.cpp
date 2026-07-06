#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00205510
// Address: 0x205510 - 0x205650
void sub_00205510_0x205510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205510_0x205510");
#endif

    switch (ctx->pc) {
        case 0x20553cu: goto label_20553c;
        case 0x2055a0u: goto label_2055a0;
        case 0x2055d8u: goto label_2055d8;
        case 0x205610u: goto label_205610;
        case 0x205638u: goto label_205638;
        case 0x205640u: goto label_205640;
        default: break;
    }

    ctx->pc = 0x205510u;

    // 0x205510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x205510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x205514: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x205514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x205518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x205518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20551c: 0x27a4001f  addiu       $a0, $sp, 0x1F
    ctx->pc = 0x20551cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
    // 0x205520: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x205520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x205524: 0x27a5001e  addiu       $a1, $sp, 0x1E
    ctx->pc = 0x205524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 30));
    // 0x205528: 0x27a6001d  addiu       $a2, $sp, 0x1D
    ctx->pc = 0x205528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 29));
    // 0x20552c: 0x90470065  lbu         $a3, 0x65($v0)
    ctx->pc = 0x20552cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 101)));
    // 0x205530: 0x90420064  lbu         $v0, 0x64($v0)
    ctx->pc = 0x205530u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x205534: 0xc080e58  jal         func_203960
    ctx->pc = 0x205534u;
    SET_GPR_U32(ctx, 31, 0x20553Cu);
    ctx->pc = 0x205538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205534u;
            // 0x205538: 0x24480001  addiu       $t0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x203960u;
    if (runtime->hasFunction(0x203960u)) {
        auto targetFn = runtime->lookupFunction(0x203960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20553Cu; }
        if (ctx->pc != 0x20553Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00203960_0x203960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20553Cu; }
        if (ctx->pc != 0x20553Cu) { return; }
    }
    ctx->pc = 0x20553Cu;
label_20553c:
    // 0x20553c: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20553cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x205540: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x205540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x205544: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x205544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x205548: 0x90440068  lbu         $a0, 0x68($v0)
    ctx->pc = 0x205548u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x20554c: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x20554Cu;
    {
        const bool branch_taken_0x20554c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20554c) {
            ctx->pc = 0x2055E0u;
            goto label_2055e0;
        }
    }
    ctx->pc = 0x205554u;
    // 0x205554: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x205554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205558: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x205558u;
    {
        const bool branch_taken_0x205558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x205558) {
            ctx->pc = 0x2055A8u;
            goto label_2055a8;
        }
    }
    ctx->pc = 0x205560u;
    // 0x205560: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205560u;
    {
        const bool branch_taken_0x205560 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x205560) {
            ctx->pc = 0x205570u;
            goto label_205570;
        }
    }
    ctx->pc = 0x205568u;
    // 0x205568: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x205568u;
    {
        const bool branch_taken_0x205568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x205568) {
            ctx->pc = 0x205614u;
            goto label_205614;
        }
    }
    ctx->pc = 0x205570u;
label_205570:
    // 0x205570: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x205570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x205574: 0x93a5001f  lbu         $a1, 0x1F($sp)
    ctx->pc = 0x205574u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 31)));
    // 0x205578: 0x90469480  lbu         $a2, -0x6B80($v0)
    ctx->pc = 0x205578u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939776)));
    // 0x20557c: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x20557cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x205580: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x205580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x205584: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x205584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x205588: 0x2442ea26  addiu       $v0, $v0, -0x15DA
    ctx->pc = 0x205588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961702));
    // 0x20558c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20558cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x205590: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x205590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x205594: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x205594u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x205598: 0xc0d0ae0  jal         func_342B80
    ctx->pc = 0x205598u;
    SET_GPR_U32(ctx, 31, 0x2055A0u);
    ctx->pc = 0x20559Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205598u;
            // 0x20559c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x342B80u;
    if (runtime->hasFunction(0x342B80u)) {
        auto targetFn = runtime->lookupFunction(0x342B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2055A0u; }
        if (ctx->pc != 0x2055A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00342B80_0x342b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2055A0u; }
        if (ctx->pc != 0x2055A0u) { return; }
    }
    ctx->pc = 0x2055A0u;
label_2055a0:
    // 0x2055a0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2055A0u;
    {
        const bool branch_taken_0x2055a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2055A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2055A0u;
            // 0x2055a4: 0xa3a2001f  sb          $v0, 0x1F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2055a0) {
            ctx->pc = 0x205614u;
            goto label_205614;
        }
    }
    ctx->pc = 0x2055A8u;
label_2055a8:
    // 0x2055a8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x2055a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x2055ac: 0x93a5001e  lbu         $a1, 0x1E($sp)
    ctx->pc = 0x2055acu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 30)));
    // 0x2055b0: 0x90469480  lbu         $a2, -0x6B80($v0)
    ctx->pc = 0x2055b0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939776)));
    // 0x2055b4: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2055b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2055b8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x2055b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x2055bc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2055bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2055c0: 0x2442ea26  addiu       $v0, $v0, -0x15DA
    ctx->pc = 0x2055c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961702));
    // 0x2055c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2055c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2055c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2055c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2055cc: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x2055ccu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2055d0: 0xc0d0ae0  jal         func_342B80
    ctx->pc = 0x2055D0u;
    SET_GPR_U32(ctx, 31, 0x2055D8u);
    ctx->pc = 0x2055D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2055D0u;
            // 0x2055d4: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x342B80u;
    if (runtime->hasFunction(0x342B80u)) {
        auto targetFn = runtime->lookupFunction(0x342B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2055D8u; }
        if (ctx->pc != 0x2055D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00342B80_0x342b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2055D8u; }
        if (ctx->pc != 0x2055D8u) { return; }
    }
    ctx->pc = 0x2055D8u;
label_2055d8:
    // 0x2055d8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2055D8u;
    {
        const bool branch_taken_0x2055d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2055DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2055D8u;
            // 0x2055dc: 0xa3a2001e  sb          $v0, 0x1E($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2055d8) {
            ctx->pc = 0x205614u;
            goto label_205614;
        }
    }
    ctx->pc = 0x2055E0u;
label_2055e0:
    // 0x2055e0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x2055e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x2055e4: 0x93a5001d  lbu         $a1, 0x1D($sp)
    ctx->pc = 0x2055e4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 29)));
    // 0x2055e8: 0x90469480  lbu         $a2, -0x6B80($v0)
    ctx->pc = 0x2055e8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939776)));
    // 0x2055ec: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2055ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2055f0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x2055f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x2055f4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2055f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2055f8: 0x2442ea26  addiu       $v0, $v0, -0x15DA
    ctx->pc = 0x2055f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961702));
    // 0x2055fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2055fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x205600: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x205600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x205604: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x205604u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x205608: 0xc0d0ae0  jal         func_342B80
    ctx->pc = 0x205608u;
    SET_GPR_U32(ctx, 31, 0x205610u);
    ctx->pc = 0x20560Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205608u;
            // 0x20560c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x342B80u;
    if (runtime->hasFunction(0x342B80u)) {
        auto targetFn = runtime->lookupFunction(0x342B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205610u; }
        if (ctx->pc != 0x205610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00342B80_0x342b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205610u; }
        if (ctx->pc != 0x205610u) { return; }
    }
    ctx->pc = 0x205610u;
label_205610:
    // 0x205610: 0xa3a2001d  sb          $v0, 0x1D($sp)
    ctx->pc = 0x205610u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 29), (uint8_t)GPR_U32(ctx, 2));
label_205614:
    // 0x205614: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x205614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x205618: 0x93a4001f  lbu         $a0, 0x1F($sp)
    ctx->pc = 0x205618u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 31)));
    // 0x20561c: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x20561cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x205620: 0x93a5001e  lbu         $a1, 0x1E($sp)
    ctx->pc = 0x205620u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 30)));
    // 0x205624: 0x93a6001d  lbu         $a2, 0x1D($sp)
    ctx->pc = 0x205624u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 29)));
    // 0x205628: 0x90470065  lbu         $a3, 0x65($v0)
    ctx->pc = 0x205628u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 101)));
    // 0x20562c: 0x90420064  lbu         $v0, 0x64($v0)
    ctx->pc = 0x20562cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x205630: 0xc080ee8  jal         func_203BA0
    ctx->pc = 0x205630u;
    SET_GPR_U32(ctx, 31, 0x205638u);
    ctx->pc = 0x205634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205630u;
            // 0x205634: 0x24480001  addiu       $t0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x203BA0u;
    if (runtime->hasFunction(0x203BA0u)) {
        auto targetFn = runtime->lookupFunction(0x203BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205638u; }
        if (ctx->pc != 0x205638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00203BA0_0x203ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205638u; }
        if (ctx->pc != 0x205638u) { return; }
    }
    ctx->pc = 0x205638u;
label_205638:
    // 0x205638: 0xc081494  jal         func_205250
    ctx->pc = 0x205638u;
    SET_GPR_U32(ctx, 31, 0x205640u);
    ctx->pc = 0x205250u;
    if (runtime->hasFunction(0x205250u)) {
        auto targetFn = runtime->lookupFunction(0x205250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205640u; }
        if (ctx->pc != 0x205640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00205250_0x205250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205640u; }
        if (ctx->pc != 0x205640u) { return; }
    }
    ctx->pc = 0x205640u;
label_205640:
    // 0x205640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205644: 0x3e00008  jr          $ra
    ctx->pc = 0x205644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205644u;
            // 0x205648: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20564Cu;
    // 0x20564c: 0x0  nop
    ctx->pc = 0x20564cu;
    // NOP
    ctx->pc = 0x205650u;
}
