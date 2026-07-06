#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002872B8
// Address: 0x2872b8 - 0x287348
void sub_002872B8_0x2872b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002872B8_0x2872b8");
#endif

    switch (ctx->pc) {
        case 0x287338u: goto label_287338;
        default: break;
    }

    ctx->pc = 0x2872b8u;

    // 0x2872b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2872b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2872bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2872bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2872c0: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2872c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2872c4: 0x24a3003f  addiu       $v1, $a1, 0x3F
    ctx->pc = 0x2872c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x2872c8: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x2872c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x2872cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2872ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2872d0: 0x33183  sra         $a2, $v1, 6
    ctx->pc = 0x2872d0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 6));
    // 0x2872d4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2872d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2872d8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2872d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2872dc: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2872dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2872e0: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x2872e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2872e4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2872e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2872e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2872E8u;
    {
        const bool branch_taken_0x2872e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2872ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2872E8u;
            // 0x2872ec: 0xa33023  subu        $a2, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2872e8) {
            ctx->pc = 0x2872F8u;
            goto label_2872f8;
        }
    }
    ctx->pc = 0x2872F0u;
    // 0x2872f0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2872F0u;
    {
        const bool branch_taken_0x2872f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2872F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2872F0u;
            // 0x2872f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2872f0) {
            ctx->pc = 0x28733Cu;
            goto label_28733c;
        }
    }
    ctx->pc = 0x2872F8u;
label_2872f8:
    // 0x2872f8: 0x54c00003  bnel        $a2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2872F8u;
    {
        const bool branch_taken_0x2872f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2872f8) {
            ctx->pc = 0x2872FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2872F8u;
            // 0x2872fc: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x287308u;
            goto label_287308;
        }
    }
    ctx->pc = 0x287300u;
    // 0x287300: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x287300u;
    {
        const bool branch_taken_0x287300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287300u;
            // 0x287304: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287300) {
            ctx->pc = 0x287330u;
            goto label_287330;
        }
    }
    ctx->pc = 0x287308u;
label_287308:
    // 0x287308: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x287308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28730c: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x28730cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x287310: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x287310u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x287314: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x287314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x287318: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x287318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28731c: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x28731cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x287320: 0xc21014  dsllv       $v0, $v0, $a2
    ctx->pc = 0x287320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 6) & 0x3F));
    // 0x287324: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x287324u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x287328: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x287328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x28732c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x28732cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_287330:
    // 0x287330: 0xc0a1a72  jal         func_2869C8
    ctx->pc = 0x287330u;
    SET_GPR_U32(ctx, 31, 0x287338u);
    ctx->pc = 0x287334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287330u;
            // 0x287334: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2869C8u;
    if (runtime->hasFunction(0x2869C8u)) {
        auto targetFn = runtime->lookupFunction(0x2869C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287338u; }
        if (ctx->pc != 0x287338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002869C8_0x2869c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287338u; }
        if (ctx->pc != 0x287338u) { return; }
    }
    ctx->pc = 0x287338u;
label_287338:
    // 0x287338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x287338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28733c:
    // 0x28733c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28733cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x287340: 0x3e00008  jr          $ra
    ctx->pc = 0x287340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287340u;
            // 0x287344: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x287348u;
    ctx->pc = 0x287348u;
}
