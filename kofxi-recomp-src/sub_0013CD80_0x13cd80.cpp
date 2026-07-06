#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013CD80
// Address: 0x13cd80 - 0x13ce20
void sub_0013CD80_0x13cd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CD80_0x13cd80");
#endif

    switch (ctx->pc) {
        case 0x13cd94u: goto label_13cd94;
        default: break;
    }

    ctx->pc = 0x13cd80u;

    // 0x13cd80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13cd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13cd84: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13CD84u;
    {
        const bool branch_taken_0x13cd84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x13CD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CD84u;
            // 0x13cd88: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cd84) {
            ctx->pc = 0x13CDA0u;
            goto label_13cda0;
        }
    }
    ctx->pc = 0x13CD8Cu;
    // 0x13cd8c: 0xc062804  jal         func_18A010
    ctx->pc = 0x13CD8Cu;
    SET_GPR_U32(ctx, 31, 0x13CD94u);
    ctx->pc = 0x13CD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13CD8Cu;
            // 0x13cd90: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (runtime->hasFunction(0x18A010u)) {
        auto targetFn = runtime->lookupFunction(0x18A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CD94u; }
        if (ctx->pc != 0x13CD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A010_0x18a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CD94u; }
        if (ctx->pc != 0x13CD94u) { return; }
    }
    ctx->pc = 0x13CD94u;
label_13cd94:
    // 0x13cd94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13cd94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cd98: 0x50a0001f  beql        $a1, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x13CD98u;
    {
        const bool branch_taken_0x13cd98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cd98) {
            ctx->pc = 0x13CD9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13CD98u;
            // 0x13cd9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13CE18u;
            goto label_13ce18;
        }
    }
    ctx->pc = 0x13CDA0u;
label_13cda0:
    // 0x13cda0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13cda0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13cda4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x13cda4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x13cda8: 0xac655cb0  sw          $a1, 0x5CB0($v1)
    ctx->pc = 0x13cda8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 23728), GPR_U32(ctx, 5));
    // 0x13cdac: 0x2484c770  addiu       $a0, $a0, -0x3890
    ctx->pc = 0x13cdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952816));
    // 0x13cdb0: 0x90a50204  lbu         $a1, 0x204($a1)
    ctx->pc = 0x13cdb0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 516)));
    // 0x13cdb4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x13cdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13cdb8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13cdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13cdbc: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x13cdbcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13cdc0: 0x50a30010  beql        $a1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x13CDC0u;
    {
        const bool branch_taken_0x13cdc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x13cdc0) {
            ctx->pc = 0x13CDC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13CDC0u;
            // 0x13cdc4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13CE04u;
            goto label_13ce04;
        }
    }
    ctx->pc = 0x13CDC8u;
    // 0x13cdc8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x13cdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13cdcc: 0x50a3000a  beql        $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x13CDCCu;
    {
        const bool branch_taken_0x13cdcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x13cdcc) {
            ctx->pc = 0x13CDD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13CDCCu;
            // 0x13cdd0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13CDF8u;
            goto label_13cdf8;
        }
    }
    ctx->pc = 0x13CDD4u;
    // 0x13cdd4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13cdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13cdd8: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13CDD8u;
    {
        const bool branch_taken_0x13cdd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x13cdd8) {
            ctx->pc = 0x13CDF4u;
            goto label_13cdf4;
        }
    }
    ctx->pc = 0x13CDE0u;
    // 0x13cde0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13cde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13cde4: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13CDE4u;
    {
        const bool branch_taken_0x13cde4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x13cde4) {
            ctx->pc = 0x13CDF4u;
            goto label_13cdf4;
        }
    }
    ctx->pc = 0x13CDECu;
    // 0x13cdec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13CDECu;
    {
        const bool branch_taken_0x13cdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CDECu;
            // 0x13cdf0: 0x3c030041  lui         $v1, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cdec) {
            ctx->pc = 0x13CE10u;
            goto label_13ce10;
        }
    }
    ctx->pc = 0x13CDF4u;
label_13cdf4:
    // 0x13cdf4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13cdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13cdf8:
    // 0x13cdf8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13cdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13cdfc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13CDFCu;
    {
        const bool branch_taken_0x13cdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CDFCu;
            // 0x13ce00: 0xa0645cb8  sb          $a0, 0x5CB8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 23736), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cdfc) {
            ctx->pc = 0x13CE14u;
            goto label_13ce14;
        }
    }
    ctx->pc = 0x13CE04u;
label_13ce04:
    // 0x13ce04: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13ce04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13ce08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13CE08u;
    {
        const bool branch_taken_0x13ce08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CE08u;
            // 0x13ce0c: 0xa0645cb8  sb          $a0, 0x5CB8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 23736), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ce08) {
            ctx->pc = 0x13CE14u;
            goto label_13ce14;
        }
    }
    ctx->pc = 0x13CE10u;
label_13ce10:
    // 0x13ce10: 0xa0645cb8  sb          $a0, 0x5CB8($v1)
    ctx->pc = 0x13ce10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 23736), (uint8_t)GPR_U32(ctx, 4));
label_13ce14:
    // 0x13ce14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13ce14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13ce18:
    // 0x13ce18: 0x3e00008  jr          $ra
    ctx->pc = 0x13CE18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CE18u;
            // 0x13ce1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13CE20u;
    ctx->pc = 0x13ce20u;
}
