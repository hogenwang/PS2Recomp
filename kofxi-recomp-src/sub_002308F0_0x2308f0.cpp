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

// Function: sub_002308F0
// Address: 0x2308f0 - 0x230968
void sub_002308F0_0x2308f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002308F0_0x2308f0");
#endif

    switch (ctx->pc) {
        case 0x2308f0u: goto label_2308f0;
        case 0x2308f4u: goto label_2308f4;
        case 0x2308f8u: goto label_2308f8;
        case 0x2308fcu: goto label_2308fc;
        case 0x230900u: goto label_230900;
        case 0x230904u: goto label_230904;
        case 0x230908u: goto label_230908;
        case 0x23090cu: goto label_23090c;
        case 0x230910u: goto label_230910;
        case 0x230914u: goto label_230914;
        case 0x230918u: goto label_230918;
        case 0x23091cu: goto label_23091c;
        case 0x230920u: goto label_230920;
        case 0x230924u: goto label_230924;
        case 0x230928u: goto label_230928;
        case 0x23092cu: goto label_23092c;
        case 0x230930u: goto label_230930;
        case 0x230934u: goto label_230934;
        case 0x230938u: goto label_230938;
        case 0x23093cu: goto label_23093c;
        case 0x230940u: goto label_230940;
        case 0x230944u: goto label_230944;
        case 0x230948u: goto label_230948;
        case 0x23094cu: goto label_23094c;
        case 0x230950u: goto label_230950;
        case 0x230954u: goto label_230954;
        case 0x230958u: goto label_230958;
        case 0x23095cu: goto label_23095c;
        case 0x230960u: goto label_230960;
        case 0x230964u: goto label_230964;
        default: break;
    }

    ctx->pc = 0x2308f0u;

label_2308f0:
    // 0x2308f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2308f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2308f4:
    // 0x2308f4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2308f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2308f8:
    // 0x2308f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2308f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2308fc:
    // 0x2308fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2308fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_230900:
    // 0x230900: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x230900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_230904:
    // 0x230904: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x230904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_230908:
    // 0x230908: 0xc08b756  jal         func_22DD58
label_23090c:
    if (ctx->pc == 0x23090Cu) {
        ctx->pc = 0x23090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230908u;
        // 0x23090c: 0x2604002c  addiu       $a0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230910u;
        goto label_230910;
    }
    ctx->pc = 0x230908u;
    SET_GPR_U32(ctx, 31, 0x230910u);
    ctx->pc = 0x23090Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230908u;
    // 0x23090c: 0x2604002c  addiu       $a0, $s0, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DD58u, 0x230908u, 0x230910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230910u;
label_230910:
    // 0x230910: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x230910u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
label_230914:
    // 0x230914: 0x3043fff7  andi        $v1, $v0, 0xFFF7
    ctx->pc = 0x230914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
label_230918:
    // 0x230918: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x230918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_23091c:
    // 0x23091c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_230920:
    if (ctx->pc == 0x230920u) {
        ctx->pc = 0x230920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23091Cu;
        // 0x230920: 0xa6030030  sh          $v1, 0x30($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230924u;
        goto label_230924;
    }
    ctx->pc = 0x23091Cu;
    {
        const bool branch_taken_0x23091c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23091Cu;
        // 0x230920: 0xa6030030  sh          $v1, 0x30($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23091c) {
            ctx->pc = 0x230934u;
            goto label_230934;
        }
    }
    ctx->pc = 0x230924u;
label_230924:
    // 0x230924: 0x3062fff3  andi        $v0, $v1, 0xFFF3
    ctx->pc = 0x230924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65523);
label_230928:
    // 0x230928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23092c:
    // 0x23092c: 0xc08b6f0  jal         func_22DBC0
label_230930:
    if (ctx->pc == 0x230930u) {
        ctx->pc = 0x230930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23092Cu;
        // 0x230930: 0xa6020030  sh          $v0, 0x30($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230934u;
        goto label_230934;
    }
    ctx->pc = 0x23092Cu;
    SET_GPR_U32(ctx, 31, 0x230934u);
    ctx->pc = 0x230930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23092Cu;
    // 0x230930: 0xa6020030  sh          $v0, 0x30($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DBC0u, 0x23092Cu, 0x230934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230934u;
label_230934:
    // 0x230934: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x230934u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
label_230938:
    // 0x230938: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x230938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_23093c:
    // 0x23093c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_230940:
    if (ctx->pc == 0x230940u) {
        ctx->pc = 0x230940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23093Cu;
        // 0x230940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230944u;
        goto label_230944;
    }
    ctx->pc = 0x23093Cu;
    {
        const bool branch_taken_0x23093c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23093Cu;
        // 0x230940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23093c) {
            ctx->pc = 0x230954u;
            goto label_230954;
        }
    }
    ctx->pc = 0x230944u;
label_230944:
    // 0x230944: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x230944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_230948:
    // 0x230948: 0x8c8500c0  lw          $a1, 0xC0($a0)
    ctx->pc = 0x230948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_23094c:
    // 0x23094c: 0x40f809  jalr        $v0
label_230950:
    if (ctx->pc == 0x230950u) {
        ctx->pc = 0x230950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23094Cu;
        // 0x230950: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230954u;
        goto label_230954;
    }
    ctx->pc = 0x23094Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230954u);
        ctx->pc = 0x230950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23094Cu;
        // 0x230950: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23094Cu, 0x230954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x230954u;
label_230954:
    // 0x230954: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x230954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_230958:
    // 0x230958: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x230958u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23095c:
    // 0x23095c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23095cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_230960:
    // 0x230960: 0x3e00008  jr          $ra
label_230964:
    if (ctx->pc == 0x230964u) {
        ctx->pc = 0x230964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230960u;
        // 0x230964: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230968u;
        goto label_fallthrough_0x230960;
    }
    ctx->pc = 0x230960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230960u;
        // 0x230964: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x230960:
    ctx->pc = 0x230968u;
}
