#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00208220
// Address: 0x208220 - 0x2083a0
void sub_00208220_0x208220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208220_0x208220");
#endif

    switch (ctx->pc) {
        case 0x208290u: goto label_208290;
        case 0x2082a4u: goto label_2082a4;
        case 0x2082bcu: goto label_2082bc;
        case 0x2082c4u: goto label_2082c4;
        case 0x2082ccu: goto label_2082cc;
        case 0x20833cu: goto label_20833c;
        case 0x20835cu: goto label_20835c;
        case 0x20837cu: goto label_20837c;
        case 0x208388u: goto label_208388;
        case 0x208390u: goto label_208390;
        default: break;
    }

    ctx->pc = 0x208220u;

    // 0x208220: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x208220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x208224: 0x90449480  lbu         $a0, -0x6B80($v0)
    ctx->pc = 0x208224u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939776)));
    // 0x208228: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x208228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x20822c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x20822cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x208230: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x208230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x208234: 0x2442ea26  addiu       $v0, $v0, -0x15DA
    ctx->pc = 0x208234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961702));
    // 0x208238: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x208238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20823c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20823cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208240: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x208240u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x208244: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x208244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x208248: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x208248u;
    {
        const bool branch_taken_0x208248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208248) {
            ctx->pc = 0x20824Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208248u;
            // 0x20824c: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
            ctx->pc = 0x208258u;
            goto label_208258;
        }
    }
    ctx->pc = 0x208250u;
    // 0x208250: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x208250u;
    {
        const bool branch_taken_0x208250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208250u;
            // 0x208254: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208250) {
            ctx->pc = 0x208288u;
            goto label_208288;
        }
    }
    ctx->pc = 0x208258u;
label_208258:
    // 0x208258: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x208258u;
    {
        const bool branch_taken_0x208258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208258) {
            ctx->pc = 0x20825Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208258u;
            // 0x20825c: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
            ctx->pc = 0x208268u;
            goto label_208268;
        }
    }
    ctx->pc = 0x208260u;
    // 0x208260: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x208260u;
    {
        const bool branch_taken_0x208260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208260u;
            // 0x208264: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208260) {
            ctx->pc = 0x208288u;
            goto label_208288;
        }
    }
    ctx->pc = 0x208268u;
label_208268:
    // 0x208268: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x208268u;
    {
        const bool branch_taken_0x208268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208268) {
            ctx->pc = 0x20826Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208268u;
            // 0x20826c: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
            ctx->pc = 0x208278u;
            goto label_208278;
        }
    }
    ctx->pc = 0x208270u;
    // 0x208270: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x208270u;
    {
        const bool branch_taken_0x208270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208270u;
            // 0x208274: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208270) {
            ctx->pc = 0x208288u;
            goto label_208288;
        }
    }
    ctx->pc = 0x208278u;
label_208278:
    // 0x208278: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x208278u;
    {
        const bool branch_taken_0x208278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208278) {
            ctx->pc = 0x20827Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208278u;
            // 0x20827c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x208288u;
            goto label_208288;
        }
    }
    ctx->pc = 0x208280u;
    // 0x208280: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x208280u;
    {
        const bool branch_taken_0x208280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208280u;
            // 0x208284: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208280) {
            ctx->pc = 0x208288u;
            goto label_208288;
        }
    }
    ctx->pc = 0x208288u;
label_208288:
    // 0x208288: 0x3e00008  jr          $ra
    ctx->pc = 0x208288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x208290u;
label_208290:
    // 0x208290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x208290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x208294: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x208294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x208298: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x208298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20829c: 0xc055684  jal         func_155A10
    ctx->pc = 0x20829Cu;
    SET_GPR_U32(ctx, 31, 0x2082A4u);
    ctx->pc = 0x2082A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20829Cu;
            // 0x2082a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155A10u;
    if (runtime->hasFunction(0x155A10u)) {
        auto targetFn = runtime->lookupFunction(0x155A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2082A4u; }
        if (ctx->pc != 0x2082A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155A10_0x155a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2082A4u; }
        if (ctx->pc != 0x2082A4u) { return; }
    }
    ctx->pc = 0x2082A4u;
label_2082a4:
    // 0x2082a4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x2082a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x2082a8: 0x9042e818  lbu         $v0, -0x17E8($v0)
    ctx->pc = 0x2082a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961176)));
    // 0x2082ac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2082ACu;
    {
        const bool branch_taken_0x2082ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2082ac) {
            ctx->pc = 0x2082C4u;
            goto label_2082c4;
        }
    }
    ctx->pc = 0x2082B4u;
    // 0x2082b4: 0xc069184  jal         func_1A4610
    ctx->pc = 0x2082B4u;
    SET_GPR_U32(ctx, 31, 0x2082BCu);
    ctx->pc = 0x2082B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2082B4u;
            // 0x2082b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4610u;
    if (runtime->hasFunction(0x1A4610u)) {
        auto targetFn = runtime->lookupFunction(0x1A4610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2082BCu; }
        if (ctx->pc != 0x2082BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4610_0x1a4610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2082BCu; }
        if (ctx->pc != 0x2082BCu) { return; }
    }
    ctx->pc = 0x2082BCu;
label_2082bc:
    // 0x2082bc: 0xc069254  jal         func_1A4950
    ctx->pc = 0x2082BCu;
    SET_GPR_U32(ctx, 31, 0x2082C4u);
    ctx->pc = 0x1A4950u;
    if (runtime->hasFunction(0x1A4950u)) {
        auto targetFn = runtime->lookupFunction(0x1A4950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2082C4u; }
        if (ctx->pc != 0x2082C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4950_0x1a4950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2082C4u; }
        if (ctx->pc != 0x2082C4u) { return; }
    }
    ctx->pc = 0x2082C4u;
label_2082c4:
    // 0x2082c4: 0xc055684  jal         func_155A10
    ctx->pc = 0x2082C4u;
    SET_GPR_U32(ctx, 31, 0x2082CCu);
    ctx->pc = 0x155A10u;
    if (runtime->hasFunction(0x155A10u)) {
        auto targetFn = runtime->lookupFunction(0x155A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2082CCu; }
        if (ctx->pc != 0x2082CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155A10_0x155a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2082CCu; }
        if (ctx->pc != 0x2082CCu) { return; }
    }
    ctx->pc = 0x2082CCu;
label_2082cc:
    // 0x2082cc: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2082ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2082d0: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x2082d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x2082d4: 0x8c449bf8  lw          $a0, -0x6408($v0)
    ctx->pc = 0x2082d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x2082d8: 0x3c0b01c1  lui         $t3, 0x1C1
    ctx->pc = 0x2082d8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)449 << 16));
    // 0x2082dc: 0x3c0a01c1  lui         $t2, 0x1C1
    ctx->pc = 0x2082dcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)449 << 16));
    // 0x2082e0: 0x3c0901c1  lui         $t1, 0x1C1
    ctx->pc = 0x2082e0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)449 << 16));
    // 0x2082e4: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2082e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2082e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2082e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2082ec: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2082ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2082f0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x2082f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x2082f4: 0x8cac9bf8  lw          $t4, -0x6408($a1)
    ctx->pc = 0x2082f4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294941688)));
    // 0x2082f8: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x2082f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x2082fc: 0x24847ca0  addiu       $a0, $a0, 0x7CA0
    ctx->pc = 0x2082fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31904));
    // 0x208300: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x208300u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208304: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x208304u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208308: 0xa1800068  sb          $zero, 0x68($t4)
    ctx->pc = 0x208308u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 104), (uint8_t)GPR_U32(ctx, 0));
    // 0x20830c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x20830cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x208310: 0x8d6b9bf8  lw          $t3, -0x6408($t3)
    ctx->pc = 0x208310u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294941688)));
    // 0x208314: 0x24a5f820  addiu       $a1, $a1, -0x7E0
    ctx->pc = 0x208314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965280));
    // 0x208318: 0xa1600062  sb          $zero, 0x62($t3)
    ctx->pc = 0x208318u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 98), (uint8_t)GPR_U32(ctx, 0));
    // 0x20831c: 0x8d4a9bf8  lw          $t2, -0x6408($t2)
    ctx->pc = 0x20831cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294941688)));
    // 0x208320: 0xa1400064  sb          $zero, 0x64($t2)
    ctx->pc = 0x208320u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 100), (uint8_t)GPR_U32(ctx, 0));
    // 0x208324: 0x8d299bf8  lw          $t1, -0x6408($t1)
    ctx->pc = 0x208324u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294941688)));
    // 0x208328: 0xad200010  sw          $zero, 0x10($t1)
    ctx->pc = 0x208328u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 0));
    // 0x20832c: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x20832cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x208330: 0xa06004f0  sb          $zero, 0x4F0($v1)
    ctx->pc = 0x208330u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1264), (uint8_t)GPR_U32(ctx, 0));
    // 0x208334: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x208334u;
    SET_GPR_U32(ctx, 31, 0x20833Cu);
    ctx->pc = 0x208338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208334u;
            // 0x208338: 0xa040e818  sb          $zero, -0x17E8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20833Cu; }
        if (ctx->pc != 0x20833Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20833Cu; }
        if (ctx->pc != 0x20833Cu) { return; }
    }
    ctx->pc = 0x20833Cu;
label_20833c:
    // 0x20833c: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x20833cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x208340: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x208340u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x208344: 0x24848100  addiu       $a0, $a0, -0x7F00
    ctx->pc = 0x208344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934784));
    // 0x208348: 0x24a5f820  addiu       $a1, $a1, -0x7E0
    ctx->pc = 0x208348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965280));
    // 0x20834c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20834cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208350: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x208350u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208354: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x208354u;
    SET_GPR_U32(ctx, 31, 0x20835Cu);
    ctx->pc = 0x208358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208354u;
            // 0x208358: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20835Cu; }
        if (ctx->pc != 0x20835Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20835Cu; }
        if (ctx->pc != 0x20835Cu) { return; }
    }
    ctx->pc = 0x20835Cu;
label_20835c:
    // 0x20835c: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x20835cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x208360: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x208360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x208364: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x208364u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208368: 0x24847750  addiu       $a0, $a0, 0x7750
    ctx->pc = 0x208368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30544));
    // 0x20836c: 0x24a5f820  addiu       $a1, $a1, -0x7E0
    ctx->pc = 0x20836cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965280));
    // 0x208370: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x208370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208374: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x208374u;
    SET_GPR_U32(ctx, 31, 0x20837Cu);
    ctx->pc = 0x208378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208374u;
            // 0x208378: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20837Cu; }
        if (ctx->pc != 0x20837Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20837Cu; }
        if (ctx->pc != 0x20837Cu) { return; }
    }
    ctx->pc = 0x20837Cu;
label_20837c:
    // 0x20837c: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x20837cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x208380: 0xc0558e0  jal         func_156380
    ctx->pc = 0x208380u;
    SET_GPR_U32(ctx, 31, 0x208388u);
    ctx->pc = 0x208384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208380u;
            // 0x208384: 0x248483a0  addiu       $a0, $a0, -0x7C60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (runtime->hasFunction(0x156380u)) {
        auto targetFn = runtime->lookupFunction(0x156380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208388u; }
        if (ctx->pc != 0x208388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156380_0x156380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208388u; }
        if (ctx->pc != 0x208388u) { return; }
    }
    ctx->pc = 0x208388u;
label_208388:
    // 0x208388: 0xc0820e8  jal         func_2083A0
    ctx->pc = 0x208388u;
    SET_GPR_U32(ctx, 31, 0x208390u);
    ctx->pc = 0x20838Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208388u;
            // 0x20838c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2083A0u;
    if (runtime->hasFunction(0x2083A0u)) {
        auto targetFn = runtime->lookupFunction(0x2083A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208390u; }
        if (ctx->pc != 0x208390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002083A0_0x2083a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208390u; }
        if (ctx->pc != 0x208390u) { return; }
    }
    ctx->pc = 0x208390u;
label_208390:
    // 0x208390: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x208390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208394: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x208394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208398: 0x3e00008  jr          $ra
    ctx->pc = 0x208398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20839Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208398u;
            // 0x20839c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2083A0u;
    ctx->pc = 0x2083a0u;
}
