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

// Function: sub_0028E0D8
// Address: 0x28e0d8 - 0x28e3a8
void sub_0028E0D8_0x28e0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E0D8_0x28e0d8");
#endif

    ctx->pc = 0x28e0d8u;

    // 0x28e0d8: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x28e0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x28e0dc: 0x2c62003b  sltiu       $v0, $v1, 0x3B
    ctx->pc = 0x28e0dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x28e0e0: 0x104000ad  beqz        $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x28E0E0u;
    {
        const bool branch_taken_0x28e0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E0E0u;
        // 0x28e0e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e0e0) {
            ctx->pc = 0x28E398u;
            goto label_28e398;
        }
    }
    ctx->pc = 0x28E0E8u;
    // 0x28e0e8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28e0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28e0ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28e0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28e0f0: 0x2442afe0  addiu       $v0, $v0, -0x5020
    ctx->pc = 0x28e0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946784));
    // 0x28e0f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28e0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28e0f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28e0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28e0fc: 0x800008  jr          $a0
    ctx->pc = 0x28E0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28E104u: goto label_28e104;
            case 0x28E110u: goto label_28e110;
            case 0x28E11Cu: goto label_28e11c;
            case 0x28E128u: goto label_28e128;
            case 0x28E134u: goto label_28e134;
            case 0x28E140u: goto label_28e140;
            case 0x28E14Cu: goto label_28e14c;
            case 0x28E158u: goto label_28e158;
            case 0x28E164u: goto label_28e164;
            case 0x28E170u: goto label_28e170;
            case 0x28E17Cu: goto label_28e17c;
            case 0x28E188u: goto label_28e188;
            case 0x28E194u: goto label_28e194;
            case 0x28E1A0u: goto label_28e1a0;
            case 0x28E1ACu: goto label_28e1ac;
            case 0x28E1B8u: goto label_28e1b8;
            case 0x28E1C4u: goto label_28e1c4;
            case 0x28E1D0u: goto label_28e1d0;
            case 0x28E1DCu: goto label_28e1dc;
            case 0x28E1E8u: goto label_28e1e8;
            case 0x28E1F4u: goto label_28e1f4;
            case 0x28E200u: goto label_28e200;
            case 0x28E20Cu: goto label_28e20c;
            case 0x28E218u: goto label_28e218;
            case 0x28E224u: goto label_28e224;
            case 0x28E230u: goto label_28e230;
            case 0x28E23Cu: goto label_28e23c;
            case 0x28E248u: goto label_28e248;
            case 0x28E254u: goto label_28e254;
            case 0x28E260u: goto label_28e260;
            case 0x28E26Cu: goto label_28e26c;
            case 0x28E278u: goto label_28e278;
            case 0x28E284u: goto label_28e284;
            case 0x28E290u: goto label_28e290;
            case 0x28E29Cu: goto label_28e29c;
            case 0x28E2A8u: goto label_28e2a8;
            case 0x28E2B4u: goto label_28e2b4;
            case 0x28E2C0u: goto label_28e2c0;
            case 0x28E2CCu: goto label_28e2cc;
            case 0x28E2D8u: goto label_28e2d8;
            case 0x28E2E4u: goto label_28e2e4;
            case 0x28E2F0u: goto label_28e2f0;
            case 0x28E2FCu: goto label_28e2fc;
            case 0x28E308u: goto label_28e308;
            case 0x28E314u: goto label_28e314;
            case 0x28E320u: goto label_28e320;
            case 0x28E32Cu: goto label_28e32c;
            case 0x28E338u: goto label_28e338;
            case 0x28E344u: goto label_28e344;
            case 0x28E350u: goto label_28e350;
            case 0x28E35Cu: goto label_28e35c;
            case 0x28E368u: goto label_28e368;
            case 0x28E374u: goto label_28e374;
            case 0x28E380u: goto label_28e380;
            case 0x28E38Cu: goto label_28e38c;
            case 0x28E398u: goto label_28e398;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E0FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28E104u;
label_28e104:
    // 0x28e104: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e108: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x28E108u;
    {
        const bool branch_taken_0x28e108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E108u;
        // 0x28e10c: 0xac4545c0  sw          $a1, 0x45C0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17856), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e108) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E110u;
label_28e110:
    // 0x28e110: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e114: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x28E114u;
    {
        const bool branch_taken_0x28e114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E114u;
        // 0x28e118: 0xac4545c4  sw          $a1, 0x45C4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17860), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e114) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E11Cu;
label_28e11c:
    // 0x28e11c: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e120: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x28E120u;
    {
        const bool branch_taken_0x28e120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E120u;
        // 0x28e124: 0xac4545c8  sw          $a1, 0x45C8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17864), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e120) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E128u;
label_28e128:
    // 0x28e128: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e12c: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x28E12Cu;
    {
        const bool branch_taken_0x28e12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E12Cu;
        // 0x28e130: 0xac4545cc  sw          $a1, 0x45CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17868), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e12c) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E134u;
label_28e134:
    // 0x28e134: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e138: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x28E138u;
    {
        const bool branch_taken_0x28e138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E138u;
        // 0x28e13c: 0xac4545d0  sw          $a1, 0x45D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17872), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e138) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E140u;
label_28e140:
    // 0x28e140: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e144: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x28E144u;
    {
        const bool branch_taken_0x28e144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E144u;
        // 0x28e148: 0xac4545d4  sw          $a1, 0x45D4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17876), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e144) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E14Cu;
label_28e14c:
    // 0x28e14c: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e150: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x28E150u;
    {
        const bool branch_taken_0x28e150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E150u;
        // 0x28e154: 0xac4545d8  sw          $a1, 0x45D8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17880), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e150) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E158u;
label_28e158:
    // 0x28e158: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e15c: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x28E15Cu;
    {
        const bool branch_taken_0x28e15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E15Cu;
        // 0x28e160: 0xac4545dc  sw          $a1, 0x45DC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17884), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e15c) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E164u;
label_28e164:
    // 0x28e164: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e168: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x28E168u;
    {
        const bool branch_taken_0x28e168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E168u;
        // 0x28e16c: 0xac4545e0  sw          $a1, 0x45E0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17888), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e168) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E170u;
label_28e170:
    // 0x28e170: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e174: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x28E174u;
    {
        const bool branch_taken_0x28e174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E174u;
        // 0x28e178: 0xac4545e4  sw          $a1, 0x45E4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17892), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e174) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E17Cu;
label_28e17c:
    // 0x28e17c: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e180: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x28E180u;
    {
        const bool branch_taken_0x28e180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E180u;
        // 0x28e184: 0xac4545e8  sw          $a1, 0x45E8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17896), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e180) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E188u;
label_28e188:
    // 0x28e188: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e18c: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x28E18Cu;
    {
        const bool branch_taken_0x28e18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E18Cu;
        // 0x28e190: 0xac4545ec  sw          $a1, 0x45EC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17900), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e18c) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E194u;
label_28e194:
    // 0x28e194: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e198: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x28E198u;
    {
        const bool branch_taken_0x28e198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E198u;
        // 0x28e19c: 0xac4545f0  sw          $a1, 0x45F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17904), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e198) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E1A0u;
label_28e1a0:
    // 0x28e1a0: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e1a4: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x28E1A4u;
    {
        const bool branch_taken_0x28e1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E1A4u;
        // 0x28e1a8: 0xac4545f4  sw          $a1, 0x45F4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17908), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e1a4) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E1ACu;
label_28e1ac:
    // 0x28e1ac: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e1b0: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x28E1B0u;
    {
        const bool branch_taken_0x28e1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E1B0u;
        // 0x28e1b4: 0xac4545f8  sw          $a1, 0x45F8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17912), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e1b0) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E1B8u;
label_28e1b8:
    // 0x28e1b8: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e1bc: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x28E1BCu;
    {
        const bool branch_taken_0x28e1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E1BCu;
        // 0x28e1c0: 0xac4545fc  sw          $a1, 0x45FC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17916), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e1bc) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E1C4u;
label_28e1c4:
    // 0x28e1c4: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e1c8: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x28E1C8u;
    {
        const bool branch_taken_0x28e1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E1C8u;
        // 0x28e1cc: 0xac454600  sw          $a1, 0x4600($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17920), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e1c8) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E1D0u;
label_28e1d0:
    // 0x28e1d0: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e1d4: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x28E1D4u;
    {
        const bool branch_taken_0x28e1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E1D4u;
        // 0x28e1d8: 0xac454604  sw          $a1, 0x4604($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17924), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e1d4) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E1DCu;
label_28e1dc:
    // 0x28e1dc: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e1e0: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x28E1E0u;
    {
        const bool branch_taken_0x28e1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E1E0u;
        // 0x28e1e4: 0xac454608  sw          $a1, 0x4608($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17928), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e1e0) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E1E8u;
label_28e1e8:
    // 0x28e1e8: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e1ec: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x28E1ECu;
    {
        const bool branch_taken_0x28e1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E1ECu;
        // 0x28e1f0: 0xac45460c  sw          $a1, 0x460C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17932), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e1ec) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E1F4u;
label_28e1f4:
    // 0x28e1f4: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e1f8: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x28E1F8u;
    {
        const bool branch_taken_0x28e1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E1F8u;
        // 0x28e1fc: 0xac454610  sw          $a1, 0x4610($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17936), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e1f8) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E200u;
label_28e200:
    // 0x28e200: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e204: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x28E204u;
    {
        const bool branch_taken_0x28e204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E204u;
        // 0x28e208: 0xac454614  sw          $a1, 0x4614($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17940), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e204) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E20Cu;
label_28e20c:
    // 0x28e20c: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e210: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x28E210u;
    {
        const bool branch_taken_0x28e210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E210u;
        // 0x28e214: 0xac454618  sw          $a1, 0x4618($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17944), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e210) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E218u;
label_28e218:
    // 0x28e218: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e21c: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x28E21Cu;
    {
        const bool branch_taken_0x28e21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E21Cu;
        // 0x28e220: 0xac45461c  sw          $a1, 0x461C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17948), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e21c) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E224u;
label_28e224:
    // 0x28e224: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e228: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x28E228u;
    {
        const bool branch_taken_0x28e228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E228u;
        // 0x28e22c: 0xac454620  sw          $a1, 0x4620($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17952), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e228) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E230u;
label_28e230:
    // 0x28e230: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e234: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x28E234u;
    {
        const bool branch_taken_0x28e234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E234u;
        // 0x28e238: 0xac454624  sw          $a1, 0x4624($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17956), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e234) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E23Cu;
label_28e23c:
    // 0x28e23c: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e240: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x28E240u;
    {
        const bool branch_taken_0x28e240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E240u;
        // 0x28e244: 0xac45462c  sw          $a1, 0x462C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17964), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e240) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E248u;
label_28e248:
    // 0x28e248: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e24c: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x28E24Cu;
    {
        const bool branch_taken_0x28e24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E24Cu;
        // 0x28e250: 0xac454630  sw          $a1, 0x4630($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17968), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e24c) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E254u;
label_28e254:
    // 0x28e254: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e258: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x28E258u;
    {
        const bool branch_taken_0x28e258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E258u;
        // 0x28e25c: 0xac454634  sw          $a1, 0x4634($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17972), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e258) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E260u;
label_28e260:
    // 0x28e260: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e264: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x28E264u;
    {
        const bool branch_taken_0x28e264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E264u;
        // 0x28e268: 0xac454638  sw          $a1, 0x4638($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17976), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e264) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E26Cu;
label_28e26c:
    // 0x28e26c: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e270: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x28E270u;
    {
        const bool branch_taken_0x28e270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E270u;
        // 0x28e274: 0xac45463c  sw          $a1, 0x463C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17980), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e270) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E278u;
label_28e278:
    // 0x28e278: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e27c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x28E27Cu;
    {
        const bool branch_taken_0x28e27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E27Cu;
        // 0x28e280: 0xac454628  sw          $a1, 0x4628($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17960), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e27c) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E284u;
label_28e284:
    // 0x28e284: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e288: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x28E288u;
    {
        const bool branch_taken_0x28e288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E288u;
        // 0x28e28c: 0xac454640  sw          $a1, 0x4640($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17984), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e288) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E290u;
label_28e290:
    // 0x28e290: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e294: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x28E294u;
    {
        const bool branch_taken_0x28e294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E294u;
        // 0x28e298: 0xac454644  sw          $a1, 0x4644($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17988), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e294) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E29Cu;
label_28e29c:
    // 0x28e29c: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e2a0: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x28E2A0u;
    {
        const bool branch_taken_0x28e2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2A0u;
        // 0x28e2a4: 0xac454648  sw          $a1, 0x4648($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17992), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2a0) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E2A8u;
label_28e2a8:
    // 0x28e2a8: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e2ac: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x28E2ACu;
    {
        const bool branch_taken_0x28e2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2ACu;
        // 0x28e2b0: 0xac45464c  sw          $a1, 0x464C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17996), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2ac) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E2B4u;
label_28e2b4:
    // 0x28e2b4: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e2b8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x28E2B8u;
    {
        const bool branch_taken_0x28e2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2B8u;
        // 0x28e2bc: 0xac454650  sw          $a1, 0x4650($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 18000), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2b8) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E2C0u;
label_28e2c0:
    // 0x28e2c0: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e2c4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x28E2C4u;
    {
        const bool branch_taken_0x28e2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2C4u;
        // 0x28e2c8: 0xac454654  sw          $a1, 0x4654($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 18004), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2c4) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E2CCu;
label_28e2cc:
    // 0x28e2cc: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e2d0: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x28E2D0u;
    {
        const bool branch_taken_0x28e2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2D0u;
        // 0x28e2d4: 0xac454658  sw          $a1, 0x4658($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 18008), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2d0) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E2D8u;
label_28e2d8:
    // 0x28e2d8: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e2dc: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x28E2DCu;
    {
        const bool branch_taken_0x28e2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2DCu;
        // 0x28e2e0: 0xac45465c  sw          $a1, 0x465C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 18012), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2dc) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E2E4u;
label_28e2e4:
    // 0x28e2e4: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e2e8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x28E2E8u;
    {
        const bool branch_taken_0x28e2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2E8u;
        // 0x28e2ec: 0xac454660  sw          $a1, 0x4660($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 18016), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2e8) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E2F0u;
label_28e2f0:
    // 0x28e2f0: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e2f4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x28E2F4u;
    {
        const bool branch_taken_0x28e2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2F4u;
        // 0x28e2f8: 0xac454664  sw          $a1, 0x4664($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 18020), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2f4) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E2FCu;
label_28e2fc:
    // 0x28e2fc: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e300: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x28E300u;
    {
        const bool branch_taken_0x28e300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E300u;
        // 0x28e304: 0xac454668  sw          $a1, 0x4668($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 18024), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e300) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E308u;
label_28e308:
    // 0x28e308: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e30c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x28E30Cu;
    {
        const bool branch_taken_0x28e30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E30Cu;
        // 0x28e310: 0xac45466c  sw          $a1, 0x466C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 18028), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e30c) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E314u;
label_28e314:
    // 0x28e314: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e318: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x28E318u;
    {
        const bool branch_taken_0x28e318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E318u;
        // 0x28e31c: 0xac454670  sw          $a1, 0x4670($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 18032), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e318) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E320u;
label_28e320:
    // 0x28e320: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e324: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x28E324u;
    {
        const bool branch_taken_0x28e324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E324u;
        // 0x28e328: 0xac454680  sw          $a1, 0x4680($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 18048), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e324) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E32Cu;
label_28e32c:
    // 0x28e32c: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e330: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x28E330u;
    {
        const bool branch_taken_0x28e330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E330u;
        // 0x28e334: 0xac45467c  sw          $a1, 0x467C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 18044), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e330) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E338u;
label_28e338:
    // 0x28e338: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e33c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x28E33Cu;
    {
        const bool branch_taken_0x28e33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E33Cu;
        // 0x28e340: 0xac454684  sw          $a1, 0x4684($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 18052), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e33c) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E344u;
label_28e344:
    // 0x28e344: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e348: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x28E348u;
    {
        const bool branch_taken_0x28e348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E348u;
        // 0x28e34c: 0xac454674  sw          $a1, 0x4674($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 18036), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e348) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E350u;
label_28e350:
    // 0x28e350: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e354: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x28E354u;
    {
        const bool branch_taken_0x28e354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E354u;
        // 0x28e358: 0xac454678  sw          $a1, 0x4678($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 18040), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e354) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E35Cu;
label_28e35c:
    // 0x28e35c: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e360: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x28E360u;
    {
        const bool branch_taken_0x28e360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E360u;
        // 0x28e364: 0xac454688  sw          $a1, 0x4688($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 18056), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e360) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E368u;
label_28e368:
    // 0x28e368: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e36c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28E36Cu;
    {
        const bool branch_taken_0x28e36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E36Cu;
        // 0x28e370: 0xac45468c  sw          $a1, 0x468C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 18060), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e36c) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E374u;
label_28e374:
    // 0x28e374: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e378: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28E378u;
    {
        const bool branch_taken_0x28e378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E378u;
        // 0x28e37c: 0xac454690  sw          $a1, 0x4690($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 18064), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e378) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E380u;
label_28e380:
    // 0x28e380: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e384: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28E384u;
    {
        const bool branch_taken_0x28e384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E384u;
        // 0x28e388: 0xac454694  sw          $a1, 0x4694($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 18068), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e384) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E38Cu;
label_28e38c:
    // 0x28e38c: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e390: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28E390u;
    {
        const bool branch_taken_0x28e390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E390u;
        // 0x28e394: 0xac454698  sw          $a1, 0x4698($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 18072), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e390) {
            ctx->pc = 0x28E39Cu;
            goto label_28e39c;
        }
    }
    ctx->pc = 0x28E398u;
label_28e398:
    // 0x28e398: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28e398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e39c:
    // 0x28e39c: 0x3e00008  jr          $ra
    ctx->pc = 0x28E39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E39Cu;
        // 0x28e3a0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E3A4u;
    // 0x28e3a4: 0x0  nop
    ctx->pc = 0x28e3a4u;
    // NOP
    if (ctx->pc == 0x28e3a4u) { ctx->pc = 0x28e3a8u; }
}
