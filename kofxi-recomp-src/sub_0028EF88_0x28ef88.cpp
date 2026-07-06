#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028EF88
// Address: 0x28ef88 - 0x28efd0
void sub_0028EF88_0x28ef88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EF88_0x28ef88");
#endif

    switch (ctx->pc) {
        case 0x28ef88u: goto label_28ef88;
        case 0x28ef8cu: goto label_28ef8c;
        case 0x28ef90u: goto label_28ef90;
        case 0x28ef94u: goto label_28ef94;
        case 0x28ef98u: goto label_28ef98;
        case 0x28ef9cu: goto label_28ef9c;
        case 0x28efa0u: goto label_28efa0;
        case 0x28efa4u: goto label_28efa4;
        case 0x28efa8u: goto label_28efa8;
        case 0x28efacu: goto label_28efac;
        case 0x28efb0u: goto label_28efb0;
        case 0x28efb4u: goto label_28efb4;
        case 0x28efb8u: goto label_28efb8;
        case 0x28efbcu: goto label_28efbc;
        case 0x28efc0u: goto label_28efc0;
        case 0x28efc4u: goto label_28efc4;
        case 0x28efc8u: goto label_28efc8;
        case 0x28efccu: goto label_28efcc;
        default: break;
    }

    ctx->pc = 0x28ef88u;

label_28ef88:
    // 0x28ef88: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28ef8c:
    // 0x28ef8c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28ef8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28ef90:
    // 0x28ef90: 0x8c424648  lw          $v0, 0x4648($v0)
    ctx->pc = 0x28ef90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17992)));
label_28ef94:
    // 0x28ef94: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28ef98:
    if (ctx->pc == 0x28EF98u) {
        ctx->pc = 0x28EF98u;
            // 0x28ef98: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x28EF9Cu;
        goto label_28ef9c;
    }
    ctx->pc = 0x28EF94u;
    {
        const bool branch_taken_0x28ef94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EF94u;
            // 0x28ef98: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef94) {
            ctx->pc = 0x28EFBCu;
            goto label_28efbc;
        }
    }
    ctx->pc = 0x28EF9Cu;
label_28ef9c:
    // 0x28ef9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ef9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28efa0:
    // 0x28efa0: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28efa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28efa4:
    // 0x28efa4: 0x24050098  addiu       $a1, $zero, 0x98
    ctx->pc = 0x28efa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
label_28efa8:
    // 0x28efa8: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28efa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28efac:
    // 0x28efac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28efacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28efb0:
    // 0x28efb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28efb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28efb4:
    // 0x28efb4: 0x80a5648  j           func_295920
label_28efb8:
    if (ctx->pc == 0x28EFB8u) {
        ctx->pc = 0x28EFB8u;
            // 0x28efb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x28EFBCu;
        goto label_28efbc;
    }
    ctx->pc = 0x28EFB4u;
    ctx->pc = 0x28EFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EFB4u;
            // 0x28efb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00295920_0x295920(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x28EFBCu;
label_28efbc:
    // 0x28efbc: 0x40f809  jalr        $v0
label_28efc0:
    if (ctx->pc == 0x28EFC0u) {
        ctx->pc = 0x28EFC4u;
        goto label_28efc4;
    }
    ctx->pc = 0x28EFBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28EFC4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x28EFC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28EFC4u; }
            if (ctx->pc != 0x28EFC4u) { return; }
        }
        }
    }
    ctx->pc = 0x28EFC4u;
label_28efc4:
    // 0x28efc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28efc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28efc8:
    // 0x28efc8: 0x3e00008  jr          $ra
label_28efcc:
    if (ctx->pc == 0x28EFCCu) {
        ctx->pc = 0x28EFCCu;
            // 0x28efcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x28EFD0u;
        goto label_fallthrough_0x28efc8;
    }
    ctx->pc = 0x28EFC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EFC8u;
            // 0x28efcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28efc8:
    ctx->pc = 0x28EFD0u;
    ctx->pc = 0x28efd0u;
}
