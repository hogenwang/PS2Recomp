#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002198D0
// Address: 0x2198d0 - 0x219960
void sub_002198D0_0x2198d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002198D0_0x2198d0");
#endif

    switch (ctx->pc) {
        case 0x2198f0u: goto label_2198f0;
        case 0x219908u: goto label_219908;
        case 0x219918u: goto label_219918;
        case 0x219940u: goto label_219940;
        default: break;
    }

    ctx->pc = 0x2198d0u;

label_2198d0:
    // 0x2198d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2198d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2198d4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2198d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2198d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2198d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2198dc: 0x248412d0  addiu       $a0, $a0, 0x12D0
    ctx->pc = 0x2198dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4816));
    // 0x2198e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2198e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2198e4: 0x8043e52  j           func_10F948
    ctx->pc = 0x2198E4u;
    ctx->pc = 0x2198E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2198E4u;
            // 0x2198e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2198ECu;
    // 0x2198ec: 0x0  nop
    ctx->pc = 0x2198ecu;
    // NOP
label_2198f0:
    // 0x2198f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2198f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2198f4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2198f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2198f8: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2198f8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2198fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2198fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x219900: 0xc086634  jal         func_2198D0
    ctx->pc = 0x219900u;
    SET_GPR_U32(ctx, 31, 0x219908u);
    ctx->pc = 0x219904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219900u;
            // 0x219904: 0xade0ab58  sw          $zero, -0x54A8($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2198D0u;
    goto label_2198d0;
    ctx->pc = 0x219908u;
label_219908:
    // 0x219908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x219908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21990c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21990cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219910: 0x3e00008  jr          $ra
    ctx->pc = 0x219910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219910u;
            // 0x219914: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x219918u;
label_219918:
    // 0x219918: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x219918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21991c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21991cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x219920: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x219920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x219924: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x219924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x219928: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x219928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21992c: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x21992cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x219930: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x219930u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219934: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x219934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x219938: 0xc086634  jal         func_2198D0
    ctx->pc = 0x219938u;
    SET_GPR_U32(ctx, 31, 0x219940u);
    ctx->pc = 0x21993Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219938u;
            // 0x21993c: 0xade0ab5c  sw          $zero, -0x54A4($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2198D0u;
    goto label_2198d0;
    ctx->pc = 0x219940u;
label_219940:
    // 0x219940: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x219940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x219944: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x219944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219948: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x219948u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21994c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21994cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219950: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219950u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219954: 0x3e00008  jr          $ra
    ctx->pc = 0x219954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219954u;
            // 0x219958: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21995Cu;
    // 0x21995c: 0x0  nop
    ctx->pc = 0x21995cu;
    // NOP
    ctx->pc = 0x219960u;
}
