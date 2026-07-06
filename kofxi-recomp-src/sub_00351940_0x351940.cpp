#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00351940
// Address: 0x351940 - 0x351c80
void sub_00351940_0x351940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351940_0x351940");
#endif

    switch (ctx->pc) {
        case 0x351954u: goto label_351954;
        case 0x351960u: goto label_351960;
        case 0x351970u: goto label_351970;
        case 0x351980u: goto label_351980;
        case 0x351998u: goto label_351998;
        case 0x3519acu: goto label_3519ac;
        case 0x3519c0u: goto label_3519c0;
        case 0x3519d0u: goto label_3519d0;
        case 0x3519e4u: goto label_3519e4;
        case 0x351a30u: goto label_351a30;
        case 0x351a40u: goto label_351a40;
        case 0x351a70u: goto label_351a70;
        case 0x351a78u: goto label_351a78;
        case 0x351a88u: goto label_351a88;
        case 0x351a90u: goto label_351a90;
        case 0x351a98u: goto label_351a98;
        case 0x351aacu: goto label_351aac;
        case 0x351ad0u: goto label_351ad0;
        case 0x351ae4u: goto label_351ae4;
        case 0x351af8u: goto label_351af8;
        case 0x351b0cu: goto label_351b0c;
        case 0x351b28u: goto label_351b28;
        case 0x351b50u: goto label_351b50;
        case 0x351b64u: goto label_351b64;
        case 0x351b8cu: goto label_351b8c;
        case 0x351b94u: goto label_351b94;
        case 0x351ba0u: goto label_351ba0;
        case 0x351bb0u: goto label_351bb0;
        case 0x351bccu: goto label_351bcc;
        case 0x351bf0u: goto label_351bf0;
        case 0x351c14u: goto label_351c14;
        case 0x351c3cu: goto label_351c3c;
        case 0x351c74u: goto label_351c74;
        default: break;
    }

    ctx->pc = 0x351940u;

    // 0x351940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x351940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x351944: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x351944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x351948: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x351948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35194c: 0xc0d4360  jal         func_350D80
    ctx->pc = 0x35194Cu;
    SET_GPR_U32(ctx, 31, 0x351954u);
    ctx->pc = 0x351950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35194Cu;
            // 0x351950: 0xac44be80  sw          $a0, -0x4180($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350D80u;
    if (runtime->hasFunction(0x350D80u)) {
        auto targetFn = runtime->lookupFunction(0x350D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351954u; }
        if (ctx->pc != 0x351954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350D80_0x350d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351954u; }
        if (ctx->pc != 0x351954u) { return; }
    }
    ctx->pc = 0x351954u;
label_351954:
    // 0x351954: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x351954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x351958: 0xc082674  jal         func_2099D0
    ctx->pc = 0x351958u;
    SET_GPR_U32(ctx, 31, 0x351960u);
    ctx->pc = 0x35195Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351958u;
            // 0x35195c: 0x24841970  addiu       $a0, $a0, 0x1970 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351960u; }
        if (ctx->pc != 0x351960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351960u; }
        if (ctx->pc != 0x351960u) { return; }
    }
    ctx->pc = 0x351960u;
label_351960:
    // 0x351960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x351960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x351964: 0x3e00008  jr          $ra
    ctx->pc = 0x351964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351964u;
            // 0x351968: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35196Cu;
    // 0x35196c: 0x0  nop
    ctx->pc = 0x35196cu;
    // NOP
label_351970:
    // 0x351970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x351970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x351974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x351974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x351978: 0xc0d4370  jal         func_350DC0
    ctx->pc = 0x351978u;
    SET_GPR_U32(ctx, 31, 0x351980u);
    ctx->pc = 0x350DC0u;
    if (runtime->hasFunction(0x350DC0u)) {
        auto targetFn = runtime->lookupFunction(0x350DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351980u; }
        if (ctx->pc != 0x351980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350DC0_0x350dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351980u; }
        if (ctx->pc != 0x351980u) { return; }
    }
    ctx->pc = 0x351980u;
label_351980:
    // 0x351980: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x351980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351984: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x351984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x351988: 0x904294a0  lbu         $v0, -0x6B60($v0)
    ctx->pc = 0x351988u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939808)));
    // 0x35198c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35198cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x351990: 0xc0bb518  jal         func_2ED460
    ctx->pc = 0x351990u;
    SET_GPR_U32(ctx, 31, 0x351998u);
    ctx->pc = 0x351994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351990u;
            // 0x351994: 0xa3a2001c  sb          $v0, 0x1C($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED460u;
    if (runtime->hasFunction(0x2ED460u)) {
        auto targetFn = runtime->lookupFunction(0x2ED460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351998u; }
        if (ctx->pc != 0x351998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED460_0x2ed460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351998u; }
        if (ctx->pc != 0x351998u) { return; }
    }
    ctx->pc = 0x351998u;
label_351998:
    // 0x351998: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x351998u;
    {
        const bool branch_taken_0x351998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x351998) {
            ctx->pc = 0x35199Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x351998u;
            // 0x35199c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3519B0u;
            goto label_3519b0;
        }
    }
    ctx->pc = 0x3519A0u;
    // 0x3519a0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3519a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x3519a4: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3519A4u;
    SET_GPR_U32(ctx, 31, 0x3519ACu);
    ctx->pc = 0x3519A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3519A4u;
            // 0x3519a8: 0x248419c0  addiu       $a0, $a0, 0x19C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3519ACu; }
        if (ctx->pc != 0x3519ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3519ACu; }
        if (ctx->pc != 0x3519ACu) { return; }
    }
    ctx->pc = 0x3519ACu;
label_3519ac:
    // 0x3519ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3519acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3519b0:
    // 0x3519b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3519B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3519B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3519B0u;
            // 0x3519b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3519B8u;
    // 0x3519b8: 0x0  nop
    ctx->pc = 0x3519b8u;
    // NOP
    // 0x3519bc: 0x0  nop
    ctx->pc = 0x3519bcu;
    // NOP
label_3519c0:
    // 0x3519c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3519c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3519c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3519c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3519c8: 0xc0d4370  jal         func_350DC0
    ctx->pc = 0x3519C8u;
    SET_GPR_U32(ctx, 31, 0x3519D0u);
    ctx->pc = 0x350DC0u;
    if (runtime->hasFunction(0x350DC0u)) {
        auto targetFn = runtime->lookupFunction(0x350DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3519D0u; }
        if (ctx->pc != 0x3519D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350DC0_0x350dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3519D0u; }
        if (ctx->pc != 0x3519D0u) { return; }
    }
    ctx->pc = 0x3519D0u;
label_3519d0:
    // 0x3519d0: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x3519d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x3519d4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3519d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3519d8: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x3519d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x3519dc: 0xc0bb4bc  jal         func_2ED2F0
    ctx->pc = 0x3519DCu;
    SET_GPR_U32(ctx, 31, 0x3519E4u);
    ctx->pc = 0x3519E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3519DCu;
            // 0x3519e0: 0x27a7001f  addiu       $a3, $sp, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED2F0u;
    if (runtime->hasFunction(0x2ED2F0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3519E4u; }
        if (ctx->pc != 0x3519E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED2F0_0x2ed2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3519E4u; }
        if (ctx->pc != 0x3519E4u) { return; }
    }
    ctx->pc = 0x3519E4u;
label_3519e4:
    // 0x3519e4: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x3519E4u;
    {
        const bool branch_taken_0x3519e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3519e4) {
            ctx->pc = 0x3519E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3519E4u;
            // 0x3519e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x351A34u;
            goto label_351a34;
        }
    }
    ctx->pc = 0x3519ECu;
    // 0x3519ec: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x3519ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x3519f0: 0x93a4001f  lbu         $a0, 0x1F($sp)
    ctx->pc = 0x3519f0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 31)));
    // 0x3519f4: 0x90639490  lbu         $v1, -0x6B70($v1)
    ctx->pc = 0x3519f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294939792)));
    // 0x3519f8: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3519F8u;
    {
        const bool branch_taken_0x3519f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3519f8) {
            ctx->pc = 0x351A30u;
            goto label_351a30;
        }
    }
    ctx->pc = 0x351A00u;
    // 0x351a00: 0x93a30018  lbu         $v1, 0x18($sp)
    ctx->pc = 0x351a00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x351a04: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x351a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351a08: 0x28610063  slti        $at, $v1, 0x63
    ctx->pc = 0x351a08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)99) ? 1 : 0);
    // 0x351a0c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x351A0Cu;
    {
        const bool branch_taken_0x351a0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x351A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351A0Cu;
            // 0x351a10: 0xa0439498  sb          $v1, -0x6B68($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294939800), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351a0c) {
            ctx->pc = 0x351A24u;
            goto label_351a24;
        }
    }
    ctx->pc = 0x351A14u;
    // 0x351a14: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x351a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x351a18: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x351a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351a1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x351a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x351a20: 0xa0439498  sb          $v1, -0x6B68($v0)
    ctx->pc = 0x351a20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294939800), (uint8_t)GPR_U32(ctx, 3));
label_351a24:
    // 0x351a24: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x351a24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x351a28: 0xc082674  jal         func_2099D0
    ctx->pc = 0x351A28u;
    SET_GPR_U32(ctx, 31, 0x351A30u);
    ctx->pc = 0x351A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351A28u;
            // 0x351a2c: 0x24841a40  addiu       $a0, $a0, 0x1A40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351A30u; }
        if (ctx->pc != 0x351A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351A30u; }
        if (ctx->pc != 0x351A30u) { return; }
    }
    ctx->pc = 0x351A30u;
label_351a30:
    // 0x351a30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x351a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_351a34:
    // 0x351a34: 0x3e00008  jr          $ra
    ctx->pc = 0x351A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351A34u;
            // 0x351a38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x351A3Cu;
    // 0x351a3c: 0x0  nop
    ctx->pc = 0x351a3cu;
    // NOP
label_351a40:
    // 0x351a40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x351a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x351a44: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x351a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x351a48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x351a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x351a4c: 0x24041c20  addiu       $a0, $zero, 0x1C20
    ctx->pc = 0x351a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7200));
    // 0x351a50: 0xa440be90  sh          $zero, -0x4170($v0)
    ctx->pc = 0x351a50u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 0));
    // 0x351a54: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x351a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351a58: 0x90439490  lbu         $v1, -0x6B70($v0)
    ctx->pc = 0x351a58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939792)));
    // 0x351a5c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x351a5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x351a60: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x351a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351a64: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x351a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x351a68: 0xc0bb6fa  jal         func_2EDBE8
    ctx->pc = 0x351A68u;
    SET_GPR_U32(ctx, 31, 0x351A70u);
    ctx->pc = 0x351A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351A68u;
            // 0x351a6c: 0xa0439488  sb          $v1, -0x6B78($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294939784), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EDBE8u;
    if (runtime->hasFunction(0x2EDBE8u)) {
        auto targetFn = runtime->lookupFunction(0x2EDBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351A70u; }
        if (ctx->pc != 0x351A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EDBE8_0x2edbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351A70u; }
        if (ctx->pc != 0x351A70u) { return; }
    }
    ctx->pc = 0x351A70u;
label_351a70:
    // 0x351a70: 0xc0bb6f6  jal         func_2EDBD8
    ctx->pc = 0x351A70u;
    SET_GPR_U32(ctx, 31, 0x351A78u);
    ctx->pc = 0x2EDBD8u;
    if (runtime->hasFunction(0x2EDBD8u)) {
        auto targetFn = runtime->lookupFunction(0x2EDBD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351A78u; }
        if (ctx->pc != 0x351A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EDBD8_0x2edbd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351A78u; }
        if (ctx->pc != 0x351A78u) { return; }
    }
    ctx->pc = 0x351A78u;
label_351a78:
    // 0x351a78: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x351a78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x351a7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x351a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351a80: 0xc043e52  jal         func_10F948
    ctx->pc = 0x351A80u;
    SET_GPR_U32(ctx, 31, 0x351A88u);
    ctx->pc = 0x351A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351A80u;
            // 0x351a84: 0x248454a8  addiu       $a0, $a0, 0x54A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351A88u; }
        if (ctx->pc != 0x351A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351A88u; }
        if (ctx->pc != 0x351A88u) { return; }
    }
    ctx->pc = 0x351A88u;
label_351a88:
    // 0x351a88: 0xc0bb6e6  jal         func_2EDB98
    ctx->pc = 0x351A88u;
    SET_GPR_U32(ctx, 31, 0x351A90u);
    ctx->pc = 0x351A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351A88u;
            // 0x351a8c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EDB98u;
    if (runtime->hasFunction(0x2EDB98u)) {
        auto targetFn = runtime->lookupFunction(0x2EDB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351A90u; }
        if (ctx->pc != 0x351A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EDB98_0x2edb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351A90u; }
        if (ctx->pc != 0x351A90u) { return; }
    }
    ctx->pc = 0x351A90u;
label_351a90:
    // 0x351a90: 0xc069228  jal         func_1A48A0
    ctx->pc = 0x351A90u;
    SET_GPR_U32(ctx, 31, 0x351A98u);
    ctx->pc = 0x1A48A0u;
    if (runtime->hasFunction(0x1A48A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A48A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351A98u; }
        if (ctx->pc != 0x351A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A48A0_0x1a48a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351A98u; }
        if (ctx->pc != 0x351A98u) { return; }
    }
    ctx->pc = 0x351A98u;
label_351a98:
    // 0x351a98: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x351a98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x351a9c: 0x3c05009f  lui         $a1, 0x9F
    ctx->pc = 0x351a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)159 << 16));
    // 0x351aa0: 0x24849530  addiu       $a0, $a0, -0x6AD0
    ctx->pc = 0x351aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939952));
    // 0x351aa4: 0xc0835b0  jal         func_20D6C0
    ctx->pc = 0x351AA4u;
    SET_GPR_U32(ctx, 31, 0x351AACu);
    ctx->pc = 0x351AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351AA4u;
            // 0x351aa8: 0x24a59570  addiu       $a1, $a1, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D6C0u;
    if (runtime->hasFunction(0x20D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x20D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351AACu; }
        if (ctx->pc != 0x351AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D6C0_0x20d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351AACu; }
        if (ctx->pc != 0x351AACu) { return; }
    }
    ctx->pc = 0x351AACu;
label_351aac:
    // 0x351aac: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x351aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x351ab0: 0x8c42dd90  lw          $v0, -0x2270($v0)
    ctx->pc = 0x351ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958480)));
    // 0x351ab4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x351AB4u;
    {
        const bool branch_taken_0x351ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x351ab4) {
            ctx->pc = 0x351B14u;
            goto label_351b14;
        }
    }
    ctx->pc = 0x351ABCu;
    // 0x351abc: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x351abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x351ac0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x351ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x351ac4: 0x248494d0  addiu       $a0, $a0, -0x6B30
    ctx->pc = 0x351ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939856));
    // 0x351ac8: 0xc0835b0  jal         func_20D6C0
    ctx->pc = 0x351AC8u;
    SET_GPR_U32(ctx, 31, 0x351AD0u);
    ctx->pc = 0x351ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351AC8u;
            // 0x351acc: 0x24a554b8  addiu       $a1, $a1, 0x54B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D6C0u;
    if (runtime->hasFunction(0x20D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x20D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351AD0u; }
        if (ctx->pc != 0x351AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D6C0_0x20d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351AD0u; }
        if (ctx->pc != 0x351AD0u) { return; }
    }
    ctx->pc = 0x351AD0u;
label_351ad0:
    // 0x351ad0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x351ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351ad4: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x351ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x351ad8: 0x904594f8  lbu         $a1, -0x6B08($v0)
    ctx->pc = 0x351ad8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939896)));
    // 0x351adc: 0xc083614  jal         func_20D850
    ctx->pc = 0x351ADCu;
    SET_GPR_U32(ctx, 31, 0x351AE4u);
    ctx->pc = 0x351AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351ADCu;
            // 0x351ae0: 0x248494d4  addiu       $a0, $a0, -0x6B2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939860));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D850u;
    if (runtime->hasFunction(0x20D850u)) {
        auto targetFn = runtime->lookupFunction(0x20D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351AE4u; }
        if (ctx->pc != 0x351AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D850_0x20d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351AE4u; }
        if (ctx->pc != 0x351AE4u) { return; }
    }
    ctx->pc = 0x351AE4u;
label_351ae4:
    // 0x351ae4: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x351ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x351ae8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x351ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x351aec: 0x248494b0  addiu       $a0, $a0, -0x6B50
    ctx->pc = 0x351aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939824));
    // 0x351af0: 0xc0835b0  jal         func_20D6C0
    ctx->pc = 0x351AF0u;
    SET_GPR_U32(ctx, 31, 0x351AF8u);
    ctx->pc = 0x351AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351AF0u;
            // 0x351af4: 0x24a554b8  addiu       $a1, $a1, 0x54B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D6C0u;
    if (runtime->hasFunction(0x20D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x20D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351AF8u; }
        if (ctx->pc != 0x351AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D6C0_0x20d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351AF8u; }
        if (ctx->pc != 0x351AF8u) { return; }
    }
    ctx->pc = 0x351AF8u;
label_351af8:
    // 0x351af8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x351af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351afc: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x351afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x351b00: 0x90459500  lbu         $a1, -0x6B00($v0)
    ctx->pc = 0x351b00u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939904)));
    // 0x351b04: 0xc083614  jal         func_20D850
    ctx->pc = 0x351B04u;
    SET_GPR_U32(ctx, 31, 0x351B0Cu);
    ctx->pc = 0x351B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351B04u;
            // 0x351b08: 0x248494b4  addiu       $a0, $a0, -0x6B4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939828));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D850u;
    if (runtime->hasFunction(0x20D850u)) {
        auto targetFn = runtime->lookupFunction(0x20D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351B0Cu; }
        if (ctx->pc != 0x351B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D850_0x20d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351B0Cu; }
        if (ctx->pc != 0x351B0Cu) { return; }
    }
    ctx->pc = 0x351B0Cu;
label_351b0c:
    // 0x351b0c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x351B0Cu;
    {
        const bool branch_taken_0x351b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351b0c) {
            ctx->pc = 0x351B8Cu;
            goto label_351b8c;
        }
    }
    ctx->pc = 0x351B14u;
label_351b14:
    // 0x351b14: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x351b14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x351b18: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x351b18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x351b1c: 0x248494d0  addiu       $a0, $a0, -0x6B30
    ctx->pc = 0x351b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939856));
    // 0x351b20: 0xc0835b0  jal         func_20D6C0
    ctx->pc = 0x351B20u;
    SET_GPR_U32(ctx, 31, 0x351B28u);
    ctx->pc = 0x351B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351B20u;
            // 0x351b24: 0x24a554c0  addiu       $a1, $a1, 0x54C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D6C0u;
    if (runtime->hasFunction(0x20D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x20D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351B28u; }
        if (ctx->pc != 0x351B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D6C0_0x20d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351B28u; }
        if (ctx->pc != 0x351B28u) { return; }
    }
    ctx->pc = 0x351B28u;
label_351b28:
    // 0x351b28: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x351b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351b2c: 0x904594f0  lbu         $a1, -0x6B10($v0)
    ctx->pc = 0x351b2cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939888)));
    // 0x351b30: 0x18a00007  blez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x351B30u;
    {
        const bool branch_taken_0x351b30 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x351b30) {
            ctx->pc = 0x351B50u;
            goto label_351b50;
        }
    }
    ctx->pc = 0x351B38u;
    // 0x351b38: 0x28a10064  slti        $at, $a1, 0x64
    ctx->pc = 0x351b38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x351b3c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x351B3Cu;
    {
        const bool branch_taken_0x351b3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x351b3c) {
            ctx->pc = 0x351B50u;
            goto label_351b50;
        }
    }
    ctx->pc = 0x351B44u;
    // 0x351b44: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x351b44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x351b48: 0xc083614  jal         func_20D850
    ctx->pc = 0x351B48u;
    SET_GPR_U32(ctx, 31, 0x351B50u);
    ctx->pc = 0x351B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351B48u;
            // 0x351b4c: 0x248494d4  addiu       $a0, $a0, -0x6B2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939860));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D850u;
    if (runtime->hasFunction(0x20D850u)) {
        auto targetFn = runtime->lookupFunction(0x20D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351B50u; }
        if (ctx->pc != 0x351B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D850_0x20d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351B50u; }
        if (ctx->pc != 0x351B50u) { return; }
    }
    ctx->pc = 0x351B50u;
label_351b50:
    // 0x351b50: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x351b50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x351b54: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x351b54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x351b58: 0x248494b0  addiu       $a0, $a0, -0x6B50
    ctx->pc = 0x351b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939824));
    // 0x351b5c: 0xc0835b0  jal         func_20D6C0
    ctx->pc = 0x351B5Cu;
    SET_GPR_U32(ctx, 31, 0x351B64u);
    ctx->pc = 0x351B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351B5Cu;
            // 0x351b60: 0x24a554c0  addiu       $a1, $a1, 0x54C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D6C0u;
    if (runtime->hasFunction(0x20D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x20D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351B64u; }
        if (ctx->pc != 0x351B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D6C0_0x20d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351B64u; }
        if (ctx->pc != 0x351B64u) { return; }
    }
    ctx->pc = 0x351B64u;
label_351b64:
    // 0x351b64: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x351b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351b68: 0x90459500  lbu         $a1, -0x6B00($v0)
    ctx->pc = 0x351b68u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939904)));
    // 0x351b6c: 0x18a00007  blez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x351B6Cu;
    {
        const bool branch_taken_0x351b6c = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x351b6c) {
            ctx->pc = 0x351B8Cu;
            goto label_351b8c;
        }
    }
    ctx->pc = 0x351B74u;
    // 0x351b74: 0x28a10064  slti        $at, $a1, 0x64
    ctx->pc = 0x351b74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x351b78: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x351B78u;
    {
        const bool branch_taken_0x351b78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x351b78) {
            ctx->pc = 0x351B8Cu;
            goto label_351b8c;
        }
    }
    ctx->pc = 0x351B80u;
    // 0x351b80: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x351b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x351b84: 0xc083614  jal         func_20D850
    ctx->pc = 0x351B84u;
    SET_GPR_U32(ctx, 31, 0x351B8Cu);
    ctx->pc = 0x351B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351B84u;
            // 0x351b88: 0x248494b4  addiu       $a0, $a0, -0x6B4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939828));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D850u;
    if (runtime->hasFunction(0x20D850u)) {
        auto targetFn = runtime->lookupFunction(0x20D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351B8Cu; }
        if (ctx->pc != 0x351B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D850_0x20d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351B8Cu; }
        if (ctx->pc != 0x351B8Cu) { return; }
    }
    ctx->pc = 0x351B8Cu;
label_351b8c:
    // 0x351b8c: 0xc0bb10c  jal         func_2EC430
    ctx->pc = 0x351B8Cu;
    SET_GPR_U32(ctx, 31, 0x351B94u);
    ctx->pc = 0x2EC430u;
    if (runtime->hasFunction(0x2EC430u)) {
        auto targetFn = runtime->lookupFunction(0x2EC430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351B94u; }
        if (ctx->pc != 0x351B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC430_0x2ec430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351B94u; }
        if (ctx->pc != 0x351B94u) { return; }
    }
    ctx->pc = 0x351B94u;
label_351b94:
    // 0x351b94: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x351b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x351b98: 0xc082674  jal         func_2099D0
    ctx->pc = 0x351B98u;
    SET_GPR_U32(ctx, 31, 0x351BA0u);
    ctx->pc = 0x351B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351B98u;
            // 0x351b9c: 0x24841bb0  addiu       $a0, $a0, 0x1BB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351BA0u; }
        if (ctx->pc != 0x351BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351BA0u; }
        if (ctx->pc != 0x351BA0u) { return; }
    }
    ctx->pc = 0x351BA0u;
label_351ba0:
    // 0x351ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x351ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x351ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x351BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351BA4u;
            // 0x351ba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x351BACu;
    // 0x351bac: 0x0  nop
    ctx->pc = 0x351bacu;
    // NOP
label_351bb0:
    // 0x351bb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x351bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x351bb4: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x351bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x351bb8: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x351bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x351bbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x351bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x351bc0: 0x2484fe60  addiu       $a0, $a0, -0x1A0
    ctx->pc = 0x351bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966880));
    // 0x351bc4: 0xc0bb690  jal         func_2EDA40
    ctx->pc = 0x351BC4u;
    SET_GPR_U32(ctx, 31, 0x351BCCu);
    ctx->pc = 0x351BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351BC4u;
            // 0x351bc8: 0x24a5fe58  addiu       $a1, $a1, -0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EDA40u;
    if (runtime->hasFunction(0x2EDA40u)) {
        auto targetFn = runtime->lookupFunction(0x2EDA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351BCCu; }
        if (ctx->pc != 0x351BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EDA40_0x2eda40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351BCCu; }
        if (ctx->pc != 0x351BCCu) { return; }
    }
    ctx->pc = 0x351BCCu;
label_351bcc:
    // 0x351bcc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x351bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x351bd0: 0x1443001c  bne         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x351BD0u;
    {
        const bool branch_taken_0x351bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x351bd0) {
            ctx->pc = 0x351C44u;
            goto label_351c44;
        }
    }
    ctx->pc = 0x351BD8u;
    // 0x351bd8: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x351bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x351bdc: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x351bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351be0: 0xac439478  sw          $v1, -0x6B88($v0)
    ctx->pc = 0x351be0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294939768), GPR_U32(ctx, 3));
    // 0x351be4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x351be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x351be8: 0xc04a3b8  jal         func_128EE0
    ctx->pc = 0x351BE8u;
    SET_GPR_U32(ctx, 31, 0x351BF0u);
    ctx->pc = 0x351BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351BE8u;
            // 0x351bec: 0x8c44bec0  lw          $a0, -0x4140($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950592)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128EE0u;
    if (runtime->hasFunction(0x128EE0u)) {
        auto targetFn = runtime->lookupFunction(0x128EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351BF0u; }
        if (ctx->pc != 0x351BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128EE0_0x128ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351BF0u; }
        if (ctx->pc != 0x351BF0u) { return; }
    }
    ctx->pc = 0x351BF0u;
label_351bf0:
    // 0x351bf0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x351bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x351bf4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x351bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x351bf8: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x351bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x351bfc: 0xa4604310  sh          $zero, 0x4310($v1)
    ctx->pc = 0x351bfcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 17168), (uint16_t)GPR_U32(ctx, 0));
    // 0x351c00: 0x248495a0  addiu       $a0, $a0, -0x6A60
    ctx->pc = 0x351c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940064));
    // 0x351c04: 0xa0404340  sb          $zero, 0x4340($v0)
    ctx->pc = 0x351c04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17216), (uint8_t)GPR_U32(ctx, 0));
    // 0x351c08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x351c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351c0c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x351C0Cu;
    SET_GPR_U32(ctx, 31, 0x351C14u);
    ctx->pc = 0x351C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351C0Cu;
            // 0x351c10: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351C14u; }
        if (ctx->pc != 0x351C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351C14u; }
        if (ctx->pc != 0x351C14u) { return; }
    }
    ctx->pc = 0x351C14u;
label_351c14:
    // 0x351c14: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x351c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x351c18: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x351c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x351c1c: 0xa0434338  sb          $v1, 0x4338($v0)
    ctx->pc = 0x351c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17208), (uint8_t)GPR_U32(ctx, 3));
    // 0x351c20: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x351c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x351c24: 0xac40db94  sw          $zero, -0x246C($v0)
    ctx->pc = 0x351c24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957972), GPR_U32(ctx, 0));
    // 0x351c28: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x351c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x351c2c: 0xac40dddc  sw          $zero, -0x2224($v0)
    ctx->pc = 0x351c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958556), GPR_U32(ctx, 0));
    // 0x351c30: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x351c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x351c34: 0xc082674  jal         func_2099D0
    ctx->pc = 0x351C34u;
    SET_GPR_U32(ctx, 31, 0x351C3Cu);
    ctx->pc = 0x351C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351C34u;
            // 0x351c38: 0x8c44be80  lw          $a0, -0x4180($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950528)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351C3Cu; }
        if (ctx->pc != 0x351C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351C3Cu; }
        if (ctx->pc != 0x351C3Cu) { return; }
    }
    ctx->pc = 0x351C3Cu;
label_351c3c:
    // 0x351c3c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x351C3Cu;
    {
        const bool branch_taken_0x351c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351C3Cu;
            // 0x351c40: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351c3c) {
            ctx->pc = 0x351C78u;
            goto label_351c78;
        }
    }
    ctx->pc = 0x351C44u;
label_351c44:
    // 0x351c44: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x351c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x351c48: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x351c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x351c4c: 0x9465be90  lhu         $a1, -0x4170($v1)
    ctx->pc = 0x351c4cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950544)));
    // 0x351c50: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x351c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x351c54: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x351c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x351c58: 0xa485be90  sh          $a1, -0x4170($a0)
    ctx->pc = 0x351c58u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294950544), (uint16_t)GPR_U32(ctx, 5));
    // 0x351c5c: 0x9463be90  lhu         $v1, -0x4170($v1)
    ctx->pc = 0x351c5cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950544)));
    // 0x351c60: 0x28630708  slti        $v1, $v1, 0x708
    ctx->pc = 0x351c60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1800) ? 1 : 0);
    // 0x351c64: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x351C64u;
    {
        const bool branch_taken_0x351c64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x351c64) {
            ctx->pc = 0x351C74u;
            goto label_351c74;
        }
    }
    ctx->pc = 0x351C6Cu;
    // 0x351c6c: 0xc0d1b18  jal         func_346C60
    ctx->pc = 0x351C6Cu;
    SET_GPR_U32(ctx, 31, 0x351C74u);
    ctx->pc = 0x351C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351C6Cu;
            // 0x351c70: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x346C60u;
    if (runtime->hasFunction(0x346C60u)) {
        auto targetFn = runtime->lookupFunction(0x346C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351C74u; }
        if (ctx->pc != 0x351C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00346C60_0x346c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351C74u; }
        if (ctx->pc != 0x351C74u) { return; }
    }
    ctx->pc = 0x351C74u;
label_351c74:
    // 0x351c74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x351c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_351c78:
    // 0x351c78: 0x3e00008  jr          $ra
    ctx->pc = 0x351C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351C78u;
            // 0x351c7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x351C80u;
    ctx->pc = 0x351c80u;
}
