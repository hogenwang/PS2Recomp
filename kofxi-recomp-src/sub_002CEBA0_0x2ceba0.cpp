#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CEBA0
// Address: 0x2ceba0 - 0x2cebf0
void sub_002CEBA0_0x2ceba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CEBA0_0x2ceba0");
#endif

    switch (ctx->pc) {
        case 0x2ceba0u: goto label_2ceba0;
        case 0x2ceba4u: goto label_2ceba4;
        case 0x2ceba8u: goto label_2ceba8;
        case 0x2cebacu: goto label_2cebac;
        case 0x2cebb0u: goto label_2cebb0;
        case 0x2cebb4u: goto label_2cebb4;
        case 0x2cebb8u: goto label_2cebb8;
        case 0x2cebbcu: goto label_2cebbc;
        case 0x2cebc0u: goto label_2cebc0;
        case 0x2cebc4u: goto label_2cebc4;
        case 0x2cebc8u: goto label_2cebc8;
        case 0x2cebccu: goto label_2cebcc;
        case 0x2cebd0u: goto label_2cebd0;
        case 0x2cebd4u: goto label_2cebd4;
        case 0x2cebd8u: goto label_2cebd8;
        case 0x2cebdcu: goto label_2cebdc;
        case 0x2cebe0u: goto label_2cebe0;
        case 0x2cebe4u: goto label_2cebe4;
        case 0x2cebe8u: goto label_2cebe8;
        case 0x2cebecu: goto label_2cebec;
        default: break;
    }

    ctx->pc = 0x2ceba0u;

label_2ceba0:
    // 0x2ceba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ceba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2ceba4:
    // 0x2ceba4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ceba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ceba8:
    // 0x2ceba8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ceba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2cebac:
    // 0x2cebac: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2cebacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2cebb0:
    // 0x2cebb0: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
label_2cebb4:
    if (ctx->pc == 0x2CEBB4u) {
        ctx->pc = 0x2CEBB4u;
            // 0x2cebb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CEBB8u;
        goto label_2cebb8;
    }
    ctx->pc = 0x2CEBB0u;
    {
        const bool branch_taken_0x2cebb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CEBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEBB0u;
            // 0x2cebb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cebb0) {
            ctx->pc = 0x2CEBE0u;
            goto label_2cebe0;
        }
    }
    ctx->pc = 0x2CEBB8u;
label_2cebb8:
    // 0x2cebb8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2cebb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2cebbc:
    // 0x2cebbc: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2cebbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
label_2cebc0:
    // 0x2cebc0: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x2cebc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_2cebc4:
    // 0x2cebc4: 0x24a58590  addiu       $a1, $a1, -0x7A70
    ctx->pc = 0x2cebc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935952));
label_2cebc8:
    // 0x2cebc8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2cebc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cebcc:
    // 0x2cebcc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2cebccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cebd0:
    // 0x2cebd0: 0x40f809  jalr        $v0
label_2cebd4:
    if (ctx->pc == 0x2CEBD4u) {
        ctx->pc = 0x2CEBD4u;
            // 0x2cebd4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2CEBD8u;
        goto label_2cebd8;
    }
    ctx->pc = 0x2CEBD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CEBD8u);
        ctx->pc = 0x2CEBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEBD0u;
            // 0x2cebd4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CEBD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CEBD8u; }
            if (ctx->pc != 0x2CEBD8u) { return; }
        }
        }
    }
    ctx->pc = 0x2CEBD8u;
label_2cebd8:
    // 0x2cebd8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2cebdc:
    if (ctx->pc == 0x2CEBDCu) {
        ctx->pc = 0x2CEBDCu;
            // 0x2cebdc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2CEBE0u;
        goto label_2cebe0;
    }
    ctx->pc = 0x2CEBD8u;
    {
        const bool branch_taken_0x2cebd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEBD8u;
            // 0x2cebdc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cebd8) {
            ctx->pc = 0x2CEBE4u;
            goto label_2cebe4;
        }
    }
    ctx->pc = 0x2CEBE0u;
label_2cebe0:
    // 0x2cebe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cebe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cebe4:
    // 0x2cebe4: 0x3e00008  jr          $ra
label_2cebe8:
    if (ctx->pc == 0x2CEBE8u) {
        ctx->pc = 0x2CEBE8u;
            // 0x2cebe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2CEBECu;
        goto label_2cebec;
    }
    ctx->pc = 0x2CEBE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEBE4u;
            // 0x2cebe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CEBECu;
label_2cebec:
    // 0x2cebec: 0x0  nop
    ctx->pc = 0x2cebecu;
    // NOP
    ctx->pc = 0x2cebf0u;
}
