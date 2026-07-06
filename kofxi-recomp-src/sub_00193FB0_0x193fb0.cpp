#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00193FB0
// Address: 0x193fb0 - 0x194050
void sub_00193FB0_0x193fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193FB0_0x193fb0");
#endif

    switch (ctx->pc) {
        case 0x193fb0u: goto label_193fb0;
        case 0x193fb4u: goto label_193fb4;
        case 0x193fb8u: goto label_193fb8;
        case 0x193fbcu: goto label_193fbc;
        case 0x193fc0u: goto label_193fc0;
        case 0x193fc4u: goto label_193fc4;
        case 0x193fc8u: goto label_193fc8;
        case 0x193fccu: goto label_193fcc;
        case 0x193fd0u: goto label_193fd0;
        case 0x193fd4u: goto label_193fd4;
        case 0x193fd8u: goto label_193fd8;
        case 0x193fdcu: goto label_193fdc;
        case 0x193fe0u: goto label_193fe0;
        case 0x193fe4u: goto label_193fe4;
        case 0x193fe8u: goto label_193fe8;
        case 0x193fecu: goto label_193fec;
        case 0x193ff0u: goto label_193ff0;
        case 0x193ff4u: goto label_193ff4;
        case 0x193ff8u: goto label_193ff8;
        case 0x193ffcu: goto label_193ffc;
        case 0x194000u: goto label_194000;
        case 0x194004u: goto label_194004;
        case 0x194008u: goto label_194008;
        case 0x19400cu: goto label_19400c;
        case 0x194010u: goto label_194010;
        case 0x194014u: goto label_194014;
        case 0x194018u: goto label_194018;
        case 0x19401cu: goto label_19401c;
        case 0x194020u: goto label_194020;
        case 0x194024u: goto label_194024;
        case 0x194028u: goto label_194028;
        case 0x19402cu: goto label_19402c;
        case 0x194030u: goto label_194030;
        case 0x194034u: goto label_194034;
        case 0x194038u: goto label_194038;
        case 0x19403cu: goto label_19403c;
        case 0x194040u: goto label_194040;
        case 0x194044u: goto label_194044;
        case 0x194048u: goto label_194048;
        case 0x19404cu: goto label_19404c;
        default: break;
    }

    ctx->pc = 0x193fb0u;

label_193fb0:
    // 0x193fb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x193fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_193fb4:
    // 0x193fb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_193fb8:
    // 0x193fb8: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x193fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
label_193fbc:
    // 0x193fbc: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x193fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_193fc0:
    // 0x193fc0: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
label_193fc4:
    if (ctx->pc == 0x193FC4u) {
        ctx->pc = 0x193FC4u;
            // 0x193fc4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x193FC8u;
        goto label_193fc8;
    }
    ctx->pc = 0x193FC0u;
    {
        const bool branch_taken_0x193fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x193fc0) {
            ctx->pc = 0x193FC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x193FC0u;
            // 0x193fc4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x193FF8u;
            goto label_193ff8;
        }
    }
    ctx->pc = 0x193FC8u;
label_193fc8:
    // 0x193fc8: 0x9083039e  lbu         $v1, 0x39E($a0)
    ctx->pc = 0x193fc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 926)));
label_193fcc:
    // 0x193fcc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x193fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_193fd0:
    // 0x193fd0: 0x24425cc0  addiu       $v0, $v0, 0x5CC0
    ctx->pc = 0x193fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23744));
label_193fd4:
    // 0x193fd4: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x193fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
label_193fd8:
    // 0x193fd8: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x193fd8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_193fdc:
    // 0x193fdc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x193fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_193fe0:
    // 0x193fe0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x193fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_193fe4:
    // 0x193fe4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x193fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_193fe8:
    // 0x193fe8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x193fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_193fec:
    // 0x193fec: 0x40f809  jalr        $v0
label_193ff0:
    if (ctx->pc == 0x193FF0u) {
        ctx->pc = 0x193FF4u;
        goto label_193ff4;
    }
    ctx->pc = 0x193FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193FF4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x193FF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x193FF4u; }
            if (ctx->pc != 0x193FF4u) { return; }
        }
        }
    }
    ctx->pc = 0x193FF4u;
label_193ff4:
    // 0x193ff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_193ff8:
    // 0x193ff8: 0x3e00008  jr          $ra
label_193ffc:
    if (ctx->pc == 0x193FFCu) {
        ctx->pc = 0x193FFCu;
            // 0x193ffc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x194000u;
        goto label_194000;
    }
    ctx->pc = 0x193FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193FF8u;
            // 0x193ffc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194000u;
label_194000:
    // 0x194000: 0x3e00008  jr          $ra
label_194004:
    if (ctx->pc == 0x194004u) {
        ctx->pc = 0x194008u;
        goto label_194008;
    }
    ctx->pc = 0x194000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194008u;
label_194008:
    // 0x194008: 0x0  nop
    ctx->pc = 0x194008u;
    // NOP
label_19400c:
    // 0x19400c: 0x0  nop
    ctx->pc = 0x19400cu;
    // NOP
label_194010:
    // 0x194010: 0x948303a4  lhu         $v1, 0x3A4($a0)
    ctx->pc = 0x194010u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 932)));
label_194014:
    // 0x194014: 0x3063fff9  andi        $v1, $v1, 0xFFF9
    ctx->pc = 0x194014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65529);
label_194018:
    // 0x194018: 0x3e00008  jr          $ra
label_19401c:
    if (ctx->pc == 0x19401Cu) {
        ctx->pc = 0x19401Cu;
            // 0x19401c: 0xa48303a4  sh          $v1, 0x3A4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 932), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x194020u;
        goto label_194020;
    }
    ctx->pc = 0x194018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19401Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194018u;
            // 0x19401c: 0xa48303a4  sh          $v1, 0x3A4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 932), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194020u;
label_194020:
    // 0x194020: 0x948303a4  lhu         $v1, 0x3A4($a0)
    ctx->pc = 0x194020u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 932)));
label_194024:
    // 0x194024: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x194024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_194028:
    // 0x194028: 0x3e00008  jr          $ra
label_19402c:
    if (ctx->pc == 0x19402Cu) {
        ctx->pc = 0x19402Cu;
            // 0x19402c: 0xa48303a4  sh          $v1, 0x3A4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 932), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x194030u;
        goto label_194030;
    }
    ctx->pc = 0x194028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19402Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194028u;
            // 0x19402c: 0xa48303a4  sh          $v1, 0x3A4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 932), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194030u;
label_194030:
    // 0x194030: 0x948303a4  lhu         $v1, 0x3A4($a0)
    ctx->pc = 0x194030u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 932)));
label_194034:
    // 0x194034: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x194034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_194038:
    // 0x194038: 0xa48303a4  sh          $v1, 0x3A4($a0)
    ctx->pc = 0x194038u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 932), (uint16_t)GPR_U32(ctx, 3));
label_19403c:
    // 0x19403c: 0x948303a4  lhu         $v1, 0x3A4($a0)
    ctx->pc = 0x19403cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 932)));
label_194040:
    // 0x194040: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x194040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
label_194044:
    // 0x194044: 0x3e00008  jr          $ra
label_194048:
    if (ctx->pc == 0x194048u) {
        ctx->pc = 0x194048u;
            // 0x194048: 0xa48303a4  sh          $v1, 0x3A4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 932), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x19404Cu;
        goto label_19404c;
    }
    ctx->pc = 0x194044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194044u;
            // 0x194048: 0xa48303a4  sh          $v1, 0x3A4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 932), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19404Cu;
label_19404c:
    // 0x19404c: 0x0  nop
    ctx->pc = 0x19404cu;
    // NOP
    ctx->pc = 0x194050u;
}
