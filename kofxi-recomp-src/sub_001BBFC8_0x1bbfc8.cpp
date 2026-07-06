#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BBFC8
// Address: 0x1bbfc8 - 0x1bc080
void sub_001BBFC8_0x1bbfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBFC8_0x1bbfc8");
#endif

    switch (ctx->pc) {
        case 0x1bc020u: goto label_1bc020;
        case 0x1bc028u: goto label_1bc028;
        case 0x1bc034u: goto label_1bc034;
        default: break;
    }

    ctx->pc = 0x1bbfc8u;

    // 0x1bbfc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bbfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bbfcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bbfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bbfd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bbfd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbfd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bbfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bbfd8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bbfd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbfdc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bbfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1bbfe0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1bbfe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbfe4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1bbfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1bbfe8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1bbfe8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbfec: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BBFECu;
    {
        const bool branch_taken_0x1bbfec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBFECu;
            // 0x1bbff0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbfec) {
            ctx->pc = 0x1BBFFCu;
            goto label_1bbffc;
        }
    }
    ctx->pc = 0x1BBFF4u;
    // 0x1bbff4: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1BBFF4u;
    {
        const bool branch_taken_0x1bbff4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bbff4) {
            ctx->pc = 0x1BC020u;
            goto label_1bc020;
        }
    }
    ctx->pc = 0x1BBFFCu;
label_1bbffc:
    // 0x1bbffc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bbffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1bc000: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc000u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc004: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bc004u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bc008: 0x24848810  addiu       $a0, $a0, -0x77F0
    ctx->pc = 0x1bc008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936592));
    // 0x1bc00c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bc00cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc010: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1bc010u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bc014: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bc014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc018: 0x806ba0a  j           func_1AE828
    ctx->pc = 0x1BC018u;
    ctx->pc = 0x1BC01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC018u;
            // 0x1bc01c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BC020u;
label_1bc020:
    // 0x1bc020: 0xc06e4a0  jal         func_1B9280
    ctx->pc = 0x1BC020u;
    SET_GPR_U32(ctx, 31, 0x1BC028u);
    ctx->pc = 0x1B9280u;
    if (runtime->hasFunction(0x1B9280u)) {
        auto targetFn = runtime->lookupFunction(0x1B9280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC028u; }
        if (ctx->pc != 0x1BC028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9280_0x1b9280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC028u; }
        if (ctx->pc != 0x1BC028u) { return; }
    }
    ctx->pc = 0x1BC028u;
label_1bc028:
    // 0x1bc028: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x1bc028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1bc02c: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x1BC02Cu;
    SET_GPR_U32(ctx, 31, 0x1BC034u);
    ctx->pc = 0x1BC030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC02Cu;
            // 0x1bc030: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC034u; }
        if (ctx->pc != 0x1BC034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC034u; }
        if (ctx->pc != 0x1BC034u) { return; }
    }
    ctx->pc = 0x1BC034u;
label_1bc034:
    // 0x1bc034: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x1bc034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1bc038: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bc038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc03c: 0xae1200bc  sw          $s2, 0xBC($s0)
    ctx->pc = 0x1bc03cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 18));
    // 0x1bc040: 0xae1300c0  sw          $s3, 0xC0($s0)
    ctx->pc = 0x1bc040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 19));
    // 0x1bc044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bc044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc048: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x1bc048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
    // 0x1bc04c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc050: 0xa20200ac  sb          $v0, 0xAC($s0)
    ctx->pc = 0x1bc050u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bc054: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x1bc054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x1bc058: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1bc058u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bc05c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1bc05cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bc060: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bc060u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bc064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc068: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bc068u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc06c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1bc06cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bc070: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bc070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc074: 0x806ed86  j           func_1BB618
    ctx->pc = 0x1BC074u;
    ctx->pc = 0x1BC078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC074u;
            // 0x1bc078: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB618u;
    if (runtime->hasFunction(0x1BB618u)) {
        auto targetFn = runtime->lookupFunction(0x1BB618u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001BB618_0x1bb618(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BC07Cu;
    // 0x1bc07c: 0x0  nop
    ctx->pc = 0x1bc07cu;
    // NOP
    ctx->pc = 0x1bc080u;
}
