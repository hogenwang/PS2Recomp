#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021A1F0
// Address: 0x21a1f0 - 0x21a280
void sub_0021A1F0_0x21a1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A1F0_0x21a1f0");
#endif

    switch (ctx->pc) {
        case 0x21a210u: goto label_21a210;
        case 0x21a228u: goto label_21a228;
        case 0x21a238u: goto label_21a238;
        case 0x21a260u: goto label_21a260;
        default: break;
    }

    ctx->pc = 0x21a1f0u;

label_21a1f0:
    // 0x21a1f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21a1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21a1f4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21a1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21a1f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21a1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21a1fc: 0x248413d0  addiu       $a0, $a0, 0x13D0
    ctx->pc = 0x21a1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5072));
    // 0x21a200: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21a200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a204: 0x8043e52  j           func_10F948
    ctx->pc = 0x21A204u;
    ctx->pc = 0x21A208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A204u;
            // 0x21a208: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x21A20Cu;
    // 0x21a20c: 0x0  nop
    ctx->pc = 0x21a20cu;
    // NOP
label_21a210:
    // 0x21a210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21a210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21a214: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x21a214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21a218: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21a218u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21a21c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21a21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21a220: 0xc08687c  jal         func_21A1F0
    ctx->pc = 0x21A220u;
    SET_GPR_U32(ctx, 31, 0x21A228u);
    ctx->pc = 0x21A224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A220u;
            // 0x21a224: 0xade0ab58  sw          $zero, -0x54A8($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A1F0u;
    goto label_21a1f0;
    ctx->pc = 0x21A228u;
label_21a228:
    // 0x21a228: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21a228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a22c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21a22cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a230: 0x3e00008  jr          $ra
    ctx->pc = 0x21A230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A230u;
            // 0x21a234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21A238u;
label_21a238:
    // 0x21a238: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21a238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21a23c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21a23cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21a240: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21a240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21a244: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21a244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21a248: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21a248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21a24c: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x21a24cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21a250: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21a250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a254: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x21a254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21a258: 0xc08687c  jal         func_21A1F0
    ctx->pc = 0x21A258u;
    SET_GPR_U32(ctx, 31, 0x21A260u);
    ctx->pc = 0x21A25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A258u;
            // 0x21a25c: 0xade0ab5c  sw          $zero, -0x54A4($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A1F0u;
    goto label_21a1f0;
    ctx->pc = 0x21A260u;
label_21a260:
    // 0x21a260: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21a260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21a264: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21a264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a268: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x21a268u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21a26c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21a26cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a270: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a274: 0x3e00008  jr          $ra
    ctx->pc = 0x21A274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A274u;
            // 0x21a278: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21A27Cu;
    // 0x21a27c: 0x0  nop
    ctx->pc = 0x21a27cu;
    // NOP
    ctx->pc = 0x21a280u;
}
