#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D20D8
// Address: 0x2d20d8 - 0x2d2190
void sub_002D20D8_0x2d20d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D20D8_0x2d20d8");
#endif

    switch (ctx->pc) {
        case 0x2d2130u: goto label_2d2130;
        case 0x2d2144u: goto label_2d2144;
        default: break;
    }

    ctx->pc = 0x2d20d8u;

    // 0x2d20d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d20d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d20dc: 0x24020107  addiu       $v0, $zero, 0x107
    ctx->pc = 0x2d20dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
    // 0x2d20e0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d20e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2d20e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d20e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d20e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d20e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d20ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d20ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d20f0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d20f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d20f4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d20f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2d20f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d20f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d20fc: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x2d20fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d2100: 0xdcd40000  ld          $s4, 0x0($a2)
    ctx->pc = 0x2d2100u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d2104: 0x32830001  andi        $v1, $s4, 0x1
    ctx->pc = 0x2d2104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x2d2108: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D2108u;
    {
        const bool branch_taken_0x2d2108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D210Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2108u;
            // 0x2d210c: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2108) {
            ctx->pc = 0x2D216Cu;
            goto label_2d216c;
        }
    }
    ctx->pc = 0x2D2110u;
    // 0x2d2110: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x2d2110u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d2114: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x2d2114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d2118: 0x2921024  and         $v0, $s4, $s2
    ctx->pc = 0x2d2118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 18));
    // 0x2d211c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2d211cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2120: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2d2120u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d2124: 0x2413003d  addiu       $s3, $zero, 0x3D
    ctx->pc = 0x2d2124u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x2d2128: 0x242880b  movn        $s1, $s2, $v0
    ctx->pc = 0x2d2128u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 18));
    // 0x2d212c: 0x0  nop
    ctx->pc = 0x2d212cu;
    // NOP
label_2d2130:
    // 0x2d2130: 0x108078  dsll        $s0, $s0, 1
    ctx->pc = 0x2d2130u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 1);
    // 0x2d2134: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d2134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2138: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d2138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d213c: 0xc048082  jal         func_120208
    ctx->pc = 0x2D213Cu;
    SET_GPR_U32(ctx, 31, 0x2D2144u);
    ctx->pc = 0x2D2140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D213Cu;
            // 0x2d2140: 0x2509025  or          $s2, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (runtime->hasFunction(0x120208u)) {
        auto targetFn = runtime->lookupFunction(0x120208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2144u; }
        if (ctx->pc != 0x2D2144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120208_0x120208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2144u; }
        if (ctx->pc != 0x2D2144u) { return; }
    }
    ctx->pc = 0x2D2144u;
label_2d2144:
    // 0x2d2144: 0x230182d  daddu       $v1, $s1, $s0
    ctx->pc = 0x2d2144u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2d2148: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2d2148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x2d214c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2d214cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2d2150: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2d2150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d2154: 0x661fff6  bgez        $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x2D2154u;
    {
        const bool branch_taken_0x2d2154 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x2D2158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2154u;
            // 0x2d2158: 0x62880b  movn        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2154) {
            ctx->pc = 0x2D2130u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d2130;
        }
    }
    ctx->pc = 0x2D215Cu;
    // 0x2d215c: 0x111827  nor         $v1, $zero, $s1
    ctx->pc = 0x2d215cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 17)));
    // 0x2d2160: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d2160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2164: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x2d2164u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x2d2168: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x2d2168u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
label_2d216c:
    // 0x2d216c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d216cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2170: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d2170u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d2174: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d2174u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2178: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d2178u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d217c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d217cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2180: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d2180u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d2184: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d2184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2188: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D218Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2188u;
            // 0x2d218c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D2190u;
    ctx->pc = 0x2d2190u;
}
