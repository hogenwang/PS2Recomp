#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00194050
// Address: 0x194050 - 0x194120
void sub_00194050_0x194050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194050_0x194050");
#endif

    switch (ctx->pc) {
        case 0x194050u: goto label_194050;
        case 0x194054u: goto label_194054;
        case 0x194058u: goto label_194058;
        case 0x19405cu: goto label_19405c;
        case 0x194060u: goto label_194060;
        case 0x194064u: goto label_194064;
        case 0x194068u: goto label_194068;
        case 0x19406cu: goto label_19406c;
        case 0x194070u: goto label_194070;
        case 0x194074u: goto label_194074;
        case 0x194078u: goto label_194078;
        case 0x19407cu: goto label_19407c;
        case 0x194080u: goto label_194080;
        case 0x194084u: goto label_194084;
        case 0x194088u: goto label_194088;
        case 0x19408cu: goto label_19408c;
        case 0x194090u: goto label_194090;
        case 0x194094u: goto label_194094;
        case 0x194098u: goto label_194098;
        case 0x19409cu: goto label_19409c;
        case 0x1940a0u: goto label_1940a0;
        case 0x1940a4u: goto label_1940a4;
        case 0x1940a8u: goto label_1940a8;
        case 0x1940acu: goto label_1940ac;
        case 0x1940b0u: goto label_1940b0;
        case 0x1940b4u: goto label_1940b4;
        case 0x1940b8u: goto label_1940b8;
        case 0x1940bcu: goto label_1940bc;
        case 0x1940c0u: goto label_1940c0;
        case 0x1940c4u: goto label_1940c4;
        case 0x1940c8u: goto label_1940c8;
        case 0x1940ccu: goto label_1940cc;
        case 0x1940d0u: goto label_1940d0;
        case 0x1940d4u: goto label_1940d4;
        case 0x1940d8u: goto label_1940d8;
        case 0x1940dcu: goto label_1940dc;
        case 0x1940e0u: goto label_1940e0;
        case 0x1940e4u: goto label_1940e4;
        case 0x1940e8u: goto label_1940e8;
        case 0x1940ecu: goto label_1940ec;
        case 0x1940f0u: goto label_1940f0;
        case 0x1940f4u: goto label_1940f4;
        case 0x1940f8u: goto label_1940f8;
        case 0x1940fcu: goto label_1940fc;
        case 0x194100u: goto label_194100;
        case 0x194104u: goto label_194104;
        case 0x194108u: goto label_194108;
        case 0x19410cu: goto label_19410c;
        case 0x194110u: goto label_194110;
        case 0x194114u: goto label_194114;
        case 0x194118u: goto label_194118;
        case 0x19411cu: goto label_19411c;
        default: break;
    }

    ctx->pc = 0x194050u;

label_194050:
    // 0x194050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x194050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_194054:
    // 0x194054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_194058:
    // 0x194058: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x194058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
label_19405c:
    // 0x19405c: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x19405cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_194060:
    // 0x194060: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
label_194064:
    if (ctx->pc == 0x194064u) {
        ctx->pc = 0x194064u;
            // 0x194064: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x194068u;
        goto label_194068;
    }
    ctx->pc = 0x194060u;
    {
        const bool branch_taken_0x194060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x194060) {
            ctx->pc = 0x194064u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x194060u;
            // 0x194064: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x194098u;
            goto label_194098;
        }
    }
    ctx->pc = 0x194068u;
label_194068:
    // 0x194068: 0x908303a1  lbu         $v1, 0x3A1($a0)
    ctx->pc = 0x194068u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 929)));
label_19406c:
    // 0x19406c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x19406cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_194070:
    // 0x194070: 0x24425cd0  addiu       $v0, $v0, 0x5CD0
    ctx->pc = 0x194070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23760));
label_194074:
    // 0x194074: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x194074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
label_194078:
    // 0x194078: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x194078u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_19407c:
    // 0x19407c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x19407cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_194080:
    // 0x194080: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x194080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_194084:
    // 0x194084: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x194084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_194088:
    // 0x194088: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x194088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19408c:
    // 0x19408c: 0x40f809  jalr        $v0
label_194090:
    if (ctx->pc == 0x194090u) {
        ctx->pc = 0x194094u;
        goto label_194094;
    }
    ctx->pc = 0x19408Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194094u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x194094u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x194094u; }
            if (ctx->pc != 0x194094u) { return; }
        }
        }
    }
    ctx->pc = 0x194094u;
label_194094:
    // 0x194094: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_194098:
    // 0x194098: 0x3e00008  jr          $ra
label_19409c:
    if (ctx->pc == 0x19409Cu) {
        ctx->pc = 0x19409Cu;
            // 0x19409c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1940A0u;
        goto label_1940a0;
    }
    ctx->pc = 0x194098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19409Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194098u;
            // 0x19409c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1940A0u;
label_1940a0:
    // 0x1940a0: 0x3e00008  jr          $ra
label_1940a4:
    if (ctx->pc == 0x1940A4u) {
        ctx->pc = 0x1940A8u;
        goto label_1940a8;
    }
    ctx->pc = 0x1940A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1940A8u;
label_1940a8:
    // 0x1940a8: 0x0  nop
    ctx->pc = 0x1940a8u;
    // NOP
label_1940ac:
    // 0x1940ac: 0x0  nop
    ctx->pc = 0x1940acu;
    // NOP
label_1940b0:
    // 0x1940b0: 0x948303a4  lhu         $v1, 0x3A4($a0)
    ctx->pc = 0x1940b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 932)));
label_1940b4:
    // 0x1940b4: 0x3063fcff  andi        $v1, $v1, 0xFCFF
    ctx->pc = 0x1940b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64767);
label_1940b8:
    // 0x1940b8: 0x3e00008  jr          $ra
label_1940bc:
    if (ctx->pc == 0x1940BCu) {
        ctx->pc = 0x1940BCu;
            // 0x1940bc: 0xa48303a4  sh          $v1, 0x3A4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 932), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1940C0u;
        goto label_1940c0;
    }
    ctx->pc = 0x1940B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1940BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1940B8u;
            // 0x1940bc: 0xa48303a4  sh          $v1, 0x3A4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 932), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1940C0u;
label_1940c0:
    // 0x1940c0: 0x948303a4  lhu         $v1, 0x3A4($a0)
    ctx->pc = 0x1940c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 932)));
label_1940c4:
    // 0x1940c4: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x1940c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
label_1940c8:
    // 0x1940c8: 0x3e00008  jr          $ra
label_1940cc:
    if (ctx->pc == 0x1940CCu) {
        ctx->pc = 0x1940CCu;
            // 0x1940cc: 0xa48303a4  sh          $v1, 0x3A4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 932), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1940D0u;
        goto label_1940d0;
    }
    ctx->pc = 0x1940C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1940CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1940C8u;
            // 0x1940cc: 0xa48303a4  sh          $v1, 0x3A4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 932), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1940D0u;
label_1940d0:
    // 0x1940d0: 0x948303a4  lhu         $v1, 0x3A4($a0)
    ctx->pc = 0x1940d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 932)));
label_1940d4:
    // 0x1940d4: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x1940d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
label_1940d8:
    // 0x1940d8: 0xa48303a4  sh          $v1, 0x3A4($a0)
    ctx->pc = 0x1940d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 932), (uint16_t)GPR_U32(ctx, 3));
label_1940dc:
    // 0x1940dc: 0x948303a4  lhu         $v1, 0x3A4($a0)
    ctx->pc = 0x1940dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 932)));
label_1940e0:
    // 0x1940e0: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x1940e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
label_1940e4:
    // 0x1940e4: 0x3e00008  jr          $ra
label_1940e8:
    if (ctx->pc == 0x1940E8u) {
        ctx->pc = 0x1940E8u;
            // 0x1940e8: 0xa48303a4  sh          $v1, 0x3A4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 932), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1940ECu;
        goto label_1940ec;
    }
    ctx->pc = 0x1940E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1940E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1940E4u;
            // 0x1940e8: 0xa48303a4  sh          $v1, 0x3A4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 932), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1940ECu;
label_1940ec:
    // 0x1940ec: 0x0  nop
    ctx->pc = 0x1940ecu;
    // NOP
label_1940f0:
    // 0x1940f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1940f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1940f4:
    // 0x1940f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1940f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1940f8:
    // 0x1940f8: 0xc065158  jal         func_194560
label_1940fc:
    if (ctx->pc == 0x1940FCu) {
        ctx->pc = 0x194100u;
        goto label_194100;
    }
    ctx->pc = 0x1940F8u;
    SET_GPR_U32(ctx, 31, 0x194100u);
    ctx->pc = 0x194560u;
    if (runtime->hasFunction(0x194560u)) {
        auto targetFn = runtime->lookupFunction(0x194560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194100u; }
        if (ctx->pc != 0x194100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00194560_0x194560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194100u; }
        if (ctx->pc != 0x194100u) { return; }
    }
    ctx->pc = 0x194100u;
label_194100:
    // 0x194100: 0xc065254  jal         func_194950
label_194104:
    if (ctx->pc == 0x194104u) {
        ctx->pc = 0x194108u;
        goto label_194108;
    }
    ctx->pc = 0x194100u;
    SET_GPR_U32(ctx, 31, 0x194108u);
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194108u; }
        if (ctx->pc != 0x194108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00194950_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194108u; }
        if (ctx->pc != 0x194108u) { return; }
    }
    ctx->pc = 0x194108u;
label_194108:
    // 0x194108: 0xc065ca4  jal         func_197290
label_19410c:
    if (ctx->pc == 0x19410Cu) {
        ctx->pc = 0x194110u;
        goto label_194110;
    }
    ctx->pc = 0x194108u;
    SET_GPR_U32(ctx, 31, 0x194110u);
    ctx->pc = 0x197290u;
    if (runtime->hasFunction(0x197290u)) {
        auto targetFn = runtime->lookupFunction(0x197290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194110u; }
        if (ctx->pc != 0x194110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197290_0x197290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194110u; }
        if (ctx->pc != 0x194110u) { return; }
    }
    ctx->pc = 0x194110u;
label_194110:
    // 0x194110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_194114:
    // 0x194114: 0x3e00008  jr          $ra
label_194118:
    if (ctx->pc == 0x194118u) {
        ctx->pc = 0x194118u;
            // 0x194118: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x19411Cu;
        goto label_19411c;
    }
    ctx->pc = 0x194114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194114u;
            // 0x194118: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19411Cu;
label_19411c:
    // 0x19411c: 0x0  nop
    ctx->pc = 0x19411cu;
    // NOP
    ctx->pc = 0x194120u;
}
