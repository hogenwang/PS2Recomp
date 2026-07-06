#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FCEF0
// Address: 0x1fcef0 - 0x1fd070
void sub_001FCEF0_0x1fcef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FCEF0_0x1fcef0");
#endif

    switch (ctx->pc) {
        case 0x1fcf64u: goto label_1fcf64;
        case 0x1fcf88u: goto label_1fcf88;
        case 0x1fd020u: goto label_1fd020;
        default: break;
    }

    ctx->pc = 0x1fcef0u;

    // 0x1fcef0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fcef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fcef4: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x1fcef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x1fcef8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fcef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fcefc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fcefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fcf00: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fcf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fcf04: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1fcf04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcf08: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fcf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fcf0c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x1fcf0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcf10: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1fcf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1fcf14: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1fcf14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcf18: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1fcf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1fcf1c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1fcf1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcf20: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1fcf20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1fcf24: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1fcf24u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcf28: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1fcf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1fcf2c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1fcf2cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcf30: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1fcf30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1fcf34: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FCF34u;
    {
        const bool branch_taken_0x1fcf34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcf34) {
            ctx->pc = 0x1FCF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCF34u;
            // 0x1fcf38: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCF3Cu;
            goto label_1fcf3c;
        }
    }
    ctx->pc = 0x1FCF3Cu;
label_1fcf3c:
    // 0x1fcf3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fcf3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcf40: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1fcf40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcf44: 0x8e820ac4  lw          $v0, 0xAC4($s4)
    ctx->pc = 0x1fcf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2756)));
    // 0x1fcf48: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1fcf48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcf4c: 0x26900d88  addiu       $s0, $s4, 0xD88
    ctx->pc = 0x1fcf4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 3464));
    // 0x1fcf50: 0x551018  mult        $v0, $v0, $s5
    ctx->pc = 0x1fcf50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1fcf54: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1fcf54u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1fcf58: 0x8812  mflo        $s1
    ctx->pc = 0x1fcf58u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x1fcf5c: 0xc073fee  jal         func_1CFFB8
    ctx->pc = 0x1FCF5Cu;
    SET_GPR_U32(ctx, 31, 0x1FCF64u);
    ctx->pc = 0x1FCF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCF5Cu;
    // 0x1fcf60: 0x2d13021  addu        $a2, $s6, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFFB8u, 0x1FCF5Cu, 0x1FCF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCF64u;
label_1fcf64:
    // 0x1fcf64: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FCF64u;
    {
        const bool branch_taken_0x1fcf64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcf64) {
            ctx->pc = 0x1FCF68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCF64u;
            // 0x1fcf68: 0x2d13023  subu        $a2, $s6, $s1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCF78u;
            goto label_1fcf78;
        }
    }
    ctx->pc = 0x1FCF6Cu;
    // 0x1fcf6c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1FCF6Cu;
    {
        const bool branch_taken_0x1fcf6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF6Cu;
        // 0x1fcf70: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf6c) {
            ctx->pc = 0x1FD044u;
            goto label_1fd044;
        }
    }
    ctx->pc = 0x1FCF74u;
    // 0x1fcf74: 0x0  nop
    ctx->pc = 0x1fcf74u;
    // NOP
label_1fcf78:
    // 0x1fcf78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fcf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcf7c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1fcf7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcf80: 0xc073fee  jal         func_1CFFB8
    ctx->pc = 0x1FCF80u;
    SET_GPR_U32(ctx, 31, 0x1FCF88u);
    ctx->pc = 0x1FCF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCF80u;
    // 0x1fcf84: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFFB8u, 0x1FCF80u, 0x1FCF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCF88u;
label_1fcf88:
    // 0x1fcf88: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FCF88u;
    {
        const bool branch_taken_0x1fcf88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF88u;
        // 0x1fcf8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf88) {
            ctx->pc = 0x1FCFC0u;
            goto label_1fcfc0;
        }
    }
    ctx->pc = 0x1FCF90u;
    // 0x1fcf90: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1fcf90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1fcf94: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x1fcf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x1fcf98: 0x5072002b  beql        $v1, $s2, . + 4 + (0x2B << 2)
    ctx->pc = 0x1FCF98u;
    {
        const bool branch_taken_0x1fcf98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x1fcf98) {
            ctx->pc = 0x1FCF9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCF98u;
            // 0x1fcf9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD048u;
            goto label_1fd048;
        }
    }
    ctx->pc = 0x1FCFA0u;
    // 0x1fcfa0: 0x8e0202c0  lw          $v0, 0x2C0($s0)
    ctx->pc = 0x1fcfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
    // 0x1fcfa4: 0x50520028  beql        $v0, $s2, . + 4 + (0x28 << 2)
    ctx->pc = 0x1FCFA4u;
    {
        const bool branch_taken_0x1fcfa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x1fcfa4) {
            ctx->pc = 0x1FCFA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCFA4u;
            // 0x1fcfa8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD048u;
            goto label_1fd048;
        }
    }
    ctx->pc = 0x1FCFACu;
    // 0x1fcfac: 0x8e0202bc  lw          $v0, 0x2BC($s0)
    ctx->pc = 0x1fcfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
    // 0x1fcfb0: 0xae1202c0  sw          $s2, 0x2C0($s0)
    ctx->pc = 0x1fcfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 704), GPR_U32(ctx, 18));
    // 0x1fcfb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fcfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fcfb8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1FCFB8u;
    {
        const bool branch_taken_0x1fcfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFB8u;
        // 0x1fcfbc: 0xae0202bc  sw          $v0, 0x2BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcfb8) {
            ctx->pc = 0x1FD044u;
            goto label_1fd044;
        }
    }
    ctx->pc = 0x1FCFC0u;
label_1fcfc0:
    // 0x1fcfc0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1fcfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1fcfc4: 0x3404ea24  ori         $a0, $zero, 0xEA24
    ctx->pc = 0x1fcfc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59940);
    // 0x1fcfc8: 0x8c4316f8  lw          $v1, 0x16F8($v0)
    ctx->pc = 0x1fcfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5880)));
    // 0x1fcfcc: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FCFCCu;
    {
        const bool branch_taken_0x1fcfcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FCFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFCCu;
        // 0x1fcfd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcfcc) {
            ctx->pc = 0x1FCFF0u;
            goto label_1fcff0;
        }
    }
    ctx->pc = 0x1FCFD4u;
    // 0x1fcfd4: 0x8e820920  lw          $v0, 0x920($s4)
    ctx->pc = 0x1fcfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2336)));
    // 0x1fcfd8: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x1fcfd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1fcfdc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FCFDCu;
    {
        const bool branch_taken_0x1fcfdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcfdc) {
            ctx->pc = 0x1FCFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCFDCu;
            // 0x1fcfe0: 0x8e0202bc  lw          $v0, 0x2BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCFF4u;
            goto label_1fcff4;
        }
    }
    ctx->pc = 0x1FCFE4u;
    // 0x1fcfe4: 0x8e0202ac  lw          $v0, 0x2AC($s0)
    ctx->pc = 0x1fcfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
    // 0x1fcfe8: 0x384203e8  xori        $v0, $v0, 0x3E8
    ctx->pc = 0x1fcfe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1000);
    // 0x1fcfec: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x1fcfecu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1fcff0:
    // 0x1fcff0: 0x8e0202bc  lw          $v0, 0x2BC($s0)
    ctx->pc = 0x1fcff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
label_1fcff4:
    // 0x1fcff4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1fcff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fcff8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FCFF8u;
    {
        const bool branch_taken_0x1fcff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFF8u;
        // 0x1fcffc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcff8) {
            ctx->pc = 0x1FD010u;
            goto label_1fd010;
        }
    }
    ctx->pc = 0x1FD000u;
    // 0x1fd000: 0x8e0202c4  lw          $v0, 0x2C4($s0)
    ctx->pc = 0x1fd000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x1fd004: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1FD004u;
    {
        const bool branch_taken_0x1fd004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD004u;
        // 0x1fd008: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd004) {
            ctx->pc = 0x1FD034u;
            goto label_1fd034;
        }
    }
    ctx->pc = 0x1FD00Cu;
    // 0x1fd00c: 0x0  nop
    ctx->pc = 0x1fd00cu;
    // NOP
label_1fd010:
    // 0x1fd010: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1fd010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd014: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1fd014u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd018: 0xc073fee  jal         func_1CFFB8
    ctx->pc = 0x1FD018u;
    SET_GPR_U32(ctx, 31, 0x1FD020u);
    ctx->pc = 0x1FD01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD018u;
    // 0x1fd01c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFFB8u, 0x1FD018u, 0x1FD020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD020u;
label_1fd020:
    // 0x1fd020: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD020u;
    {
        const bool branch_taken_0x1fd020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD020u;
        // 0x1fd024: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd020) {
            ctx->pc = 0x1FD030u;
            goto label_1fd030;
        }
    }
    ctx->pc = 0x1FD028u;
    // 0x1fd028: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD028u;
    {
        const bool branch_taken_0x1fd028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD028u;
        // 0x1fd02c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd028) {
            ctx->pc = 0x1FD034u;
            goto label_1fd034;
        }
    }
    ctx->pc = 0x1FD030u;
label_1fd030:
    // 0x1fd030: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1fd030u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1fd034:
    // 0x1fd034: 0xae0002bc  sw          $zero, 0x2BC($s0)
    ctx->pc = 0x1fd034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 0));
    // 0x1fd038: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1fd038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1fd03c: 0xae1202c8  sw          $s2, 0x2C8($s0)
    ctx->pc = 0x1fd03cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 18));
    // 0x1fd040: 0xae0202c4  sw          $v0, 0x2C4($s0)
    ctx->pc = 0x1fd040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 2));
label_1fd044:
    // 0x1fd044: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd044u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd048:
    // 0x1fd048: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fd048u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fd04c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fd04cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd050: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fd050u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fd054: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fd054u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fd058: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1fd058u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fd05c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1fd05cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fd060: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1fd060u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fd064: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1fd064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fd068: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD068u;
        // 0x1fd06c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD070u;
}
