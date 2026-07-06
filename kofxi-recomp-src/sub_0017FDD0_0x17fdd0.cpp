#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017FDD0
// Address: 0x17fdd0 - 0x17fe30
void sub_0017FDD0_0x17fdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017FDD0_0x17fdd0");
#endif

    ctx->pc = 0x17fdd0u;

    // 0x17fdd0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x17fdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x17fdd4: 0x2443ffe4  addiu       $v1, $v0, -0x1C
    ctx->pc = 0x17fdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967268));
    // 0x17fdd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17fdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17fddc: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x17fddcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17fde0: 0x50a20011  beql        $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17FDE0u;
    {
        const bool branch_taken_0x17fde0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x17fde0) {
            ctx->pc = 0x17FDE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17FDE0u;
            // 0x17fde4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17FE28u;
            goto label_17fe28;
        }
    }
    ctx->pc = 0x17FDE8u;
    // 0x17fde8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17fde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17fdec: 0x50a3000a  beql        $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x17FDECu;
    {
        const bool branch_taken_0x17fdec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x17fdec) {
            ctx->pc = 0x17FDF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17FDECu;
            // 0x17fdf0: 0x90830280  lbu         $v1, 0x280($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 640)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17FE18u;
            goto label_17fe18;
        }
    }
    ctx->pc = 0x17FDF4u;
    // 0x17fdf4: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FDF4u;
    {
        const bool branch_taken_0x17fdf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fdf4) {
            ctx->pc = 0x17FDF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17FDF4u;
            // 0x17fdf8: 0x90820280  lbu         $v0, 0x280($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 640)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17FE04u;
            goto label_17fe04;
        }
    }
    ctx->pc = 0x17FDFCu;
    // 0x17fdfc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17FDFCu;
    {
        const bool branch_taken_0x17fdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FDFCu;
            // 0x17fe00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fdfc) {
            ctx->pc = 0x17FE28u;
            goto label_17fe28;
        }
    }
    ctx->pc = 0x17FE04u;
label_17fe04:
    // 0x17fe04: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x17fe04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x17fe08: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17fe08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17fe0c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x17fe0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x17fe10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17FE10u;
    {
        const bool branch_taken_0x17fe10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FE10u;
            // 0x17fe14: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe10) {
            ctx->pc = 0x17FE28u;
            goto label_17fe28;
        }
    }
    ctx->pc = 0x17FE18u;
label_17fe18:
    // 0x17fe18: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x17fe18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x17fe1c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17FE1Cu;
    {
        const bool branch_taken_0x17fe1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fe1c) {
            ctx->pc = 0x17FE28u;
            goto label_17fe28;
        }
    }
    ctx->pc = 0x17FE24u;
    // 0x17fe24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17fe24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17fe28:
    // 0x17fe28: 0x3e00008  jr          $ra
    ctx->pc = 0x17FE28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17FE30u;
    ctx->pc = 0x17fe30u;
}
