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

// Function: sub_0034A0B0
// Address: 0x34a0b0 - 0x34a460
void sub_0034A0B0_0x34a0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034A0B0_0x34a0b0");
#endif

    switch (ctx->pc) {
        case 0x34a114u: goto label_34a114;
        case 0x34a13cu: goto label_34a13c;
        case 0x34a18cu: goto label_34a18c;
        case 0x34a19cu: goto label_34a19c;
        case 0x34a1a8u: goto label_34a1a8;
        case 0x34a1dcu: goto label_34a1dc;
        case 0x34a1f8u: goto label_34a1f8;
        case 0x34a228u: goto label_34a228;
        case 0x34a240u: goto label_34a240;
        case 0x34a26cu: goto label_34a26c;
        case 0x34a290u: goto label_34a290;
        case 0x34a2bcu: goto label_34a2bc;
        case 0x34a2d0u: goto label_34a2d0;
        case 0x34a2f0u: goto label_34a2f0;
        case 0x34a320u: goto label_34a320;
        case 0x34a330u: goto label_34a330;
        case 0x34a36cu: goto label_34a36c;
        case 0x34a39cu: goto label_34a39c;
        case 0x34a3a8u: goto label_34a3a8;
        case 0x34a3c4u: goto label_34a3c4;
        case 0x34a3f0u: goto label_34a3f0;
        case 0x34a410u: goto label_34a410;
        case 0x34a444u: goto label_34a444;
        default: break;
    }

    ctx->pc = 0x34a0b0u;

label_34a0b0:
    // 0x34a0b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34a0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34a0b4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34a0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34a0b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34a0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34a0bc: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x34a0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34a0c0: 0x9467be96  lhu         $a3, -0x416A($v1)
    ctx->pc = 0x34a0c0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950550)));
    // 0x34a0c4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x34a0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34a0c8: 0xe6001a  div         $zero, $a3, $a2
    ctx->pc = 0x34a0c8u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34a0cc: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34a0d0: 0x8c65be88  lw          $a1, -0x4178($v1)
    ctx->pc = 0x34a0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950536)));
    // 0x34a0d4: 0x3010  mfhi        $a2
    ctx->pc = 0x34a0d4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x34a0d8: 0x50a40010  beql        $a1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x34A0D8u;
    {
        const bool branch_taken_0x34a0d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x34a0d8) {
            ctx->pc = 0x34A0DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A0D8u;
            // 0x34a0dc: 0x61900  sll         $v1, $a2, 4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A11Cu;
            goto label_34a11c;
        }
    }
    ctx->pc = 0x34A0E0u;
    // 0x34a0e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34a0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a0e4: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x34A0E4u;
    {
        const bool branch_taken_0x34a0e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x34a0e4) {
            ctx->pc = 0x34A0E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A0E4u;
            // 0x34a0e8: 0x61900  sll         $v1, $a2, 4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A0F4u;
            goto label_34a0f4;
        }
    }
    ctx->pc = 0x34A0ECu;
    // 0x34a0ec: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x34A0ECu;
    {
        const bool branch_taken_0x34a0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A0ECu;
        // 0x34a0f0: 0x3c0301e0  lui         $v1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a0ec) {
            ctx->pc = 0x34A144u;
            goto label_34a144;
        }
    }
    ctx->pc = 0x34A0F4u;
label_34a0f4:
    // 0x34a0f4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x34a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x34a0f8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x34a0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x34a0fc: 0x2442ef90  addiu       $v0, $v0, -0x1070
    ctx->pc = 0x34a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963088));
    // 0x34a100: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x34a100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x34a104: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x34a104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34a108: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x34a108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34a10c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x34A10Cu;
    SET_GPR_U32(ctx, 31, 0x34A114u);
    ctx->pc = 0x34A110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A10Cu;
    // 0x34a110: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x34A10Cu, 0x34A114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A114u;
label_34a114:
    // 0x34a114: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x34A114u;
    {
        const bool branch_taken_0x34a114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A114u;
        // 0x34a118: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a114) {
            ctx->pc = 0x34A14Cu;
            goto label_34a14c;
        }
    }
    ctx->pc = 0x34A11Cu;
label_34a11c:
    // 0x34a11c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x34a11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x34a120: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x34a120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x34a124: 0x2442ece0  addiu       $v0, $v0, -0x1320
    ctx->pc = 0x34a124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962400));
    // 0x34a128: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x34a128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x34a12c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x34a12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34a130: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x34a130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34a134: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x34A134u;
    SET_GPR_U32(ctx, 31, 0x34A13Cu);
    ctx->pc = 0x34A138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A134u;
    // 0x34a138: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x34A134u, 0x34A13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A13Cu;
label_34a13c:
    // 0x34a13c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x34A13Cu;
    {
        const bool branch_taken_0x34a13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a13c) {
            ctx->pc = 0x34A148u;
            goto label_34a148;
        }
    }
    ctx->pc = 0x34A144u;
label_34a144:
    // 0x34a144: 0xac60be88  sw          $zero, -0x4178($v1)
    ctx->pc = 0x34a144u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950536), GPR_U32(ctx, 0));
label_34a148:
    // 0x34a148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34a148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34a14c:
    // 0x34a14c: 0x3e00008  jr          $ra
    ctx->pc = 0x34A14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A14Cu;
        // 0x34a150: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A154u;
    // 0x34a154: 0x0  nop
    ctx->pc = 0x34a154u;
    // NOP
    // 0x34a158: 0x0  nop
    ctx->pc = 0x34a158u;
    // NOP
    // 0x34a15c: 0x0  nop
    ctx->pc = 0x34a15cu;
    // NOP
    // 0x34a160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34a160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34a164: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34a164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34a168: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34a168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34a16c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34a16cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34a170: 0x8c464378  lw          $a2, 0x4378($v0)
    ctx->pc = 0x34a170u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x34a174: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34a174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a178: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x34a178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x34a17c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34a17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34a180: 0xa466be96  sh          $a2, -0x416A($v1)
    ctx->pc = 0x34a180u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294950550), (uint16_t)GPR_U32(ctx, 6));
    // 0x34a184: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x34A184u;
    SET_GPR_U32(ctx, 31, 0x34A18Cu);
    ctx->pc = 0x34A188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A184u;
    // 0x34a188: 0xac454378  sw          $a1, 0x4378($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x34A184u, 0x34A18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A18Cu;
label_34a18c:
    // 0x34a18c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34a18cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x34a190: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34a190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a194: 0xc082678  jal         func_2099E0
    ctx->pc = 0x34A194u;
    SET_GPR_U32(ctx, 31, 0x34A19Cu);
    ctx->pc = 0x34A198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A194u;
    // 0x34a198: 0x24844000  addiu       $a0, $a0, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x34A194u, 0x34A19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A19Cu;
label_34a19c:
    // 0x34a19c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34a19cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34a1a0: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34A1A0u;
    SET_GPR_U32(ctx, 31, 0x34A1A8u);
    ctx->pc = 0x34A1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A1A0u;
    // 0x34a1a4: 0x2484a1c0  addiu       $a0, $a0, -0x5E40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x34A1A0u, 0x34A1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A1A8u;
label_34a1a8:
    // 0x34a1a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34a1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x34A1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A1ACu;
        // 0x34a1b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A1ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A1B4u;
    // 0x34a1b4: 0x0  nop
    ctx->pc = 0x34a1b4u;
    // NOP
    // 0x34a1b8: 0x0  nop
    ctx->pc = 0x34a1b8u;
    // NOP
    // 0x34a1bc: 0x0  nop
    ctx->pc = 0x34a1bcu;
    // NOP
    // 0x34a1c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34a1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34a1c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34a1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34a1c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34a1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34a1cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34a1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a1d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34a1d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a1d4: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x34A1D4u;
    SET_GPR_U32(ctx, 31, 0x34A1DCu);
    ctx->pc = 0x34A1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A1D4u;
    // 0x34a1d8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x34A1D4u, 0x34A1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A1DCu;
label_34a1dc:
    // 0x34a1dc: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x34a1dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x34a1e0: 0x320300a0  andi        $v1, $s0, 0xA0
    ctx->pc = 0x34a1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)160);
    // 0x34a1e4: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x34A1E4u;
    {
        const bool branch_taken_0x34a1e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a1e4) {
            ctx->pc = 0x34A1E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A1E4u;
            // 0x34a1e8: 0x32032000  andi        $v1, $s0, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A214u;
            goto label_34a214;
        }
    }
    ctx->pc = 0x34A1ECu;
    // 0x34a1ec: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x34a1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x34a1f0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34A1F0u;
    SET_GPR_U32(ctx, 31, 0x34A1F8u);
    ctx->pc = 0x34A1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A1F0u;
    // 0x34a1f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x34A1F0u, 0x34A1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A1F8u;
label_34a1f8:
    // 0x34a1f8: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x34a1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x34a1fc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34a1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34a200: 0x8c844378  lw          $a0, 0x4378($a0)
    ctx->pc = 0x34a200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17272)));
    // 0x34a204: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x34a204u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x34a208: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x34a208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x34a20c: 0xac644378  sw          $a0, 0x4378($v1)
    ctx->pc = 0x34a20cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17272), GPR_U32(ctx, 4));
    // 0x34a210: 0x32032000  andi        $v1, $s0, 0x2000
    ctx->pc = 0x34a210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
label_34a214:
    // 0x34a214: 0x5060001f  beql        $v1, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x34A214u;
    {
        const bool branch_taken_0x34a214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a214) {
            ctx->pc = 0x34A218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A214u;
            // 0x34a218: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A294u;
            goto label_34a294;
        }
    }
    ctx->pc = 0x34A21Cu;
    // 0x34a21c: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x34a21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x34a220: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34A220u;
    SET_GPR_U32(ctx, 31, 0x34A228u);
    ctx->pc = 0x34A224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A220u;
    // 0x34a224: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x34A220u, 0x34A228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A228u;
label_34a228:
    // 0x34a228: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34a228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34a22c: 0x8c424378  lw          $v0, 0x4378($v0)
    ctx->pc = 0x34a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x34a230: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x34A230u;
    {
        const bool branch_taken_0x34a230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a230) {
            ctx->pc = 0x34A274u;
            goto label_34a274;
        }
    }
    ctx->pc = 0x34A238u;
    // 0x34a238: 0xc0d282c  jal         func_34A0B0
    ctx->pc = 0x34A238u;
    SET_GPR_U32(ctx, 31, 0x34A240u);
    ctx->pc = 0x34A0B0u;
    goto label_34a0b0;
    ctx->pc = 0x34A240u;
label_34a240:
    // 0x34a240: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34a240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34a244: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34a244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34a248: 0x9445be96  lhu         $a1, -0x416A($v0)
    ctx->pc = 0x34a248u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950550)));
    // 0x34a24c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x34a24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34a250: 0x24849970  addiu       $a0, $a0, -0x6690
    ctx->pc = 0x34a250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941040));
    // 0x34a254: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x34a254u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34a258: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34a258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34a25c: 0x0  nop
    ctx->pc = 0x34a25cu;
    // NOP
    // 0x34a260: 0x1810  mfhi        $v1
    ctx->pc = 0x34a260u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x34a264: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34A264u;
    SET_GPR_U32(ctx, 31, 0x34A26Cu);
    ctx->pc = 0x34A268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A264u;
    // 0x34a268: 0xac434378  sw          $v1, 0x4378($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x34A264u, 0x34A26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A26Cu;
label_34a26c:
    // 0x34a26c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34A26Cu;
    {
        const bool branch_taken_0x34a26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a26c) {
            ctx->pc = 0x34A290u;
            goto label_34a290;
        }
    }
    ctx->pc = 0x34A274u;
label_34a274:
    // 0x34a274: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34a274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34a278: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34a278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34a27c: 0x9463be96  lhu         $v1, -0x416A($v1)
    ctx->pc = 0x34a27cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950550)));
    // 0x34a280: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34a280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34a284: 0x248499d0  addiu       $a0, $a0, -0x6630
    ctx->pc = 0x34a284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941136));
    // 0x34a288: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34A288u;
    SET_GPR_U32(ctx, 31, 0x34A290u);
    ctx->pc = 0x34A28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A288u;
    // 0x34a28c: 0xac434378  sw          $v1, 0x4378($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x34A288u, 0x34A290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A290u;
label_34a290:
    // 0x34a290: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34a290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34a294:
    // 0x34a294: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34a294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a298: 0x3e00008  jr          $ra
    ctx->pc = 0x34A298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A298u;
        // 0x34a29c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A2A0u;
    // 0x34a2a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34a2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34a2a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34a2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x34a2a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34a2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34a2ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34a2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34a2b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34a2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34a2b4: 0xc082918  jal         func_20A460
    ctx->pc = 0x34A2B4u;
    SET_GPR_U32(ctx, 31, 0x34A2BCu);
    ctx->pc = 0x34A2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A2B4u;
    // 0x34a2b8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A460u, 0x34A2B4u, 0x34A2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A2BCu;
label_34a2bc:
    // 0x34a2bc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x34a2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x34a2c0: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x34a2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x34a2c4: 0x24846f70  addiu       $a0, $a0, 0x6F70
    ctx->pc = 0x34a2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28528));
    // 0x34a2c8: 0xc0838c4  jal         func_20E310
    ctx->pc = 0x34A2C8u;
    SET_GPR_U32(ctx, 31, 0x34A2D0u);
    ctx->pc = 0x34A2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A2C8u;
    // 0x34a2cc: 0x24a57170  addiu       $a1, $a1, 0x7170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E310u, 0x34A2C8u, 0x34A2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A2D0u;
label_34a2d0:
    // 0x34a2d0: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x34a2d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x34a2d4: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x34a2d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
    // 0x34a2d8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x34a2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34a2dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34a2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a2e0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x34a2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34a2e4: 0x24e76f70  addiu       $a3, $a3, 0x6F70
    ctx->pc = 0x34a2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28528));
    // 0x34a2e8: 0xc0838dc  jal         func_20E370
    ctx->pc = 0x34A2E8u;
    SET_GPR_U32(ctx, 31, 0x34A2F0u);
    ctx->pc = 0x34A2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A2E8u;
    // 0x34a2ec: 0x250871e0  addiu       $t0, $t0, 0x71E0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 29152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E370u, 0x34A2E8u, 0x34A2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A2F0u;
label_34a2f0:
    // 0x34a2f0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34a2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34a2f4: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x34a2f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
    // 0x34a2f8: 0x8c424378  lw          $v0, 0x4378($v0)
    ctx->pc = 0x34a2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x34a2fc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x34a2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34a300: 0x3c09003d  lui         $t1, 0x3D
    ctx->pc = 0x34a300u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)61 << 16));
    // 0x34a304: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34a304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a308: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x34a308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34a30c: 0x25086f70  addiu       $t0, $t0, 0x6F70
    ctx->pc = 0x34a30cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28528));
    // 0x34a310: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x34a310u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34a314: 0x2010  mfhi        $a0
    ctx->pc = 0x34a314u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x34a318: 0xc083aa8  jal         func_20EAA0
    ctx->pc = 0x34A318u;
    SET_GPR_U32(ctx, 31, 0x34A320u);
    ctx->pc = 0x34A31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A318u;
    // 0x34a31c: 0x25297270  addiu       $t1, $t1, 0x7270 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 29296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EAA0u, 0x34A318u, 0x34A320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A320u;
label_34a320:
    // 0x34a320: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x34a320u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a324: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x34a324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a328: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34a328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a32c: 0x24100068  addiu       $s0, $zero, 0x68
    ctx->pc = 0x34a32cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_34a330:
    // 0x34a330: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34a330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34a334: 0x8c424098  lw          $v0, 0x4098($v0)
    ctx->pc = 0x34a334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16536)));
    // 0x34a338: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x34a338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x34a33c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x34a33cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34a340: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x34A340u;
    {
        const bool branch_taken_0x34a340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a340) {
            ctx->pc = 0x34A3D0u;
            goto label_34a3d0;
        }
    }
    ctx->pc = 0x34A348u;
    // 0x34a348: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x34a348u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x34a34c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x34a34cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x34a350: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x34a350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x34a354: 0x24846f70  addiu       $a0, $a0, 0x6F70
    ctx->pc = 0x34a354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28528));
    // 0x34a358: 0x24a57300  addiu       $a1, $a1, 0x7300
    ctx->pc = 0x34a358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29440));
    // 0x34a35c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34a35cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a360: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x34a360u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a364: 0xc083a64  jal         func_20E990
    ctx->pc = 0x34A364u;
    SET_GPR_U32(ctx, 31, 0x34A36Cu);
    ctx->pc = 0x34A368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A364u;
    // 0x34a368: 0x30460001  andi        $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E990u, 0x34A364u, 0x34A36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A36Cu;
label_34a36c:
    // 0x34a36c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34a36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34a370: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x34a370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x34a374: 0x8c424098  lw          $v0, 0x4098($v0)
    ctx->pc = 0x34a374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16536)));
    // 0x34a378: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x34a378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x34a37c: 0x24846f70  addiu       $a0, $a0, 0x6F70
    ctx->pc = 0x34a37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28528));
    // 0x34a380: 0x24a57320  addiu       $a1, $a1, 0x7320
    ctx->pc = 0x34a380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29472));
    // 0x34a384: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34a384u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a388: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x34a388u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a38c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x34a38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x34a390: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x34a390u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x34a394: 0xc083a64  jal         func_20E990
    ctx->pc = 0x34A394u;
    SET_GPR_U32(ctx, 31, 0x34A39Cu);
    ctx->pc = 0x34A398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A394u;
    // 0x34a398: 0x30460002  andi        $a2, $v0, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E990u, 0x34A394u, 0x34A39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A39Cu;
label_34a39c:
    // 0x34a39c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x34a39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34a3a0: 0xc082998  jal         func_20A660
    ctx->pc = 0x34A3A0u;
    SET_GPR_U32(ctx, 31, 0x34A3A8u);
    ctx->pc = 0x34A3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A3A0u;
    // 0x34a3a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A660u, 0x34A3A0u, 0x34A3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A3A8u;
label_34a3a8:
    // 0x34a3a8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34a3ac: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x34a3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x34a3b0: 0x8c424098  lw          $v0, 0x4098($v0)
    ctx->pc = 0x34a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16536)));
    // 0x34a3b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34a3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a3b8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x34a3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x34a3bc: 0xc083768  jal         func_20DDA0
    ctx->pc = 0x34A3BCu;
    SET_GPR_U32(ctx, 31, 0x34A3C4u);
    ctx->pc = 0x34A3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A3BCu;
    // 0x34a3c0: 0x24460002  addiu       $a2, $v0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DDA0u, 0x34A3BCu, 0x34A3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A3C4u;
label_34a3c4:
    // 0x34a3c4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x34A3C4u;
    {
        const bool branch_taken_0x34a3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a3c4) {
            ctx->pc = 0x34A410u;
            goto label_34a410;
        }
    }
    ctx->pc = 0x34A3CCu;
    // 0x34a3cc: 0x0  nop
    ctx->pc = 0x34a3ccu;
    // NOP
label_34a3d0:
    // 0x34a3d0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x34a3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x34a3d4: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x34a3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x34a3d8: 0x24846f70  addiu       $a0, $a0, 0x6F70
    ctx->pc = 0x34a3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28528));
    // 0x34a3dc: 0x24a57300  addiu       $a1, $a1, 0x7300
    ctx->pc = 0x34a3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29440));
    // 0x34a3e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34a3e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a3e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34a3e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a3e8: 0xc083a64  jal         func_20E990
    ctx->pc = 0x34A3E8u;
    SET_GPR_U32(ctx, 31, 0x34A3F0u);
    ctx->pc = 0x34A3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A3E8u;
    // 0x34a3ec: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E990u, 0x34A3E8u, 0x34A3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A3F0u;
label_34a3f0:
    // 0x34a3f0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x34a3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x34a3f4: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x34a3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x34a3f8: 0x24846f70  addiu       $a0, $a0, 0x6F70
    ctx->pc = 0x34a3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28528));
    // 0x34a3fc: 0x24a57320  addiu       $a1, $a1, 0x7320
    ctx->pc = 0x34a3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29472));
    // 0x34a400: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34a400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a404: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34a404u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a408: 0xc083a64  jal         func_20E990
    ctx->pc = 0x34A408u;
    SET_GPR_U32(ctx, 31, 0x34A410u);
    ctx->pc = 0x34A40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A408u;
    // 0x34a40c: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E990u, 0x34A408u, 0x34A410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A410u;
label_34a410:
    // 0x34a410: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x34a410u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x34a414: 0x2a620014  slti        $v0, $s3, 0x14
    ctx->pc = 0x34a414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x34a418: 0x26520022  addiu       $s2, $s2, 0x22
    ctx->pc = 0x34a418u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 34));
    // 0x34a41c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x34a41cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x34a420: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x34A420u;
    {
        const bool branch_taken_0x34a420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A420u;
        // 0x34a424: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a420) {
            ctx->pc = 0x34A330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34a330;
        }
    }
    ctx->pc = 0x34A428u;
    // 0x34a428: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34a428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34a42c: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x34a42cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x34a430: 0x8c444378  lw          $a0, 0x4378($v0)
    ctx->pc = 0x34a430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x34a434: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x34a434u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x34a438: 0x24a56f70  addiu       $a1, $a1, 0x6F70
    ctx->pc = 0x34a438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28528));
    // 0x34a43c: 0xc083a44  jal         func_20E910
    ctx->pc = 0x34A43Cu;
    SET_GPR_U32(ctx, 31, 0x34A444u);
    ctx->pc = 0x34A440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A43Cu;
    // 0x34a440: 0x24c67340  addiu       $a2, $a2, 0x7340 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E910u, 0x34A43Cu, 0x34A444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A444u;
label_34a444:
    // 0x34a444: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34a444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34a448: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34a448u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34a44c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34a44cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34a450: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34a450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34a454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34a454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a458: 0x3e00008  jr          $ra
    ctx->pc = 0x34A458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A458u;
        // 0x34a45c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A460u;
}
