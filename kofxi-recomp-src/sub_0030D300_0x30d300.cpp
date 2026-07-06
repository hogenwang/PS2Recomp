#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030D300
// Address: 0x30d300 - 0x30d380
void sub_0030D300_0x30d300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D300_0x30d300");
#endif

    switch (ctx->pc) {
        case 0x30d344u: goto label_30d344;
        case 0x30d35cu: goto label_30d35c;
        default: break;
    }

    ctx->pc = 0x30d300u;

label_30d300:
    // 0x30d300: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30d300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30d304: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x30d304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x30d308: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30d308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30d30c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30d30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30d310: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30d310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30d314: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30d314u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d318: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30d318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30d31c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30d31cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d320: 0x8ca80010  lw          $t0, 0x10($a1)
    ctx->pc = 0x30d320u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x30d324: 0x8d070024  lw          $a3, 0x24($t0)
    ctx->pc = 0x30d324u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x30d328: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x30d328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x30d32c: 0xad030024  sw          $v1, 0x24($t0)
    ctx->pc = 0x30d32cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 3));
    // 0x30d330: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x30d330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x30d334: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D334u;
    {
        const bool branch_taken_0x30d334 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D334u;
            // 0x30d338: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d334) {
            ctx->pc = 0x30D344u;
            goto label_30d344;
        }
    }
    ctx->pc = 0x30D33Cu;
    // 0x30d33c: 0xc0c34c0  jal         func_30D300
    ctx->pc = 0x30D33Cu;
    SET_GPR_U32(ctx, 31, 0x30D344u);
    ctx->pc = 0x30D300u;
    goto label_30d300;
    ctx->pc = 0x30D344u;
label_30d344:
    // 0x30d344: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x30d344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30d348: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x30D348u;
    {
        const bool branch_taken_0x30d348 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d348) {
            ctx->pc = 0x30D34Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30D348u;
            // 0x30d34c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30D360u;
            goto label_30d360;
        }
    }
    ctx->pc = 0x30D350u;
    // 0x30d350: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30d350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d354: 0xc0c34c0  jal         func_30D300
    ctx->pc = 0x30D354u;
    SET_GPR_U32(ctx, 31, 0x30D35Cu);
    ctx->pc = 0x30D358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D354u;
            // 0x30d358: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30D300u;
    goto label_30d300;
    ctx->pc = 0x30D35Cu;
label_30d35c:
    // 0x30d35c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30d35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_30d360:
    // 0x30d360: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30d360u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30d364: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30d364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30d368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d36c: 0x3e00008  jr          $ra
    ctx->pc = 0x30D36Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D36Cu;
            // 0x30d370: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30D374u;
    // 0x30d374: 0x0  nop
    ctx->pc = 0x30d374u;
    // NOP
    // 0x30d378: 0x0  nop
    ctx->pc = 0x30d378u;
    // NOP
    // 0x30d37c: 0x0  nop
    ctx->pc = 0x30d37cu;
    // NOP
    ctx->pc = 0x30d380u;
}
