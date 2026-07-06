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

// Function: sub_002161F8
// Address: 0x2161f8 - 0x2162f0
void sub_002161F8_0x2161f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002161F8_0x2161f8");
#endif

    switch (ctx->pc) {
        case 0x216214u: goto label_216214;
        case 0x216264u: goto label_216264;
        case 0x216274u: goto label_216274;
        case 0x2162c4u: goto label_2162c4;
        case 0x2162ccu: goto label_2162cc;
        default: break;
    }

    ctx->pc = 0x2161f8u;

label_2161f8:
    // 0x2161f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2161f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2161fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2161fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x216200: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x216200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x216204: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x216204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216208: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x216208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21620c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21620Cu;
    SET_GPR_U32(ctx, 31, 0x216214u);
    ctx->pc = 0x216210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21620Cu;
    // 0x216210: 0x24840c78  addiu       $a0, $a0, 0xC78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21620Cu, 0x216214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216214u;
label_216214:
    // 0x216214: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x216214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x216218: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x216218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21621c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21621cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216220: 0x24840928  addiu       $a0, $a0, 0x928
    ctx->pc = 0x216220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2344));
    // 0x216224: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x216224u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216228: 0x8043e52  j           func_10F948
    ctx->pc = 0x216228u;
    ctx->pc = 0x21622Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216228u;
    // 0x21622c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x216230u;
    // 0x216230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x216230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x216234: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x216234u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x216238: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x216238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21623c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21623cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x216240: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x216240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x216244: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x216244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216248: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x216248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21624c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21624cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216250: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x216250u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x216254: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x216254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x216258: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x216258u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21625c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21625Cu;
    SET_GPR_U32(ctx, 31, 0x216264u);
    ctx->pc = 0x216260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21625Cu;
    // 0x216260: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21625Cu, 0x216264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216264u;
label_216264:
    // 0x216264: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x216264u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x216268: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x216268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21626c: 0xc08587e  jal         func_2161F8
    ctx->pc = 0x21626Cu;
    SET_GPR_U32(ctx, 31, 0x216274u);
    ctx->pc = 0x216270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21626Cu;
    // 0x216270: 0x20f8023  subu        $s0, $s0, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2161F8u;
    goto label_2161f8;
    ctx->pc = 0x216274u;
label_216274:
    // 0x216274: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x216274u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216278: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x216278u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21627c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21627cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216280: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x216280u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216284: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x216284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x216288: 0x3e00008  jr          $ra
    ctx->pc = 0x216288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216288u;
        // 0x21628c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216290u;
    // 0x216290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x216290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x216294: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x216294u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x216298: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x216298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21629c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x21629cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2162a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2162a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2162a4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2162a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2162a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2162a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2162ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2162acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2162b0: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x2162b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2162b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2162b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2162b8: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x2162b8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x2162bc: 0xc084612  jal         func_211848
    ctx->pc = 0x2162BCu;
    SET_GPR_U32(ctx, 31, 0x2162C4u);
    ctx->pc = 0x2162C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2162BCu;
    // 0x2162c0: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x2162BCu, 0x2162C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2162C4u;
label_2162c4:
    // 0x2162c4: 0xc08587e  jal         func_2161F8
    ctx->pc = 0x2162C4u;
    SET_GPR_U32(ctx, 31, 0x2162CCu);
    ctx->pc = 0x2162C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2162C4u;
    // 0x2162c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2161F8u;
    goto label_2161f8;
    ctx->pc = 0x2162CCu;
label_2162cc:
    // 0x2162cc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2162ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2162d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2162d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2162d4: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x2162d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2162d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2162d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2162dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2162dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2162e0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2162e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2162e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2162E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2162E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2162E4u;
        // 0x2162e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2162E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2162ECu;
    // 0x2162ec: 0x0  nop
    ctx->pc = 0x2162ecu;
    // NOP
    if (ctx->pc == 0x2162ecu) { ctx->pc = 0x2162f0u; }
}
