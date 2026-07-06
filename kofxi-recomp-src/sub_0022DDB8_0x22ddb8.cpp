#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022DDB8
// Address: 0x22ddb8 - 0x22df58
void sub_0022DDB8_0x22ddb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022DDB8_0x22ddb8");
#endif

    switch (ctx->pc) {
        case 0x22ddb8u: goto label_22ddb8;
        case 0x22ddbcu: goto label_22ddbc;
        case 0x22ddc0u: goto label_22ddc0;
        case 0x22ddc4u: goto label_22ddc4;
        case 0x22ddc8u: goto label_22ddc8;
        case 0x22ddccu: goto label_22ddcc;
        case 0x22ddd0u: goto label_22ddd0;
        case 0x22ddd4u: goto label_22ddd4;
        case 0x22ddd8u: goto label_22ddd8;
        case 0x22dddcu: goto label_22dddc;
        case 0x22dde0u: goto label_22dde0;
        case 0x22dde4u: goto label_22dde4;
        case 0x22dde8u: goto label_22dde8;
        case 0x22ddecu: goto label_22ddec;
        case 0x22ddf0u: goto label_22ddf0;
        case 0x22ddf4u: goto label_22ddf4;
        case 0x22ddf8u: goto label_22ddf8;
        case 0x22ddfcu: goto label_22ddfc;
        case 0x22de00u: goto label_22de00;
        case 0x22de04u: goto label_22de04;
        case 0x22de08u: goto label_22de08;
        case 0x22de0cu: goto label_22de0c;
        case 0x22de10u: goto label_22de10;
        case 0x22de14u: goto label_22de14;
        case 0x22de18u: goto label_22de18;
        case 0x22de1cu: goto label_22de1c;
        case 0x22de20u: goto label_22de20;
        case 0x22de24u: goto label_22de24;
        case 0x22de28u: goto label_22de28;
        case 0x22de2cu: goto label_22de2c;
        case 0x22de30u: goto label_22de30;
        case 0x22de34u: goto label_22de34;
        case 0x22de38u: goto label_22de38;
        case 0x22de3cu: goto label_22de3c;
        case 0x22de40u: goto label_22de40;
        case 0x22de44u: goto label_22de44;
        case 0x22de48u: goto label_22de48;
        case 0x22de4cu: goto label_22de4c;
        case 0x22de50u: goto label_22de50;
        case 0x22de54u: goto label_22de54;
        case 0x22de58u: goto label_22de58;
        case 0x22de5cu: goto label_22de5c;
        case 0x22de60u: goto label_22de60;
        case 0x22de64u: goto label_22de64;
        case 0x22de68u: goto label_22de68;
        case 0x22de6cu: goto label_22de6c;
        case 0x22de70u: goto label_22de70;
        case 0x22de74u: goto label_22de74;
        case 0x22de78u: goto label_22de78;
        case 0x22de7cu: goto label_22de7c;
        case 0x22de80u: goto label_22de80;
        case 0x22de84u: goto label_22de84;
        case 0x22de88u: goto label_22de88;
        case 0x22de8cu: goto label_22de8c;
        case 0x22de90u: goto label_22de90;
        case 0x22de94u: goto label_22de94;
        case 0x22de98u: goto label_22de98;
        case 0x22de9cu: goto label_22de9c;
        case 0x22dea0u: goto label_22dea0;
        case 0x22dea4u: goto label_22dea4;
        case 0x22dea8u: goto label_22dea8;
        case 0x22deacu: goto label_22deac;
        case 0x22deb0u: goto label_22deb0;
        case 0x22deb4u: goto label_22deb4;
        case 0x22deb8u: goto label_22deb8;
        case 0x22debcu: goto label_22debc;
        case 0x22dec0u: goto label_22dec0;
        case 0x22dec4u: goto label_22dec4;
        case 0x22dec8u: goto label_22dec8;
        case 0x22deccu: goto label_22decc;
        case 0x22ded0u: goto label_22ded0;
        case 0x22ded4u: goto label_22ded4;
        case 0x22ded8u: goto label_22ded8;
        case 0x22dedcu: goto label_22dedc;
        case 0x22dee0u: goto label_22dee0;
        case 0x22dee4u: goto label_22dee4;
        case 0x22dee8u: goto label_22dee8;
        case 0x22deecu: goto label_22deec;
        case 0x22def0u: goto label_22def0;
        case 0x22def4u: goto label_22def4;
        case 0x22def8u: goto label_22def8;
        case 0x22defcu: goto label_22defc;
        case 0x22df00u: goto label_22df00;
        case 0x22df04u: goto label_22df04;
        case 0x22df08u: goto label_22df08;
        case 0x22df0cu: goto label_22df0c;
        case 0x22df10u: goto label_22df10;
        case 0x22df14u: goto label_22df14;
        case 0x22df18u: goto label_22df18;
        case 0x22df1cu: goto label_22df1c;
        case 0x22df20u: goto label_22df20;
        case 0x22df24u: goto label_22df24;
        case 0x22df28u: goto label_22df28;
        case 0x22df2cu: goto label_22df2c;
        case 0x22df30u: goto label_22df30;
        case 0x22df34u: goto label_22df34;
        case 0x22df38u: goto label_22df38;
        case 0x22df3cu: goto label_22df3c;
        case 0x22df40u: goto label_22df40;
        case 0x22df44u: goto label_22df44;
        case 0x22df48u: goto label_22df48;
        case 0x22df4cu: goto label_22df4c;
        case 0x22df50u: goto label_22df50;
        case 0x22df54u: goto label_22df54;
        default: break;
    }

    ctx->pc = 0x22ddb8u;

label_22ddb8:
    // 0x22ddb8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22ddb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_22ddbc:
    // 0x22ddbc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x22ddbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_22ddc0:
    // 0x22ddc0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x22ddc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_22ddc4:
    // 0x22ddc4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x22ddc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22ddc8:
    // 0x22ddc8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22ddc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_22ddcc:
    // 0x22ddcc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x22ddccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_22ddd0:
    // 0x22ddd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22ddd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22ddd4:
    // 0x22ddd4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22ddd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22ddd8:
    // 0x22ddd8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x22ddd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_22dddc:
    // 0x22dddc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22dddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22dde0:
    // 0x22dde0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22dde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_22dde4:
    // 0x22dde4: 0xc0432d4  jal         func_10CB50
label_22dde8:
    if (ctx->pc == 0x22DDE8u) {
        ctx->pc = 0x22DDE8u;
            // 0x22dde8: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->pc = 0x22DDECu;
        goto label_22ddec;
    }
    ctx->pc = 0x22DDE4u;
    SET_GPR_U32(ctx, 31, 0x22DDECu);
    ctx->pc = 0x22DDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DDE4u;
            // 0x22dde8: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CB50u;
    if (runtime->hasFunction(0x10CB50u)) {
        auto targetFn = runtime->lookupFunction(0x10CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DDECu; }
        if (ctx->pc != 0x22DDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallGetThreadIdWrapper_0x10cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DDECu; }
        if (ctx->pc != 0x22DDECu) { return; }
    }
    ctx->pc = 0x22DDECu;
label_22ddec:
    // 0x22ddec: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
label_22ddf0:
    if (ctx->pc == 0x22DDF0u) {
        ctx->pc = 0x22DDF0u;
            // 0x22ddf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DDF4u;
        goto label_22ddf4;
    }
    ctx->pc = 0x22DDECu;
    {
        const bool branch_taken_0x22ddec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DDECu;
            // 0x22ddf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ddec) {
            ctx->pc = 0x22DE08u;
            goto label_22de08;
        }
    }
    ctx->pc = 0x22DDF4u;
label_22ddf4:
    // 0x22ddf4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x22ddf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22ddf8:
    // 0x22ddf8: 0xc08a160  jal         func_228580
label_22ddfc:
    if (ctx->pc == 0x22DDFCu) {
        ctx->pc = 0x22DDFCu;
            // 0x22ddfc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DE00u;
        goto label_22de00;
    }
    ctx->pc = 0x22DDF8u;
    SET_GPR_U32(ctx, 31, 0x22DE00u);
    ctx->pc = 0x22DDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DDF8u;
            // 0x22ddfc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228580u;
    if (runtime->hasFunction(0x228580u)) {
        auto targetFn = runtime->lookupFunction(0x228580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DE00u; }
        if (ctx->pc != 0x22DE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228580_0x228580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DE00u; }
        if (ctx->pc != 0x22DE00u) { return; }
    }
    ctx->pc = 0x22DE00u;
label_22de00:
    // 0x22de00: 0x10000004  b           . + 4 + (0x4 << 2)
label_22de04:
    if (ctx->pc == 0x22DE04u) {
        ctx->pc = 0x22DE04u;
            // 0x22de04: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DE08u;
        goto label_22de08;
    }
    ctx->pc = 0x22DE00u;
    {
        const bool branch_taken_0x22de00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DE00u;
            // 0x22de04: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22de00) {
            ctx->pc = 0x22DE14u;
            goto label_22de14;
        }
    }
    ctx->pc = 0x22DE08u;
label_22de08:
    // 0x22de08: 0xc08a144  jal         func_228510
label_22de0c:
    if (ctx->pc == 0x22DE0Cu) {
        ctx->pc = 0x22DE0Cu;
            // 0x22de0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DE10u;
        goto label_22de10;
    }
    ctx->pc = 0x22DE08u;
    SET_GPR_U32(ctx, 31, 0x22DE10u);
    ctx->pc = 0x22DE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DE08u;
            // 0x22de0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228510u;
    if (runtime->hasFunction(0x228510u)) {
        auto targetFn = runtime->lookupFunction(0x228510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DE10u; }
        if (ctx->pc != 0x22DE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228510_0x228510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DE10u; }
        if (ctx->pc != 0x22DE10u) { return; }
    }
    ctx->pc = 0x22DE10u;
label_22de10:
    // 0x22de10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22de10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22de14:
    // 0x22de14: 0x12200046  beqz        $s1, . + 4 + (0x46 << 2)
label_22de18:
    if (ctx->pc == 0x22DE18u) {
        ctx->pc = 0x22DE18u;
            // 0x22de18: 0x2402007b  addiu       $v0, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->pc = 0x22DE1Cu;
        goto label_22de1c;
    }
    ctx->pc = 0x22DE14u;
    {
        const bool branch_taken_0x22de14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DE14u;
            // 0x22de18: 0x2402007b  addiu       $v0, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22de14) {
            ctx->pc = 0x22DF30u;
            goto label_22df30;
        }
    }
    ctx->pc = 0x22DE1Cu;
label_22de1c:
    // 0x22de1c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x22de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_22de20:
    // 0x22de20: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_22de24:
    if (ctx->pc == 0x22DE24u) {
        ctx->pc = 0x22DE24u;
            // 0x22de24: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x22DE28u;
        goto label_22de28;
    }
    ctx->pc = 0x22DE20u;
    {
        const bool branch_taken_0x22de20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22de20) {
            ctx->pc = 0x22DE24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22DE20u;
            // 0x22de24: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22DE30u;
            goto label_22de30;
        }
    }
    ctx->pc = 0x22DE28u;
label_22de28:
    // 0x22de28: 0x10000041  b           . + 4 + (0x41 << 2)
label_22de2c:
    if (ctx->pc == 0x22DE2Cu) {
        ctx->pc = 0x22DE2Cu;
            // 0x22de2c: 0x2402007b  addiu       $v0, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->pc = 0x22DE30u;
        goto label_22de30;
    }
    ctx->pc = 0x22DE28u;
    {
        const bool branch_taken_0x22de28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DE28u;
            // 0x22de2c: 0x2402007b  addiu       $v0, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22de28) {
            ctx->pc = 0x22DF30u;
            goto label_22df30;
        }
    }
    ctx->pc = 0x22DE30u;
label_22de30:
    // 0x22de30: 0x1452003f  bne         $v0, $s2, . + 4 + (0x3F << 2)
label_22de34:
    if (ctx->pc == 0x22DE34u) {
        ctx->pc = 0x22DE34u;
            // 0x22de34: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->pc = 0x22DE38u;
        goto label_22de38;
    }
    ctx->pc = 0x22DE30u;
    {
        const bool branch_taken_0x22de30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x22DE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DE30u;
            // 0x22de34: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22de30) {
            ctx->pc = 0x22DF30u;
            goto label_22df30;
        }
    }
    ctx->pc = 0x22DE38u;
label_22de38:
    // 0x22de38: 0xc08c682  jal         func_231A08
label_22de3c:
    if (ctx->pc == 0x22DE3Cu) {
        ctx->pc = 0x22DE40u;
        goto label_22de40;
    }
    ctx->pc = 0x22DE38u;
    SET_GPR_U32(ctx, 31, 0x22DE40u);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DE40u; }
        if (ctx->pc != 0x22DE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DE40u; }
        if (ctx->pc != 0x22DE40u) { return; }
    }
    ctx->pc = 0x22DE40u;
label_22de40:
    // 0x22de40: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22de40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22de44:
    // 0x22de44: 0xc098552  jal         func_261548
label_22de48:
    if (ctx->pc == 0x22DE48u) {
        ctx->pc = 0x22DE48u;
            // 0x22de48: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->pc = 0x22DE4Cu;
        goto label_22de4c;
    }
    ctx->pc = 0x22DE44u;
    SET_GPR_U32(ctx, 31, 0x22DE4Cu);
    ctx->pc = 0x22DE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DE44u;
            // 0x22de48: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DE4Cu; }
        if (ctx->pc != 0x22DE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DE4Cu; }
        if (ctx->pc != 0x22DE4Cu) { return; }
    }
    ctx->pc = 0x22DE4Cu;
label_22de4c:
    // 0x22de4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22de4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22de50:
    // 0x22de50: 0x12000034  beqz        $s0, . + 4 + (0x34 << 2)
label_22de54:
    if (ctx->pc == 0x22DE54u) {
        ctx->pc = 0x22DE54u;
            // 0x22de54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DE58u;
        goto label_22de58;
    }
    ctx->pc = 0x22DE50u;
    {
        const bool branch_taken_0x22de50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DE50u;
            // 0x22de54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22de50) {
            ctx->pc = 0x22DF24u;
            goto label_22df24;
        }
    }
    ctx->pc = 0x22DE58u;
label_22de58:
    // 0x22de58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22de58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22de5c:
    // 0x22de5c: 0xc049cb6  jal         func_1272D8
label_22de60:
    if (ctx->pc == 0x22DE60u) {
        ctx->pc = 0x22DE60u;
            // 0x22de60: 0x240600e0  addiu       $a2, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->pc = 0x22DE64u;
        goto label_22de64;
    }
    ctx->pc = 0x22DE5Cu;
    SET_GPR_U32(ctx, 31, 0x22DE64u);
    ctx->pc = 0x22DE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DE5Cu;
            // 0x22de60: 0x240600e0  addiu       $a2, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DE64u; }
        if (ctx->pc != 0x22DE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DE64u; }
        if (ctx->pc != 0x22DE64u) { return; }
    }
    ctx->pc = 0x22DE64u;
label_22de64:
    // 0x22de64: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x22de64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_22de68:
    // 0x22de68: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x22de68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_22de6c:
    // 0x22de6c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x22de6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_22de70:
    // 0x22de70: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x22de70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_22de74:
    // 0x22de74: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x22de74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_22de78:
    // 0x22de78: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x22de78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_22de7c:
    // 0x22de7c: 0xa6120000  sh          $s2, 0x0($s0)
    ctx->pc = 0x22de7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 18));
label_22de80:
    // 0x22de80: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x22de80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_22de84:
    // 0x22de84: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x22de84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
label_22de88:
    // 0x22de88: 0x2442e568  addiu       $v0, $v0, -0x1A98
    ctx->pc = 0x22de88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960488));
label_22de8c:
    // 0x22de8c: 0x2463ec70  addiu       $v1, $v1, -0x1390
    ctx->pc = 0x22de8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962288));
label_22de90:
    // 0x22de90: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x22de90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_22de94:
    // 0x22de94: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x22de94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_22de98:
    // 0x22de98: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x22de98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_22de9c:
    // 0x22de9c: 0xae0400cc  sw          $a0, 0xCC($s0)
    ctx->pc = 0x22de9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 4));
label_22dea0:
    // 0x22dea0: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x22dea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_22dea4:
    // 0x22dea4: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x22dea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_22dea8:
    // 0x22dea8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x22dea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_22deac:
    // 0x22deac: 0x2484fa18  addiu       $a0, $a0, -0x5E8
    ctx->pc = 0x22deacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965784));
label_22deb0:
    // 0x22deb0: 0x260500d0  addiu       $a1, $s0, 0xD0
    ctx->pc = 0x22deb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_22deb4:
    // 0x22deb4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x22deb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_22deb8:
    // 0x22deb8: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x22deb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
label_22debc:
    // 0x22debc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x22debcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_22dec0:
    // 0x22dec0: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x22dec0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_22dec4:
    // 0x22dec4: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x22dec4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_22dec8:
    // 0x22dec8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x22dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_22decc:
    // 0x22decc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22deccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ded0:
    // 0x22ded0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22ded0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ded4:
    // 0x22ded4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x22ded4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22ded8:
    // 0x22ded8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ded8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22dedc:
    // 0x22dedc: 0x40f809  jalr        $v0
label_22dee0:
    if (ctx->pc == 0x22DEE0u) {
        ctx->pc = 0x22DEE0u;
            // 0x22dee0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DEE4u;
        goto label_22dee4;
    }
    ctx->pc = 0x22DEDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22DEE4u);
        ctx->pc = 0x22DEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DEDCu;
            // 0x22dee0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22DEE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22DEE4u; }
            if (ctx->pc != 0x22DEE4u) { return; }
        }
        }
    }
    ctx->pc = 0x22DEE4u;
label_22dee4:
    // 0x22dee4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22dee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22dee8:
    // 0x22dee8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_22deec:
    if (ctx->pc == 0x22DEECu) {
        ctx->pc = 0x22DEECu;
            // 0x22deec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DEF0u;
        goto label_22def0;
    }
    ctx->pc = 0x22DEE8u;
    {
        const bool branch_taken_0x22dee8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DEE8u;
            // 0x22deec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dee8) {
            ctx->pc = 0x22DF10u;
            goto label_22df10;
        }
    }
    ctx->pc = 0x22DEF0u;
label_22def0:
    // 0x22def0: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x22def0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_22def4:
    // 0x22def4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x22def4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_22def8:
    // 0x22def8: 0xc08b822  jal         func_22E088
label_22defc:
    if (ctx->pc == 0x22DEFCu) {
        ctx->pc = 0x22DEFCu;
            // 0x22defc: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x22DF00u;
        goto label_22df00;
    }
    ctx->pc = 0x22DEF8u;
    SET_GPR_U32(ctx, 31, 0x22DF00u);
    ctx->pc = 0x22DEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DEF8u;
            // 0x22defc: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E088u;
    if (runtime->hasFunction(0x22E088u)) {
        auto targetFn = runtime->lookupFunction(0x22E088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DF00u; }
        if (ctx->pc != 0x22DF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E088_0x22e088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DF00u; }
        if (ctx->pc != 0x22DF00u) { return; }
    }
    ctx->pc = 0x22DF00u;
label_22df00:
    // 0x22df00: 0xc08c698  jal         func_231A60
label_22df04:
    if (ctx->pc == 0x22DF04u) {
        ctx->pc = 0x22DF04u;
            // 0x22df04: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DF08u;
        goto label_22df08;
    }
    ctx->pc = 0x22DF00u;
    SET_GPR_U32(ctx, 31, 0x22DF08u);
    ctx->pc = 0x22DF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DF00u;
            // 0x22df04: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DF08u; }
        if (ctx->pc != 0x22DF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DF08u; }
        if (ctx->pc != 0x22DF08u) { return; }
    }
    ctx->pc = 0x22DF08u;
label_22df08:
    // 0x22df08: 0x10000009  b           . + 4 + (0x9 << 2)
label_22df0c:
    if (ctx->pc == 0x22DF0Cu) {
        ctx->pc = 0x22DF0Cu;
            // 0x22df0c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DF10u;
        goto label_22df10;
    }
    ctx->pc = 0x22DF08u;
    {
        const bool branch_taken_0x22df08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DF08u;
            // 0x22df0c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22df08) {
            ctx->pc = 0x22DF30u;
            goto label_22df30;
        }
    }
    ctx->pc = 0x22DF10u;
label_22df10:
    // 0x22df10: 0xc08c698  jal         func_231A60
label_22df14:
    if (ctx->pc == 0x22DF14u) {
        ctx->pc = 0x22DF14u;
            // 0x22df14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DF18u;
        goto label_22df18;
    }
    ctx->pc = 0x22DF10u;
    SET_GPR_U32(ctx, 31, 0x22DF18u);
    ctx->pc = 0x22DF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DF10u;
            // 0x22df14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DF18u; }
        if (ctx->pc != 0x22DF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DF18u; }
        if (ctx->pc != 0x22DF18u) { return; }
    }
    ctx->pc = 0x22DF18u;
label_22df18:
    // 0x22df18: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x22df18u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
label_22df1c:
    // 0x22df1c: 0x10000004  b           . + 4 + (0x4 << 2)
label_22df20:
    if (ctx->pc == 0x22DF20u) {
        ctx->pc = 0x22DF20u;
            // 0x22df20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DF24u;
        goto label_22df24;
    }
    ctx->pc = 0x22DF1Cu;
    {
        const bool branch_taken_0x22df1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DF1Cu;
            // 0x22df20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22df1c) {
            ctx->pc = 0x22DF30u;
            goto label_22df30;
        }
    }
    ctx->pc = 0x22DF24u;
label_22df24:
    // 0x22df24: 0xc08c698  jal         func_231A60
label_22df28:
    if (ctx->pc == 0x22DF28u) {
        ctx->pc = 0x22DF28u;
            // 0x22df28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DF2Cu;
        goto label_22df2c;
    }
    ctx->pc = 0x22DF24u;
    SET_GPR_U32(ctx, 31, 0x22DF2Cu);
    ctx->pc = 0x22DF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DF24u;
            // 0x22df28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DF2Cu; }
        if (ctx->pc != 0x22DF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DF2Cu; }
        if (ctx->pc != 0x22DF2Cu) { return; }
    }
    ctx->pc = 0x22DF2Cu;
label_22df2c:
    // 0x22df2c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x22df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_22df30:
    // 0x22df30: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x22df30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_22df34:
    // 0x22df34: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x22df34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_22df38:
    // 0x22df38: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22df38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22df3c:
    // 0x22df3c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22df3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22df40:
    // 0x22df40: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22df40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22df44:
    // 0x22df44: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22df44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22df48:
    // 0x22df48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22df48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22df4c:
    // 0x22df4c: 0x3e00008  jr          $ra
label_22df50:
    if (ctx->pc == 0x22DF50u) {
        ctx->pc = 0x22DF50u;
            // 0x22df50: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x22DF54u;
        goto label_22df54;
    }
    ctx->pc = 0x22DF4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DF4Cu;
            // 0x22df50: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22DF54u;
label_22df54:
    // 0x22df54: 0x0  nop
    ctx->pc = 0x22df54u;
    // NOP
    ctx->pc = 0x22df58u;
}
