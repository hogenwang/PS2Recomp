#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002120C8
// Address: 0x2120c8 - 0x212178
void sub_002120C8_0x2120c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002120C8_0x2120c8");
#endif

    switch (ctx->pc) {
        case 0x2120e4u: goto label_2120e4;
        case 0x2120f4u: goto label_2120f4;
        case 0x212104u: goto label_212104;
        case 0x212114u: goto label_212114;
        case 0x212124u: goto label_212124;
        case 0x212134u: goto label_212134;
        case 0x212144u: goto label_212144;
        case 0x212154u: goto label_212154;
        default: break;
    }

    ctx->pc = 0x2120c8u;

    // 0x2120c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2120c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2120cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2120ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2120d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2120d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2120d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2120d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2120d8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2120d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2120dc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2120DCu;
    SET_GPR_U32(ctx, 31, 0x2120E4u);
    ctx->pc = 0x2120E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2120DCu;
    // 0x2120e0: 0x24840398  addiu       $a0, $a0, 0x398 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2120DCu, 0x2120E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2120E4u;
label_2120e4:
    // 0x2120e4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2120e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2120e8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2120e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2120ec: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2120ECu;
    SET_GPR_U32(ctx, 31, 0x2120F4u);
    ctx->pc = 0x2120F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2120ECu;
    // 0x2120f0: 0x248403b8  addiu       $a0, $a0, 0x3B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2120ECu, 0x2120F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2120F4u;
label_2120f4:
    // 0x2120f4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2120f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2120f8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2120f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2120fc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2120FCu;
    SET_GPR_U32(ctx, 31, 0x212104u);
    ctx->pc = 0x212100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2120FCu;
    // 0x212100: 0x248403c8  addiu       $a0, $a0, 0x3C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2120FCu, 0x212104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212104u;
label_212104:
    // 0x212104: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212108: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x212108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x21210c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21210Cu;
    SET_GPR_U32(ctx, 31, 0x212114u);
    ctx->pc = 0x212110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21210Cu;
    // 0x212110: 0x248403d8  addiu       $a0, $a0, 0x3D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21210Cu, 0x212114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212114u;
label_212114:
    // 0x212114: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212118: 0x26050028  addiu       $a1, $s0, 0x28
    ctx->pc = 0x212118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x21211c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21211Cu;
    SET_GPR_U32(ctx, 31, 0x212124u);
    ctx->pc = 0x212120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21211Cu;
    // 0x212120: 0x248403e8  addiu       $a0, $a0, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21211Cu, 0x212124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212124u;
label_212124:
    // 0x212124: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x212124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x212128: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21212c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21212Cu;
    SET_GPR_U32(ctx, 31, 0x212134u);
    ctx->pc = 0x212130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21212Cu;
    // 0x212130: 0x248403f8  addiu       $a0, $a0, 0x3F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21212Cu, 0x212134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212134u;
label_212134:
    // 0x212134: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x212134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x212138: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21213c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21213Cu;
    SET_GPR_U32(ctx, 31, 0x212144u);
    ctx->pc = 0x212140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21213Cu;
    // 0x212140: 0x24840408  addiu       $a0, $a0, 0x408 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21213Cu, 0x212144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212144u;
label_212144:
    // 0x212144: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x212144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x212148: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21214c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21214Cu;
    SET_GPR_U32(ctx, 31, 0x212154u);
    ctx->pc = 0x212150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21214Cu;
    // 0x212150: 0x24840418  addiu       $a0, $a0, 0x418 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21214Cu, 0x212154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212154u;
label_212154:
    // 0x212154: 0x26100054  addiu       $s0, $s0, 0x54
    ctx->pc = 0x212154u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x212158: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x212158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21215c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21215cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x212160: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212164: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x212164u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212168: 0x24840428  addiu       $a0, $a0, 0x428
    ctx->pc = 0x212168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1064));
    // 0x21216c: 0x8043e52  j           func_10F948
    ctx->pc = 0x21216Cu;
    ctx->pc = 0x212170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21216Cu;
    // 0x212170: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x212174u;
    // 0x212174: 0x0  nop
    ctx->pc = 0x212174u;
    // NOP
}
