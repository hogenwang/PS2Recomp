#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D8300
// Address: 0x2d8300 - 0x2d8370
void sub_002D8300_0x2d8300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8300_0x2d8300");
#endif

    switch (ctx->pc) {
        case 0x2d8338u: goto label_2d8338;
        case 0x2d8344u: goto label_2d8344;
        case 0x2d8358u: goto label_2d8358;
        default: break;
    }

    ctx->pc = 0x2d8300u;

    // 0x2d8300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d8300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d8304: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2d8304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8308: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d8308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d830c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d830cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8310: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d8310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d8314: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D8314u;
    {
        const bool branch_taken_0x2d8314 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8314u;
            // 0x2d8318: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8314) {
            ctx->pc = 0x2D8338u;
            goto label_2d8338;
        }
    }
    ctx->pc = 0x2D831Cu;
    // 0x2d831c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d831cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8320: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d8320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8324: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d8324u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d8328: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d8328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d832c: 0x80b60b8  j           func_2D82E0
    ctx->pc = 0x2D832Cu;
    ctx->pc = 0x2D8330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D832Cu;
            // 0x2d8330: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D82E0u;
    if (runtime->hasFunction(0x2D82E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D82E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002D82E0_0x2d82e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D8334u;
    // 0x2d8334: 0x0  nop
    ctx->pc = 0x2d8334u;
    // NOP
label_2d8338:
    // 0x2d8338: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d8338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d833c: 0xc09ee3e  jal         func_27B8F8
    ctx->pc = 0x2D833Cu;
    SET_GPR_U32(ctx, 31, 0x2D8344u);
    ctx->pc = 0x2D8340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D833Cu;
            // 0x2d8340: 0x42280b  movn        $a1, $v0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B8F8u;
    if (runtime->hasFunction(0x27B8F8u)) {
        auto targetFn = runtime->lookupFunction(0x27B8F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8344u; }
        if (ctx->pc != 0x2D8344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B8F8_0x27b8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8344u; }
        if (ctx->pc != 0x2D8344u) { return; }
    }
    ctx->pc = 0x2D8344u;
label_2d8344:
    // 0x2d8344: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d8344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8348: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8348u;
    {
        const bool branch_taken_0x2d8348 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D834Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8348u;
            // 0x2d834c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8348) {
            ctx->pc = 0x2D8358u;
            goto label_2d8358;
        }
    }
    ctx->pc = 0x2D8350u;
    // 0x2d8350: 0xc09edd6  jal         func_27B758
    ctx->pc = 0x2D8350u;
    SET_GPR_U32(ctx, 31, 0x2D8358u);
    ctx->pc = 0x27B758u;
    if (runtime->hasFunction(0x27B758u)) {
        auto targetFn = runtime->lookupFunction(0x27B758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8358u; }
        if (ctx->pc != 0x2D8358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B758_0x27b758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8358u; }
        if (ctx->pc != 0x2D8358u) { return; }
    }
    ctx->pc = 0x2D8358u;
label_2d8358:
    // 0x2d8358: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d8358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d835c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d835cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8360: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d8360u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d8364: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d8364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8368: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D836Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8368u;
            // 0x2d836c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8370u;
    ctx->pc = 0x2d8370u;
}
