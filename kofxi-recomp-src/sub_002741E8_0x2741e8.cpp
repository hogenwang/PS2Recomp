#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002741E8
// Address: 0x2741e8 - 0x2743b8
void sub_002741E8_0x2741e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002741E8_0x2741e8");
#endif

    switch (ctx->pc) {
        case 0x27422cu: goto label_27422c;
        case 0x274240u: goto label_274240;
        case 0x274270u: goto label_274270;
        case 0x2742b0u: goto label_2742b0;
        case 0x27433cu: goto label_27433c;
        case 0x274370u: goto label_274370;
        case 0x27438cu: goto label_27438c;
        case 0x274394u: goto label_274394;
        default: break;
    }

    ctx->pc = 0x2741e8u;

    // 0x2741e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2741e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2741ec: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2741ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2741f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2741f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2741f4: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x2741f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x2741f8: 0x8c432d74  lw          $v1, 0x2D74($v0)
    ctx->pc = 0x2741f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11636)));
    // 0x2741fc: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x2741fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x274200: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x274200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x274204: 0x26112d78  addiu       $s1, $s0, 0x2D78
    ctx->pc = 0x274204u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 11640));
    // 0x274208: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x274208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x27420c: 0x3c130001  lui         $s3, 0x1
    ctx->pc = 0x27420cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)1 << 16));
    // 0x274210: 0x36730700  ori         $s3, $s3, 0x700
    ctx->pc = 0x274210u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1792);
    // 0x274214: 0x2719821  addu        $s3, $s3, $s1
    ctx->pc = 0x274214u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x274218: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x274218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27421c: 0x1060005e  beqz        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x27421Cu;
    {
        const bool branch_taken_0x27421c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x274220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27421Cu;
            // 0x274220: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27421c) {
            ctx->pc = 0x274398u;
            goto label_274398;
        }
    }
    ctx->pc = 0x274224u;
    // 0x274224: 0xc0b6c32  jal         func_2DB0C8
    ctx->pc = 0x274224u;
    SET_GPR_U32(ctx, 31, 0x27422Cu);
    ctx->pc = 0x2DB0C8u;
    if (runtime->hasFunction(0x2DB0C8u)) {
        auto targetFn = runtime->lookupFunction(0x2DB0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27422Cu; }
        if (ctx->pc != 0x27422Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB0C8_0x2db0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27422Cu; }
        if (ctx->pc != 0x27422Cu) { return; }
    }
    ctx->pc = 0x27422Cu;
label_27422c:
    // 0x27422c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27422cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274230: 0x18a0000b  blez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x274230u;
    {
        const bool branch_taken_0x274230 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x274230) {
            ctx->pc = 0x274260u;
            goto label_274260;
        }
    }
    ctx->pc = 0x274238u;
    // 0x274238: 0xc0b6ce0  jal         func_2DB380
    ctx->pc = 0x274238u;
    SET_GPR_U32(ctx, 31, 0x274240u);
    ctx->pc = 0x2DB380u;
    if (runtime->hasFunction(0x2DB380u)) {
        auto targetFn = runtime->lookupFunction(0x2DB380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274240u; }
        if (ctx->pc != 0x274240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB380_0x2db380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274240u; }
        if (ctx->pc != 0x274240u) { return; }
    }
    ctx->pc = 0x274240u;
label_274240:
    // 0x274240: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x274240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274244: 0x4a20055  bltzl       $a1, . + 4 + (0x55 << 2)
    ctx->pc = 0x274244u;
    {
        const bool branch_taken_0x274244 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x274244) {
            ctx->pc = 0x274248u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x274244u;
            // 0x274248: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27439Cu;
            goto label_27439c;
        }
    }
    ctx->pc = 0x27424Cu;
    // 0x27424c: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27424Cu;
    {
        const bool branch_taken_0x27424c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x27424c) {
            ctx->pc = 0x274268u;
            goto label_274268;
        }
    }
    ctx->pc = 0x274254u;
    // 0x274254: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x274254u;
    {
        const bool branch_taken_0x274254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274254u;
            // 0x274258: 0x2402fe6c  addiu       $v0, $zero, -0x194 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966892));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274254) {
            ctx->pc = 0x274398u;
            goto label_274398;
        }
    }
    ctx->pc = 0x27425Cu;
    // 0x27425c: 0x0  nop
    ctx->pc = 0x27425cu;
    // NOP
label_274260:
    // 0x274260: 0x4a2004e  bltzl       $a1, . + 4 + (0x4E << 2)
    ctx->pc = 0x274260u;
    {
        const bool branch_taken_0x274260 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x274260) {
            ctx->pc = 0x274264u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x274260u;
            // 0x274264: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27439Cu;
            goto label_27439c;
        }
    }
    ctx->pc = 0x274268u;
label_274268:
    // 0x274268: 0xc09c8a8  jal         func_2722A0
    ctx->pc = 0x274268u;
    SET_GPR_U32(ctx, 31, 0x274270u);
    ctx->pc = 0x2722A0u;
    if (runtime->hasFunction(0x2722A0u)) {
        auto targetFn = runtime->lookupFunction(0x2722A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274270u; }
        if (ctx->pc != 0x274270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002722A0_0x2722a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274270u; }
        if (ctx->pc != 0x274270u) { return; }
    }
    ctx->pc = 0x274270u;
label_274270:
    // 0x274270: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x274270u;
    {
        const bool branch_taken_0x274270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274270u;
            // 0x274274: 0x2403c7ff  addiu       $v1, $zero, -0x3801 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294952959));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274270) {
            ctx->pc = 0x274280u;
            goto label_274280;
        }
    }
    ctx->pc = 0x274278u;
    // 0x274278: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x274278u;
    {
        const bool branch_taken_0x274278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27427Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274278u;
            // 0x27427c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274278) {
            ctx->pc = 0x274398u;
            goto label_274398;
        }
    }
    ctx->pc = 0x274280u;
label_274280:
    // 0x274280: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x274280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x274284: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x274284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x274288: 0xdc420688  ld          $v0, 0x688($v0)
    ctx->pc = 0x274288u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 1672)));
    // 0x27428c: 0x24041800  addiu       $a0, $zero, 0x1800
    ctx->pc = 0x27428cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    // 0x274290: 0x2405f8ff  addiu       $a1, $zero, -0x701
    ctx->pc = 0x274290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965503));
    // 0x274294: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x274294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x274298: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x274298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x27429c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x27429cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2742a0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2742a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2742a4: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2742a4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2742a8: 0xc0b6c32  jal         func_2DB0C8
    ctx->pc = 0x2742A8u;
    SET_GPR_U32(ctx, 31, 0x2742B0u);
    ctx->pc = 0x2742ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2742A8u;
            // 0x2742ac: 0xfc220688  sd          $v0, 0x688($at) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 1), 1672), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB0C8u;
    if (runtime->hasFunction(0x2DB0C8u)) {
        auto targetFn = runtime->lookupFunction(0x2DB0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2742B0u; }
        if (ctx->pc != 0x2742B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB0C8_0x2db0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2742B0u; }
        if (ctx->pc != 0x2742B0u) { return; }
    }
    ctx->pc = 0x2742B0u;
label_2742b0:
    // 0x2742b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2742b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2742b4: 0x18a00010  blez        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2742B4u;
    {
        const bool branch_taken_0x2742b4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2742B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2742B4u;
            // 0x2742b8: 0x26032d78  addiu       $v1, $s0, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 11640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2742b4) {
            ctx->pc = 0x2742F8u;
            goto label_2742f8;
        }
    }
    ctx->pc = 0x2742BCu;
    // 0x2742bc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2742bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2742c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2742c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2742c4: 0x8c4206b8  lw          $v0, 0x6B8($v0)
    ctx->pc = 0x2742c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1720)));
    // 0x2742c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2742c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2742cc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2742CCu;
    {
        const bool branch_taken_0x2742cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2742cc) {
            ctx->pc = 0x274300u;
            goto label_274300;
        }
    }
    ctx->pc = 0x2742D4u;
    // 0x2742d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2742d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2742d8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2742d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2742dc: 0xdc420688  ld          $v0, 0x688($v0)
    ctx->pc = 0x2742dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 1672)));
    // 0x2742e0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2742e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2742e4: 0x34633fff  ori         $v1, $v1, 0x3FFF
    ctx->pc = 0x2742e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16383);
    // 0x2742e8: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2742e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2742ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2742ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2742f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2742F0u;
    {
        const bool branch_taken_0x2742f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2742F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2742F0u;
            // 0x2742f4: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2742f0) {
            ctx->pc = 0x274318u;
            goto label_274318;
        }
    }
    ctx->pc = 0x2742F8u;
label_2742f8:
    // 0x2742f8: 0x54a00028  bnel        $a1, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x2742F8u;
    {
        const bool branch_taken_0x2742f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2742f8) {
            ctx->pc = 0x2742FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2742F8u;
            // 0x2742fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27439Cu;
            goto label_27439c;
        }
    }
    ctx->pc = 0x274300u;
label_274300:
    // 0x274300: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x274300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x274304: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x274304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x274308: 0xdc420688  ld          $v0, 0x688($v0)
    ctx->pc = 0x274308u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 1672)));
    // 0x27430c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x27430cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x274310: 0x34633fff  ori         $v1, $v1, 0x3FFF
    ctx->pc = 0x274310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16383);
    // 0x274314: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x274314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_274318:
    // 0x274318: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x274318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x27431c: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x27431cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x274320: 0xfc220688  sd          $v0, 0x688($at)
    ctx->pc = 0x274320u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 1672), GPR_U64(ctx, 2));
    // 0x274324: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x274324u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274328: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x274328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x27432c: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x27432cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x274330: 0xac3206e0  sw          $s2, 0x6E0($at)
    ctx->pc = 0x274330u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1760), GPR_U32(ctx, 18));
    // 0x274334: 0xc0b7ac6  jal         func_2DEB18
    ctx->pc = 0x274334u;
    SET_GPR_U32(ctx, 31, 0x27433Cu);
    ctx->pc = 0x274338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274334u;
            // 0x274338: 0x26240434  addiu       $a0, $s1, 0x434 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DEB18u;
    if (runtime->hasFunction(0x2DEB18u)) {
        auto targetFn = runtime->lookupFunction(0x2DEB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27433Cu; }
        if (ctx->pc != 0x27433Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DEB18_0x2deb18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27433Cu; }
        if (ctx->pc != 0x27433Cu) { return; }
    }
    ctx->pc = 0x27433Cu;
label_27433c:
    // 0x27433c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27433cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274340: 0x4a00015  bltz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x274340u;
    {
        const bool branch_taken_0x274340 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x274344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274340u;
            // 0x274344: 0x26102d78  addiu       $s0, $s0, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274340) {
            ctx->pc = 0x274398u;
            goto label_274398;
        }
    }
    ctx->pc = 0x274348u;
    // 0x274348: 0xb21826  xor         $v1, $a1, $s2
    ctx->pc = 0x274348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 18));
    // 0x27434c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x27434cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x274350: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x274350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x274354: 0x8c8406c8  lw          $a0, 0x6C8($a0)
    ctx->pc = 0x274354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    // 0x274358: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x274358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27435c: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x27435cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x274360: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x274360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x274364: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x274364u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x274368: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x274368u;
    SET_GPR_U32(ctx, 31, 0x274370u);
    ctx->pc = 0x27436Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274368u;
            // 0x27436c: 0xac22073c  sw          $v0, 0x73C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1852), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274370u; }
        if (ctx->pc != 0x274370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274370u; }
        if (ctx->pc != 0x274370u) { return; }
    }
    ctx->pc = 0x274370u;
label_274370:
    // 0x274370: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x274370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x274374: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x274374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x274378: 0x8c8406c8  lw          $a0, 0x6C8($a0)
    ctx->pc = 0x274378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    // 0x27437c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x27437cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x274380: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x274380u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x274384: 0xc043320  jal         func_10CC80
    ctx->pc = 0x274384u;
    SET_GPR_U32(ctx, 31, 0x27438Cu);
    ctx->pc = 0x274388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274384u;
            // 0x274388: 0xae720008  sw          $s2, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27438Cu; }
        if (ctx->pc != 0x27438Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27438Cu; }
        if (ctx->pc != 0x27438Cu) { return; }
    }
    ctx->pc = 0x27438Cu;
label_27438c:
    // 0x27438c: 0xc09c8b0  jal         func_2722C0
    ctx->pc = 0x27438Cu;
    SET_GPR_U32(ctx, 31, 0x274394u);
    ctx->pc = 0x2722C0u;
    if (runtime->hasFunction(0x2722C0u)) {
        auto targetFn = runtime->lookupFunction(0x2722C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274394u; }
        if (ctx->pc != 0x274394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002722C0_0x2722c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274394u; }
        if (ctx->pc != 0x274394u) { return; }
    }
    ctx->pc = 0x274394u;
label_274394:
    // 0x274394: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x274394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_274398:
    // 0x274398: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x274398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27439c:
    // 0x27439c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27439cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2743a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2743a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2743a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2743a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2743a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2743a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2743ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2743ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2743B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2743ACu;
            // 0x2743b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2743B4u;
    // 0x2743b4: 0x0  nop
    ctx->pc = 0x2743b4u;
    // NOP
    ctx->pc = 0x2743b8u;
}
